void __fastcall FriendSearchResultMenu___ctor(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4AFCDCE & 1) == 0 )
  {
    sub_1BC3008(&BaseMenu_TypeInfo, method);
    sub_1BC3008(&StringLiteral_1/*""*/, v3);
    byte_4AFCDCE = 1;
  }
  this->fields.searchId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC(&this->fields.searchId);
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall FriendSearchResultMenu__Callback(
        FriendSearchResultMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  struct FriendSearchResultMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct FriendSearchResultMenu_CallbackFunc_o *v5; // x21
  struct FriendSearchResultMenu_CallbackFunc_o *callbackFunc; // t1
  __int64 v8; // x0
  __int64 v9; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    v8 = sub_1BC2FAC(p_callbackFunc);
    classButtonControl = this->fields.classButtonControl;
    if ( !classButtonControl )
      sub_1BC3264(v8, v9);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      (unsigned int)result,
      (unsigned int)classButtonControl->fields.currentCursor,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall FriendSearchResultMenu__Close(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendSearchResultMenu__Close_31997976(this, 0LL, v2);
}


void __fastcall FriendSearchResultMenu__Close_31997976(
        FriendSearchResultMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4AFCDC9 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, callback);
    sub_1BC3008(&Method_FriendSearchResultMenu_EndClose__, v5);
    byte_4AFCDC9 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BC2FAC(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_FriendSearchResultMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v6, 0LL);
}


void __fastcall FriendSearchResultMenu__EndClose(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  FriendSearchResultMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BC3264(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BC2FAC(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall FriendSearchResultMenu__EndOpen(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall FriendSearchResultMenu__Init(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UILabel_o *titleLabel; // x0
  System_Collections_Generic_Dictionary_int__int__o *v15; // x20
  System_Collections_Generic_Dictionary_int__int__o **p_classBoardMaxNumDictionary; // x21
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x22
  Il2CppObject *Master_object; // x0
  __int64 v29; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v31; // x1
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_4AFCDC7 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__, method);
    sub_1BC3008(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v3);
    sub_1BC3008(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v4);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v9);
    sub_1BC3008(&System_IDisposable_TypeInfo, v10);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, v11);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1BC3008(&StringLiteral_1/*""*/, v13);
    byte_4AFCDC7 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_40;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleLabel )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  v15 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v15,
    (const MethodInfo_32FF0D8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.classBoardMaxNumDictionary = v15;
  p_classBoardMaxNumDictionary = &this->fields.classBoardMaxNumDictionary;
  sub_1BC2FAC(&this->fields.classBoardMaxNumDictionary);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  titleLabel = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !titleLabel || (titleLabel = (UILabel_o *)titleLabel->fields.rightAnchor) == 0LL )
LABEL_40:
    sub_1BC3264(titleLabel, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)titleLabel,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_21;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_21:
      v26 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v27 )
      sub_1BC3264(Master_object, v29);
    if ( !Master_object )
      sub_1BC3264(0LL, v29);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            (ClassBoardSquareMaster_o *)Master_object,
                            *(_DWORD *)(v27 + 16),
                            0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !*p_classBoardMaxNumDictionary )
        sub_1BC3264(OtherThanNoneEntity, v31);
      System_Collections_Generic_Dictionary_int__int___Add(
        *p_classBoardMaxNumDictionary,
        *(_DWORD *)(v27 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_32FFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_34;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_34:
    v35 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall FriendSearchResultMenu__OnClickCancel(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4AFCDCB & 1) == 0 )
  {
    sub_1BC3008(&Method_FriendSearchResultMenu_OnClickCancel__, method);
    byte_4AFCDCB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendSearchResultMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_FriendSearchResultMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_FriendSearchResultMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    FriendSearchResultMenu__Callback(this, 1, v5);
  }
}


void __fastcall FriendSearchResultMenu__OnClickDecide(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4AFCDCA & 1) == 0 )
  {
    sub_1BC3008(&Method_FriendSearchResultMenu_OnClickDecide__, method);
    byte_4AFCDCA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendSearchResultMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_FriendSearchResultMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_FriendSearchResultMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    FriendSearchResultMenu__Callback(this, 2, v5);
  }
}


