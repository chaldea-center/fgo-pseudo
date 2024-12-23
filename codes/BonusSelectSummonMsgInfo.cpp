void __fastcall BonusSelectSummonMsgInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B631AF & 1) == 0 )
  {
    sub_1BE4ACC(&BonusSelectSummonMsgInfo_TypeInfo, v1);
    byte_4B631AF = 1;
  }
  LODWORD(BonusSelectSummonMsgInfo_TypeInfo->static_fields->BONUS_SELECT_MESSAGE_LABEL_Y) = (struct BonusSelectSummonMsgInfo_StaticFields)-1029963776;
}


void __fastcall BonusSelectSummonMsgInfo___ctor(BonusSelectSummonMsgInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B631AE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1BE4ACC(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_4B631AE = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.menberList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.menberList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BonusSelectSummonMsgInfo__CheckAssert(BonusSelectSummonMsgInfo_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BonusSelectSummonMsgInfo__Init(BonusSelectSummonMsgInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UILabel_o *titleLabel; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B631AA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v7);
    sub_1BE4ACC(&string_TypeInfo, v8);
    byte_4B631AA = 1;
  }
  memset(&v12, 0, sizeof(v12));
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.selectInfoLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  BonusSelectSummonMsgInfo__InitMsgLabel(this, v10);
  titleLabel = (UILabel_o *)this->fields.menberList;
  if ( !titleLabel )
    goto LABEL_15;
  if ( SLODWORD(titleLabel->fields.m_CancellationTokenSource) >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)titleLabel,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v12.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70452000((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleLabel )
LABEL_15:
    sub_1BE4D28(titleLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
}


void __fastcall BonusSelectSummonMsgInfo__InitMsgLabel(BonusSelectSummonMsgInfo_o *this, const MethodInfo *method)
{
  UILabel_o *msgLabelSplitTop; // x0

  if ( (byte_4B631AD & 1) == 0 )
  {
    sub_1BE4ACC(&string_TypeInfo, method);
    byte_4B631AD = 1;
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
    sub_1BE4D28(msgLabelSplitTop, method);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v21; // x1
  UILabel_o *selectInfoLabel; // x23
  const MethodInfo *v23; // x1
  Il2CppObject *Master_object; // x21
  __int64 v25; // x25
  int v26; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x22
  __int64 v28; // x26
  __int64 v29; // x28
  Il2CppObject *MsgInfoMenberPrefab_k__BackingField; // x23
  UnityEngine_Transform_o *transform; // x24
  Il2CppObject *v32; // x23
  BonusSelectSummonMsgInfoMenber_o *v33; // x24
  const MethodInfo *v34; // x2
  Il2CppObject *Entity; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 klass_low; // x10
  __int64 v45; // x8
  __int64 v46; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B631AC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_GiftMaster___, *(_QWORD *)&gachaId);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_1BE4ACC(&DataManager_TypeInfo, v12);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfoMenber___, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__Add__, v15);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v16);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject____77247160, v17);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v18);
    sub_1BE4ACC(&StringLiteral_3844/*"CONFIRM_BONUS_SELECT_SUMMON_INFO"*/, v19);
    byte_4B631AC = 1;
  }
  v46 = 0LL;
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3844/*"CONFIRM_BONUS_SELECT_SUMMON_INFO"*/, 0LL);
  if ( !selectInfoLabel )
    goto LABEL_38;
  UILabel__set_text(selectInfoLabel, (System_String_o *)gameObject, 0LL);
  if ( !tryGetBonusSelectData )
    goto LABEL_38;
  if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64 *, _QWORD, _QWORD))tryGetBonusSelectData->fields.m_target)(
          tryGetBonusSelectData->fields.original_method_info,
          &v46,
          (unsigned int)gachaId,
          *(_QWORD *)&tryGetBonusSelectData->fields.extra_arg) & 1) != 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GiftMaster___);
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !v46 )
      goto LABEL_38;
    v25 = *(_QWORD *)(v46 + 24);
    if ( v25 )
    {
      v26 = *(_DWORD *)(v25 + 24);
      if ( v26 >= 1 )
      {
        v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
        v28 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v28 >= v26 )
            sub_1BE4D30(gameObject, v21);
          if ( !assetManager )
            break;
          gameObject = (UnityEngine_GameObject_o *)this->fields.grid;
          if ( !gameObject )
            break;
          v29 = *(_QWORD *)(v25 + 32 + 8 * v28);
          MsgInfoMenberPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._MsgInfoMenberPrefab_k__BackingField;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__50195216(
                                                     MsgInfoMenberPrefab_k__BackingField,
                                                     transform,
                                                     (const MethodInfo_2FDEB10 *)Method_UnityEngine_Object_Instantiate_GameObject____77247160);
          if ( !gameObject )
            break;
          v32 = (Il2CppObject *)gameObject;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     gameObject,
                                                     (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfoMenber___);
          if ( !gameObject )
            break;
          v33 = (BonusSelectSummonMsgInfoMenber_o *)gameObject;
          BonusSelectSummonMsgInfoMenber__Init((BonusSelectSummonMsgInfoMenber_o *)gameObject, v21);
          if ( !v29 || !Master_object )
            break;
          gameObject = (UnityEngine_GameObject_o *)GiftMaster__getDataById(
                                                     (GiftMaster_o *)Master_object,
                                                     *(_DWORD *)(v29 + 28),
                                                     0LL);
          if ( gameObject )
          {
            if ( !v27 )
              break;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       v27,
                       (int32_t)gameObject[1].klass,
                       (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          }
          else
          {
            Entity = 0LL;
          }
          BonusSelectSummonMsgInfoMenber__Set(v33, (ServantEntity_o *)Entity, v34);
          gameObject = (UnityEngine_GameObject_o *)this->fields.menberList;
          if ( !gameObject )
            break;
          v42 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
          v43 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++HIDWORD(gameObject[1].klass);
          if ( !v42 )
            break;
          klass_low = SLODWORD(gameObject[1].klass);
          if ( (unsigned int)klass_low >= *(_DWORD *)(v42 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)gameObject,
              v32,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v45 = v42 + 8 * klass_low;
            LODWORD(gameObject[1].klass) = klass_low + 1;
            *(_QWORD *)(v45 + 32) = v32;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v45 + 32), (int64_t)v32, v36, v37, v38, v39, v40, v41);
          }
          v26 = *(_DWORD *)(v25 + 24);
          if ( (int)++v28 >= v26 )
            goto LABEL_35;
        }
