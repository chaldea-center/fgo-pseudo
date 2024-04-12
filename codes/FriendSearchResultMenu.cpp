void __fastcall FriendSearchResultMenu___ctor(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_42B2B78 & 1) == 0 )
  {
    sub_B52984(&BaseMenu_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B2B78 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.searchId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.searchId, v9, v2, v3, v4, v5, v6, v7);
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall FriendSearchResultMenu__Callback(
        FriendSearchResultMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct FriendSearchResultMenu_CallbackFunc_o **p_callbackFunc; // x0
  FriendSearchResultMenu_CallbackFunc_o *v10; // x20
  struct FriendSearchResultMenu_CallbackFunc_o *callbackFunc; // t1
  __int64 v13; // x0
  __int64 v14; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v10 = callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B52920((BattleServantConfConponent_o *)p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    classButtonControl = this->fields.classButtonControl;
    if ( !classButtonControl )
      sub_B52A5C(v13, v14);
    FriendSearchResultMenu_CallbackFunc__Invoke(v10, result, classButtonControl->fields.currentCursor, 0LL);
  }
}


void __fastcall FriendSearchResultMenu__Close(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendSearchResultMenu__Close_30010148(this, 0LL, v2);
}


void __fastcall FriendSearchResultMenu__Close_30010148(
        FriendSearchResultMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_42B2B73 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_FriendSearchResultMenu_EndClose__);
    byte_42B2B73 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_FriendSearchResultMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v10, 0LL);
}


void __fastcall FriendSearchResultMenu__EndClose(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  FriendSearchResultMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B52920(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall FriendSearchResultMenu__EndOpen(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall FriendSearchResultMenu__Init(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  System_Collections_Generic_Dictionary_int__int__o *v4; // x20
  System_Collections_Generic_Dictionary_int__int__o **p_classBoardMaxNumDictionary; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  __int64 v13; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v19; // x3
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x22
  __int64 v26; // x9
  ClassBoardSquareMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v28; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v30; // x1
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0

  if ( (byte_42B2B71 & 1) == 0 )
  {
    sub_B52984(&ClassBoardBaseEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B2B71 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_46;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleLabel )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  v4 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v4,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  p_classBoardMaxNumDictionary = &this->fields.classBoardMaxNumDictionary;
  this->fields.classBoardMaxNumDictionary = v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.classBoardMaxNumDictionary,
    (System_Int32_array **)v4,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  titleLabel = (UILabel_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !titleLabel || (titleLabel = (UILabel_o *)titleLabel->fields.rightAnchor) == 0LL )
LABEL_46:
    sub_B52A5C(titleLabel, method);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)titleLabel,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        p_offset += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_15:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v13);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_22:
      v23 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v19);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    v25 = v24;
    if ( v24 )
    {
      v26 = *(&ClassBoardBaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v24 + 300LL) < (unsigned int)v26
        || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v24 + 200LL) + 8 * v26 - 8) != ClassBoardBaseEntity_TypeInfo )
      {
        sub_B52D50(v24);
LABEL_43:
        sub_B52A5C(Master_WarQuestSelectionMaster, v28);
      }
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v25 )
      goto LABEL_43;
    if ( !Master_WarQuestSelectionMaster )
      sub_B52A5C(0LL, v28);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            Master_WarQuestSelectionMaster,
                            *(_DWORD *)(v25 + 16),
                            0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !*p_classBoardMaxNumDictionary )
        sub_B52A5C(OtherThanNoneEntity, v30);
      System_Collections_Generic_Dictionary_int__int___Add(
        *p_classBoardMaxNumDictionary,
        *(_DWORD *)(v25 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v31 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      ++v32;
      v33 += 4;
      if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_39:
    v34 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v19);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall FriendSearchResultMenu__OnClickCancel(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_42B2B75 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2B75 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    FriendSearchResultMenu__Callback(this, 1, v3);
  }
}


void __fastcall FriendSearchResultMenu__OnClickDecide(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_42B2B74 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2B74 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    FriendSearchResultMenu__Callback(this, 2, v3);
  }
}


void __fastcall FriendSearchResultMenu__OnClickFollow(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_42B2B77 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2B77 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    FriendSearchResultMenu__Callback(this, 3, v3);
  }
}


