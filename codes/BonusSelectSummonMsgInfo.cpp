void __fastcall BonusSelectSummonMsgInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B12852 & 1) == 0 )
  {
    sub_1BCA7E0(&BonusSelectSummonMsgInfo_TypeInfo, v1, v2);
    byte_4B12852 = 1;
  }
  LODWORD(BonusSelectSummonMsgInfo_TypeInfo->static_fields->BONUS_SELECT_MESSAGE_LABEL_Y) = (struct BonusSelectSummonMsgInfo_StaticFields)-1029963776;
}


void __fastcall BonusSelectSummonMsgInfo___ctor(BonusSelectSummonMsgInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B12851 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v5, v6);
    byte_4B12851 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_GameObject__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.menberList = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.menberList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BonusSelectSummonMsgInfo__CheckAssert(BonusSelectSummonMsgInfo_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BonusSelectSummonMsgInfo__Init(BonusSelectSummonMsgInfo_o *this, const MethodInfo *method)
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
  UILabel_o *titleLabel; // x0
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1284D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&string_TypeInfo, v14, v15);
    byte_4B1284D = 1;
  }
  memset(&v20, 0, sizeof(v20));
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.selectInfoLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  BonusSelectSummonMsgInfo__InitMsgLabel(this, v17);
  titleLabel = (UILabel_o *)this->fields.menberList;
  if ( !titleLabel )
    goto LABEL_15;
  if ( SLODWORD(titleLabel->fields.m_CancellationTokenSource) >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      (System_Collections_Generic_List_object__o *)titleLabel,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v20.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
      UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleLabel )
LABEL_15:
    sub_1BCAA3C(titleLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
}


