void FriendSearchResultMenu___ctor(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4CC2010 & 1) == 0 )
  {
    sub_1C713B0(&BaseMenu_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC2010 = 1;
  }
  v3 = StringLiteral_1/*""*/;
  this->fields.searchId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354(&this->fields.searchId, v3);
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void FriendSearchResultMenu__Callback(FriendSearchResultMenu_o *this, int32_t result, const MethodInfo *method)
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
    this->fields.callbackFunc = 0;
    v8 = sub_1C71354(p_callbackFunc, 0);
    classButtonControl = this->fields.classButtonControl;
    if ( !classButtonControl )
      sub_1C71608(v8, v9);
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      (unsigned int)result,
      (unsigned int)classButtonControl->fields.currentCursor,
      v5->fields.method);
  }
}


void FriendSearchResultMenu__Close(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendSearchResultMenu__Close_33064104(this, 0, v2);
}


void FriendSearchResultMenu__Close_33064104(
        FriendSearchResultMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4CC200B & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_FriendSearchResultMenu_EndClose__);
    byte_4CC200B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C71354(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendSearchResultMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v5, 0);
}


void FriendSearchResultMenu__EndClose(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  FriendSearchResultMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_1C71354(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void FriendSearchResultMenu__EndOpen(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void FriendSearchResultMenu__Init(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  System_Collections_Generic_Dictionary_int__int__o *v4; // x20
  System_Collections_Generic_Dictionary_int__int__o **p_classBoardMaxNumDictionary; // x21
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x22
  Il2CppObject *Master_object; // x0
  __int64 v18; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0

  if ( (byte_4CC2009 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
    sub_1C713B0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC2009 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_40;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !titleLabel )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  this->fields.state = 0;
  v4 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v4,
    (const MethodInfo_3458E18 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.classBoardMaxNumDictionary = v4;
  p_classBoardMaxNumDictionary = &this->fields.classBoardMaxNumDictionary;
  sub_1C71354(&this->fields.classBoardMaxNumDictionary, v4);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  titleLabel = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !titleLabel || (titleLabel = (UILabel_o *)titleLabel->fields.rightAnchor) == 0 )
LABEL_40:
    sub_1C71608(titleLabel, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)titleLabel,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_14;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_14:
      v11 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_21;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_21:
      v15 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v16 )
      sub_1C71608(Master_object, v18);
    if ( !Master_object )
      sub_1C71608(0, v18);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            (ClassBoardSquareMaster_o *)Master_object,
                            *(_DWORD *)(v16 + 16),
                            0);
    if ( OtherThanNoneEntity )
    {
      if ( !*p_classBoardMaxNumDictionary )
        sub_1C71608(OtherThanNoneEntity, v20);
      System_Collections_Generic_Dictionary_int__int___Add(
        *p_classBoardMaxNumDictionary,
        *(_DWORD *)(v16 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_34597DC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v21 = Enumerator->klass;
  v22 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_34;
    }
    v24 = (__int64)&v21->vtable[*v23];
  }
  else
  {
LABEL_34:
    v24 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void FriendSearchResultMenu__OnClickCancel(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CC200D & 1) == 0 )
  {
    sub_1C713B0(&Method_FriendSearchResultMenu_OnClickCancel__);
    byte_4CC200D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendSearchResultMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_FriendSearchResultMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_FriendSearchResultMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    FriendSearchResultMenu__Callback(this, 1, v5);
  }
}


void FriendSearchResultMenu__OnClickDecide(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CC200C & 1) == 0 )
  {
    sub_1C713B0(&Method_FriendSearchResultMenu_OnClickDecide__);
    byte_4CC200C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendSearchResultMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_FriendSearchResultMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_FriendSearchResultMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    FriendSearchResultMenu__Callback(this, 2, v5);
  }
}


void FriendSearchResultMenu__OnClickFollow(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CC200F & 1) == 0 )
  {
    sub_1C713B0(&Method_FriendSearchResultMenu_OnClickFollow__);
    byte_4CC200F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendSearchResultMenu_OnClickFollow__;
    if ( (*((_BYTE *)Method_FriendSearchResultMenu_OnClickFollow__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_FriendSearchResultMenu_OnClickFollow__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    FriendSearchResultMenu__Callback(this, 3, v5);
  }
}


void FriendSearchResultMenu__Open(
        FriendSearchResultMenu_o *this,
        OtherUserGameEntity_o *entity,
        int32_t classPos,
        FriendSearchResultMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  ClassButtonControlComponent_o *classButtonControl; // x23
  ClassButtonControlComponent_CallbackFunc_o *v10; // x24
  ClassButtonControlComponent_o *friendIcon; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  int32_t state; // w8
  UILabel_o *titleLabel; // x21
  struct ClassButtonControlComponent_o *v16; // x8
  UISprite_o *offerBackSprite; // x20
  System_Action_o *v18; // x20
  struct FriendSearchResultMenu_CallbackFunc_o **p_callbackFunc; // x19
  int32_t inputDisplayServantType; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4CC200A & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_FriendSearchResultMenu_EndOpen__);
    sub_1C713B0(&Method_FriendSearchResultMenu_changeClass__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_17473/*"btn_bg_26_2"*/);
    sub_1C713B0(&StringLiteral_6558/*"FRIEND_SEARCH_RESULT_TITLE"*/);
    byte_4CC200A = 1;
  }
  inputDisplayServantType = 0;
  classButtonControl = this->fields.classButtonControl;
  v10 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C715FC(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendSearchResultMenu_changeClass__,
    0);
  if ( !classButtonControl )
    goto LABEL_22;
  ClassButtonControlComponent__init(classButtonControl, v10, 0, 0, 0, 0, 0);
  friendIcon = this->fields.classButtonControl;
  if ( !friendIcon )
    goto LABEL_22;
  ClassButtonControlComponent__setCursor(friendIcon, classPos, 0);
  this->fields.otherUserGameEntity = entity;
  sub_1C71354(&this->fields.otherUserGameEntity, entity);
  state = this->fields.state;
  if ( state == 4 )
  {
    FriendSearchResultMenu__EndClose(this, v13);
    state = this->fields.state;
  }
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1C71354(p_callbackFunc, callback);
    *((_DWORD *)p_callbackFunc - 2) = 2;
    return;
  }
  if ( state )
    return;
  this->fields.callbackFunc = callback;
  sub_1C71354(&this->fields.callbackFunc, callback);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  friendIcon = (ClassButtonControlComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6558/*"FRIEND_SEARCH_RESULT_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_22;
  UILabel__set_text(titleLabel, (System_String_o *)friendIcon, 0);
  if ( !entity )
    goto LABEL_16;
  inputDisplayServantType = 0;
  v16 = this->fields.classButtonControl;
  if ( !v16 || (friendIcon = (ClassButtonControlComponent_o *)this->fields.friendIcon) == 0 )
LABEL_22:
    sub_1C71608(friendIcon, v12);
  FriendIconComponent__Set(
    (FriendIconComponent_o *)friendIcon,
    entity,
    1,
    v16->fields.currentCursor,
    &inputDisplayServantType,
    0,
    0,
    this->fields.classBoardMaxNumDictionary,
    0,
    0);
LABEL_16:
  friendIcon = (ClassButtonControlComponent_o *)this->fields.decideButton;
  if ( !friendIcon )
    goto LABEL_22;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)friendIcon, 1, 0);
  offerBackSprite = this->fields.offerBackSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(offerBackSprite, (System_String_o *)StringLiteral_17473/*"btn_bg_26_2"*/, 0);
  AtlasManager__SetDownloadCommonSprite(this->fields.followBackSprite, (System_String_o *)StringLiteral_17473/*"btn_bg_26_2"*/, 0);
  this->fields.state = 1;
  v18 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_FriendSearchResultMenu_EndOpen__, 0);
  BaseMenu__Open((BaseMenu_o *)this, v18, 0);
}


