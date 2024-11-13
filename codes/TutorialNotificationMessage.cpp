void __fastcall TutorialNotificationMessage___ctor(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B14E9E & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B14E9E = 1;
  }
  this->fields.messageDefaultFontSize = -1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TutorialNotificationMessage__Close(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TutorialNotificationMessage__Close_38071320(this, 0LL, v2);
}


void __fastcall TutorialNotificationMessage__Close_38071320(
        TutorialNotificationMessage_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B14E9C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_TutorialNotificationMessage_EndClose__, v10, v11);
    byte_4B14E9C = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_TutorialNotificationMessage_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall TutorialNotificationMessage__EndClose(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TutorialNotificationMessage__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v12->fields.m_target)(
      v12->fields.original_method_info,
      *(_QWORD *)&v12->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialNotificationMessage__EndOpen(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *touchObject; // x21
  __int64 v7; // x1
  Il2CppObject *touchPrefab; // x21
  UnityEngine_GameObject_o *touchBase; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x21
  UnityEngine_Transform_o *transform; // x22
  float x; // s11
  float y; // s12
  float z; // s13
  float v16; // s0
  float v17; // s1
  float v18; // s2
  float v19; // s8
  float v20; // s9
  float v21; // s10
  __int64 v22; // x1
  __int64 v23; // x2
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B14E9B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B14E9B = 1;
  }
  touchObject = (UnityEngine_Object_o *)this->fields.touchObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(touchObject, 0LL, 0LL) )
  {
    touchPrefab = (Il2CppObject *)this->fields.touchPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    touchBase = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              touchPrefab,
                                              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !touchBase )
      goto LABEL_17;
    v11 = touchBase;
    transform = UnityEngine_GameObject__get_transform(touchBase, 0LL);
    touchBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
    if ( !touchBase )
      goto LABEL_17;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)touchBase, 0LL);
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    touchBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
    if ( !touchBase
      || (*(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_localScale(
                                             (UnityEngine_Transform_o *)touchBase,
                                             0LL),
          (touchBase = this->fields.touchBase) == 0LL)
      || (v19 = v16,
          v20 = v17,
          v21 = v18,
          touchBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(touchBase, 0LL),
          !transform) )
    {
LABEL_17:
      sub_1BCAA3C(touchBase, v10);
    }
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)touchBase, 0LL);
    v31.fields.x = x + this->fields.touchObjPos.fields.x;
    v31.fields.y = y + this->fields.touchObjPos.fields.y;
    v31.fields.z = z + this->fields.touchObjPos.fields.z;
    UnityEngine_Transform__set_localPosition(transform, v31, 0LL);
    if ( !byte_4B109C7 )
    {
      sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v22, v23);
      byte_4B109C7 = 1;
    }
    UnityEngine_Transform__set_localRotation(
      transform,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0LL);
    v32.fields.x = v19;
    v32.fields.y = v20;
    v32.fields.z = v21;
    UnityEngine_Transform__set_localScale(transform, v32, 0LL);
    this->fields.touchObject = v11;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.touchObject, (int64_t)v11, v24, v25, v26, v27, v28, v29);
  }
  this->fields.isButtonEnable = 1;
}