void __fastcall BonusSelectSummonMsgInfo__InitMsgLabel(BonusSelectSummonMsgInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *msgLabelSplitTop; // x0

  if ( (byte_4B12850 & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    byte_4B12850 = 1;
  }
  msgLabelSplitTop = this->fields.msgLabelSplitTop;
  if ( !msgLabelSplitTop
    || (UILabel__set_text(msgLabelSplitTop, string_TypeInfo->static_fields->Empty, 0LL),
        (msgLabelSplitTop = this->fields.msgLabelSplitCenter) == 0LL)
    || (UILabel__set_text(msgLabelSplitTop, string_TypeInfo->static_fields->Empty, 0LL),
        (msgLabelSplitTop = this->fields.msgLabelSplitLow) == 0LL)
    || (UILabel__set_text(msgLabelSplitTop, string_TypeInfo->static_fields->Empty, 0LL),
        (msgLabelSplitTop = this->fields.msgLabel) == 0LL) )
  {
    sub_1BCAA3C(msgLabelSplitTop, method);
  }
  UILabel__set_text(msgLabelSplitTop, string_TypeInfo->static_fields->Empty, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonMsgInfo__SetBase(
        BonusSelectSummonMsgInfo_o *this,
        int32_t gachaId,
        System_String_o *title,
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData,
        BonusSelectSummonAssetManager_o *assetManager,
        const MethodInfo *method)
{
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v30; // x1
  __int64 v31; // x1
  UILabel_o *selectInfoLabel; // x23
  const MethodInfo *v33; // x1
  Il2CppObject *Master_object; // x21
  __int64 v35; // x25
  int v36; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x22
  __int64 v38; // x26
  __int64 v39; // x28
  Il2CppObject *MsgInfoMenberPrefab_k__BackingField; // x23
  __int64 v41; // x1
  UnityEngine_Transform_o *transform; // x24
  Il2CppObject *v43; // x23
  BonusSelectSummonMsgInfoMenber_o *v44; // x24
  const MethodInfo *v45; // x2
  Il2CppObject *Entity; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x8
  _QWORD *v54; // x9
  __int64 klass_low; // x10
  __int64 v56; // x8
  __int64 v57; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1284F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, *(_QWORD *)&gachaId, title);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfoMenber___, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v19, v20);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v23, v24);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v25, v26);
    sub_1BCA7E0(&StringLiteral_3835/*"CONFIRM_BONUS_SELECT_SUMMON_INFO"*/, v27, v28);
    byte_4B1284F = 1;
  }
  v57 = 0LL;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
  if ( !gameObject )
    goto LABEL_38;
  UILabel__set_text((UILabel_o *)gameObject, title, 0LL);
  selectInfoLabel = this->fields.selectInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3835/*"CONFIRM_BONUS_SELECT_SUMMON_INFO"*/, 0LL);
  if ( !selectInfoLabel )
    goto LABEL_38;
  UILabel__set_text(selectInfoLabel, (System_String_o *)gameObject, 0LL);
  if ( !tryGetBonusSelectData )
    goto LABEL_38;
  if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64 *, _QWORD, _QWORD))tryGetBonusSelectData->fields.m_target)(
          tryGetBonusSelectData->fields.original_method_info,
          &v57,
          (unsigned int)gachaId,
          *(_QWORD *)&tryGetBonusSelectData->fields.extra_arg) & 1) != 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !v57 )
      goto LABEL_38;
    v35 = *(_QWORD *)(v57 + 24);
    if ( v35 )
    {
      v36 = *(_DWORD *)(v35 + 24);
      if ( v36 >= 1 )
      {
        v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
        v38 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v38 >= v36 )
            sub_1BCAA44(gameObject, v30);
          if ( !assetManager )
            break;
          gameObject = (UnityEngine_GameObject_o *)this->fields.grid;
          if ( !gameObject )
            break;
          v39 = *(_QWORD *)(v35 + 32 + 8 * v38);
          MsgInfoMenberPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._MsgInfoMenberPrefab_k__BackingField;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__49903816(
                                                     MsgInfoMenberPrefab_k__BackingField,
                                                     transform,
                                                     (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
          if ( !gameObject )
            break;
          v43 = (Il2CppObject *)gameObject;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     gameObject,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfoMenber___);
          if ( !gameObject )
            break;
          v44 = (BonusSelectSummonMsgInfoMenber_o *)gameObject;
          BonusSelectSummonMsgInfoMenber__Init((BonusSelectSummonMsgInfoMenber_o *)gameObject, v30);
          if ( !v39 || !Master_object )
            break;
          gameObject = (UnityEngine_GameObject_o *)GiftMaster__getDataById(
                                                     (GiftMaster_o *)Master_object,
                                                     *(_DWORD *)(v39 + 28),
                                                     0LL);
          if ( gameObject )
          {
            if ( !v37 )
              break;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       v37,
                       (int32_t)gameObject[1].klass,
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          }
          else
          {
            Entity = 0LL;
          }
          BonusSelectSummonMsgInfoMenber__Set(v44, (ServantEntity_o *)Entity, v45);
          gameObject = (UnityEngine_GameObject_o *)this->fields.menberList;
          if ( !gameObject )
            break;
          v53 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
          v54 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++HIDWORD(gameObject[1].klass);
          if ( !v53 )
            break;
          klass_low = SLODWORD(gameObject[1].klass);
          if ( (unsigned int)klass_low >= *(_DWORD *)(v53 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)gameObject,
              v43,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          }
          else
          {
            v56 = v53 + 8 * klass_low;
            LODWORD(gameObject[1].klass) = klass_low + 1;
            *(_QWORD *)(v56 + 32) = v43;
            sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 32), (int64_t)v43, v47, v48, v49, v50, v51, v52);
          }
          v36 = *(_DWORD *)(v35 + 24);
          if ( (int)++v38 >= v36 )
            goto LABEL_35;
        }
LABEL_38:
        sub_1BCAA3C(gameObject, v30);
      }
    }
LABEL_35:
    gameObject = (UnityEngine_GameObject_o *)this->fields.grid;
    if ( !gameObject )
      goto LABEL_38;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0LL);
  }
  BonusSelectSummonMsgInfo__InitMsgLabel(this, v33);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonMsgInfo__SetBonusSelectBuyStoneDialog(
        BonusSelectSummonMsgInfo_o *this,
        int32_t gachaId,
        System_String_o *title,
        System_String_o *msg,
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData,
        BonusSelectSummonAssetManager_o *assetManager,
        const MethodInfo *method)
{
  __int64 v13; // x1
  UILabel_o *msgLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  BonusSelectSummonMsgInfo_c *v17; // x8
  UnityEngine_GameObject_o *v18; // x19

  if ( (byte_4B1284E & 1) == 0 )
  {
    sub_1BCA7E0(&BonusSelectSummonMsgInfo_TypeInfo, *(_QWORD *)&gachaId, title);
    byte_4B1284E = 1;
  }
  BonusSelectSummonMsgInfo__SetBase(
    this,
    gachaId,
    title,
    tryGetBonusSelectData,
    assetManager,
    (const MethodInfo *)assetManager);
  msgLabel = this->fields.msgLabel;
  if ( !msgLabel || (UILabel__set_text(msgLabel, msg, 0LL), (msgLabel = this->fields.msgLabel) == 0LL) )
    sub_1BCAA3C(msgLabel, v13);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)msgLabel, 0LL);
  v17 = BonusSelectSummonMsgInfo_TypeInfo;
  v18 = gameObject;
  if ( !BonusSelectSummonMsgInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonMsgInfo_TypeInfo, v16);
    v17 = BonusSelectSummonMsgInfo_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(v18, v17->static_fields->BONUS_SELECT_MESSAGE_LABEL_Y, 0LL);
}