void __fastcall FriendSearchResultMenu__OnClickFollow(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4AFCDCD & 1) == 0 )
  {
    sub_1BC3008(&Method_FriendSearchResultMenu_OnClickFollow__, method);
    byte_4AFCDCD = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendSearchResultMenu_OnClickFollow__;
    if ( (*((_BYTE *)Method_FriendSearchResultMenu_OnClickFollow__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_FriendSearchResultMenu_OnClickFollow__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    FriendSearchResultMenu__Callback(this, 3, v5);
  }
}


void __fastcall FriendSearchResultMenu__Open(
        FriendSearchResultMenu_o *this,
        OtherUserGameEntity_o *entity,
        int32_t classPos,
        FriendSearchResultMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  ClassButtonControlComponent_o *classButtonControl; // x23
  ClassButtonControlComponent_CallbackFunc_o *v17; // x24
  ClassButtonControlComponent_o *friendIcon; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x1
  int32_t state; // w8
  UILabel_o *titleLabel; // x21
  struct ClassButtonControlComponent_o *v23; // x8
  UISprite_o *offerBackSprite; // x20
  System_Action_o *v25; // x20
  struct FriendSearchResultMenu_CallbackFunc_o **p_callbackFunc; // x19
  int32_t inputDisplayServantType; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4AFCDC8 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, entity);
    sub_1BC3008(&AtlasManager_TypeInfo, v9);
    sub_1BC3008(&ClassButtonControlComponent_CallbackFunc_TypeInfo, v10);
    sub_1BC3008(&Method_FriendSearchResultMenu_EndOpen__, v11);
    sub_1BC3008(&Method_FriendSearchResultMenu_changeClass__, v12);
    sub_1BC3008(&LocalizationManager_TypeInfo, v13);
    sub_1BC3008(&StringLiteral_17300/*"btn_bg_26_2"*/, v14);
    sub_1BC3008(&StringLiteral_6510/*"FRIEND_SEARCH_RESULT_TITLE"*/, v15);
    byte_4AFCDC8 = 1;
  }
  inputDisplayServantType = 0;
  classButtonControl = this->fields.classButtonControl;
  v17 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1BC3254(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendSearchResultMenu_changeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_22;
  ClassButtonControlComponent__init(classButtonControl, v17, 0, 0, 0LL, 0LL);
  friendIcon = this->fields.classButtonControl;
  if ( !friendIcon )
    goto LABEL_22;
  ClassButtonControlComponent__setCursor(friendIcon, classPos, 0LL);
  this->fields.otherUserGameEntity = entity;
  sub_1BC2FAC(&this->fields.otherUserGameEntity);
  state = this->fields.state;
  if ( state == 4 )
  {
    FriendSearchResultMenu__EndClose(this, v20);
    state = this->fields.state;
  }
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1BC2FAC(p_callbackFunc);
    *((_DWORD *)p_callbackFunc - 2) = 2;
    return;
  }
  if ( state )
    return;
  this->fields.callbackFunc = callback;
  sub_1BC2FAC(&this->fields.callbackFunc);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  friendIcon = (ClassButtonControlComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6510/*"FRIEND_SEARCH_RESULT_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_22;
  UILabel__set_text(titleLabel, (System_String_o *)friendIcon, 0LL);
  if ( !entity )
    goto LABEL_16;
  inputDisplayServantType = 0;
  v23 = this->fields.classButtonControl;
  if ( !v23 || (friendIcon = (ClassButtonControlComponent_o *)this->fields.friendIcon) == 0LL )
LABEL_22:
    sub_1BC3264(friendIcon, v19);
  FriendIconComponent__Set(
    (FriendIconComponent_o *)friendIcon,
    entity,
    1,
    v23->fields.currentCursor,
    &inputDisplayServantType,
    0,
    0,
    this->fields.classBoardMaxNumDictionary,
    0,
    0LL);
LABEL_16:
  friendIcon = (ClassButtonControlComponent_o *)this->fields.decideButton;
  if ( !friendIcon )
    goto LABEL_22;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)friendIcon, 1, 0LL);
  offerBackSprite = this->fields.offerBackSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(offerBackSprite, (System_String_o *)StringLiteral_17300/*"btn_bg_26_2"*/, 0LL);
  AtlasManager__SetDownloadCommonSprite(this->fields.followBackSprite, (System_String_o *)StringLiteral_17300/*"btn_bg_26_2"*/, 0LL);
  this->fields.state = 1;
  v25 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_FriendSearchResultMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v25, 0LL);
}


