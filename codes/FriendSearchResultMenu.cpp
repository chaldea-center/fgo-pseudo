void FriendSearchResultMenu___ctor(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  __int64 v10; // x1
  __int64 v11; // x2

  if ( (byte_596B0FC & 1) == 0 )
  {
    sub_2213A60(&BaseMenu_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B0FC = 1;
  }
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.searchId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.searchId, v9, v2, v3, v4, v5, v6, v7);
  if ( !*(&BaseMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, v10, v11);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void FriendSearchResultMenu__Callback(FriendSearchResultMenu_o *this, int32_t result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct FriendSearchResultMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct FriendSearchResultMenu_CallbackFunc_o *v10; // x21
  struct FriendSearchResultMenu_CallbackFunc_o *callbackFunc; // t1
  __int64 v13; // x0
  __int64 v14; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v10 = callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    classButtonControl = this->fields.classButtonControl;
    if ( !classButtonControl )
      sub_2213CDC(v13, v14);
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))v10->fields.invoke_impl)(
      v10->fields.method_code,
      (unsigned int)result,
      (unsigned int)classButtonControl->fields.currentCursor,
      v10->fields.method);
  }
}


void FriendSearchResultMenu__Close(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendSearchResultMenu__Close_39372448(this, 0, v2);
}


void FriendSearchResultMenu__Close_39372448(
        FriendSearchResultMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596B0F7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_FriendSearchResultMenu_EndClose__);
    byte_596B0F7 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_FriendSearchResultMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v11, 0);
}


void FriendSearchResultMenu__EndClose(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  FriendSearchResultMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void FriendSearchResultMenu__EndOpen(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void FriendSearchResultMenu__Init(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  System_Collections_Generic_Dictionary_int__int__c *v4; // x0
  System_Collections_Generic_Dictionary_int__int__o *v5; // x21
  System_Collections_Generic_Dictionary_int__int__o **p_classBoardMaxNumDictionary; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int *p_offset; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x21
  Il2CppObject *Master_object; // x0
  __int64 v32; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v34; // x1
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  System_Collections_Generic_IEnumerator_T__o *v39; // [xsp+18h] [xbp-48h]

  if ( (byte_596B0F5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B0F5 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_47;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !titleLabel )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  v4 = System_Collections_Generic_Dictionary_int__int__TypeInfo;
  this->fields.state = 0;
  v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(v4);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v5,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.classBoardMaxNumDictionary = v5;
  p_classBoardMaxNumDictionary = &this->fields.classBoardMaxNumDictionary;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.classBoardMaxNumDictionary,
    (int32_t)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13, v14);
  titleLabel = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !titleLabel || (titleLabel = (UILabel_o *)titleLabel->fields.rightAnchor) == 0 )
LABEL_47:
    sub_2213CDC(titleLabel, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)titleLabel,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
  v39 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v16);
  for ( i = Enumerator; ; i = v39 )
  {
    klass = i->klass;
    v19 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_15;
      }
      v21 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_15:
      v21 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            i,
            *(_QWORD *)(v21 + 8));
    if ( (v22 & 1) == 0 )
      break;
    if ( !v39 )
      sub_2213CDC(v22, v23);
    v24 = v39->klass;
    v25 = *(unsigned __int16 *)&v39->klass->_2.rank;
    if ( *(_WORD *)&v39->klass->_2.rank )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__c **)v26 - 1) != System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_23;
      }
      v27 = (__int64)&v24->vtable[*v26];
    }
    else
    {
LABEL_23:
      v27 = sub_224BC3C(v39, System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, 0);
    }
    v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
            v39,
            *(_QWORD *)(v27 + 8));
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v28, v29);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v30 )
      sub_2213CDC(Master_object, v32);
    if ( !Master_object )
      sub_2213CDC(0, v32);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            (ClassBoardSquareMaster_o *)Master_object,
                            *(_DWORD *)(v30 + 16),
                            0);
    if ( OtherThanNoneEntity )
    {
      if ( !*p_classBoardMaxNumDictionary )
        sub_2213CDC(OtherThanNoneEntity, v34);
      System_Collections_Generic_Dictionary_int__int___Add(
        *p_classBoardMaxNumDictionary,
        *(_DWORD *)(v30 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  if ( v39 )
  {
    v35 = v39->klass;
    v36 = *(unsigned __int16 *)&v39->klass->_2.rank;
    if ( *(_WORD *)&v39->klass->_2.rank )
    {
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_39;
      }
      v38 = (__int64)&v35->vtable[*v37];
    }
    else
    {
LABEL_39:
      v38 = sub_224BC3C(v39, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(v39, *(_QWORD *)(v38 + 8));
  }
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void FriendSearchResultMenu__OnClickCancel(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596B0F9 & 1) == 0 )
  {
    sub_2213A60(&Method_FriendSearchResultMenu_OnClickCancel__);
    byte_596B0F9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendSearchResultMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_FriendSearchResultMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FriendSearchResultMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    FriendSearchResultMenu__Callback(this, 1, v5);
  }
}


void FriendSearchResultMenu__OnClickDecide(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596B0F8 & 1) == 0 )
  {
    sub_2213A60(&Method_FriendSearchResultMenu_OnClickDecide__);
    byte_596B0F8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendSearchResultMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_FriendSearchResultMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FriendSearchResultMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    FriendSearchResultMenu__Callback(this, 2, v5);
  }
}


