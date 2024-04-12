void __fastcall SummonResultInfoComponent___ctor(SummonResultInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonResultInfoComponent__OnClickSvt(SummonResultInfoComponent_o *this, const MethodInfo *method)
{
  SummonResultInfoComponent_ClickDelegate_o *clickCallbackFunc; // x0
  __int64 v4; // x1
  struct GachaInfos_o *resultData; // x8

  if ( (byte_42B3EE6 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B3EE6 = 1;
  }
  if ( this->fields.clickCallbackFunc )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    resultData = this->fields.resultData;
    if ( !resultData || (clickCallbackFunc = this->fields.clickCallbackFunc) == 0LL )
      sub_B52A5C(clickCallbackFunc, v4);
    SummonResultInfoComponent_ClickDelegate__Invoke(clickCallbackFunc, resultData->fields.userSvtId, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonResultInfoComponent__setResultData(
        SummonResultInfoComponent_o *this,
        GachaInfos_o *data,
        bool isOverlap,
        SummonResultInfoComponent_ClickDelegate_o *callback,
        int32_t befQp,
        int32_t befMana,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  DataManager_o *Instance; // x0
  __int64 sellMana; // x1
  DataManager_o *v22; // x23
  bool isNew; // w24
  int32_t type; // w25
  UserServantEntity_o *v25; // x0
  UserCommandCodeEntity_o *v26; // x26
  int32_t v27; // w25
  struct System_Byte_array *masterDataBytes; // x25
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v30; // x26
  __int64 v31; // x25
  Il2CppObject *lockCountObj; // x27
  int32_t v33; // w0
  int32_t fakeValue; // w4
  int32_t v35; // w2
  UIButton_o *iconBtn; // x24
  System_String_o *v37; // x21
  Il2CppObject *v38; // x0
  int32_t svtCoinNum; // [xsp+44h] [xbp-5Ch] BYREF
  WarEntity_o *v40; // [xsp+48h] [xbp-58h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_42B3EE5 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SvtCoinMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_12552/*"SUMMON_RESULT_COIN_FORMAT"*/);
    byte_42B3EE5 = 1;
  }
  entity = 0LL;
  v40 = 0LL;
  this->fields.resultData = data;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.resultData,
    (System_Int32_array **)data,
    (System_String_array **)isOverlap,
    (System_String_array **)callback,
    *(System_Boolean_array ***)&befQp,
    *(System_Int32_array ***)&befMana,
    (System_Int32_array *)method,
    v7);
  this->fields.clickCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.clickCallbackFunc,
    (System_Int32_array **)callback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_52;
  v22 = Instance;
  isNew = data->fields.isNew && !isOverlap;
  if ( !data->fields.userSvtId )
  {
    if ( !Instance )
      goto LABEL_52;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_52;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  data->fields.objectId,
                                  (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_52;
    lookup = Instance->fields.lookup;
    masterDataBytes = Instance->fields.masterDataBytes;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v42.fields.currentCryptoKey = lookup;
    *(_QWORD *)&v42.fields.fakeValue = masterDataBytes;
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v42, 0LL);
    goto LABEL_26;
  }
  type = data->fields.type;
  Instance = (DataManager_o *)SvtType__IsCommandCode(type, 0LL);
  if ( !v22 )
    goto LABEL_52;
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  v22,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_52;
    Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                  (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                  data->fields.userSvtId,
                                  (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_52;
    v30 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance;
    lockCountObj = Instance->fields.lockCountObj;
    v31 = *(_QWORD *)&Instance->fields.nowLoadCount;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v43.fields.currentCryptoKey = lockCountObj;
    *(_QWORD *)&v43.fields.fakeValue = v31;
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v43, 0LL);
    v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v30[6], 0LL);
    fakeValue = v30[18].fields.fakeValue;
    v35 = v33;
    goto LABEL_27;
  }
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v22,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_52;
  v25 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
          data->fields.userSvtId,
          (const MethodInfo_23E2500 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  if ( !v25 || (v26 = (UserCommandCodeEntity_o *)v25, !SvtType__IsCommandCode(type, 0LL)) )
  {
    v27 = 0;
LABEL_26:
    v35 = 0;
    fakeValue = 0;
LABEL_27:
    Instance = (DataManager_o *)this->fields.svtFaceInfo;
    if ( !Instance )
      goto LABEL_52;
    ServantFaceIconComponent__Set_30467316(
      (ServantFaceIconComponent_o *)Instance,
      v27,
      v35,
      -1,
      fakeValue,
      0LL,
      0LL,
      2,
      isNew,
      0,
      0LL,
      0,
      0,
      0,
      0,
      0LL);
    goto LABEL_29;
  }
  Instance = (DataManager_o *)this->fields.svtFaceInfo;
  if ( !Instance )
    goto LABEL_52;
  ServantFaceIconComponent__Set_30477732((ServantFaceIconComponent_o *)Instance, v26, isNew, 0LL, 0LL, 0LL);
  v27 = 0;
LABEL_29:
  Instance = (DataManager_o *)this->fields.svtFaceInfo;
  if ( !Instance )
    goto LABEL_52;
  iconBtn = this->fields.iconBtn;
  Instance = (DataManager_o *)ServantFaceIconComponent__GetFaceSpriteName((ServantFaceIconComponent_o *)Instance, 0LL);
  if ( !iconBtn )
    goto LABEL_52;
  UIButton__set_normalSprite(iconBtn, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.autoSaleInfo;
  if ( !Instance )
    goto LABEL_52;
  AutoSellInfoComponent__Clear((AutoSellInfoComponent_o *)Instance, 0LL);
  sellMana = (unsigned int)data->fields.sellMana;
  if ( *(_QWORD *)&data->fields.sellQp )
  {
    Instance = (DataManager_o *)this->fields.autoSaleInfo;
    if ( !Instance )
      goto LABEL_52;
    AutoSellInfoComponent__SetData(
      (AutoSellInfoComponent_o *)Instance,
      sellMana,
      data->fields.sellQp,
      befMana,
      befQp,
      0LL);
  }
  Instance = (DataManager_o *)this->fields.addRoot;
  if ( !Instance )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v22,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_52;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          v27,
          (const MethodInfo_23E2334 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_52:
    sub_B52A5C(Instance, sellMana);
  if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) && data->fields.svtCoinNum >= 1 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  v22,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SvtCoinMaster___);
    if ( Instance )
    {
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
              &v40,
              v27,
              (const MethodInfo_23E2334 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__) )
        return;
      Instance = (DataManager_o *)this->fields.addRoot;
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        if ( v40 )
        {
          Instance = (DataManager_o *)this->fields.addIcon;
          if ( Instance )
          {
            ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, (int32_t)v40->fields.age, -1, 0LL);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12552/*"SUMMON_RESULT_COIN_FORMAT"*/, 0LL);
            svtCoinNum = data->fields.svtCoinNum;
            v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtCoinNum);
            Instance = (DataManager_o *)System_String__Format(v37, v38, 0LL);
            if ( this->fields.addNumLabel )
            {
              UILabel__set_text(this->fields.addNumLabel, (System_String_o *)Instance, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_52;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonResultInfoComponent_ClickDelegate___ctor(
        SummonResultInfoComponent_ClickDelegate_o *this,
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


System_IAsyncResult_o *__fastcall SummonResultInfoComponent_ClickDelegate__BeginInvoke(
        SummonResultInfoComponent_ClickDelegate_o *this,
        int64_t usrSvtId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int64_t v10; // [xsp+18h] [xbp-28h] BYREF

  v10 = usrSvtId;
  if ( (byte_42ADDA4 & 1) == 0 )
  {
    sub_B52984(&long_TypeInfo);
    byte_42ADDA4 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(long_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall SummonResultInfoComponent_ClickDelegate__EndInvoke(
        SummonResultInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


void __fastcall SummonResultInfoComponent_ClickDelegate__Invoke(
        SummonResultInfoComponent_ClickDelegate_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  SummonResultInfoComponent_ClickDelegate_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, int64_t, _QWORD); // x0
  SummonResultInfoComponent_ClickDelegate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(int64_t, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  SummonResultInfoComponent_ClickDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (SummonResultInfoComponent_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(int64_t, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, usrSvtId, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(usrSvtId, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, int64_t, _QWORD))sub_B52A34(v17, v22);
        (*v19)(v21, usrSvtId, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AEB880(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, int64_t, _QWORD))v16)(v21, usrSvtId, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, int64_t, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            usrSvtId,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, int64_t, __int64))v23)(v21, usrSvtId, v22);
    goto LABEL_37;
  }
}