LABEL_38:
        sub_1BE4D28(gameObject, v21);
      }
    }
LABEL_35:
    gameObject = (UnityEngine_GameObject_o *)this->fields.grid;
    if ( !gameObject )
      goto LABEL_38;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0LL);
  }
  BonusSelectSummonMsgInfo__InitMsgLabel(this, v23);
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
  BonusSelectSummonMsgInfo_c *v16; // x8
  UnityEngine_GameObject_o *v17; // x19

  if ( (byte_4B631AB & 1) == 0 )
  {
    sub_1BE4ACC(&BonusSelectSummonMsgInfo_TypeInfo, *(_QWORD *)&gachaId);
    byte_4B631AB = 1;
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
    sub_1BE4D28(msgLabel, v13);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)msgLabel, 0LL);
  v16 = BonusSelectSummonMsgInfo_TypeInfo;
  v17 = gameObject;
  if ( !BonusSelectSummonMsgInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonMsgInfo_TypeInfo);
    v16 = BonusSelectSummonMsgInfo_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(v17, v16->static_fields->BONUS_SELECT_MESSAGE_LABEL_Y, 0LL);
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
    sub_1BE4D28(0LL, v9);
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
    sub_1BE4D28(msgLabelSplitTop, v13);
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
  sub_1BE4A70(
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
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A22658;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v15, 0LL);
    }
LABEL_8:
    v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v14;
    goto LABEL_9;
  }
  if ( v12 != 2 )
    goto LABEL_8;
  v13 = (Il2CppObject *)sub_1A2267C;
LABEL_6:
  this->fields.m_target = v13;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A225F4;
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
  if ( (byte_4B631B0 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, data);
    byte_4B631B0 = 1;
  }
  v12 = 0LL;
  v13 = 0LL;
  v11 = *data;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v14, *(_QWORD *)&gachaId, callback, object);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, &v11, callback, object);
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
  if ( !sub_1BE4A84(result, &v6, result) )
    sub_1BE4D28(0LL, v4);
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