void FriendSearchResultMenu__OnClickFollow(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596B0FB & 1) == 0 )
  {
    sub_2213A60(&Method_FriendSearchResultMenu_OnClickFollow__);
    byte_596B0FB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendSearchResultMenu_OnClickFollow__;
    if ( (*((_BYTE *)Method_FriendSearchResultMenu_OnClickFollow__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FriendSearchResultMenu_OnClickFollow__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t state; // w8
  __int64 v27; // x1
  __int64 v28; // x2
  UILabel_o *titleLabel; // x21
  struct ClassButtonControlComponent_o *v30; // x8
  __int64 v31; // x1
  __int64 v32; // x2
  UISprite_o *offerBackSprite; // x20
  System_Action_o *v34; // x20
  struct FriendSearchResultMenu_CallbackFunc_o **p_callbackFunc; // x19
  int32_t inputDisplayServantType; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_596B0F6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_FriendSearchResultMenu_EndOpen__);
    sub_2213A60(&Method_FriendSearchResultMenu_changeClass__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_18215/*"btn_bg_26_2"*/);
    sub_2213A60(&StringLiteral_6849/*"FRIEND_SEARCH_RESULT_TITLE"*/);
    byte_596B0F6 = 1;
  }
  classButtonControl = this->fields.classButtonControl;
  inputDisplayServantType = 0;
  v10 = (ClassButtonControlComponent_CallbackFunc_o *)sub_2213CCC(ClassButtonControlComponent_CallbackFunc_TypeInfo);
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.otherUserGameEntity,
    (int32_t)entity,
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
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_callbackFunc, (int32_t)callback, v20, v21, v22, v23, v24, v25);
    *((_DWORD *)p_callbackFunc - 2) = 2;
    return;
  }
  if ( state )
    return;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v28);
  friendIcon = (ClassButtonControlComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6849/*"FRIEND_SEARCH_RESULT_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_22;
  UILabel__set_text(titleLabel, (System_String_o *)friendIcon, 0);
  if ( !entity )
    goto LABEL_16;
  v30 = this->fields.classButtonControl;
  inputDisplayServantType = 0;
  if ( !v30 || (friendIcon = (ClassButtonControlComponent_o *)this->fields.friendIcon) == 0 )
LABEL_22:
    sub_2213CDC(friendIcon, v12);
  FriendIconComponent__Set(
    (FriendIconComponent_o *)friendIcon,
    entity,
    1,
    v30->fields.currentCursor,
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
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v31, v32);
  AtlasManager__SetDownloadCommonSprite(offerBackSprite, (System_String_o *)StringLiteral_18215/*"btn_bg_26_2"*/, 0);
  AtlasManager__SetDownloadCommonSprite(this->fields.followBackSprite, (System_String_o *)StringLiteral_18215/*"btn_bg_26_2"*/, 0);
  this->fields.state = 1;
  v34 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)this, Method_FriendSearchResultMenu_EndOpen__, 0);
  BaseMenu__Open((BaseMenu_o *)this, v34, 0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  FriendSearchResultMenu_o *v13; // x0
  FriendSearchResultMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596B0F3 & 1) == 0 )
  {
    sub_2213A60(&FriendSearchResultMenu_CallbackFunc_TypeInfo);
    byte_596B0F3 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (FriendSearchResultMenu_o *)sub_221405C(v8, FriendSearchResultMenu_CallbackFunc_TypeInfo, v9, v10);
  FriendSearchResultMenu__remove_callbackFunc(v13, v14, v15);
}


void FriendSearchResultMenu__changeClass(FriendSearchResultMenu_o *this, int32_t classPos, const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  FriendIconComponent_o *friendIcon; // x0
  OtherUserGameEntity_o *otherUserGameEntity; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t inputDisplayServantType; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_596B0FA & 1) == 0 )
  {
    sub_2213A60(&Method_FriendSearchResultMenu_changeClass__);
    byte_596B0FA = 1;
  }
  v4 = Method_FriendSearchResultMenu_changeClass__;
  inputDisplayServantType = 0;
  if ( (*((_BYTE *)Method_FriendSearchResultMenu_changeClass__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_2213A78(Method_FriendSearchResultMenu_changeClass__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    classButtonControl = this->fields.classButtonControl;
    inputDisplayServantType = 0;
    if ( !classButtonControl || (friendIcon = this->fields.friendIcon) == 0 )
      sub_2213CDC(friendIcon, otherUserGameEntity);
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
    sub_2213CDC(0, method);
  return ClassButtonControlComponent__getChangeCursorPos(classButtonControl, 0);
}


int32_t FriendSearchResultMenu__get_GetCursorPos(FriendSearchResultMenu_o *this, const MethodInfo *method)
{
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl )
    sub_2213CDC(this, method);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  FriendSearchResultMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596B0F4 & 1) == 0 )
  {
    sub_2213A60(&FriendSearchResultMenu_CallbackFunc_TypeInfo);
    byte_596B0F4 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (FriendSearchResultMenu_o *)sub_221405C(v8, FriendSearchResultMenu_CallbackFunc_TypeInfo, v9, v10);
  FriendSearchResultMenu__SerializeFieldNotNullCheck(v13, v14);
}


void FriendSearchResultMenu_CallbackFunc___ctor(
        FriendSearchResultMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2001038;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2000FE0;
}


System_IAsyncResult_o *FriendSearchResultMenu_CallbackFunc__BeginInvoke(
        FriendSearchResultMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = result;
  v11 = classPos;
  if ( (byte_596B0FD & 1) == 0 )
  {
    sub_2213A60(&FriendRootComponent_OfferState_TypeInfo);
    byte_596B0FD = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(FriendRootComponent_OfferState_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return sub_2213A14(this, v10, callback, object);
}


void FriendSearchResultMenu_CallbackFunc__EndInvoke(
        FriendSearchResultMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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