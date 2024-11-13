void __fastcall FriendSearchResultMenu___ctor(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Int32_array *v8; // x0
  __int64 v9; // x1
  il2cpp_array_size_t max_length; // w8
  void *v11; // x1
  __int64 v12; // x1

  if ( (byte_4B114E2 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMenu_TypeInfo, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B114E2 = 1;
  }
  v8 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v8 )
    sub_1BCAA3C(0LL, v9);
  max_length = v8->max_length;
  if ( !max_length || (v8->m_Items[1] = 95, max_length == 1) )
    sub_1BCAA44(v8, v8);
  v8->m_Items[2] = 46;
  this->fields.OFFER_BUTTON_SIZE = v8;
  sub_1BCA784(&this->fields.OFFER_BUTTON_SIZE, v8);
  this->fields.OFFER_MARK_POS.fields.y = -1.0;
  *(_QWORD *)&this->fields.OFFER_TITLE_SPRITE_WIDTH = 0xC19800000000002ALL;
  v11 = StringLiteral_1/*""*/;
  this->fields.searchId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(&this->fields.searchId, v11);
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, v12);
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
    v8 = sub_1BCA784(p_callbackFunc, 0LL);
    classButtonControl = this->fields.classButtonControl;
    if ( !classButtonControl )
      sub_1BCAA3C(v8, v9);
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

  FriendSearchResultMenu__Close_31503772(this, 0LL, v2);
}


void __fastcall FriendSearchResultMenu__Close_31503772(
        FriendSearchResultMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B114DD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_FriendSearchResultMenu_EndClose__, v5, v6);
    byte_4B114DD = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_FriendSearchResultMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v10, 0LL);
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
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL);
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  UILabel_o *titleLabel; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Collections_Generic_Dictionary_int__int__o *v30; // x20
  System_Collections_Generic_Dictionary_int__int__o **p_classBoardMaxNumDictionary; // x21
  __int64 v32; // x1
  __int64 v33; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x0
  ClassBoardBaseEntity_c *v44; // x1
  __int64 v45; // x22
  __int64 methodPtr_low; // x9
  Il2CppObject *Master_object; // x0
  __int64 v48; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v50; // x1
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0

  if ( (byte_4B114DB & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardBaseEntity_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v22, v23);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v24, v25);
    byte_4B114DB = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_44;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleLabel )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  v30 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v27,
                                                               v28,
                                                               v29);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v30,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.classBoardMaxNumDictionary = v30;
  p_classBoardMaxNumDictionary = &this->fields.classBoardMaxNumDictionary;
  sub_1BCA784(&this->fields.classBoardMaxNumDictionary, v30);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v32);
  titleLabel = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !titleLabel || (titleLabel = (UILabel_o *)titleLabel->fields.leftAnchor) == 0LL )
LABEL_44:
    sub_1BCAA3C(titleLabel, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)titleLabel,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v33);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v36;
        p_offset += 4;
        if ( !v36 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v39 = Enumerator->klass;
    v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v41 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_21;
      }
      v42 = (__int64)&v39->vtable[*v41].method;
    }
    else
    {
LABEL_21:
      v42 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v43 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
            Enumerator,
            *(_QWORD *)(v42 + 8));
    v45 = v43;
    if ( v43 )
    {
      v44 = ClassBoardBaseEntity_TypeInfo;
      methodPtr_low = LOBYTE(ClassBoardBaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v43 + 304LL) < (unsigned int)methodPtr_low
        || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v43 + 200LL) + 8 * methodPtr_low - 8) != ClassBoardBaseEntity_TypeInfo )
      {
        Master_object = (Il2CppObject *)sub_1BCACFC(v43);
LABEL_41:
        sub_1BCAA3C(Master_object, v48);
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v44);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v45 )
      goto LABEL_41;
    if ( !Master_object )
      sub_1BCAA3C(0LL, v48);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            (ClassBoardSquareMaster_o *)Master_object,
                            *(_DWORD *)(v45 + 16),
                            0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !*p_classBoardMaxNumDictionary )
        sub_1BCAA3C(OtherThanNoneEntity, v50);
      System_Collections_Generic_Dictionary_int__int___Add(
        *p_classBoardMaxNumDictionary,
        *(_DWORD *)(v45 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v51 = Enumerator->klass;
  v52 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_37;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_37:
    v54 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(Enumerator, *(_QWORD *)(v54 + 8));
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall FriendSearchResultMenu__OnClickCancel(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B114DF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendSearchResultMenu_OnClickCancel__, method, v2);
    byte_4B114DF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_FriendSearchResultMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_FriendSearchResultMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_FriendSearchResultMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    FriendSearchResultMenu__Callback(this, 1, v6);
  }
}


