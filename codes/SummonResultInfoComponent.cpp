void __fastcall SummonResultInfoComponent___ctor(SummonResultInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonResultInfoComponent__OnClickSvt(SummonResultInfoComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SummonResultInfoComponent_ClickDelegate_o *clickCallbackFunc; // x0
  __int64 v6; // x1
  struct GachaInfos_o *resultData; // x8

  if ( (byte_42EC945 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC945 = 1;
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
      sub_B5D69C(clickCallbackFunc, v6);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  DataManager_o *Instance; // x0
  __int64 sellMana; // x1
  DataManager_o *v61; // x23
  bool isNew; // w24
  int32_t type; // w25
  UserServantEntity_o *v64; // x0
  UserCommandCodeEntity_o *v65; // x26
  int32_t v66; // w25
  struct System_Byte_array *masterDataBytes; // x25
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v69; // x26
  __int64 v70; // x25
  Il2CppObject *lockCountObj; // x27
  int32_t v72; // w0
  int32_t fakeValue; // w4
  int32_t v74; // w2
  UIButton_o *iconBtn; // x24
  System_String_o *v76; // x21
  Il2CppObject *v77; // x0
  int32_t svtCoinNum; // [xsp+44h] [xbp-5Ch] BYREF
  WarEntity_o *v79; // [xsp+48h] [xbp-58h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16

  if ( (byte_42EC944 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)data, isOverlap, callback);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SvtCoinMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v23, v24, v25);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v26, v27, v28);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v29, v30, v31);
    sub_B5D5C4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v32, v33, v34);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v35, v36, v37);
    sub_B5D5C4(&int_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_12611/*"SUMMON_RESULT_COIN_FORMAT"*/, v50, v51, v52);
    byte_42EC944 = 1;
  }
  entity = 0LL;
  v79 = 0LL;
  this->fields.resultData = data;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resultData,
    (System_Int32_array **)data,
    (System_String_array **)isOverlap,
    (System_String_array **)callback,
    *(System_Boolean_array ***)&befQp,
    *(System_Int32_array ***)&befMana,
    (System_Int32_array *)method,
    v7);
  this->fields.clickCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.clickCallbackFunc,
    (System_Int32_array **)callback,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_52;
  v61 = Instance;
  isNew = data->fields.isNew && !isOverlap;
  if ( !data->fields.userSvtId )
  {
    if ( !Instance )
      goto LABEL_52;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_52;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  data->fields.objectId,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_52;
    lookup = Instance->fields.lookup;
    masterDataBytes = Instance->fields.masterDataBytes;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v81.fields.currentCryptoKey = lookup;
    *(_QWORD *)&v81.fields.fakeValue = masterDataBytes;
    v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v81, 0LL);
    goto LABEL_26;
  }
  type = data->fields.type;
  Instance = (DataManager_o *)SvtType__IsCommandCode(type, 0LL);
  if ( !v61 )
    goto LABEL_52;
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  v61,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_52;
    Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                  (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                  data->fields.userSvtId,
                                  (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_52;
    v69 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance;
    lockCountObj = Instance->fields.lockCountObj;
    v70 = *(_QWORD *)&Instance->fields.nowLoadCount;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v82.fields.currentCryptoKey = lockCountObj;
    *(_QWORD *)&v82.fields.fakeValue = v70;
    v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v82, 0LL);
    v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v69[6], 0LL);
    fakeValue = v69[18].fields.fakeValue;
    v74 = v72;
    goto LABEL_27;
  }
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v61,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_52;
  v64 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
          data->fields.userSvtId,
          (const MethodInfo_23FB038 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  if ( !v64 || (v65 = (UserCommandCodeEntity_o *)v64, !SvtType__IsCommandCode(type, 0LL)) )
  {
    v66 = 0;
LABEL_26:
    v74 = 0;
    fakeValue = 0;
LABEL_27:
    Instance = (DataManager_o *)this->fields.svtFaceInfo;
    if ( !Instance )
      goto LABEL_52;
    ServantFaceIconComponent__Set_30846632(
      (ServantFaceIconComponent_o *)Instance,
      v66,
      v74,
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
  ServantFaceIconComponent__Set_30857092((ServantFaceIconComponent_o *)Instance, v65, isNew, 0LL, 0LL, 0LL);
  v66 = 0;
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
                                v61,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_52;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          v66,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_52:
    sub_B5D69C(Instance, sellMana);
  if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) && data->fields.svtCoinNum >= 1 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  v61,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SvtCoinMaster___);
    if ( Instance )
    {
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
              &v79,
              v66,
              (const MethodInfo_23FAE6C *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__) )
        return;
      Instance = (DataManager_o *)this->fields.addRoot;
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        if ( v79 )
        {
          Instance = (DataManager_o *)this->fields.addIcon;
          if ( Instance )
          {
            ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, (int32_t)v79->fields.age, -1, 0LL);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v76 = LocalizationManager__Get((System_String_o *)StringLiteral_12611/*"SUMMON_RESULT_COIN_FORMAT"*/, 0LL);
            svtCoinNum = data->fields.svtCoinNum;
            v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtCoinNum);
            Instance = (DataManager_o *)System_String__Format(v76, v77, 0LL);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E647E & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, usrSvtId, (_DWORD)callback, object);
    byte_42E647E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(long_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall SummonResultInfoComponent_ClickDelegate__EndInvoke(
        SummonResultInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


void __fastcall SummonResultInfoComponent_ClickDelegate__Invoke(
        SummonResultInfoComponent_ClickDelegate_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  SummonResultInfoComponent_ClickDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, int64_t, _QWORD); // x0
  SummonResultInfoComponent_ClickDelegate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(int64_t, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  SummonResultInfoComponent_ClickDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (SummonResultInfoComponent_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(int64_t, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, usrSvtId, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(usrSvtId, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, int64_t, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, usrSvtId, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, int64_t, _QWORD))v15)(v20, usrSvtId, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, int64_t, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            usrSvtId,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, int64_t, __int64))v22)(v20, usrSvtId, v21);
    goto LABEL_37;
  }
}