void __fastcall FriendSearchResultMenu__Open(
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int32_t state; // w8
  UILabel_o *titleLabel; // x21
  struct ClassButtonControlComponent_o *v28; // x8
  System_Action_o *v29; // x20
  struct FriendSearchResultMenu_CallbackFunc_o **p_callbackFunc; // x19

  if ( (byte_42B2B72 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_B52984(&Method_FriendSearchResultMenu_EndOpen__);
    sub_B52984(&Method_FriendSearchResultMenu_changeClass__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_6541/*"FRIEND_SEARCH_RESULT_TITLE"*/);
    byte_42B2B72 = 1;
  }
  classButtonControl = this->fields.classButtonControl;
  v10 = (ClassButtonControlComponent_CallbackFunc_o *)sub_B52A54(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_FriendSearchResultMenu_changeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_21;
  ClassButtonControlComponent__init(classButtonControl, v10, 0, 0, 0, 0LL);
  friendIcon = this->fields.classButtonControl;
  if ( !friendIcon )
    goto LABEL_21;
  ClassButtonControlComponent__setCursor(friendIcon, classPos, 0LL);
  this->fields.otherUserGameEntity = entity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.otherUserGameEntity,
    (System_Int32_array **)entity,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  state = this->fields.state;
  if ( state == 4 )
  {
    FriendSearchResultMenu__EndClose(this, v19);
    state = this->fields.state;
  }
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_B52920(
      (BattleServantConfConponent_o *)p_callbackFunc,
      (System_Int32_array **)callback,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    *((_DWORD *)p_callbackFunc - 2) = 2;
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    friendIcon = (ClassButtonControlComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6541/*"FRIEND_SEARCH_RESULT_TITLE"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)friendIcon, 0LL);
      if ( entity )
      {
        v28 = this->fields.classButtonControl;
        if ( !v28 )
          goto LABEL_21;
        friendIcon = (ClassButtonControlComponent_o *)this->fields.friendIcon;
        if ( !friendIcon )
          goto LABEL_21;
        FriendIconComponent__Set(
          (FriendIconComponent_o *)friendIcon,
          entity,
          1,
          v28->fields.currentCursor,
          0,
          0,
          0,
          this->fields.classBoardMaxNumDictionary,
          0LL);
      }
      friendIcon = (ClassButtonControlComponent_o *)this->fields.decideButton;
      if ( friendIcon )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)friendIcon, 1, 0LL);
        this->fields.state = 1;
        v29 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(v29, (Il2CppObject *)this, Method_FriendSearchResultMenu_EndOpen__, 0LL);
        BaseMenu__Open((BaseMenu_o *)this, v29, 0LL);
        return;
      }
    }
LABEL_21:
    sub_B52A5C(friendIcon, v12);
  }
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

  if ( (byte_42B2B6F & 1) == 0 )
  {
    sub_B52984(&FriendSearchResultMenu_CallbackFunc_TypeInfo);
    byte_42B2B6F = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
  FriendSearchResultMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall FriendSearchResultMenu__changeClass(
        FriendSearchResultMenu_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  FriendIconComponent_o *friendIcon; // x0
  OtherUserGameEntity_o *otherUserGameEntity; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  if ( (byte_42B2B76 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2B76 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    classButtonControl = this->fields.classButtonControl;
    if ( !classButtonControl || (friendIcon = this->fields.friendIcon) == 0LL )
      sub_B52A5C(friendIcon, otherUserGameEntity);
    FriendIconComponent__Set(
      friendIcon,
      otherUserGameEntity,
      1,
      classButtonControl->fields.currentCursor,
      0,
      0,
      0,
      this->fields.classBoardMaxNumDictionary,
      0LL);
  }
}


int32_t __fastcall FriendSearchResultMenu__getChangeCursorPos(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  ClassButtonControlComponent_o *classButtonControl; // x0

  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl )
    sub_B52A5C(0LL, method);
  return ClassButtonControlComponent__getChangeCursorPos(classButtonControl, 0LL);
}


int32_t __fastcall FriendSearchResultMenu__get_GetCursorPos(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl )
    sub_B52A5C(this, method);
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

  if ( (byte_42B2B70 & 1) == 0 )
  {
    sub_B52984(&FriendSearchResultMenu_CallbackFunc_TypeInfo);
    byte_42B2B70 = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
  FriendSearchResultMenu__EndClose(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendSearchResultMenu_CallbackFunc___ctor(
        FriendSearchResultMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall FriendSearchResultMenu_CallbackFunc__BeginInvoke(
        FriendSearchResultMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v11; // [xsp+18h] [xbp-28h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-24h] BYREF

  v11 = classPos;
  v12 = result;
  if ( (byte_42ACE30 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&FriendRootComponent_OfferState_TypeInfo);
    byte_42ACE30 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(FriendRootComponent_OfferState_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_B52928(this, v10, callback, object);
}


void __fastcall FriendSearchResultMenu_CallbackFunc__EndInvoke(
        FriendSearchResultMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendSearchResultMenu_CallbackFunc__Invoke(
        FriendSearchResultMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  FriendSearchResultMenu_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  FriendSearchResultMenu_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  FriendSearchResultMenu_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (FriendSearchResultMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&classPos, method);
      if ( (sub_B529B4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)classPos, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)classPos, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B529AC(v23);
      v26 = sub_B52DB0(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AEB880(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B52A34(v18, v23);
        (*v20)(v22, v28, (unsigned int)classPos, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AEB880(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)classPos,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)classPos,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)classPos, v23);
    goto LABEL_38;
  }
}