void __fastcall FriendSearchResultMenu__OnClickDecide(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B114DE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendSearchResultMenu_OnClickDecide__, method, v2);
    byte_4B114DE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_FriendSearchResultMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_FriendSearchResultMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_FriendSearchResultMenu_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    FriendSearchResultMenu__Callback(this, 2, v6);
  }
}


void __fastcall FriendSearchResultMenu__OnClickFollow(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B114E1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendSearchResultMenu_OnClickFollow__, method, v2);
    byte_4B114E1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_FriendSearchResultMenu_OnClickFollow__;
    if ( (*((_BYTE *)Method_FriendSearchResultMenu_OnClickFollow__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_FriendSearchResultMenu_OnClickFollow__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    FriendSearchResultMenu__Callback(this, 3, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendSearchResultMenu__Open(
        FriendSearchResultMenu_o *this,
        OtherUserGameEntity_o *entity,
        int32_t classPos,
        FriendSearchResultMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  ClassButtonControlComponent_o *classButtonControl; // x23
  ClassButtonControlComponent_CallbackFunc_o *v24; // x24
  ClassButtonControlComponent_o *friendIcon; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x1
  int32_t state; // w8
  __int64 v29; // x1
  UILabel_o *titleLabel; // x21
  struct ClassButtonControlComponent_o *v31; // x8
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  UISprite_o *offerBackSprite; // x20
  struct System_Int32_array *OFFER_BUTTON_SIZE; // x8
  struct System_Int32_array *v37; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v39; // x0
  struct System_Int32_array *v40; // x8
  struct System_Int32_array *v41; // x8
  UnityEngine_GameObject_o *v42; // x0
  System_Action_o *v43; // x20
  struct FriendSearchResultMenu_CallbackFunc_o **p_callbackFunc; // x19

  if ( (byte_4B114DC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, entity, *(_QWORD *)&classPos);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&ClassButtonControlComponent_CallbackFunc_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_FriendSearchResultMenu_EndOpen__, v13, v14);
    sub_1BCA7E0(&Method_FriendSearchResultMenu_changeClass__, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_17656/*"btn_bg_26_2"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_6651/*"FRIEND_SEARCH_RESULT_TITLE"*/, v21, v22);
    byte_4B114DC = 1;
  }
  classButtonControl = this->fields.classButtonControl;
  v24 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                        ClassButtonControlComponent_CallbackFunc_TypeInfo,
                                                        entity,
                                                        *(_QWORD *)&classPos,
                                                        callback);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v24,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendSearchResultMenu_changeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_40;
  ClassButtonControlComponent__init(classButtonControl, v24, 0, 0, 0, 0LL);
  friendIcon = this->fields.classButtonControl;
  if ( !friendIcon )
    goto LABEL_40;
  ClassButtonControlComponent__setCursor(friendIcon, classPos, 0LL);
  this->fields.otherUserGameEntity = entity;
  sub_1BCA784(&this->fields.otherUserGameEntity, entity);
  state = this->fields.state;
  if ( state == 4 )
  {
    FriendSearchResultMenu__EndClose(this, v27);
    state = this->fields.state;
  }
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1BCA784(p_callbackFunc, callback);
    *((_DWORD *)p_callbackFunc - 1) = 2;
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_1BCA784(&this->fields.callbackFunc, callback);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
    friendIcon = (ClassButtonControlComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6651/*"FRIEND_SEARCH_RESULT_TITLE"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)friendIcon, 0LL);
      if ( entity )
      {
        v31 = this->fields.classButtonControl;
        if ( !v31 )
          goto LABEL_40;
        friendIcon = (ClassButtonControlComponent_o *)this->fields.friendIcon;
        if ( !friendIcon )
          goto LABEL_40;
        FriendIconComponent__Set(
          (FriendIconComponent_o *)friendIcon,
          entity,
          1,
          v31->fields.currentCursor,
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
        if ( !ConstantMaster__IsFLAG20240804(0LL) )
        {
LABEL_37:
          this->fields.state = 1;
          v43 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v32, v33, v34);
          System_Action___ctor(v43, (Il2CppObject *)this, Method_FriendSearchResultMenu_EndOpen__, 0LL);
          BaseMenu__Open((BaseMenu_o *)this, v43, 0LL);
          return;
        }
        offerBackSprite = this->fields.offerBackSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v32);
        friendIcon = (ClassButtonControlComponent_o *)AtlasManager__SetDownloadCommonSprite(
                                                        offerBackSprite,
                                                        (System_String_o *)StringLiteral_17656/*"btn_bg_26_2"*/,
                                                        0LL);
        OFFER_BUTTON_SIZE = this->fields.OFFER_BUTTON_SIZE;
        if ( OFFER_BUTTON_SIZE )
        {
          if ( !OFFER_BUTTON_SIZE->max_length )
            goto LABEL_41;
          friendIcon = (ClassButtonControlComponent_o *)this->fields.offerBackSprite;
          if ( !friendIcon )
            goto LABEL_40;
          UIWidget__set_width((UIWidget_o *)friendIcon, OFFER_BUTTON_SIZE->m_Items[1], 0LL);
          v37 = this->fields.OFFER_BUTTON_SIZE;
          if ( !v37 )
            goto LABEL_40;
          if ( v37->max_length <= 1 )
            goto LABEL_41;
          friendIcon = (ClassButtonControlComponent_o *)this->fields.offerBackSprite;
          if ( !friendIcon )
            goto LABEL_40;
          UIWidget__set_height((UIWidget_o *)friendIcon, v37->m_Items[2], 0LL);
          friendIcon = (ClassButtonControlComponent_o *)this->fields.offerTitleSprite;
          if ( !friendIcon )
            goto LABEL_40;
          UIWidget__set_width((UIWidget_o *)friendIcon, this->fields.OFFER_TITLE_SPRITE_WIDTH, 0LL);
          friendIcon = (ClassButtonControlComponent_o *)this->fields.offerMarkSprite;
          if ( !friendIcon )
            goto LABEL_40;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)friendIcon, 0LL);
          GameObjectExtensions__SetLocalPosition_34330940(gameObject, this->fields.OFFER_MARK_POS, 0LL);
          friendIcon = (ClassButtonControlComponent_o *)this->fields.decideButton;
          if ( !friendIcon )
            goto LABEL_40;
          v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)friendIcon, 0LL);
          GameObjectExtensions__SetLocalPositionX(v39, 413.5, 0LL);
          friendIcon = (ClassButtonControlComponent_o *)AtlasManager__SetDownloadCommonSprite(
                                                          this->fields.followBackSprite,
                                                          (System_String_o *)StringLiteral_17656/*"btn_bg_26_2"*/,
                                                          0LL);
          v40 = this->fields.OFFER_BUTTON_SIZE;
          if ( !v40 )
            goto LABEL_40;
          if ( !v40->max_length )
            goto LABEL_41;
          friendIcon = (ClassButtonControlComponent_o *)this->fields.followBackSprite;
          if ( !friendIcon )
            goto LABEL_40;
          UIWidget__set_width((UIWidget_o *)friendIcon, v40->m_Items[1], 0LL);
          v41 = this->fields.OFFER_BUTTON_SIZE;
          if ( !v41 )
            goto LABEL_40;
          if ( v41->max_length <= 1 )
