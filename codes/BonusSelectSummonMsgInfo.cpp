void __fastcall BonusSelectSummonMsgInfo___ctor(BonusSelectSummonMsgInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4187DCC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_4187DCC = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.menberList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.menberList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4187DC9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&string_TypeInfo, v8);
    byte_4187DC9 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.selectInfoLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  BonusSelectSummonMsgInfo__InitMsgLabel(this, v10);
  titleLabel = (UILabel_o *)this->fields.menberList;
  if ( !titleLabel )
    goto LABEL_16;
  if ( SLODWORD(titleLabel->fields.leftAnchor) >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)titleLabel,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v12,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v12.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleLabel )
LABEL_16:
    sub_B2C434(titleLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
}


void __fastcall BonusSelectSummonMsgInfo__InitMsgLabel(BonusSelectSummonMsgInfo_o *this, const MethodInfo *method)
{
  UILabel_o *msgLabelSplitTop; // x0

  if ( (byte_4187DCB & 1) == 0 )
  {
    sub_B2C35C(&string_TypeInfo, method);
    byte_4187DCB = 1;
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
    sub_B2C434(msgLabelSplitTop, method);
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
  void *gameObject; // x0
  const MethodInfo *v21; // x1
  UILabel_o *selectInfoLabel; // x23
  const MethodInfo *v23; // x1
  GiftMaster_o *Master_WarQuestSelectionMaster; // x21
  struct SelectBonus_array *selectBonusDatas; // x25
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x22
  __int64 v28; // x26
  SelectBonus_o *v29; // x28
  struct UnityEngine_GameObject_o *MsgInfoMenberPrefab_k__BackingField; // x23
  UnityEngine_Transform_o *transform; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x23
  BonusSelectSummonMsgInfoMenber_o *v33; // x24
  const MethodInfo *v34; // x2
  ServantEntity_o *Entity; // x1
  __int64 v36; // x0
  SelectBonusData_o *data; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4187DCA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_GiftMaster___, *(_QWORD *)&gachaId);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_B2C35C(&DataManager_TypeInfo, v12);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfoMenber___, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v15);
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v17);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v18);
    sub_B2C35C(&StringLiteral_3306/*"CONFIRM_BONUS_SELECT_SUMMON_INFO"*/, v19);
    byte_4187DCA = 1;
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
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3306/*"CONFIRM_BONUS_SELECT_SUMMON_INFO"*/, 0LL);
  if ( !selectInfoLabel )
    goto LABEL_37;
  UILabel__set_text(selectInfoLabel, (System_String_o *)gameObject, 0LL);
  if ( !tryGetBonusSelectData )
    goto LABEL_37;
  if ( BonusSelectSummonMsgInfo_TryGetBonusSelectData__Invoke(tryGetBonusSelectData, &data, gachaId, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GiftMaster___);
    gameObject = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !data )
      goto LABEL_37;
    selectBonusDatas = data->fields.selectBonusDatas;
    if ( selectBonusDatas )
    {
      max_length = selectBonusDatas->max_length;
      if ( max_length >= 1 )
      {
        v27 = (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject;
        v28 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v28 >= max_length )
          {
            v36 = sub_B2C460(gameObject);
            sub_B2C400(v36, 0LL);
          }
          if ( !assetManager )
            break;
          gameObject = this->fields.grid;
          if ( !gameObject )
            break;
          v29 = selectBonusDatas->m_Items[v28];
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
                         (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
          if ( !gameObject )
            break;
          v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject;
          gameObject = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)gameObject,
                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfoMenber___);
          if ( !gameObject )
            break;
          v33 = (BonusSelectSummonMsgInfoMenber_o *)gameObject;
          BonusSelectSummonMsgInfoMenber__Init((BonusSelectSummonMsgInfoMenber_o *)gameObject, v21);
          if ( !v29 || !Master_WarQuestSelectionMaster )
            break;
          gameObject = GiftMaster__getDataById(Master_WarQuestSelectionMaster, v29->fields.giftId, 0LL);
          if ( gameObject )
          {
            if ( !v27 )
              break;
            Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v27,
                                          *((_DWORD *)gameObject + 6),
                                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          }
          else
          {
            Entity = 0LL;
          }
          BonusSelectSummonMsgInfoMenber__Set(v33, Entity, v34);
          gameObject = this->fields.menberList;
          if ( !gameObject )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
            v32,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
          max_length = selectBonusDatas->max_length;
          if ( (int)++v28 >= max_length )
            goto LABEL_34;
        }
LABEL_37:
        sub_B2C434(gameObject, v21);
      }
    }