void __fastcall TutorialNotificationMessage__EndTurorialRequest(
        TutorialNotificationMessage_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_selectCallbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *selectCallbackFunc; // t1

  selectCallbackFunc = this->fields.selectCallbackFunc;
  p_selectCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.selectCallbackFunc;
  v9 = selectCallbackFunc;
  if ( selectCallbackFunc )
  {
    p_selectCallbackFunc->klass = 0LL;
    sub_1BCA784(p_selectCallbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall TutorialNotificationMessage__Init(TutorialNotificationMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v7; // x1
  UILabel_o *maskSprite; // x0
  struct UnityEngine_GameObject_o **p_touchObject; // x20
  UnityEngine_Object_o *touchObject; // x21
  UnityEngine_Object_o *v11; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_4B14E97 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B14E97 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    maskSprite = this->fields.messageLabel;
    if ( !maskSprite )
      goto LABEL_19;
    UILabel__set_text(maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  p_touchObject = &this->fields.touchObject;
  touchObject = (UnityEngine_Object_o *)this->fields.touchObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(touchObject, 0LL, 0LL) )
  {
    v11 = (UnityEngine_Object_o *)*p_touchObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244(v11, 0LL);
    *p_touchObject = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.touchObject, 0LL, v12, v13, v14, v15, v16, v17);
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v7, v18);
      byte_4B109C1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    *(_QWORD *)&this->fields.touchObjPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    this->fields.touchObjPos.fields.z = z;
  }
  maskSprite = (UILabel_o *)this->fields.maskSprite;
  if ( !maskSprite
    || (((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer, float))maskSprite->klass->vtable._8_set_alpha.method)(
          maskSprite,
          maskSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          1.0),
        this->fields.isButtonEnable = 0,
        (maskSprite = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_19:
    sub_1BCAA3C(maskSprite, v7);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TutorialNotificationMessage__OnClickClose(
        TutorialNotificationMessage_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  __int64 v18; // x1
  struct UnityEngine_GameObject_o **p_touchObject; // x20
  UnityEngine_Object_o *touchObject; // x21
  __int64 v21; // x1
  int64_t v22; // x2
  __int64 v23; // x3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  UnityEngine_Object_o *v28; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  NetworkManager_ResultCallbackFunc_o *v37; // x20
  __int64 v38; // x1
  Il2CppObject *Request_object; // x0
  __int64 v40; // x1
  PartyOrganizationUtility_o *p_selectCallbackFunc; // x19
  struct System_Action_o *v42; // x20
  struct System_Action_o *selectCallbackFunc; // t1

  if ( (byte_4B14E9D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TutorialSetRequest___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_TutorialNotificationMessage_EndTurorialRequest__, v10, v11);
    sub_1BCA7E0(&Method_TutorialNotificationMessage_OnClickClose__, v12, v13);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v14, v15);
    byte_4B14E9D = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v16 = Method_TutorialNotificationMessage_OnClickClose__;
    if ( (*((_BYTE *)Method_TutorialNotificationMessage_OnClickClose__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1BCA7F8(Method_TutorialNotificationMessage_OnClickClose__);
    v17 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 1, 0LL);
    p_touchObject = &this->fields.touchObject;
    touchObject = (UnityEngine_Object_o *)this->fields.touchObject;
    this->fields.isButtonEnable = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    if ( UnityEngine_Object__op_Inequality(touchObject, 0LL, 0LL) )
    {
      v28 = (UnityEngine_Object_o *)*p_touchObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
      UnityEngine_Object__Destroy_70154244(v28, 0LL);
      *p_touchObject = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.touchObject, 0LL, v29, v30, v31, v32, v33, v34);
      if ( !byte_4B109C1 )
      {
        sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v21, v22);
        byte_4B109C1 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      z = static_fields->zeroVector.fields.z;
      *(_QWORD *)&this->fields.touchObjPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
      this->fields.touchObjPos.fields.z = z;
    }
    if ( this->fields.flagId == -1 )
    {
      selectCallbackFunc = this->fields.selectCallbackFunc;
      p_selectCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.selectCallbackFunc;
      v42 = selectCallbackFunc;
      if ( selectCallbackFunc )
      {
        p_selectCallbackFunc->klass = 0LL;
        sub_1BCA784(p_selectCallbackFunc, 0LL, v22, v23, v24, v25, v26, v27);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v42->fields.m_target)(
          v42->fields.original_method_info,
          *(_QWORD *)&v42->fields.extra_arg);
      }
    }
    else
    {
      v37 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v21,
                                                     v22,
                                                     v23);
      NetworkManager_ResultCallbackFunc___ctor(
        v37,
        (Il2CppObject *)this,
        Method_TutorialNotificationMessage_EndTurorialRequest__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v38);
      Request_object = NetworkManager__getRequest_object_(
                         v37,
                         (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TutorialSetRequest___);
      if ( !Request_object )
        sub_1BCAA3C(0LL, v40);
      TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, this->fields.flagId, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialNotificationMessage__Open(
        TutorialNotificationMessage_o *this,
        System_String_o *message,
        int32_t flagId,
        System_Action_o *selectCallback,
        int32_t maskType,
        UnityEngine_Vector2_o messagePos,
        int32_t fontSize,
        bool dispTouchSprite,
        const MethodInfo *method)
{
  int messageDefaultFontSize; // w22
  float y; // s8
  float x; // s9
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_Object_o *messageLabel; // x24
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  UnityEngine_Component_o *transform; // x0
  System_String_o *v34; // x1
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Action_o *v38; // x0
  __int64 *v39; // x8
  System_Action_o *v40; // x21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  messageDefaultFontSize = fontSize;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4B14E98 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, message, *(_QWORD *)&flagId);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_TutorialNotificationMessage_EndOpen__, v20, v21);
    sub_1BCA7E0(&Method_TutorialNotificationMessage__Open_b__13_0__, v22, v23);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v24, v25);
    byte_4B14E98 = 1;
  }
  this->fields.selectCallbackFunc = selectCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.selectCallbackFunc,
    (int64_t)selectCallback,
    *(int64_t *)&flagId,
    (int32_t)selectCallback,
    *(System_String_o **)&maskType,
    *(BattleSetupInfo_o **)&fontSize,
    (FollowerInfo_o *)dispTouchSprite,
    (PartyListViewItem_o *)method);
  this->fields.flagId = flagId;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v26, v27);
    byte_4B109C1 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.touchObjPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.touchObjPos.fields.z = z;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( (this->fields.messageDefaultFontSize & 0x80000000) != 0 )
    {
      if ( !transform )
        goto LABEL_30;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_30;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.messageLabel;
      this->fields.messageDefaultPosition.fields.x = localPosition.fields.x;
      this->fields.messageDefaultPosition.fields.y = localPosition.fields.y;
      if ( !transform )
        goto LABEL_30;
      this->fields.messageDefaultFontSize = transform[17].fields.m_CachedPtr;
    }
    else if ( !transform )
    {
      goto LABEL_30;
    }
    if ( message )
      v34 = message;
    else
      v34 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)transform, v34, 0LL);
    transform = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( messageDefaultFontSize < 1 )
    {
      if ( !transform )
        goto LABEL_30;
      messageDefaultFontSize = this->fields.messageDefaultFontSize;
    }
    else if ( !transform )
    {
      goto LABEL_30;
    }
    UILabel__set_fontSize((UILabel_o *)transform, messageDefaultFontSize, 0LL);
    transform = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( transform )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( transform )
      {
        v42.fields.y = y + this->fields.messageDefaultPosition.fields.y;
        v42.fields.x = x + this->fields.messageDefaultPosition.fields.x;
        v42.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v42, 0LL);
        goto LABEL_26;
      }
    }
