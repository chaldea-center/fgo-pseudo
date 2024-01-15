void __fastcall BonusSelectSummonMsgInfo___ctor(BonusSelectSummonMsgInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FB0FB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_40FB0FB = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.menberList = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.menberList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  UILabel_o *selectInfoLabel; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *menberList; // x0
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FB0F8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&string_TypeInfo, v8);
    byte_40FB0F8 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  selectInfoLabel = this->fields.selectInfoLabel;
  if ( !selectInfoLabel )
    goto LABEL_16;
  UILabel__set_text(selectInfoLabel, string_TypeInfo->static_fields->Empty, 0LL);
  BonusSelectSummonMsgInfo__InitMsgLabel(this, v11);
  menberList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.menberList;
  if ( !menberList )
    goto LABEL_16;
  if ( menberList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      menberList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v15.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall BonusSelectSummonMsgInfo__InitMsgLabel(BonusSelectSummonMsgInfo_o *this, const MethodInfo *method)
{
  UILabel_o *msgLabelSplitTop; // x0
  UILabel_o *msgLabelSplitCenter; // x0
  UILabel_o *msgLabelSplitLow; // x0
  UILabel_o *msgLabel; // x0

  if ( (byte_40FB0FA & 1) == 0 )
  {
    sub_B16FFC(&string_TypeInfo, method);
    byte_40FB0FA = 1;
  }
  msgLabelSplitTop = this->fields.msgLabelSplitTop;
  if ( !msgLabelSplitTop
    || (UILabel__set_text(msgLabelSplitTop, string_TypeInfo->static_fields->Empty, 0LL),
        (msgLabelSplitCenter = this->fields.msgLabelSplitCenter) == 0LL)
    || (UILabel__set_text(msgLabelSplitCenter, string_TypeInfo->static_fields->Empty, 0LL),
        (msgLabelSplitLow = this->fields.msgLabelSplitLow) == 0LL)
    || (UILabel__set_text(msgLabelSplitLow, string_TypeInfo->static_fields->Empty, 0LL),
        (msgLabel = this->fields.msgLabel) == 0LL) )
  {
    sub_B170D4();
  }
  UILabel__set_text(msgLabel, string_TypeInfo->static_fields->Empty, 0LL);
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
  UILabel_o *titleLabel; // x0
  UILabel_o *selectInfoLabel; // x23
  System_String_o *v23; // x0
  const MethodInfo *v24; // x1
  GiftMaster_o *Master_WarQuestSelectionMaster; // x21
  WarQuestSelectionMaster_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  struct SelectBonus_array *selectBonusDatas; // x25
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x22
  __int64 v32; // x26
  UnityEngine_Component_o *grid; // x0
  SelectBonus_o *v34; // x28
  struct UnityEngine_GameObject_o *MsgInfoMenberPrefab_k__BackingField; // x23
  UnityEngine_Transform_o *transform; // x24
  UnityEngine_GameObject_o *v37; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x23
  BonusSelectSummonMsgInfoMenber_o *Component_srcLineSprite; // x0
  const MethodInfo *v40; // x1
  BonusSelectSummonMsgInfoMenber_o *v41; // x24
  GiftEntity_o *DataById; // x0
  const MethodInfo *v43; // x2
  ServantEntity_o *Entity; // x1
  struct System_Collections_Generic_List_GameObject__o *menberList; // x0
  UnityEngine_Behaviour_o *v46; // x0
  SelectBonusData_o *data; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FB0F9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_GiftMaster___, *(_QWORD *)&gachaId);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfoMenber___, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v17);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_3297/*"CONFIRM_BONUS_SELECT_SUMMON_INFO"*/, v19);
    byte_40FB0F9 = 1;
  }
  data = 0LL;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_37;
  UILabel__set_text(titleLabel, title, 0LL);
  selectInfoLabel = this->fields.selectInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3297/*"CONFIRM_BONUS_SELECT_SUMMON_INFO"*/, 0LL);
  if ( !selectInfoLabel )
    goto LABEL_37;
  UILabel__set_text(selectInfoLabel, v23, 0LL);
  if ( !tryGetBonusSelectData )
    goto LABEL_37;
  if ( BonusSelectSummonMsgInfo_TryGetBonusSelectData__Invoke(tryGetBonusSelectData, &data, gachaId, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GiftMaster___);
    v26 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !data )
      goto LABEL_37;
    selectBonusDatas = data->fields.selectBonusDatas;
    if ( selectBonusDatas )
    {
      max_length = selectBonusDatas->max_length;
      if ( max_length >= 1 )
      {
        v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)v26;
        v32 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v32 >= max_length )
          {
            sub_B17100(v26, v27, v28);
            sub_B170A0();
          }
          if ( !assetManager )
            break;
          grid = (UnityEngine_Component_o *)this->fields.grid;
          if ( !grid )
            break;
          v34 = selectBonusDatas->m_Items[v32];
          MsgInfoMenberPrefab_k__BackingField = assetManager->fields._MsgInfoMenberPrefab_k__BackingField;
          transform = UnityEngine_Component__get_transform(grid, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v37 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                              (UILabel_o *)MsgInfoMenberPrefab_k__BackingField,
                                              transform,
                                              (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
          if ( !v37 )
            break;
          v38 = (EventMissionProgressRequest_Argument_ProgressData_o *)v37;
          Component_srcLineSprite = (BonusSelectSummonMsgInfoMenber_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          v37,
                                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfoMenber___);
          if ( !Component_srcLineSprite )
            break;
          v41 = Component_srcLineSprite;
          BonusSelectSummonMsgInfoMenber__Init(Component_srcLineSprite, v40);
          if ( !v34 || !Master_WarQuestSelectionMaster )
            break;
          DataById = GiftMaster__getDataById(Master_WarQuestSelectionMaster, v34->fields.giftId, 0LL);
          if ( DataById )
          {
            if ( !v31 )
              break;
            Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v31,
                                          DataById->fields.objectId,
                                          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          }
          else
          {
            Entity = 0LL;
          }
          BonusSelectSummonMsgInfoMenber__Set(v41, Entity, v43);
          menberList = this->fields.menberList;
          if ( !menberList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)menberList,
            v38,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          max_length = selectBonusDatas->max_length;
          if ( (int)++v32 >= max_length )
            goto LABEL_34;
        }
LABEL_37:
        sub_B170D4();
      }
    }