void FriendSearchResultMenu__SerializeFieldNotNullCheck(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  ;
}


void FriendSearchResultMenu__add_callbackFunc(
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

  if ( (byte_4CC2007 & 1) == 0 )
  {
    sub_1C713B0(&FriendSearchResultMenu_CallbackFunc_TypeInfo);
    byte_4CC2007 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (FriendSearchResultMenu_CallbackFunc_c *)v8->klass != FriendSearchResultMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendSearchResultMenu_o *)sub_1C719A4(v8);
  FriendSearchResultMenu__remove_callbackFunc(v11, v12, v13);
}


void FriendSearchResultMenu__changeClass(FriendSearchResultMenu_o *this, int32_t classPos, const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  FriendIconComponent_o *friendIcon; // x0
  OtherUserGameEntity_o *otherUserGameEntity; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t inputDisplayServantType; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4CC200E & 1) == 0 )
  {
    sub_1C713B0(&Method_FriendSearchResultMenu_changeClass__);
    byte_4CC200E = 1;
  }
  v4 = Method_FriendSearchResultMenu_changeClass__;
  if ( (*((_BYTE *)Method_FriendSearchResultMenu_changeClass__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C713C8(Method_FriendSearchResultMenu_changeClass__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C71394(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    inputDisplayServantType = 0;
    classButtonControl = this->fields.classButtonControl;
    if ( !classButtonControl || (friendIcon = this->fields.friendIcon) == 0 )
      sub_1C71608(friendIcon, otherUserGameEntity);
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
      0);
  }
}


int32_t FriendSearchResultMenu__getChangeCursorPos(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  ClassButtonControlComponent_o *classButtonControl; // x0

  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl )
    sub_1C71608(0, method);
  return ClassButtonControlComponent__getChangeCursorPos(classButtonControl, 0);
}


int32_t FriendSearchResultMenu__get_GetCursorPos(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl )
    sub_1C71608(this, method);
  return classButtonControl->fields.currentCursor;
}


void FriendSearchResultMenu__remove_callbackFunc(
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

  if ( (byte_4CC2008 & 1) == 0 )
  {
    sub_1C713B0(&FriendSearchResultMenu_CallbackFunc_TypeInfo);
    byte_4CC2008 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (FriendSearchResultMenu_CallbackFunc_c *)v8->klass != FriendSearchResultMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendSearchResultMenu_o *)sub_1C719A4(v8);
  FriendSearchResultMenu__Init(v11, v12);
}


void FriendSearchResultMenu_CallbackFunc___ctor(
        FriendSearchResultMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C71354(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A9EE20;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9EDC8;
}


System_IAsyncResult_o *FriendSearchResultMenu_CallbackFunc__BeginInvoke(
        FriendSearchResultMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = classPos;
  v12 = result;
  if ( (byte_4CC2011 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&FriendRootComponent_OfferState_TypeInfo);
    byte_4CC2011 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(FriendRootComponent_OfferState_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C71364(this, v10, callback, object);
}


void FriendSearchResultMenu_CallbackFunc__EndInvoke(
        FriendSearchResultMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void FriendSearchResultMenu_CallbackFunc__Invoke(
        FriendSearchResultMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    classPos,
    this->fields.method);
}