LABEL_30:
    sub_1BCAA3C(transform, v31);
  }
LABEL_26:
  TutorialNotificationMessage__setTutorialMaskActive(this, 1, v32);
  this->fields.isButtonEnable = 0;
  v38 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v35, v36, v37);
  if ( dispTouchSprite )
    v39 = &Method_TutorialNotificationMessage_EndOpen__;
  else
    v39 = (__int64 *)&Method_TutorialNotificationMessage__Open_b__13_0__;
  v40 = v38;
  System_Action___ctor(v38, (Il2CppObject *)this, *v39, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v40, maskType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialNotificationMessage__OpenWithArrow(
        TutorialNotificationMessage_o *this,
        System_String_o *message,
        UnityEngine_Vector2_o messagePos,
        int32_t fontSize,
        const MethodInfo *method)
{
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  int32_t messageDefaultFontSize; // w20
  float y; // s8
  float x; // s9
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Object_o *messageLabel; // x22
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  UnityEngine_Component_o *transform; // x0
  System_String_o *v24; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  messageDefaultFontSize = fontSize;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4B14E9A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, message, *(_QWORD *)&fontSize);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B14E9A = 1;
  }
  this->fields.selectCallbackFunc = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.selectCallbackFunc,
    0LL,
    *(int64_t *)&fontSize,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  this->fields.flagId = -1;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v16, v17);
    byte_4B109C1 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.touchObjPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.touchObjPos.fields.z = z;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( !UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
    goto LABEL_26;
  transform = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( (this->fields.messageDefaultFontSize & 0x80000000) != 0 )
  {
    if ( !transform )
      goto LABEL_27;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_27;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    transform = (UnityEngine_Component_o *)this->fields.messageLabel;
    this->fields.messageDefaultPosition.fields.x = localPosition.fields.x;
    this->fields.messageDefaultPosition.fields.y = localPosition.fields.y;
    if ( !transform )
      goto LABEL_27;
    this->fields.messageDefaultFontSize = transform[17].fields.m_CachedPtr;
  }
  else if ( !transform )
  {
    goto LABEL_27;
  }
  if ( message )
    v24 = message;
  else
    v24 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text((UILabel_o *)transform, v24, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !transform
    || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL )
  {
LABEL_27:
    sub_1BCAA3C(transform, v21);
  }
  v26.fields.y = y + this->fields.messageDefaultPosition.fields.y;
  v26.fields.x = x + this->fields.messageDefaultPosition.fields.x;
  v26.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v26, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( (messageDefaultFontSize & 0x80000000) != 0 )
  {
    if ( !transform )
      goto LABEL_27;
    messageDefaultFontSize = this->fields.messageDefaultFontSize;
  }
  else if ( !transform )
  {
    goto LABEL_27;
  }
  UILabel__set_fontSize((UILabel_o *)transform, messageDefaultFontSize, 0LL);
LABEL_26:
  TutorialNotificationMessage__setTutorialMaskActive(this, 0, v22);
  this->fields.isButtonEnable = 0;
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialNotificationMessage__Open_38069280(
        TutorialNotificationMessage_o *this,
        System_String_o *message,
        UnityEngine_Vector2_o messagePos,
        UnityEngine_Vector3_o touchObjPos,
        int32_t dlgBgId,
        int32_t alignment,
        int32_t fontSize,
        System_Action_o *callback,
        int32_t spacingY,
        const MethodInfo *method)
{
  int messageDefaultFontSize; // w22
  float z; // s10
  float y; // s11
  float x; // s12
  float v18; // s8
  float v19; // s9
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  UnityEngine_Object_o *messageLabel; // x25
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  UILabel_o *transform; // x0
  int32_t v39; // w1
  System_String_o *v40; // x1
  ExUITexture_o *backTexture; // x21
  Il2CppObject *v42; // x0
  System_String_o *v43; // x20
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Action_o *v47; // x22
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Action_o *v51; // x20
  int32_t v52; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector2_o v53; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  messageDefaultFontSize = fontSize;
  z = touchObjPos.fields.z;
  y = touchObjPos.fields.y;
  x = touchObjPos.fields.x;
  v18 = messagePos.fields.y;
  v19 = messagePos.fields.x;
  if ( (byte_4B14E99 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, message, *(_QWORD *)&dlgBgId);
    sub_1BCA7E0(&int_TypeInfo, v22, v23);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_TutorialNotificationMessage_EndOpen__, v26, v27);
    sub_1BCA7E0(&Method_TutorialNotificationMessage__Open_b__14_0__, v28, v29);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_3156/*"Back/back{0}"*/, v32, v33);
    byte_4B14E99 = 1;
  }
  this->fields.selectCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.selectCallbackFunc,
    (int64_t)callback,
    *(int64_t *)&dlgBgId,
    alignment,
    *(System_String_o **)&fontSize,
    (BattleSetupInfo_o *)callback,
    *(FollowerInfo_o **)&spacingY,
    (PartyListViewItem_o *)method);
  this->fields.touchObjPos.fields.x = x;
  this->fields.touchObjPos.fields.y = y;
  this->fields.flagId = -1;
  this->fields.touchObjPos.fields.z = z;
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
  if ( !UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
    goto LABEL_43;
  transform = this->fields.messageLabel;
  if ( !transform )
    goto LABEL_50;
  if ( dlgBgId )
  {
    UILabel__set_applyGradient(transform, 1, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    v56.fields.g = 0.2902;
    v56.fields.b = 0.031373;
    v56.fields.a = 1.0;
    v56.fields.r = 0.32941;
    UILabel__set_gradientTop(transform, v56, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    v57.fields.r = 0.1098;
    v57.fields.g = 0.0;
    v57.fields.b = 0.0;
    v57.fields.a = 1.0;
    UILabel__set_gradientBottom(transform, v57, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    UILabel__set_spacingY(transform, 11, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    UILabel__set_effectStyle(transform, 2, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    v58.fields.r = 0.47059;
    v58.fields.b = 0.15294;
    v58.fields.a = 0.058824;
    v58.fields.g = 0.32941;
    UILabel__set_effectColor(transform, v58, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    v53.fields.x = 3.0;
    v53.fields.y = 3.0;
    UILabel__set_effectDistance(transform, v53, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    UIWidget__set_height((UIWidget_o *)transform, 543, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    v39 = alignment;
  }
  else
  {
    UILabel__set_applyGradient(transform, 0, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    UILabel__set_spacingY(transform, 0, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    UILabel__set_effectStyle(transform, 0, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    UIWidget__set_height((UIWidget_o *)transform, 460, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    v39 = 2;
  }
  UILabel__set_alignment(transform, v39, 0LL);
  transform = this->fields.messageLabel;
  if ( (this->fields.messageDefaultFontSize & 0x80000000) != 0 )
  {
    if ( !transform )
      goto LABEL_50;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_50;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    transform = this->fields.messageLabel;
    this->fields.messageDefaultPosition.fields.x = localPosition.fields.x;
    this->fields.messageDefaultPosition.fields.y = localPosition.fields.y;
    if ( !transform )
      goto LABEL_50;
    this->fields.messageDefaultFontSize = transform->fields.mFontSize;
  }
  else if ( !transform )
  {
    goto LABEL_50;
  }
  if ( message )
    v40 = message;
  else
    v40 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(transform, v40, 0LL);
  transform = this->fields.messageLabel;
  if ( messageDefaultFontSize < 1 )
  {
    if ( !transform )
      goto LABEL_50;
    messageDefaultFontSize = this->fields.messageDefaultFontSize;
  }
  else if ( !transform )
  {
    goto LABEL_50;
  }
  UILabel__set_fontSize(transform, messageDefaultFontSize, 0LL);
  if ( spacingY >= 1 )
  {
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_50;
    UILabel__set_spacingY(transform, spacingY, 0LL);
  }
  transform = this->fields.messageLabel;
  if ( !transform
    || (transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
  {
LABEL_50:
    sub_1BCAA3C(transform, v36);
  }
  v55.fields.y = v18 + this->fields.messageDefaultPosition.fields.y;
  v55.fields.x = v19 + this->fields.messageDefaultPosition.fields.x;
  v55.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v55, 0LL);
LABEL_43:
  TutorialNotificationMessage__setTutorialMaskActive(this, 1, v37);
  transform = (UILabel_o *)this->fields.maskSprite;
  if ( !transform )
    goto LABEL_50;
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer, float))transform->klass->vtable._8_set_alpha.method)(
    transform,
    transform->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.01);
  this->fields.isButtonEnable = 0;
  if ( !dlgBgId )
    goto LABEL_47;
  backTexture = this->fields.backTexture;
  v52 = dlgBgId;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
  v43 = System_String__Format((System_String_o *)StringLiteral_3156/*"Back/back{0}"*/, v42, 0LL);
  v47 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v44, v45, v46);
  System_Action___ctor(v47, (Il2CppObject *)this, Method_TutorialNotificationMessage__Open_b__14_0__, 0LL);
  if ( !backTexture )
    goto LABEL_50;
  if ( !ExUITexture__SetAssetImage(backTexture, v43, v47, 0LL) )
  {
LABEL_47:
    transform = (UILabel_o *)this->fields.backTexture;
    if ( !transform )
      goto LABEL_50;
    ExUITexture__ClearImage((ExUITexture_o *)transform, 0LL);
    v51 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v48, v49, v50);
    System_Action___ctor(v51, (Il2CppObject *)this, Method_TutorialNotificationMessage_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v51, 1, 0LL);
  }
}


void __fastcall TutorialNotificationMessage___Open_b__13_0(
        TutorialNotificationMessage_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall TutorialNotificationMessage___Open_b__14_0(
        TutorialNotificationMessage_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B14E9F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_TutorialNotificationMessage_EndOpen__, v5, v6);
    byte_4B14E9F = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TutorialNotificationMessage_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v7, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialNotificationMessage__setTutorialMaskActive(
        TutorialNotificationMessage_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0

  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL)) == 0LL )
  {
    sub_1BCAA3C(maskSprite, active);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, active, 0LL);
}