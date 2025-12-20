void AutomatedAction___ctor(AutomatedAction_o *this, const MethodInfo *method)
{
  if ( (byte_4D2629F & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_AutomatedAction___ctor__);
    byte_4D2629F = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3ABAA5C *)Method_SingletonMonoBehaviour_AutomatedAction___ctor__);
}


void AutomatedAction__InstantiateMissionAction(AutomatedAction_o *this, const MethodInfo *method)
{
  Il2CppObject *missionActionManagerPrefab; // x19
  Il2CppObject *v4; // x0
  struct UnityEngine_GameObject_o **p_missionActionObject; // x19
  __int64 v6; // x1
  UnityEngine_GameObject_o *missionActionObject; // x0
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Transform_o *v9; // x20
  UnityEngine_Transform_o *v10; // x19

  if ( (byte_4D2629A & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2629A = 1;
  }
  missionActionManagerPrefab = (Il2CppObject *)this->fields.missionActionManagerPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__Instantiate_object_(
         missionActionManagerPrefab,
         (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.missionActionObject = (struct UnityEngine_GameObject_o *)v4;
  p_missionActionObject = &this->fields.missionActionObject;
  sub_1C9403C(&this->fields.missionActionObject, v4);
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
  v9 = (UnityEngine_Transform_o *)missionActionObject;
  if ( !byte_4D25F19 )
  {
    missionActionObject = (UnityEngine_GameObject_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  if ( !v9 )
    goto LABEL_16;
  UnityEngine_Transform__set_localPosition(v9, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  missionActionObject = *p_missionActionObject;
  if ( !*p_missionActionObject )
    goto LABEL_16;
  missionActionObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(missionActionObject, 0);
  v10 = (UnityEngine_Transform_o *)missionActionObject;
  if ( !byte_4D25F1E )
  {
    missionActionObject = (UnityEngine_GameObject_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F1E = 1;
  }
  if ( !v10 )
LABEL_16:
    sub_1C942F0(missionActionObject, v6);
  UnityEngine_Transform__set_localScale(v10, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
}


bool AutomatedAction__IsShopVoiceWait(AutomatedAction_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *shopActionObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4D2629E & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_ShopActionManager___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2629E = 1;
  }
  shopActionObject = (UnityEngine_Object_o *)this->fields.shopActionObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(shopActionObject, 0, 0) )
    return 0;
  Component_object = this->fields.shopActionObject;
  if ( !Component_object
    || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         Component_object,
                                                         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_ShopActionManager___)) == 0 )
  {
    sub_1C942F0(Component_object, v4);
  }
  return ShopActionManager__IsVoiceWait((ShopActionManager_o *)Component_object, 0);
}


void AutomatedAction__SetBackGroundUntouchable(AutomatedAction_o *this, bool onoff, const MethodInfo *method)
{
  UnityEngine_GameObject_o *blocker; // x0

  blocker = this->fields.blocker;
  if ( !blocker )
    sub_1C942F0(0, onoff);
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

  if ( (byte_4D2629B & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_MissionActionManager___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2629B = 1;
  }
  missionActionObject = (UnityEngine_Object_o *)this->fields.missionActionObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(missionActionObject, 0, 0) )
  {
    Component_object = this->fields.missionActionObject;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_MissionActionManager___)) == 0 )
    {
      sub_1C942F0(Component_object, v6);
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
  UnityEngine_Object_o *missionActionObject; // x23

  if ( (byte_4D26298 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_MissionActionManager___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26298 = 1;
  }
  blocker = this->fields.blocker;
  if ( !blocker )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(blocker, 1, 0);
  missionActionObject = (UnityEngine_Object_o *)this->fields.missionActionObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(missionActionObject, 0, 0) )
    AutomatedAction__InstantiateMissionAction(this, *(const MethodInfo **)&missionID);
  blocker = this->fields.missionActionObject;
  if ( !blocker
    || (blocker = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                blocker,
                                                (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_MissionActionManager___)) == 0 )
  {
LABEL_11:
    sub_1C942F0(blocker, *(_QWORD *)&missionID);
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

  if ( (byte_4D2629D & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_ShopActionManager___);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2629D = 1;
  }
  shopActionManagerPrefab = (Il2CppObject *)this->fields.shopActionManagerPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__Instantiate_object_(
         shopActionManagerPrefab,
         (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.shopActionObject = (struct UnityEngine_GameObject_o *)v8;
  p_shopActionObject = &this->fields.shopActionObject;
  sub_1C9403C(&this->fields.shopActionObject, v8);
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
  if ( !byte_4D25F19 )
  {
    shopActionObject = (UnityEngine_GameObject_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  if ( !v13 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  shopActionObject = *p_shopActionObject;
  if ( !*p_shopActionObject )
    goto LABEL_18;
  shopActionObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(shopActionObject, 0);
  v14 = (UnityEngine_Transform_o *)shopActionObject;
  if ( !byte_4D25F1E )
  {
    shopActionObject = (UnityEngine_GameObject_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F1E = 1;
  }
  if ( !v14
    || (UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (shopActionObject = *p_shopActionObject) == 0)
    || (shopActionObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         shopActionObject,
                                                         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_ShopActionManager___)) == 0 )
  {
LABEL_18:
    sub_1C942F0(shopActionObject, v10);
  }
  ShopActionManager__SetShopAction((ShopActionManager_o *)shopActionObject, shopActionList, callback, 0);
}


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

  if ( (byte_4D26299 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_MissionActionManager___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26299 = 1;
  }
  missionActionObject = (UnityEngine_Object_o *)this->fields.missionActionObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(missionActionObject, 0, 0) )
    AutomatedAction__InstantiateMissionAction(this, v10);
  Component_object = this->fields.missionActionObject;
  if ( !Component_object
    || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         Component_object,
                                                         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_MissionActionManager___)) == 0 )
  {
    sub_1C942F0(Component_object, v10);
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
  UnityEngine_Object_o *missionActionObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4D2629C & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_MissionActionManager___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2629C = 1;
  }
  missionActionObject = (UnityEngine_Object_o *)this->fields.missionActionObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(missionActionObject, 0, 0) )
  {
    Component_object = this->fields.missionActionObject;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_MissionActionManager___)) == 0 )
    {
      sub_1C942F0(Component_object, v4);
    }
    MissionActionManager__TerminateMissionAction((MissionActionManager_o *)Component_object, 0);
  }
}