LABEL_34:
    gameObject = this->fields.grid;
    if ( !gameObject )
      goto LABEL_37;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0LL);
  }
  BonusSelectSummonMsgInfo__InitMsgLabel(this, v23);
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
    sub_B2C434(0LL, v9);
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
    sub_B2C434(msgLabelSplitTop, v13);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4184E9F & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, data);
    byte_4184E9F = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)*data;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
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
  v4 = sub_B2C304(result, &v7, result);
  if ( !v4 )
    sub_B2C434(0LL, v5);
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
  __int64 v13; // x3
  __int64 v14; // x8
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  char v19; // w0
  __int64 v20; // x0
  __int64 (__fastcall **v21)(__int64 *, SelectBonusData_o **, _QWORD, _QWORD); // x0
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *v22; // x8
  __int64 *v23; // x22
  __int64 v24; // x23
  __int64 (__fastcall *v25)(SelectBonusData_o **, _QWORD, __int64); // x24
  char v26; // w24
  char v27; // w0
  __int64 v28; // x3
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *v35; // [xsp+8h] [xbp-48h] BYREF

  v35 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v35;
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
      v22 = v9[v10];
      v23 = *(__int64 **)&v22->fields.method;
      v24 = *(_QWORD *)&v22->fields.extra_arg;
      v25 = *(__int64 (__fastcall **)(SelectBonusData_o **, _QWORD, __int64))&v22->fields.method_ptr;
      if ( *(__int16 *)(v24 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v22->fields.extra_arg, data, *(_QWORD *)&gachaId, method);
      if ( (sub_B2C38C(v24) & 1) != 0 )
      {
        if ( *(_BYTE *)(v24 + 74) == 2 )
          goto LABEL_37;
      }
      else
      {
        if ( !v23 )
        {
LABEL_37:
          v19 = v25(data, (unsigned int)gachaId, v24);
          goto LABEL_38;
        }
        if ( *(__int16 *)(v24 + 72) != -1 && (*(_BYTE *)(*v23 + 277) & 1) == 0 && this->fields.m_target )
        {
          v26 = sub_B2C384(v24);
          v27 = sub_B2C788(v24);
          if ( (v26 & 1) != 0 )
          {
            if ( (v27 & 1) != 0 )
            {
              v29 = *v23;
              v30 = *(_QWORD *)(v24 + 24);
              v31 = *(unsigned __int16 *)(v24 + 72);
              if ( *(_WORD *)(*v23 + 298) )
              {
                v32 = 0LL;
                v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
                while ( *((_QWORD *)v33 - 1) != v30 )
                {
                  ++v32;
                  v33 += 4;
                  if ( v32 >= *(unsigned __int16 *)(*v23 + 298) )
                    goto LABEL_35;
                }
                v20 = v29 + 16LL * (*v33 + (int)v31) + 312;
              }
              else
              {
LABEL_35:
                v20 = sub_AC5258(v23, v30, v31, v28);
              }
              v18 = *(_QWORD *)(v20 + 8);
            }
            else
            {
              v18 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
            }
            v21 = (__int64 (__fastcall **)(__int64 *, SelectBonusData_o **, _QWORD, _QWORD))sub_B2C40C(v18, v24);
            v19 = (*v21)(v23, data, (unsigned int)gachaId, v21);
          }
          else
          {
            v11 = *(unsigned __int16 *)(v24 + 72);
            if ( (v27 & 1) != 0 )
            {
              class_0 = j_il2cpp_method_get_class_0(v24);
              v14 = *v23;
              if ( *(_WORD *)(*v23 + 298) )
              {
                v15 = 0LL;
                v16 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
                while ( *((_QWORD *)v16 - 1) != class_0 )
                {
                  ++v15;
                  v16 += 4;
                  if ( v15 >= *(unsigned __int16 *)(*v23 + 298) )
                    goto LABEL_11;
                }
                v17 = v14 + 16LL * (int)(*v16 + v11) + 312;
              }
              else
              {
LABEL_11:
                v17 = sub_AC5258(v23, class_0, v11, v13);
              }
              v19 = (*(__int64 (__fastcall **)(__int64 *, SelectBonusData_o **, _QWORD, _QWORD))v17)(
                      v23,
                      data,
                      (unsigned int)gachaId,
                      *(_QWORD *)(v17 + 8));
            }
            else
            {
              v19 = (*(__int64 (__fastcall **)(__int64 *, SelectBonusData_o **, _QWORD, _QWORD))(*v23
                                                                                               + 16LL
                                                                                               * *(unsigned __int16 *)(v24 + 72)
                                                                                               + 312))(
                      v23,
                      data,
                      (unsigned int)gachaId,
                      *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320));
            }
          }
          goto LABEL_38;
        }
      }
      v19 = ((__int64 (__fastcall *)(__int64 *, SelectBonusData_o **, _QWORD, __int64))v25)(
              v23,
              data,
              (unsigned int)gachaId,
              v24);
LABEL_38:
      if ( ++v10 == v8 )
        return v19 & 1;
    }
  }
  v19 = 0;
  return v19 & 1;
}