void __fastcall FriendSearchResultMenu__SerializeFieldNotNullCheck(
        FriendSearchResultMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall FriendSearchResultMenu__add_callbackFunc(
        FriendSearchResultMenu_o *this,
        FriendSearchResultMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct FriendSearchResultMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct FriendSearchResultMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FriendSearchResultMenu_o *v11; // x0
  FriendSearchResultMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4AFCDC5 & 1) == 0 )
  {
    sub_1BC3008(&FriendSearchResultMenu_CallbackFunc_TypeInfo, value);
    byte_4AFCDC5 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (FriendSearchResultMenu_CallbackFunc_c *)v8->klass != FriendSearchResultMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendSearchResultMenu_o *)sub_1BC3524(v8);
  FriendSearchResultMenu__remove_callbackFunc(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendSearchResultMenu__changeClass(
        FriendSearchResultMenu_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  FriendIconComponent_o *friendIcon; // x0
  OtherUserGameEntity_o *otherUserGameEntity; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t inputDisplayServantType; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4AFCDCC & 1) == 0 )
  {
    sub_1BC3008(&Method_FriendSearchResultMenu_changeClass__, *(_QWORD *)&classPos);
    byte_4AFCDCC = 1;
  }
  v4 = Method_FriendSearchResultMenu_changeClass__;
  if ( (*((_BYTE *)Method_FriendSearchResultMenu_changeClass__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BC3020(Method_FriendSearchResultMenu_changeClass__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    inputDisplayServantType = 0;
    classButtonControl = this->fields.classButtonControl;
    if ( !classButtonControl || (friendIcon = this->fields.friendIcon) == 0LL )
      sub_1BC3264(friendIcon, otherUserGameEntity);
    FriendIconComponent__Set(
      friendIcon,
      otherUserGameEntity,
      1,
      classButtonControl->fields.currentCursor,
      &inputDisplayServantType,
      0,
      0,
      this->fields.classBoardMaxNumDictionary,
      0,
      0LL);
  }
}


int32_t __fastcall FriendSearchResultMenu__getChangeCursorPos(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  ClassButtonControlComponent_o *classButtonControl; // x0

  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl )
    sub_1BC3264(0LL, method);
  return ClassButtonControlComponent__getChangeCursorPos(classButtonControl, 0LL);
}


int32_t __fastcall FriendSearchResultMenu__get_GetCursorPos(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl )
    sub_1BC3264(this, method);
  return classButtonControl->fields.currentCursor;
}


void __fastcall FriendSearchResultMenu__remove_callbackFunc(
        FriendSearchResultMenu_o *this,
        FriendSearchResultMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct FriendSearchResultMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct FriendSearchResultMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FriendSearchResultMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4AFCDC6 & 1) == 0 )
  {
    sub_1BC3008(&FriendSearchResultMenu_CallbackFunc_TypeInfo, value);
    byte_4AFCDC6 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (FriendSearchResultMenu_CallbackFunc_c *)v8->klass != FriendSearchResultMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendSearchResultMenu_o *)sub_1BC3524(v8);
  FriendSearchResultMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendSearchResultMenu_CallbackFunc___ctor(
        FriendSearchResultMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BC2FAC(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0597C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A05924;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall FriendSearchResultMenu_CallbackFunc__BeginInvoke(
        FriendSearchResultMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = classPos;
  v16 = result;
  if ( (byte_4AFCDCF & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&result);
    sub_1BC3008(&FriendRootComponent_OfferState_TypeInfo, v9);
    byte_4AFCDCF = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(FriendRootComponent_OfferState_TypeInfo, &v16, *(_QWORD *)&classPos, callback, object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v14, callback, object);
}


void __fastcall FriendSearchResultMenu_CallbackFunc__EndInvoke(
        FriendSearchResultMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
}


void __fastcall FriendSearchResultMenu_CallbackFunc__Invoke(
        FriendSearchResultMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    classPos,
    *(_QWORD *)&this->fields.extra_arg);
}