LABEL_34:
    v46 = (UnityEngine_Behaviour_o *)this->fields.grid;
    if ( !v46 )
      goto LABEL_37;
    UnityEngine_Behaviour__set_enabled(v46, 1, 0LL);
  }
  BonusSelectSummonMsgInfo__InitMsgLabel(this, v24);
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
    sub_B170D4();
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
  UILabel_o *msgLabelSplitTop; // x0
  UILabel_o *msgLabelSplitCenter; // x0
  UILabel_o *msgLabelSplitLow; // x0

  BonusSelectSummonMsgInfo__SetBase(
    this,
    gachaId,
    title,
    tryGetBonusSelectData,
    assetManager,
    (const MethodInfo *)msgLow);
  msgLabelSplitTop = this->fields.msgLabelSplitTop;
  if ( !msgLabelSplitTop
    || (UILabel__set_text(msgLabelSplitTop, msgTop, 0LL), (msgLabelSplitCenter = this->fields.msgLabelSplitCenter) == 0LL)
    || (UILabel__set_text(msgLabelSplitCenter, msgCenter, 0LL), (msgLabelSplitLow = this->fields.msgLabelSplitLow) == 0LL) )
  {
    sub_B170D4();
  }
  UILabel__set_text(msgLabelSplitLow, msgLow, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall BonusSelectSummonMsgInfo_TryGetBonusSelectData__BeginInvoke(
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *this,
        SelectBonusData_o **data,
        int32_t gachaId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-24h] BYREF

  v12 = gachaId;
  if ( (byte_40F7097 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, data);
    byte_40F7097 = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)*data;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


bool __fastcall BonusSelectSummonMsgInfo_TryGetBonusSelectData__EndInvoke(
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *this,
        SelectBonusData_o **data,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x0
  SelectBonusData_o **v6; // [xsp+8h] [xbp-8h] BYREF

  v6 = data;
  v4 = sub_B16FA4(result, &v6, result);
  if ( !v4 )
    sub_B170D4();
  return *(_BYTE *)j_il2cpp_object_unbox_0(v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BonusSelectSummonMsgInfo_TryGetBonusSelectData__Invoke(
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *this,
        SelectBonusData_o **data,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o **v9; // x26
  __int64 v10; // x27
  unsigned int v11; // w24
  __int64 class_0; // x0
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  char v18; // w0
  __int64 v19; // x0
  __int64 (__fastcall **v20)(__int64 *, SelectBonusData_o **, _QWORD, _QWORD); // x0
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  __int64 (__fastcall *v24)(SelectBonusData_o **, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v33;
    v8 = 1LL;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    v9 = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o **)(v4 + 32);
LABEL_5:
    v10 = 0LL;
    while ( 1 )
    {
      v21 = v9[v10];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(__int64 (__fastcall **)(SelectBonusData_o **, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v21->fields.extra_arg, data, *(_QWORD *)&gachaId);
      if ( (sub_B1702C(v23) & 1) != 0 )
      {
        if ( *(_BYTE *)(v23 + 74) == 2 )
          goto LABEL_37;
      }
      else
      {
        if ( !v22 )
        {
LABEL_37:
          v18 = v24(data, (unsigned int)gachaId, v23);
          goto LABEL_38;
        }
        if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
        {
          v25 = sub_B17024(v23);
          v26 = sub_B17428(v23);
          if ( (v25 & 1) != 0 )
          {
            if ( (v26 & 1) != 0 )
            {
              v27 = *v22;
              v28 = *(_QWORD *)(v23 + 24);
              v29 = *(unsigned __int16 *)(v23 + 72);
              if ( *(_WORD *)(*v22 + 298) )
              {
                v30 = 0LL;
                v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
                while ( *((_QWORD *)v31 - 1) != v28 )
                {
                  ++v30;
                  v31 += 4;
                  if ( v30 >= *(unsigned __int16 *)(*v22 + 298) )
                    goto LABEL_35;
                }
                v19 = v27 + 16LL * (*v31 + (int)v29) + 312;
              }
              else
              {
LABEL_35:
                v19 = sub_AAFEF8(v22, v28, v29);
              }
              v17 = *(_QWORD *)(v19 + 8);
            }
            else
            {
              v17 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
            }
            v20 = (__int64 (__fastcall **)(__int64 *, SelectBonusData_o **, _QWORD, _QWORD))sub_B170AC(v17, v23);
            v18 = (*v20)(v22, data, (unsigned int)gachaId, v20);
          }
          else
          {
            v11 = *(unsigned __int16 *)(v23 + 72);
            if ( (v26 & 1) != 0 )
            {
              class_0 = j_il2cpp_method_get_class_0(v23);
              v13 = *v22;
              if ( *(_WORD *)(*v22 + 298) )
              {
                v14 = 0LL;
                v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
                while ( *((_QWORD *)v15 - 1) != class_0 )
                {
                  ++v14;
                  v15 += 4;
                  if ( v14 >= *(unsigned __int16 *)(*v22 + 298) )
                    goto LABEL_11;
                }
                v16 = v13 + 16LL * (int)(*v15 + v11) + 312;
              }
              else
              {
LABEL_11:
                v16 = sub_AAFEF8(v22, class_0, v11);
              }
              v18 = (*(__int64 (__fastcall **)(__int64 *, SelectBonusData_o **, _QWORD, _QWORD))v16)(
                      v22,
                      data,
                      (unsigned int)gachaId,
                      *(_QWORD *)(v16 + 8));
            }
            else
            {
              v18 = (*(__int64 (__fastcall **)(__int64 *, SelectBonusData_o **, _QWORD, _QWORD))(*v22
                                                                                               + 16LL
                                                                                               * *(unsigned __int16 *)(v23 + 72)
                                                                                               + 312))(
                      v22,
                      data,
                      (unsigned int)gachaId,
                      *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
            }
          }
          goto LABEL_38;
        }
      }
      v18 = ((__int64 (__fastcall *)(__int64 *, SelectBonusData_o **, _QWORD, __int64))v24)(
              v22,
              data,
              (unsigned int)gachaId,
              v23);
LABEL_38:
      if ( ++v10 == v8 )
        return v18 & 1;
    }
  }
  v18 = 0;
  return v18 & 1;
}