void __fastcall BonusSelectSummonMsgInfo___ctor(BonusSelectSummonMsgInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_43516A1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_43516A1 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.menberList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.menberList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BonusSelectSummonMsgInfo__CheckAssert(BonusSelectSummonMsgInfo_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BonusSelectSummonMsgInfo__Init(BonusSelectSummonMsgInfo_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_435169E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&string_TypeInfo);
    byte_435169E = 1;
  }
  memset(&v6, 0, sizeof(v6));
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.selectInfoLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  BonusSelectSummonMsgInfo__InitMsgLabel(this, v4);
  titleLabel = (UILabel_o *)this->fields.menberList;
  if ( !titleLabel )
    goto LABEL_16;
  if ( SLODWORD(titleLabel->fields.leftAnchor) >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v6,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)titleLabel,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v6,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v6.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v6,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleLabel )
LABEL_16:
    sub_B7076C(titleLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
}


void __fastcall BonusSelectSummonMsgInfo__InitMsgLabel(BonusSelectSummonMsgInfo_o *this, const MethodInfo *method)
{
  UILabel_o *msgLabelSplitTop; // x0

  if ( (byte_43516A0 & 1) == 0 )
  {
    sub_B70694(&string_TypeInfo);
    byte_43516A0 = 1;
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
    sub_B7076C(msgLabelSplitTop, method);
  }
  UILabel__set_text(msgLabelSplitTop, string_TypeInfo->static_fields->Empty, 0LL);
}


void __fastcall BonusSelectSummonMsgInfo__SetBase(
        BonusSelectSummonMsgInfo_o *this,
        int32_t gachaId,
        System_String_o *title,
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData,
        BonusSelectSummonAssetManager_o *assetManager,
        const MethodInfo *method)
{
  void *gameObject; // x0
  const MethodInfo *v12; // x1
  UILabel_o *selectInfoLabel; // x23
  const MethodInfo *v14; // x1
  GiftMaster_o *Master_WarQuestSelectionMaster; // x21
  struct SelectBonus_array *selectBonusDatas; // x25
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x22
  __int64 v19; // x26
  SelectBonus_o *v20; // x28
  struct UnityEngine_GameObject_o *MsgInfoMenberPrefab_k__BackingField; // x23
  UnityEngine_Transform_o *transform; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x23
  BonusSelectSummonMsgInfoMenber_o *v24; // x24
  const MethodInfo *v25; // x2
  ServantEntity_o *Entity; // x1
  __int64 v27; // x0
  SelectBonusData_o *data; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_435169F & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_GiftMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfoMenber___);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_3381/*"CONFIRM_BONUS_SELECT_SUMMON_INFO"*/);
    byte_435169F = 1;
  }
  data = 0LL;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = this->fields.titleLabel;
  if ( !gameObject )
    goto LABEL_37;
  UILabel__set_text((UILabel_o *)gameObject, title, 0LL);
  selectInfoLabel = this->fields.selectInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3381/*"CONFIRM_BONUS_SELECT_SUMMON_INFO"*/, 0LL);
  if ( !selectInfoLabel )
    goto LABEL_37;
  UILabel__set_text(selectInfoLabel, (System_String_o *)gameObject, 0LL);
  if ( !tryGetBonusSelectData )
    goto LABEL_37;
  if ( BonusSelectSummonMsgInfo_TryGetBonusSelectData__Invoke(tryGetBonusSelectData, &data, gachaId, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_GiftMaster___);
    gameObject = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !data )
      goto LABEL_37;
    selectBonusDatas = data->fields.selectBonusDatas;
    if ( selectBonusDatas )
    {
      max_length = selectBonusDatas->max_length;
      if ( max_length >= 1 )
      {
        v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject;
        v19 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v19 >= max_length )
          {
            v27 = sub_B70798(gameObject);
            sub_B70738(v27, 0LL);
          }
          if ( !assetManager )
            break;
          gameObject = this->fields.grid;
          if ( !gameObject )
            break;
          v20 = selectBonusDatas->m_Items[v19];
          MsgInfoMenberPrefab_k__BackingField = assetManager->fields._MsgInfoMenberPrefab_k__BackingField;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          gameObject = UnityEngine_Object__Instantiate_UILabel_(
                         (UILabel_o *)MsgInfoMenberPrefab_k__BackingField,
                         transform,
                         (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
          if ( !gameObject )
            break;
          v23 = (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject;
          gameObject = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)gameObject,
                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfoMenber___);
          if ( !gameObject )
            break;
          v24 = (BonusSelectSummonMsgInfoMenber_o *)gameObject;
          BonusSelectSummonMsgInfoMenber__Init((BonusSelectSummonMsgInfoMenber_o *)gameObject, v12);
          if ( !v20 || !Master_WarQuestSelectionMaster )
            break;
          gameObject = GiftMaster__getDataById(Master_WarQuestSelectionMaster, v20->fields.giftId, 0LL);
          if ( gameObject )
          {
            if ( !v18 )
              break;
            Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v18,
                                          *((_DWORD *)gameObject + 6),
                                          (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          }
          else
          {
            Entity = 0LL;
          }
          BonusSelectSummonMsgInfoMenber__Set(v24, Entity, v25);
          gameObject = this->fields.menberList;
          if ( !gameObject )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
            v23,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          max_length = selectBonusDatas->max_length;
          if ( (int)++v19 >= max_length )
            goto LABEL_34;
        }
LABEL_37:
        sub_B7076C(gameObject, v12);
      }
    }
LABEL_34:
    gameObject = this->fields.grid;
    if ( !gameObject )
      goto LABEL_37;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0LL);
  }
  BonusSelectSummonMsgInfo__InitMsgLabel(this, v14);
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
    sub_B7076C(0LL, v9);
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
    sub_B7076C(msgLabelSplitTop, v13);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B70630(p_method);
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
  __int64 v11[3]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-24h] BYREF

  v12 = gachaId;
  if ( (byte_434ED42 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    byte_434ED42 = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)*data;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, *(_QWORD *)&gachaId);
  return (System_IAsyncResult_o *)sub_B70638(this, v11, callback, object);
}


bool __fastcall BonusSelectSummonMsgInfo_TryGetBonusSelectData__EndInvoke(
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *this,
        SelectBonusData_o **data,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  SelectBonusData_o **v7; // [xsp+8h] [xbp-8h] BYREF

  v7 = data;
  v4 = sub_B7063C(result, &v7, result);
  if ( !v4 )
    sub_B7076C(0LL, v5);
  return *(_BYTE *)j_il2cpp_object_unbox_0(v4);
}


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
        sub_B70750(*(_QWORD *)&v21->fields.extra_arg, data);
      if ( (sub_B706C4(v23) & 1) != 0 )
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
          v25 = sub_B706BC(v23);
          v26 = sub_B70AC0(v23);
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
                v19 = sub_B08590(v22, v28, v29);
              }
              v17 = *(_QWORD *)(v19 + 8);
            }
            else
            {
              v17 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
            }
            v20 = (__int64 (__fastcall **)(__int64 *, SelectBonusData_o **, _QWORD, _QWORD))sub_B70744(v17, v23);
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
                v16 = sub_B08590(v22, class_0, v11);
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