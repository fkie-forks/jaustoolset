#ifndef _H_VISUALSENSOR_SENDFSM_SM
#define _H_VISUALSENSOR_SENDFSM_SM

/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : VisualSensor_SendFSM_sm.sm
 */


#define SMC_USES_IOSTREAMS

#include <statemap.h>

namespace urn_jaus_jss_environmentSensing_VisualSensor_1_0
{
    // Forward declarations.
    class VisualSensor_SendFSM_SM;
    class VisualSensor_SendFSM_SM_Sending;
    class VisualSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE;
    class VisualSensor_SendFSM_SM_Default;
    class VisualSensor_SendFSMState;
    class VisualSensor_SendFSMContext;
    class VisualSensor_SendFSM;

    class VisualSensor_SendFSMState :
        public statemap::State
    {
    public:

        VisualSensor_SendFSMState(const char *name, int stateId)
        : statemap::State(name, stateId)
        {};

        virtual void Entry(VisualSensor_SendFSMContext&) {};
        virtual void Exit(VisualSensor_SendFSMContext&) {};

        virtual void BroadcastGlobalTransition(VisualSensor_SendFSMContext& context);
        virtual void BroadcastLocalTransition(VisualSensor_SendFSMContext& context);
        virtual void CancelEventTransition(VisualSensor_SendFSMContext& context);
        virtual void CreateEventTransition(VisualSensor_SendFSMContext& context);
        virtual void EventErrorTransition(VisualSensor_SendFSMContext& context);
        virtual void EventOccurredTransition(VisualSensor_SendFSMContext& context);
        virtual void QueryAuthorityTransition(VisualSensor_SendFSMContext& context);
        virtual void QueryControlTransition(VisualSensor_SendFSMContext& context);
        virtual void QueryEventsTransition(VisualSensor_SendFSMContext& context);
        virtual void QuerySensorGeometricPropertiesTransition(VisualSensor_SendFSMContext& context);
        virtual void QueryTimeoutTransition(VisualSensor_SendFSMContext& context);
        virtual void QueryVisualSensorCapabilitiesTransition(VisualSensor_SendFSMContext& context);
        virtual void QueryVisualSensorConfigurationTransition(VisualSensor_SendFSMContext& context);
        virtual void ReceiveTransition(VisualSensor_SendFSMContext& context);
        virtual void ReleaseControlTransition(VisualSensor_SendFSMContext& context);
        virtual void RequestControlTransition(VisualSensor_SendFSMContext& context);
        virtual void SendTransition(VisualSensor_SendFSMContext& context);
        virtual void SetAuthorityTransition(VisualSensor_SendFSMContext& context);
        virtual void SetVisualSensorConfigurationTransition(VisualSensor_SendFSMContext& context);
        virtual void TimeoutTransition(VisualSensor_SendFSMContext& context);
        virtual void UpdateEventTransition(VisualSensor_SendFSMContext& context);

    protected:

        virtual void Default(VisualSensor_SendFSMContext& context);
    };

    class VisualSensor_SendFSM_SM
    {
    public:

        static VisualSensor_SendFSM_SM_Sending Sending;
        static VisualSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE Internally_Generated_State_DO_NOT_USE;
    };

    class VisualSensor_SendFSM_SM_Default :
        public VisualSensor_SendFSMState
    {
    public:

        VisualSensor_SendFSM_SM_Default(const char *name, int stateId)
        : VisualSensor_SendFSMState(name, stateId)
        {};

    };

    class VisualSensor_SendFSM_SM_Sending :
        public VisualSensor_SendFSM_SM_Default
    {
    public:
        VisualSensor_SendFSM_SM_Sending(const char *name, int stateId)
        : VisualSensor_SendFSM_SM_Default(name, stateId)
        {};

    };

    class VisualSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE :
        public VisualSensor_SendFSM_SM_Default
    {
    public:
        VisualSensor_SendFSM_SM_Internally_Generated_State_DO_NOT_USE(const char *name, int stateId)
        : VisualSensor_SendFSM_SM_Default(name, stateId)
        {};

        void BroadcastGlobalTransition(VisualSensor_SendFSMContext& context);
        void BroadcastLocalTransition(VisualSensor_SendFSMContext& context);
        void CancelEventTransition(VisualSensor_SendFSMContext& context);
        void CreateEventTransition(VisualSensor_SendFSMContext& context);
        void EventErrorTransition(VisualSensor_SendFSMContext& context);
        void EventOccurredTransition(VisualSensor_SendFSMContext& context);
        void QueryAuthorityTransition(VisualSensor_SendFSMContext& context);
        void QueryControlTransition(VisualSensor_SendFSMContext& context);
        void QueryEventsTransition(VisualSensor_SendFSMContext& context);
        void QuerySensorGeometricPropertiesTransition(VisualSensor_SendFSMContext& context);
        void QueryTimeoutTransition(VisualSensor_SendFSMContext& context);
        void QueryVisualSensorCapabilitiesTransition(VisualSensor_SendFSMContext& context);
        void QueryVisualSensorConfigurationTransition(VisualSensor_SendFSMContext& context);
        void ReceiveTransition(VisualSensor_SendFSMContext& context);
        void ReleaseControlTransition(VisualSensor_SendFSMContext& context);
        void RequestControlTransition(VisualSensor_SendFSMContext& context);
        void SendTransition(VisualSensor_SendFSMContext& context);
        void SetAuthorityTransition(VisualSensor_SendFSMContext& context);
        void SetVisualSensorConfigurationTransition(VisualSensor_SendFSMContext& context);
        void TimeoutTransition(VisualSensor_SendFSMContext& context);
        void UpdateEventTransition(VisualSensor_SendFSMContext& context);
    };

