void AutomatedAction___ctor(AutomatedAction_o *this, const MethodInfo *method)
{
  if ( (byte_5969E57 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AutomatedAction___ctor__);
    byte_5969E57 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_AutomatedAction___ctor__);
}


void AutomatedAction__InstantiateMissionAction(AutomatedAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *missionActionManagerPrefab; // x19
  Il2CppObject *v5; // x0
  struct UnityEngine_GameObject_o **p_missionActionObject; // x19
  __int64 v7; // x1
  UnityEngine_GameObject_o *missionActionObject; // x0
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Transform_o *v10; // x20
  UnityEngine_Transform_o *v11; // x19

  if ( (byte_5969E52 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E52 = 1;
  }
  missionActionManagerPrefab = (Il2CppObject *)this->fields.missionActionManagerPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__Instantiate_object_(
         missionActionManagerPrefab,
         (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.missionActionObject = (struct UnityEngine_GameObject_o *)v5;
  p_missionActionObject = &this->fields.missionActionObject;
  sub_2213A04(&this->fields.missionActionObject, v5);
  missionActionObject = this->fields.missionActionObject;
  if ( !missionActionObject )
    goto LABEL_16;
  transform = UnityEngine_GameObject__get_transform(missionActionObject, 0);
  missionActionObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)missionActionObject, 0);
  missionActionObject = *p_missionActionObject;
  if ( !*p_missionActionObject )
    goto LABEL_16;
  missionActionObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(missionActionObject, 0);
  v10 = (UnityEngine_Transform_o *)missionActionObject;
  if ( !byte_5969AE0 )
  {
    missionActionObject = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v10 )
    goto LABEL_16;
  UnityEngine_Transform__set_localPosition(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  missionActionObject = *p_missionActionObject;
  if ( !*p_missionActionObject )
    goto LABEL_16;
  missionActionObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(missionActionObject, 0);
  v11 = (UnityEngine_Transform_o *)missionActionObject;
  if ( !byte_5969AE5 )
  {
    missionActionObject = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v11 )
LABEL_16:
    sub_2213CDC(missionActionObject, v7);
  UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
}


bool AutomatedAction__IsShopVoiceWait(AutomatedAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *shopActionObject; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_5969E56 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ShopActionManager___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E56 = 1;
  }
  shopActionObject = (UnityEngine_Object_o *)this->fields.shopActionObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Inequality(shopActionObject, 0, 0) )
    return 0;
  Component_object = this->fields.shopActionObject;
  if ( !Component_object
    || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         Component_object,
                                                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ShopActionManager___)) == 0 )
  {
    sub_2213CDC(Component_object, v5);
  }
  return ShopActionManager__IsVoiceWait((ShopActionManager_o *)Component_object, 0);
}


// local variable allocation has failed, the output may be wrong!
void AutomatedAction__SetBackGroundUntouchable(AutomatedAction_o *this, bool onoff, const MethodInfo *method)
{
  UnityEngine_GameObject_o *blocker; // x0

  blocker = this->fields.blocker;
  if ( !blocker )
    sub_2213CDC(0, onoff);
  UnityEngine_GameObject__SetActive(blocker, onoff, 0);
}


