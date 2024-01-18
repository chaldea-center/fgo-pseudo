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
  const MethodInfo *v10; // x2
  UserServantEntity_o *v11; // x1
  const MethodInfo *v12; // x3

  backSprite = (UnityEngine_Component_o *)this->fields.backSprite;
  if ( !backSprite
    || (backSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSprite, 0, 0LL),
        this->fields._infoIndex_k__BackingField = idx,
        !npData)
    || (backSprite = (UnityEngine_Component_o *)this->fields.tdNameRubyLabel) == 0LL
    || (UILabel__set_text((UILabel_o *)backSprite, npData->fields.npRuby, 0LL),
        (backSprite = (UnityEngine_Component_o *)this->fields.tdNameLabel) == 0LL) )
  {
    sub_B2C434(backSprite, baseData);
  }
  UILabel__set_text((UILabel_o *)backSprite, npData->fields.svtNpName, 0LL);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel(
    baseData,
    this->fields.tdNameLabel,
    this->fields.tdNameRubyLabel,
    0LL);
  WrapControlText__textBBCodeAdjust(this->fields.tdDetailLabel, npData->fields.svtNpdetail, 20, 0, 0, 0LL);
  ServantNpInfoIconComponent__setNpLv(this, npData->fields.svtNpLv, v10);
  ServantNpInfoIconComponent__setNpIconImg(this, v11, npData, v12);
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
  ServantNpInfoIconComponent_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *commandCardPrefab; // x21
  UnityEngine_GameObject_o *v14; // x21
  UnityEngine_Transform_o *transform; // x22
  float x; // s8
  float y; // s9
  float z; // s10
  ServantNpInfoIconComponent_o *v19; // x21
  System_Int32_array **gameObject; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int32_t npCardId; // w23
  int32_t svtId; // w24
  int32_t limitCount; // w25
  BattleCommandData_o *v30; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5 = this;
  if ( (byte_418B25E & 1) == 0 )
  {
    sub_B2C35C(&BattleCommandData_TypeInfo, baseUsrSvtData);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v7);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&StringLiteral_15014/*"Unlit/Transparent Colored"*/, v11);
    this = (ServantNpInfoIconComponent_o *)sub_B2C35C(&StringLiteral_4162/*"CommandCard"*/, v12);
    byte_418B25E = 1;
  }
  if ( !npData )
    goto LABEL_18;
  if ( npData->fields.svtUseNpId >= 1 )
  {
    commandCardPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v5->fields.commandCardPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (ServantNpInfoIconComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             commandCardPrefab,
                                             (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      v14 = (UnityEngine_GameObject_o *)this;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      this = (ServantNpInfoIconComponent_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
      if ( this )
      {
        localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
        x = localScale.fields.x;
        y = localScale.fields.y;
        z = localScale.fields.z;
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v14, (System_String_o *)StringLiteral_4162/*"CommandCard"*/, 0LL);
        this = (ServantNpInfoIconComponent_o *)v5->fields.commandCardBase;
        if ( this )
        {
          this = (ServantNpInfoIconComponent_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL);
          if ( transform )
          {
            UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
            zero = UnityEngine_Vector3__get_zero(0LL);
            UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
            identity = UnityEngine_Quaternion__get_identity(0LL);
            UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
            v39.fields.x = x;
            v39.fields.y = y;
            v39.fields.z = z;
            UnityEngine_Transform__set_localScale(transform, v39, 0LL);
            this = (ServantNpInfoIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v14,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
            if ( this )
            {
              v19 = this;
              BattleCommandComponent__setDepth((BattleCommandComponent_o *)this, 110, 0LL);
              gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)v5,
                                                    0LL);
              v19[2].fields.commandCard = (struct BattleCommandComponent_o *)gameObject;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v19[2].fields.commandCard,
                gameObject,
                v21,
                v22,
                v23,
                v24,
                v25,
                v26);
              npCardId = npData->fields.npCardId;
              svtId = npData->fields.svtId;
              limitCount = npData->fields.limitCount;
              v30 = (BattleCommandData_o *)sub_B2C42C(BattleCommandData_TypeInfo);
              BattleCommandData___ctor_18363144(v30, npCardId, svtId, limitCount, 0, 0LL);
              if ( v30 )
              {
                v30->fields.treasureDvc = npData->fields.svtDispNpId;
                this = (ServantNpInfoIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( this )
                {
                  this = (ServantNpInfoIconComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)this,
                                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
                  if ( this )
                  {
                    v30->fields._loadsvtLimit = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                  (ServantLimitImageMaster_o *)this,
                                                  npData->fields.svtId,
                                                  npData->fields.dispLimitCount,
                                                  0LL);
                    BattleCommandComponent__setData((BattleCommandComponent_o *)v19, v30, 0LL, 0, 1, 0, 0LL);
                    BattleCommandComponent__setShader(
                      (BattleCommandComponent_o *)v19,
                      (System_String_o *)StringLiteral_15014/*"Unlit/Transparent Colored"*/,
                      0LL);
                    BattleCommandComponent__updateView(
                      (BattleCommandComponent_o *)v19,
                      1,
                      0,
                      1,
                      0,
                      npData->fields.isCardHide,
                      0LL);
                    BattleCommandComponent__setTouchFlg((BattleCommandComponent_o *)v19, 0, 0LL);
                    v5->fields.commandCard = (struct BattleCommandComponent_o *)v19;
                    sub_B2C2F8(
                      (BattleServantConfConponent_o *)&v5->fields.commandCard,
                      (System_Int32_array **)v19,
                      v31,
                      v32,
                      v33,
                      v34,
                      v35,
                      v36);
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
    sub_B2C434(this, baseUsrSvtData);
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
  System_String_o *gameObject; // x0
  __int64 v11; // x1
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418B25F & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&lv);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_8377/*"LEVEL_INFO"*/, v6);
    byte_418B25F = 1;
  }
  levelLabel = this->fields.levelLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8377/*"LEVEL_INFO"*/, 0LL);
  v12 = lv;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  gameObject = System_String__Format(v8, v9, 0LL);
  if ( !levelLabel
    || (UILabel__set_text(levelLabel, gameObject, 0LL), (gameObject = (System_String_o *)this->fields.levelLabel) == 0LL)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)gameObject,
                                          0LL)) == 0LL )
  {
    sub_B2C434(gameObject, v11);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
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
  if ( (byte_41853F5 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isDecide);
    byte_41853F5 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall ServantNpInfoIconComponent_ClickDelegate__EndInvoke(
        ServantNpInfoIconComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantNpInfoIconComponent_ClickDelegate__Invoke(
        ServantNpInfoIconComponent_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ServantNpInfoIconComponent_ClickDelegate_o **v8; // x25
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
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  ServantNpInfoIconComponent_ClickDelegate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  ServantNpInfoIconComponent_ClickDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (ServantNpInfoIconComponent_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isDecide, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isDecide, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
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
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isDecide, v19);
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
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isDecide, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isDecide,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isDecide, v22);
    goto LABEL_37;
  }
}