    class VisualSensor_SendFSMContext :
        public statemap::FSMContext
    {
    public:

        VisualSensor_SendFSMContext(VisualSensor_SendFSM& owner)
        : FSMContext(VisualSensor_SendFSM_SM::Sending),
          _owner(owner)
        {};

        VisualSensor_SendFSMContext(VisualSensor_SendFSM& owner, const statemap::State& state)
        : FSMContext(state),
          _owner(owner)
        {};

        virtual void enterStartState()
        {
            getState().Entry(*this);
            return;
        }

        VisualSensor_SendFSM& getOwner() const
        {
            return (_owner);
        };

        VisualSensor_SendFSMState& getState() const
        {
            if (_state == NULL)
            {
                throw statemap::StateUndefinedException();
            }

            return (dynamic_cast<VisualSensor_SendFSMState&>(*_state));
        };

        void BroadcastGlobalTransition()
        {
            setTransition("BroadcastGlobalTransition");
            (getState()).BroadcastGlobalTransition(*this);
            setTransition(NULL);
        };

        void BroadcastLocalTransition()
        {
            setTransition("BroadcastLocalTransition");
            (getState()).BroadcastLocalTransition(*this);
            setTransition(NULL);
        };

        void CancelEventTransition()
        {
            setTransition("CancelEventTransition");
            (getState()).CancelEventTransition(*this);
            setTransition(NULL);
        };

        void CreateEventTransition()
        {
            setTransition("CreateEventTransition");
            (getState()).CreateEventTransition(*this);
            setTransition(NULL);
        };

        void EventErrorTransition()
        {
            setTransition("EventErrorTransition");
            (getState()).EventErrorTransition(*this);
            setTransition(NULL);
        };

        void EventOccurredTransition()
        {
            setTransition("EventOccurredTransition");
            (getState()).EventOccurredTransition(*this);
            setTransition(NULL);
        };

        void QueryAuthorityTransition()
        {
            setTransition("QueryAuthorityTransition");
            (getState()).QueryAuthorityTransition(*this);
            setTransition(NULL);
        };

        void QueryControlTransition()
        {
            setTransition("QueryControlTransition");
            (getState()).QueryControlTransition(*this);
            setTransition(NULL);
        };

        void QueryEventsTransition()
        {
            setTransition("QueryEventsTransition");
            (getState()).QueryEventsTransition(*this);
            setTransition(NULL);
        };

        void QuerySensorGeometricPropertiesTransition()
        {
            setTransition("QuerySensorGeometricPropertiesTransition");
            (getState()).QuerySensorGeometricPropertiesTransition(*this);
            setTransition(NULL);
        };

        void QueryTimeoutTransition()
        {
            setTransition("QueryTimeoutTransition");
            (getState()).QueryTimeoutTransition(*this);
            setTransition(NULL);
        };

        void QueryVisualSensorCapabilitiesTransition()
        {
            setTransition("QueryVisualSensorCapabilitiesTransition");
            (getState()).QueryVisualSensorCapabilitiesTransition(*this);
            setTransition(NULL);
        };

        void QueryVisualSensorConfigurationTransition()
        {
            setTransition("QueryVisualSensorConfigurationTransition");
            (getState()).QueryVisualSensorConfigurationTransition(*this);
            setTransition(NULL);
        };

        void ReceiveTransition()
        {
            setTransition("ReceiveTransition");
            (getState()).ReceiveTransition(*this);
            setTransition(NULL);
        };

        void ReleaseControlTransition()
        {
            setTransition("ReleaseControlTransition");
            (getState()).ReleaseControlTransition(*this);
            setTransition(NULL);
        };

        void RequestControlTransition()
        {
            setTransition("RequestControlTransition");
            (getState()).RequestControlTransition(*this);
            setTransition(NULL);
        };

        void SendTransition()
        {
            setTransition("SendTransition");
            (getState()).SendTransition(*this);
            setTransition(NULL);
        };

        void SetAuthorityTransition()
        {
            setTransition("SetAuthorityTransition");
            (getState()).SetAuthorityTransition(*this);
            setTransition(NULL);
        };

        void SetVisualSensorConfigurationTransition()
        {
            setTransition("SetVisualSensorConfigurationTransition");
            (getState()).SetVisualSensorConfigurationTransition(*this);
            setTransition(NULL);
        };

        void TimeoutTransition()
        {
            setTransition("TimeoutTransition");
            (getState()).TimeoutTransition(*this);
            setTransition(NULL);
        };

        void UpdateEventTransition()
        {
            setTransition("UpdateEventTransition");
            (getState()).UpdateEventTransition(*this);
            setTransition(NULL);
        };

    private:

        VisualSensor_SendFSM& _owner;
    };
}


/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */

#endif // _H_VISUALSENSOR_SENDFSM_SM