void AutomatedAction__SetCallbackforMissionVoice(
        AutomatedAction_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *missionActionObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_5969E53 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MissionActionManager___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E53 = 1;
  }
  missionActionObject = (UnityEngine_Object_o *)this->fields.missionActionObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, callback, method);
  if ( UnityEngine_Object__op_Inequality(missionActionObject, 0, 0) )
  {
    Component_object = this->fields.missionActionObject;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MissionActionManager___)) == 0 )
    {
      sub_2213CDC(Component_object, v6);
    }
    MissionActionManager__SetCallbackAfterVoice((MissionActionManager_o *)Component_object, callback, 0);
  }
  else
  {
    ActionExtensions__Call(callback, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void AutomatedAction__SetMissionAction(
        AutomatedAction_o *this,
        int32_t missionID,
        int32_t progressType,
        bool restrictMode,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *blocker; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *missionActionObject; // x23

  if ( (byte_5969E50 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MissionActionManager___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E50 = 1;
  }
  blocker = this->fields.blocker;
  if ( !blocker )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(blocker, 1, 0);
  missionActionObject = (UnityEngine_Object_o *)this->fields.missionActionObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  if ( UnityEngine_Object__op_Equality(missionActionObject, 0, 0) )
    AutomatedAction__InstantiateMissionAction(this, *(const MethodInfo **)&missionID);
  blocker = this->fields.missionActionObject;
  if ( !blocker
    || (blocker = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                blocker,
                                                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MissionActionManager___)) == 0 )
  {
LABEL_11:
    sub_2213CDC(blocker, *(_QWORD *)&missionID);
  }
  MissionActionManager__setMissionAction((MissionActionManager_o *)blocker, missionID, progressType, restrictMode, 0);
}


void AutomatedAction__SetShopAction(
        AutomatedAction_o *this,
        System_Collections_Generic_List_ShopActionEntity__o *shopActionList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *shopActionManagerPrefab; // x21
  Il2CppObject *v8; // x0
  struct UnityEngine_GameObject_o **p_shopActionObject; // x21
  __int64 v10; // x1
  UnityEngine_GameObject_o *shopActionObject; // x0
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Transform_o *v13; // x22
  UnityEngine_Transform_o *v14; // x22

  if ( (byte_5969E55 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ShopActionManager___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E55 = 1;
  }
  shopActionManagerPrefab = (Il2CppObject *)this->fields.shopActionManagerPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, shopActionList, callback);
  v8 = UnityEngine_Object__Instantiate_object_(
         shopActionManagerPrefab,
         (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.shopActionObject = (struct UnityEngine_GameObject_o *)v8;
  p_shopActionObject = &this->fields.shopActionObject;
  sub_2213A04(&this->fields.shopActionObject, v8);
  shopActionObject = this->fields.shopActionObject;
  if ( !shopActionObject )
    goto LABEL_18;
  transform = UnityEngine_GameObject__get_transform(shopActionObject, 0);
  shopActionObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
  if ( !transform )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)shopActionObject, 0);
  shopActionObject = *p_shopActionObject;
  if ( !*p_shopActionObject )
    goto LABEL_18;
  shopActionObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(shopActionObject, 0);
  v13 = (UnityEngine_Transform_o *)shopActionObject;
  if ( !byte_5969AE0 )
  {
    shopActionObject = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v13 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  shopActionObject = *p_shopActionObject;
  if ( !*p_shopActionObject )
    goto LABEL_18;
  shopActionObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(shopActionObject, 0);
  v14 = (UnityEngine_Transform_o *)shopActionObject;
  if ( !byte_5969AE5 )
  {
    shopActionObject = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v14
    || (UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (shopActionObject = *p_shopActionObject) == 0)
    || (shopActionObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         shopActionObject,
                                                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ShopActionManager___)) == 0 )
  {
LABEL_18:
    sub_2213CDC(shopActionObject, v10);
  }
  ShopActionManager__SetShopAction((ShopActionManager_o *)shopActionObject, shopActionList, callback, 0);
}


// local variable allocation has failed, the output may be wrong!
void AutomatedAction__SetStatusMissionNotify(
        AutomatedAction_o *this,
        int32_t missionID,
        int32_t progressType,
        bool restrictMode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *missionActionObject; // x23
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_5969E51 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MissionActionManager___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E51 = 1;
  }
  missionActionObject = (UnityEngine_Object_o *)this->fields.missionActionObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&missionID, *(_QWORD *)&progressType);
  if ( UnityEngine_Object__op_Equality(missionActionObject, 0, 0) )
    AutomatedAction__InstantiateMissionAction(this, v10);
  Component_object = this->fields.missionActionObject;
  if ( !Component_object
    || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         Component_object,
                                                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MissionActionManager___)) == 0 )
  {
    sub_2213CDC(Component_object, v10);
  }
  MissionActionManager__setStatusMissionNotify(
    (MissionActionManager_o *)Component_object,
    missionID,
    progressType,
    restrictMode,
    0);
}


void AutomatedAction__TerminateMissionAction(AutomatedAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *missionActionObject; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_5969E54 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MissionActionManager___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E54 = 1;
  }
  missionActionObject = (UnityEngine_Object_o *)this->fields.missionActionObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(missionActionObject, 0, 0) )
  {
    Component_object = this->fields.missionActionObject;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MissionActionManager___)) == 0 )
    {
      sub_2213CDC(Component_object, v5);
    }
    MissionActionManager__TerminateMissionAction((MissionActionManager_o *)Component_object, 0);
  }
}