void __fastcall BonusSelectSummonMsgInfo__SetCautionDlg(
        BonusSelectSummonMsgInfo_o *this,
        int32_t gachaId,
        System_String_o *title,
        System_String_o *msg,
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData,
        BonusSelectSummonAssetManager_o *assetManager,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UILabel_o *msgLabel; // x0

  BonusSelectSummonMsgInfo__SetBase(
    this,
    gachaId,
    title,
    tryGetBonusSelectData,
    assetManager,
    (const MethodInfo *)assetManager);
  msgLabel = this->fields.msgLabel;
  if ( !msgLabel )
    sub_1BCAA3C(0LL, v9);
  UILabel__set_text(msgLabel, msg, 0LL);
}


void __fastcall BonusSelectSummonMsgInfo__SetConfirmDlg(
        BonusSelectSummonMsgInfo_o *this,
        int32_t gachaId,
        System_String_o *title,
        System_String_o *msgTop,
        System_String_o *msgCenter,
        System_String_o *msgLow,
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData,
        BonusSelectSummonAssetManager_o *assetManager,
        const MethodInfo *method)
{
  __int64 v13; // x1
  UILabel_o *msgLabelSplitTop; // x0

  BonusSelectSummonMsgInfo__SetBase(
    this,
    gachaId,
    title,
    tryGetBonusSelectData,
    assetManager,
    (const MethodInfo *)msgLow);
  msgLabelSplitTop = this->fields.msgLabelSplitTop;
  if ( !msgLabelSplitTop
    || (UILabel__set_text(msgLabelSplitTop, msgTop, 0LL), (msgLabelSplitTop = this->fields.msgLabelSplitCenter) == 0LL)
    || (UILabel__set_text(msgLabelSplitTop, msgCenter, 0LL), (msgLabelSplitTop = this->fields.msgLabelSplitLow) == 0LL) )
  {
    sub_1BCAA3C(msgLabelSplitTop, v13);
  }
  UILabel__set_text(msgLabelSplitTop, msgLow, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A08888;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v15, 0LL);
    }
LABEL_8:
    v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v14;
    goto LABEL_9;
  }
  if ( v12 != 2 )
    goto LABEL_8;
  v13 = (Il2CppObject *)sub_1A088AC;
LABEL_6:
  this->fields.m_target = v13;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A08824;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall BonusSelectSummonMsgInfo_TryGetBonusSelectData__BeginInvoke(
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *this,
        SelectBonusData_o **data,
        int32_t gachaId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  SelectBonusData_o *v11; // [xsp+8h] [xbp-58h] BYREF
  __int64 v12; // [xsp+10h] [xbp-50h]
  __int64 v13; // [xsp+18h] [xbp-48h]
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = gachaId;
  if ( (byte_4B12853 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, data, *(_QWORD *)&gachaId);
    byte_4B12853 = 1;
  }
  v12 = 0LL;
  v13 = 0LL;
  v11 = *data;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v11, callback, object);
}


bool __fastcall BonusSelectSummonMsgInfo_TryGetBonusSelectData__EndInvoke(
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *this,
        SelectBonusData_o **data,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  SelectBonusData_o **v6; // [xsp+8h] [xbp-8h] BYREF

  v6 = data;
  if ( !sub_1BCA798(result, &v6, result) )
    sub_1BCAA3C(0LL, v4);
  return *(_BYTE *)j_il2cpp_object_unbox_0();
}


bool __fastcall BonusSelectSummonMsgInfo_TryGetBonusSelectData__Invoke(
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *this,
        SelectBonusData_o **data,
        int32_t gachaId,
        const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, SelectBonusData_o **, int32_t, _QWORD))this->fields.m_target)(
           this->fields.original_method_info,
           data,
           gachaId,
           *(_QWORD *)&this->fields.extra_arg);
}