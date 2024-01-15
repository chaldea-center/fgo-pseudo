void __fastcall ServantNpInfoIconComponent___ctor(ServantNpInfoIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantNpInfoIconComponent__SetNpInfo(
        ServantNpInfoIconComponent_o *this,
        UserServantEntity_o *baseData,
        int32_t idx,
        SvtUseNpData_o *npData,
        const MethodInfo *method)
{
  UnityEngine_Component_o *backSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *tdNameRubyLabel; // x0
  UILabel_o *tdNameLabel; // x0
  const MethodInfo *v13; // x2
  UserServantEntity_o *v14; // x1
  const MethodInfo *v15; // x3

  backSprite = (UnityEngine_Component_o *)this->fields.backSprite;
  if ( !backSprite
    || (gameObject = UnityEngine_Component__get_gameObject(backSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), this->fields._infoIndex_k__BackingField = idx, !npData)
    || (tdNameRubyLabel = this->fields.tdNameRubyLabel) == 0LL
    || (UILabel__set_text(tdNameRubyLabel, npData->fields.npRuby, 0LL), (tdNameLabel = this->fields.tdNameLabel) == 0LL) )
  {
    sub_B170D4();
  }
  UILabel__set_text(tdNameLabel, npData->fields.svtNpName, 0LL);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel(
    baseData,
    this->fields.tdNameLabel,
    this->fields.tdNameRubyLabel,
    0LL);
  WrapControlText__textBBCodeAdjust(this->fields.tdDetailLabel, npData->fields.svtNpdetail, 20, 0, 0, 0LL);
  ServantNpInfoIconComponent__setNpLv(this, npData->fields.svtNpLv, v13);
  ServantNpInfoIconComponent__setNpIconImg(this, v14, npData, v15);
}


void __fastcall ServantNpInfoIconComponent__getNpInfo(ServantNpInfoIconComponent_o *this, const MethodInfo *method)
{
  ;
}


int32_t __fastcall ServantNpInfoIconComponent__get_infoIndex(
        ServantNpInfoIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._infoIndex_k__BackingField;
}


void __fastcall ServantNpInfoIconComponent__setDispSelectMskImg(
        ServantNpInfoIconComponent_o *this,
        bool isShow,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantNpInfoIconComponent__setNpIconImg(
        ServantNpInfoIconComponent_o *this,
        UserServantEntity_o *baseUsrSvtData,
        SvtUseNpData_o *npData,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct UnityEngine_GameObject_o *commandCardPrefab; // x21
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_Transform_o *v17; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *commandCardBase; // x0
  UnityEngine_Transform_o *v22; // x0
  BattleCommandComponent_o *Component_srcLineSprite; // x0
  BattleCommandComponent_o *v24; // x21
  System_Int32_array **gameObject; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int32_t npCardId; // w23
  int32_t svtId; // w24
  int32_t limitCount; // w25
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  BattleCommandData_o *v39; // x22
  WebViewManager_o *Instance; // x0
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FD6E7 & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandData_TypeInfo, baseUsrSvtData);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v7);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&StringLiteral_14954/*"Unlit/Transparent Colored"*/, v11);
    sub_B16FFC(&StringLiteral_4144/*"CommandCard"*/, v12);
    byte_40FD6E7 = 1;
  }
  if ( !npData )
    goto LABEL_18;
  if ( npData->fields.svtUseNpId >= 1 )
  {
    commandCardPrefab = this->fields.commandCardPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)commandCardPrefab,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( v14 )
    {
      v15 = v14;
      transform = UnityEngine_GameObject__get_transform(v14, 0LL);
      v17 = UnityEngine_GameObject__get_transform(v15, 0LL);
      if ( v17 )
      {
        localScale = UnityEngine_Transform__get_localScale(v17, 0LL);
        x = localScale.fields.x;
        y = localScale.fields.y;
        z = localScale.fields.z;
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v15, (System_String_o *)StringLiteral_4144/*"CommandCard"*/, 0LL);
        commandCardBase = this->fields.commandCardBase;
        if ( commandCardBase )
        {
          v22 = UnityEngine_GameObject__get_transform(commandCardBase, 0LL);
          if ( transform )
          {
            UnityEngine_Transform__set_parent(transform, v22, 0LL);
            zero = UnityEngine_Vector3__get_zero(0LL);
            UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
            identity = UnityEngine_Quaternion__get_identity(0LL);
            UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
            v50.fields.x = x;
            v50.fields.y = y;
            v50.fields.z = z;
            UnityEngine_Transform__set_localScale(transform, v50, 0LL);
            Component_srcLineSprite = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    v15,
                                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
            if ( Component_srcLineSprite )
            {
              v24 = Component_srcLineSprite;
              BattleCommandComponent__setDepth(Component_srcLineSprite, 110, 0LL);
              gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
              v24->fields.target = (struct UnityEngine_GameObject_o *)gameObject;
              sub_B16F98((BattleServantConfConponent_o *)&v24->fields.target, gameObject, v26, v27, v28, v29, v30, v31);
              npCardId = npData->fields.npCardId;
              svtId = npData->fields.svtId;
              limitCount = npData->fields.limitCount;
              v39 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, v35, v36, v37, v38);
              BattleCommandData___ctor_18691260(v39, npCardId, svtId, limitCount, 0, 0LL);
              if ( v39 )
              {
                v39->fields.treasureDvc = npData->fields.svtDispNpId;
                Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( Instance )
                {
                  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                      (DataManager_o *)Instance,
                                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
                  if ( MasterData_WarQuestSelectionMaster )
                  {
                    v39->fields._loadsvtLimit = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                  MasterData_WarQuestSelectionMaster,
                                                  npData->fields.svtId,
                                                  npData->fields.dispLimitCount,
                                                  0LL);
                    BattleCommandComponent__setData(v24, v39, 0LL, 0, 1, 0, 0LL);
                    BattleCommandComponent__setShader(v24, (System_String_o *)StringLiteral_14954/*"Unlit/Transparent Colored"*/, 0LL);
                    BattleCommandComponent__updateView(v24, 1, 0, 1, 0, npData->fields.isCardHide, 0LL);
                    BattleCommandComponent__setTouchFlg(v24, 0, 0LL);
                    this->fields.commandCard = v24;
                    sub_B16F98(
                      (BattleServantConfConponent_o *)&this->fields.commandCard,
                      (System_Int32_array **)v24,
                      v42,
                      v43,
                      v44,
                      v45,
                      v46,
                      v47);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_18:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantNpInfoIconComponent__setNpLv(
        ServantNpInfoIconComponent_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *levelLabel; // x21
  System_String_o *v8; // x22
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FD6E8 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&lv);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_8348/*"LEVEL_INFO"*/, v6);
    byte_40FD6E8 = 1;
  }
  levelLabel = this->fields.levelLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8348/*"LEVEL_INFO"*/, 0LL);
  v13 = lv;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v10 = System_String__Format(v8, v9, 0LL);
  if ( !levelLabel
    || (UILabel__set_text(levelLabel, v10, 0LL), (v11 = (UnityEngine_Component_o *)this->fields.levelLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(v11, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall ServantNpInfoIconComponent__set_infoIndex(
        ServantNpInfoIconComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._infoIndex_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantNpInfoIconComponent_ClickDelegate___ctor(
        ServantNpInfoIconComponent_ClickDelegate_o *this,
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


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantNpInfoIconComponent_ClickDelegate__BeginInvoke(
        ServantNpInfoIconComponent_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  if ( (byte_40F7639 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isDecide);
    byte_40F7639 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall ServantNpInfoIconComponent_ClickDelegate__EndInvoke(
        ServantNpInfoIconComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantNpInfoIconComponent_ClickDelegate__Invoke(
        ServantNpInfoIconComponent_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  ServantNpInfoIconComponent_ClickDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  ServantNpInfoIconComponent_ClickDelegate_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  ServantNpInfoIconComponent_ClickDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (ServantNpInfoIconComponent_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isDecide, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isDecide, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, isDecide, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isDecide, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isDecide,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isDecide, v20);
    goto LABEL_37;
  }
}