LABEL_41:
            sub_1BCAA44(friendIcon, v26);
          friendIcon = (ClassButtonControlComponent_o *)this->fields.followBackSprite;
          if ( friendIcon )
          {
            UIWidget__set_height((UIWidget_o *)friendIcon, v41->m_Items[2], 0LL);
            friendIcon = (ClassButtonControlComponent_o *)this->fields.followButton;
            if ( friendIcon )
            {
              v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)friendIcon, 0LL);
              GameObjectExtensions__SetLocalPositionX(v42, 413.5, 0LL);
              goto LABEL_37;
            }
          }
        }
      }
    }
LABEL_40:
    sub_1BCAA3C(friendIcon, v26);
  }
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

  if ( (byte_4B114D9 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendSearchResultMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B114D9 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendSearchResultMenu_o *)sub_1BCACFC(v8);
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

  if ( (byte_4B114E0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendSearchResultMenu_changeClass__, *(_QWORD *)&classPos, method);
    byte_4B114E0 = 1;
  }
  v4 = Method_FriendSearchResultMenu_changeClass__;
  if ( (*((_BYTE *)Method_FriendSearchResultMenu_changeClass__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_FriendSearchResultMenu_changeClass__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    classButtonControl = this->fields.classButtonControl;
    if ( !classButtonControl || (friendIcon = this->fields.friendIcon) == 0LL )
      sub_1BCAA3C(friendIcon, otherUserGameEntity);
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
    sub_1BCAA3C(0LL, method);
  return ClassButtonControlComponent__getChangeCursorPos(classButtonControl, 0LL);
}


int32_t __fastcall FriendSearchResultMenu__get_GetCursorPos(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl )
    sub_1BCAA3C(this, method);
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

  if ( (byte_4B114DA & 1) == 0 )
  {
    sub_1BCA7E0(&FriendSearchResultMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B114DA = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendSearchResultMenu_o *)sub_1BCACFC(v8);
  FriendSearchResultMenu__SerializeFieldNotNullCheck(v11, v12);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A05834;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A057DC;
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
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = classPos;
  v14 = result;
  if ( (byte_4B114E3 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&classPos);
    sub_1BCA7E0(&FriendRootComponent_OfferState_TypeInfo, v9, v10);
    byte_4B114E3 = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(FriendRootComponent_OfferState_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall FriendSearchResultMenu_CallbackFunc__EndInvoke(
        FriendSearchResultMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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