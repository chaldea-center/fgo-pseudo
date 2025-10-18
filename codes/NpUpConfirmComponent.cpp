void NpUpConfirmComponent___ctor(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void NpUpConfirmComponent__DestroySvtInfo(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseInfo; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  System_Collections_IEnumerator_c *v9; // x8
  __int64 v10; // x9
  System_Collections_IEnumerator_c **v11; // x10
  __int64 v12; // x0
  UnityEngine_Component_o *v13; // x0
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // x20
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  System_Collections_IEnumerator_o *v22; // x19
  System_Collections_IEnumerator_c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  System_Collections_IEnumerator_c *v27; // x8
  __int64 v28; // x9
  System_Collections_IEnumerator_c **v29; // x10
  __int64 v30; // x0
  UnityEngine_Component_o *v31; // x0
  __int64 v32; // x9
  UnityEngine_Object_o *v33; // x20
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x19
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0

  if ( (byte_4C3D019 & 1) == 0 )
  {
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UnityEngine_Transform_TypeInfo);
    byte_4C3D019 = 1;
  }
  baseInfo = this->fields.baseInfo;
  if ( !baseInfo )
    goto LABEL_68;
  baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0);
  if ( !baseInfo )
    goto LABEL_68;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v6 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_10;
      }
      v8 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v8 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v8)(Enumerator, *(_QWORD *)(v8 + 8)) & 1) == 0 )
      break;
    v9 = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v11 = (System_Collections_IEnumerator_c **)&v9->_1.interfaceOffsets->offset;
      while ( *(v11 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        v11 += 2;
        if ( !v10 )
          goto LABEL_17;
      }
      v12 = (__int64)&v9->vtable[*(_DWORD *)v11 + 1];
    }
    else
    {
LABEL_17:
      v12 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v13 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(
                                       Enumerator,
                                       *(_QWORD *)(v12 + 8));
    if ( !v13 )
      goto LABEL_66;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v13->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v13->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      v31 = (UnityEngine_Component_o *)sub_1C37574(v13);
LABEL_65:
      v13 = (UnityEngine_Component_o *)sub_1C37574(v31);
LABEL_66:
      sub_1C372B4(v13);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v13, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(gameObject, 0);
  }
  v16 = sub_1C37194(Enumerator, System_IDisposable_TypeInfo);
  if ( v16 )
  {
    v17 = *(_QWORD *)v16;
    v18 = v16;
    v19 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v20 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v20 - 1) != System_IDisposable_TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_30;
      }
      v21 = v17 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_30:
      v21 = sub_1C87870(v16, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v21)(v18, *(_QWORD *)(v21 + 8));
  }
  baseInfo = this->fields.materialInfo;
  if ( !baseInfo || (baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0)) == 0 )
LABEL_68:
    sub_1C372B4(baseInfo);
  v22 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0);
  if ( !v22 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v23 = v22->klass;
    v24 = *(unsigned __int16 *)&v22->klass->_2.rank;
    if ( *(_WORD *)&v22->klass->_2.rank )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_40;
      }
      v26 = (__int64)&v23->vtable[*v25];
    }
    else
    {
LABEL_40:
      v26 = sub_1C87870(v22, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8)) & 1) == 0 )
      break;
    v27 = v22->klass;
    v28 = *(unsigned __int16 *)&v22->klass->_2.rank;
    if ( *(_WORD *)&v22->klass->_2.rank )
    {
      v29 = (System_Collections_IEnumerator_c **)&v27->_1.interfaceOffsets->offset;
      while ( *(v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        v29 += 2;
        if ( !v28 )
          goto LABEL_47;
      }
      v30 = (__int64)&v27->vtable[*(_DWORD *)v29 + 1];
    }
    else
    {
LABEL_47:
      v30 = sub_1C87870(v22, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v31 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v30)(
                                       v22,
                                       *(_QWORD *)(v30 + 8));
    if ( !v31 )
      sub_1C372B4(0);
    v32 = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v31->klass->_2.naturalAligment < (unsigned int)v32
      || (UnityEngine_Transform_c *)v31->klass->_2.typeHierarchy[v32 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_65;
    }
    v33 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v31, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v33, 0);
  }
  v34 = sub_1C37194(v22, System_IDisposable_TypeInfo);
  if ( v34 )
  {
    v35 = *(_QWORD *)v34;
    v36 = v34;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_60;
      }
      v39 = v35 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_60:
      v39 = sub_1C87870(v34, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v39)(v36, *(_QWORD *)(v39 + 8));
  }
}


void NpUpConfirmComponent__SetDefaultLayout(
        NpUpConfirmComponent_o *this,
        SetLevelUpData_o *updata,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  System_Collections_IEnumerator_c *v11; // x8
  __int64 v12; // x9
  System_Collections_IEnumerator_c **v13; // x10
  __int64 v14; // x0
  UnityEngine_Component_o *v15; // x0
  __int64 naturalAligment; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_c *v18; // x8
  UnityEngine_Transform_o *v19; // x21
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0

  if ( (byte_4C3D01A & 1) == 0 )
  {
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&UnityEngine_Transform_TypeInfo);
    byte_4C3D01A = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_38;
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_9;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v10 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v10)(Enumerator, *(_QWORD *)(v10 + 8))
        & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v13 = (System_Collections_IEnumerator_c **)&v11->_1.interfaceOffsets->offset;
      while ( *(v13 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        v13 += 2;
        if ( !v12 )
          goto LABEL_16;
      }
      v14 = (__int64)&v11->vtable[*(_DWORD *)v13 + 1];
    }
    else
    {
LABEL_16:
      v14 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v15 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(
                                       Enumerator,
                                       *(_QWORD *)(v14 + 8));
    if ( !v15 )
      goto LABEL_36;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v15->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v15->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      v15 = (UnityEngine_Component_o *)sub_1C37574(v15);
LABEL_36:
      sub_1C372B4(v15);
    }
    gameObject = UnityEngine_Component__get_gameObject(v15, 0);
    if ( !gameObject )
      sub_1C372B4(0);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  }
  transform = (UnityEngine_Transform_o *)sub_1C37194(Enumerator, System_IDisposable_TypeInfo);
  if ( transform )
  {
    v18 = transform->klass;
    v19 = transform;
    v20 = *(unsigned __int16 *)&transform->klass->_2.rank;
    if ( *(_WORD *)&transform->klass->_2.rank )
    {
      v21 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_28;
      }
      v22 = (__int64)&v18->vtable + 16 * *v21;
    }
    else
    {
LABEL_28:
      v22 = sub_1C87870(transform, System_IDisposable_TypeInfo, 0);
    }
    transform = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))v22)(
                                             v19,
                                             *(_QWORD *)(v22 + 8));
  }
  if ( !updata
    || (transform = (UnityEngine_Transform_o *)this->fields.upTargetRoot) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, !updata->fields.isNpAdd, 0),
        (transform = (UnityEngine_Transform_o *)this->fields.upTargetAddRoot) == 0) )
  {
LABEL_38:
    sub_1C372B4(transform);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, updata->fields.isNpAdd, 0);
}


void NpUpConfirmComponent__SetDefaultTitleLb(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  titleLb = this->fields.titleLb;
  if ( !titleLb || (UILabel__set_fontSize(titleLb, 22, 0), (titleLb = this->fields.titleLb) == 0) )
    sub_1C372B4(titleLb);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLb, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, 206.0, 0);
}


void NpUpConfirmComponent__SetMaterialSvtBgWidth(NpUpConfirmComponent_o *this, int32_t width, const MethodInfo *method)
{
  UIWidget_o *materialSvtBg; // x0

  materialSvtBg = (UIWidget_o *)this->fields.materialSvtBg;
  if ( !materialSvtBg
    || (UIWidget__set_width(materialSvtBg, width, 0), (materialSvtBg = (UIWidget_o *)this->fields.materialSvtBgGray) == 0) )
  {
    sub_1C372B4(materialSvtBg);
  }
  UIWidget__set_width(materialSvtBg, width, 0);
}


void NpUpConfirmComponent__setNpUpConfirmInfo(
        NpUpConfirmComponent_o *this,
        UserServantEntity_o *baseData,
        System_Collections_Generic_List_long__o *selectUsrSvtIdList,
        SetLevelUpData_o *updata,
        bool isExceedMaxLv,
        bool isCombineSvt,
        bool isExceedeMaterial,
        bool reConfirmation,
        const MethodInfo *method)
{
  UILabel_o *upTargetAddLabel; // x21
  int64_t upTargetRubyLb; // x0
  UIExtrusionLabel_o *currentLvLb; // x21
  UIExtrusionLabel_o *resLvLb; // x21
  const MethodInfo *v17; // x1
  UnityEngine_GameObject_o *svtFaceInfo; // x21
  UnityEngine_Transform_o *transform; // x0
  __int128 v20; // q1
  NpMaterialSvtInfo_o *v21; // x22
  UILabel_o *baseTxt; // x21
  int v23; // w20
  int32_t v24; // w27
  UnityEngine_GameObject_o *v25; // x21
  int64_t v26; // x28
  UnityEngine_Transform_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x21
  NpMaterialSvtInfo_o *Component_object; // x29
  UnityEngine_Transform_o *v30; // x22
  float y; // s8
  float v32; // s0
  float v33; // s1
  UnityEngine_GameObject_o *gameObject; // x21
  UILabel_o *exceededTxt; // x21
  UILabel_o *mtTxt; // x21
  UnityEngine_Component_o *materialSvtBg; // x27
  UnityEngine_GameObject_o *v38; // x26
  UnityEngine_GameObject_o *v39; // x28
  UnityEngine_GameObject_o *v40; // x29
  UnityEngine_GameObject_o *v41; // x0
  const MethodInfo *v42; // x2
  int v43; // w8
  UnityEngine_GameObject_o *v44; // x25
  float v45; // s12
  float v46; // s8
  float v47; // s10
  float v48; // s9
  float v49; // s11
  int v50; // w8
  int v51; // w9
  int v52; // w10
  int v53; // w11
  int v54; // w12
  UnityEngine_GameObject_o *v55; // x0
  UILabel_o *upSpendQpTxtLb; // x21
  UILabel_o *upHaveQpTxtLb; // x21
  UILabel_o *upSpendQpLb; // x21
  System_String_o *v59; // x22
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  __int64 v63; // x5
  __int64 v64; // x6
  __int64 v65; // x7
  Il2CppObject *v66; // x0
  UILabel_o *upHaveQpLb; // x21
  System_String_o *v68; // x22
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  __int64 v72; // x5
  __int64 v73; // x6
  __int64 v74; // x7
  Il2CppObject *v75; // x0
  struct UILabel_o *upConfirmMsgLb; // x21
  System_String_o *mText; // x22
  System_String_o *v78; // x0
  System_String_o *v79; // x0
  const MethodInfo *v80; // x2
  UnityEngine_GameObject_o *v81; // x0
  float v82; // s8
  UILabel_o *upConfirmReConfirmMsgLb; // x21
  UnityEngine_GameObject_o *v84; // x0
  System_Collections_IEnumerator_o *Enumerator; // x24
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v87; // x9
  int32_t *p_offset; // x10
  __int64 v89; // x0
  System_Collections_IEnumerator_c *v90; // x8
  __int64 v91; // x9
  System_Collections_IEnumerator_c **v92; // x10
  __int64 v93; // x0
  __int64 v94; // x0
  UnityEngine_Object_o *v95; // x25
  __int64 naturalAligment; // x9
  UnityEngine_Component_o *v97; // x0
  UnityEngine_Object_o *v98; // x21
  UnityEngine_Component_o *titleLb; // x0
  UnityEngine_Object_o *v100; // x21
  _BOOL8 v101; // x0
  UnityEngine_GameObject_o *v102; // x0
  __int64 v103; // x0
  __int64 v104; // x8
  __int64 v105; // x24
  __int64 v106; // x9
  int *v107; // x10
  __int64 v108; // x0
  struct UILabel_o *v109; // x21
  System_String_o *v110; // x22
  System_String_o *v111; // x0
  System_String_o *v112; // x0
  struct UILabel_o *v113; // x21
  System_String_o *v114; // x22
  System_String_o *v115; // x0
  System_String_o *v116; // x0
  const MethodInfo *v117; // x2
  UnityEngine_GameObject_o *v118; // x0
  UnityEngine_GameObject_o *v119; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v123; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v124; // [xsp+40h] [xbp-B0h] BYREF
  _BOOL4 v125; // [xsp+68h] [xbp-88h]
  int32_t spendQp; // [xsp+6Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v128; // 0:s0.4,4:s1.4,8:s2.4

  v125 = isExceedMaxLv;
  if ( (byte_4C3D018 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&UnityEngine_Transform_TypeInfo);
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    sub_1C37058(&StringLiteral_9237/*"NEED_QP"*/);
    sub_1C37058(&StringLiteral_9350/*"NPUP_EXCEEDED"*/);
    sub_1C37058(&StringLiteral_3583/*"COMBINE_HAVE_QP"*/);
    sub_1C37058(&StringLiteral_3610/*"COMBINE_NPUP_MATERIAL"*/);
    sub_1C37058(&StringLiteral_3744/*"CONFIRM_COMBINE_MSG"*/);
    sub_1C37058(&StringLiteral_9351/*"NPUP_RECONFIRM_TXT"*/);
    sub_1C37058(&StringLiteral_9349/*"NPUP_CONFIRM_WARNING_TXT"*/);
    sub_1C37058(&StringLiteral_3609/*"COMBINE_NPUP_BASE"*/);
    sub_1C37058(&StringLiteral_3617/*"COMBINE_SPEND_QP"*/);
    sub_1C37058(&StringLiteral_9348/*"NPUP_CONFIRM_TXT"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_3611/*"COMBINE_NP_ADD_TITLE"*/);
    byte_4C3D018 = 1;
  }
  upTargetAddLabel = this->fields.upTargetAddLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3611/*"COMBINE_NP_ADD_TITLE"*/, 0);
  if ( !upTargetAddLabel )
    goto LABEL_130;
  UILabel__set_text(upTargetAddLabel, (System_String_o *)upTargetRubyLb, 0);
  if ( !updata )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)this->fields.upTargetRubyLb;
  if ( !upTargetRubyLb )
    goto LABEL_130;
  UILabel__set_text((UILabel_o *)upTargetRubyLb, updata->fields.targetRuby, 0);
  upTargetRubyLb = (int64_t)this->fields.upTargetNameLb;
  if ( !upTargetRubyLb )
    goto LABEL_130;
  UILabel__set_text((UILabel_o *)upTargetRubyLb, updata->fields.targetName, 0);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel(
    baseData,
    this->fields.upTargetNameLb,
    this->fields.upTargetRubyLb,
    0);
  currentLvLb = this->fields.currentLvLb;
  upTargetRubyLb = (int64_t)System_Int32__ToString((int)updata + 64, 0);
  if ( !currentLvLb )
    goto LABEL_130;
  UIExtrusionLabel__set_text(currentLvLb, (System_String_o *)upTargetRubyLb, 0);
  resLvLb = this->fields.resLvLb;
  upTargetRubyLb = (int64_t)System_Int32__ToString((int)updata + 68, 0);
  if ( !resLvLb )
    goto LABEL_130;
  UIExtrusionLabel__set_text(resLvLb, (System_String_o *)upTargetRubyLb, 0);
  NpUpConfirmComponent__SetDefaultTitleLb(this, v17);
  upTargetRubyLb = (int64_t)this->fields.baseInfo;
  if ( !upTargetRubyLb )
    goto LABEL_130;
  svtFaceInfo = this->fields.svtFaceInfo;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)upTargetRubyLb, 0);
  upTargetRubyLb = (int64_t)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)upTargetRubyLb,
                              (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
  if ( !baseData )
    goto LABEL_130;
  v20 = *(_OWORD *)&baseData->fields.id.fields.fakeValue;
  v21 = (NpMaterialSvtInfo_o *)upTargetRubyLb;
  *(_OWORD *)&v124.fields.currentCryptoKey = *(_OWORD *)&baseData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v124.fields.fakeValue = v20;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v123 = v124;
  upTargetRubyLb = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v123, 0);
  if ( !v21 )
    goto LABEL_130;
  NpMaterialSvtInfo__setMaterialSvtInfo(v21, 0, baseData, upTargetRubyLb, 0, 0);
  baseTxt = this->fields.baseTxt;
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3609/*"COMBINE_NPUP_BASE"*/, 0);
  if ( !baseTxt )
    goto LABEL_130;
  UILabel__set_text(baseTxt, (System_String_o *)upTargetRubyLb, 0);
  if ( !selectUsrSvtIdList )
    goto LABEL_130;
  if ( selectUsrSvtIdList->fields._size >= 1 )
  {
    v23 = 0;
    v24 = 0;
    do
    {
      upTargetRubyLb = System_Collections_Generic_List_long___get_Item(
                         selectUsrSvtIdList,
                         v24,
                         (const MethodInfo_378AD68 *)Method_System_Collections_Generic_List_long__get_Item__);
      if ( !this->fields.materialInfo )
        goto LABEL_130;
      v25 = this->fields.svtFaceInfo;
      v26 = upTargetRubyLb;
      v27 = UnityEngine_GameObject__get_transform(this->fields.materialInfo, 0);
      upTargetRubyLb = (int64_t)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v25, v27, 0, 0);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      v28 = (UnityEngine_GameObject_o *)upTargetRubyLb;
      Component_object = (NpMaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  (UnityEngine_GameObject_o *)upTargetRubyLb,
                                                  (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
      v30 = UnityEngine_GameObject__get_transform(v28, 0);
      upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(v28, 0);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)upTargetRubyLb, 0);
      y = localPosition.fields.y;
      upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(v28, 0);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      v128 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)upTargetRubyLb, 0);
      if ( !v30 )
        goto LABEL_130;
      v32 = (float)v23;
      v33 = y;
      UnityEngine_Transform__set_localPosition(v30, v128, 0);
      if ( !Component_object )
        goto LABEL_130;
      NpMaterialSvtInfo__setMaterialSvtInfo(Component_object, 0, baseData, v26, 0, 0);
      upTargetRubyLb = (int64_t)Component_object->fields.exceededTxt;
      if ( !upTargetRubyLb )
        goto LABEL_130;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
      upTargetRubyLb = NpCombineControl__CheckConfirm(v26, 0);
      if ( !gameObject )
        goto LABEL_130;
      UnityEngine_GameObject__SetActive(gameObject, upTargetRubyLb & 1, 0);
      exceededTxt = Component_object->fields.exceededTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_9350/*"NPUP_EXCEEDED"*/, 0);
      if ( !exceededTxt )
        goto LABEL_130;
      UILabel__set_text(exceededTxt, (System_String_o *)upTargetRubyLb, 0);
      ++v24;
      v23 += 140;
    }
    while ( v24 < selectUsrSvtIdList->fields._size );
  }
  mtTxt = this->fields.mtTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3610/*"COMBINE_NPUP_MATERIAL"*/, 0);
  if ( !mtTxt )
    goto LABEL_130;
  UILabel__set_text(mtTxt, (System_String_o *)upTargetRubyLb, 0);
  upTargetRubyLb = (int64_t)this->fields.mtTxt;
  if ( !upTargetRubyLb )
    goto LABEL_130;
  materialSvtBg = (UnityEngine_Component_o *)this->fields.materialSvtBg;
  upTargetRubyLb = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
  if ( !this->fields.arrow )
    goto LABEL_130;
  v38 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.arrow, 0);
  if ( !this->fields.materialInfo )
    goto LABEL_130;
  v39 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(this->fields.materialInfo, 0);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
  if ( !this->fields.baseInfo )
    goto LABEL_130;
  v40 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(this->fields.baseInfo, 0);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
  v43 = selectUsrSvtIdList->fields._size - 1;
  v44 = v41;
  switch ( v43 )
  {
    case 0:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 144, v42);
      if ( !materialSvtBg )
        goto LABEL_130;
      v45 = 77.0;
      v46 = 19.0;
      v47 = -1.0;
      v48 = -100.0;
      v49 = 77.0;
      goto LABEL_54;
    case 1:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 244, v42);
      if ( !materialSvtBg )
        goto LABEL_130;
      v46 = -31.0;
      v48 = -150.0;
      v47 = -51.0;
      v49 = 126.0;
      v45 = 127.0;
      goto LABEL_54;
    case 2:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 346, v42);
      if ( !materialSvtBg )
        goto LABEL_130;
      *(float *)&v50 = -77.0;
      *(float *)&v51 = -200.0;
      *(float *)&v52 = -100.0;
      *(float *)&v53 = 173.0;
      *(float *)&v54 = 176.0;
      goto LABEL_51;
    case 3:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 445, v42);
      if ( !materialSvtBg )
        goto LABEL_130;
      *(float *)&v50 = -127.0;
      *(float *)&v51 = -250.0;
      *(float *)&v52 = -150.0;
      *(float *)&v53 = 223.0;
      *(float *)&v54 = 224.0;
LABEL_51:
      v46 = *(float *)&v50;
      v48 = *(float *)&v51;
      v47 = *(float *)&v52;
      v49 = *(float *)&v53;
      v45 = *(float *)&v54;
LABEL_54:
      v55 = UnityEngine_Component__get_gameObject(materialSvtBg, 0);
      GameObjectExtensions__SetLocalPositionX(v55, v45, 0);
      GameObjectExtensions__SetLocalPositionX(v38, v49, 0);
      GameObjectExtensions__SetLocalPositionX(v39, v47, 0);
      GameObjectExtensions__SetLocalPositionX(v44, v48, 0);
      GameObjectExtensions__SetLocalPositionX(v40, v46, 0);
LABEL_55:
      upSpendQpTxtLb = this->fields.upSpendQpTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3617/*"COMBINE_SPEND_QP"*/, 0);
      if ( !upSpendQpTxtLb )
        goto LABEL_130;
      UILabel__set_text(upSpendQpTxtLb, (System_String_o *)upTargetRubyLb, 0);
      upHaveQpTxtLb = this->fields.upHaveQpTxtLb;
      upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3583/*"COMBINE_HAVE_QP"*/, 0);
      if ( !upHaveQpTxtLb )
        goto LABEL_130;
      UILabel__set_text(upHaveQpTxtLb, (System_String_o *)upTargetRubyLb, 0);
      upSpendQpLb = this->fields.upSpendQpLb;
      v59 = LocalizationManager__Get((System_String_o *)StringLiteral_9237/*"NEED_QP"*/, 0);
      spendQp = updata->fields.spendQp;
      v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendQp, v60, v61, v62, v63, v64, v65);
      upTargetRubyLb = (int64_t)System_String__Format(v59, v66, 0);
      if ( !upSpendQpLb )
        goto LABEL_130;
      UILabel__set_text(upSpendQpLb, (System_String_o *)upTargetRubyLb, 0);
      upHaveQpLb = this->fields.upHaveQpLb;
      v68 = LocalizationManager__Get((System_String_o *)StringLiteral_9237/*"NEED_QP"*/, 0);
      v124.fields.currentCryptoKey = updata->fields.haveQp;
      v75 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v124, v69, v70, v71, v72, v73, v74);
      upTargetRubyLb = (int64_t)System_String__Format(v68, v75, 0);
      if ( !upHaveQpLb )
        goto LABEL_130;
      UILabel__set_text(upHaveQpLb, (System_String_o *)upTargetRubyLb, 0);
      upTargetRubyLb = (int64_t)this->fields.upConfirmReConfirmMsgLb;
      if ( !upTargetRubyLb )
        goto LABEL_130;
      UILabel__set_text((UILabel_o *)upTargetRubyLb, (System_String_o *)StringLiteral_1/*""*/, 0);
      upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
      if ( !upTargetRubyLb )
        goto LABEL_130;
      UILabel__set_text((UILabel_o *)upTargetRubyLb, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( !v125 && !isExceedeMaterial && !isCombineSvt )
      {
        upConfirmMsgLb = this->fields.upConfirmMsgLb;
        if ( !upConfirmMsgLb )
          goto LABEL_130;
        mText = upConfirmMsgLb->fields.mText;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v78 = LocalizationManager__Get((System_String_o *)StringLiteral_3744/*"CONFIRM_COMBINE_MSG"*/, 0);
        v79 = System_String__Concat_63561656(mText, v78, 0);
        UILabel__set_text(upConfirmMsgLb, v79, 0);
        NpUpConfirmComponent__SetDefaultLayout(this, updata, v80);
        upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
        if ( !upTargetRubyLb )
          goto LABEL_130;
        v81 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
        GameObjectExtensions__SetLocalPositionY(v81, -133.0, 0);
        upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
        if ( !upTargetRubyLb )
          goto LABEL_130;
        v82 = 2.0;
LABEL_129:
        v119 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
        GameObjectExtensions__SetLocalPositionX(v119, v82, 0);
        return;
      }
      if ( !reConfirmation )
      {
        if ( v125 || isCombineSvt || isExceedeMaterial )
        {
          v109 = this->fields.upConfirmMsgLb;
          if ( !v109 )
            goto LABEL_130;
          v110 = v109->fields.mText;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v111 = LocalizationManager__Get((System_String_o *)StringLiteral_9349/*"NPUP_CONFIRM_WARNING_TXT"*/, 0);
          v112 = System_String__Concat_63561656(v110, v111, 0);
          UILabel__set_text(v109, v112, 0);
        }
        v113 = this->fields.upConfirmMsgLb;
        if ( !v113 )
          goto LABEL_130;
        v114 = v113->fields.mText;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v115 = LocalizationManager__Get((System_String_o *)StringLiteral_9348/*"NPUP_CONFIRM_TXT"*/, 0);
        v116 = System_String__Concat_63599904(v114, (System_String_o *)StringLiteral_43/*"\n"*/, v115, 0);
        UILabel__set_text(v113, v116, 0);
        NpUpConfirmComponent__SetDefaultLayout(this, updata, v117);
        upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
        if ( !upTargetRubyLb
          || (v118 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0),
              GameObjectExtensions__SetLocalPositionY(v118, -134.0, 0),
              (upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb) == 0) )
        {
LABEL_130:
          sub_1C372B4(upTargetRubyLb);
        }
        v82 = 5.0;
        goto LABEL_129;
      }
      upConfirmReConfirmMsgLb = this->fields.upConfirmReConfirmMsgLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_9351/*"NPUP_RECONFIRM_TXT"*/, 0);
      if ( !upConfirmReConfirmMsgLb )
        goto LABEL_130;
      UILabel__set_text(upConfirmReConfirmMsgLb, (System_String_o *)upTargetRubyLb, 0);
      upTargetRubyLb = (int64_t)this->fields.titleLb;
      if ( !upTargetRubyLb )
        goto LABEL_130;
      UILabel__set_fontSize((UILabel_o *)upTargetRubyLb, 27, 0);
      upTargetRubyLb = (int64_t)this->fields.titleLb;
      if ( !upTargetRubyLb )
        goto LABEL_130;
      v84 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
      GameObjectExtensions__SetLocalPositionY(v84, 184.0, 0);
      upTargetRubyLb = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)upTargetRubyLb, 0);
      if ( !Enumerator )
        sub_1C372B4(0);
      while ( 1 )
      {
        klass = Enumerator->klass;
        v87 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
        if ( *(_WORD *)&Enumerator->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v87;
            p_offset += 4;
            if ( !v87 )
              goto LABEL_84;
          }
          v89 = (__int64)&klass->vtable[*p_offset];
        }
        else
        {
LABEL_84:
          v89 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v89)(
                Enumerator,
                *(_QWORD *)(v89 + 8))
            & 1) == 0 )
          break;
        v90 = Enumerator->klass;
        v91 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
        if ( *(_WORD *)&Enumerator->klass->_2.rank )
        {
          v92 = (System_Collections_IEnumerator_c **)&v90->_1.interfaceOffsets->offset;
          while ( *(v92 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v91;
            v92 += 2;
            if ( !v91 )
              goto LABEL_91;
          }
          v93 = (__int64)&v90->vtable[*(_DWORD *)v92 + 1];
        }
        else
        {
LABEL_91:
          v93 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v94 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v93)(
                Enumerator,
                *(_QWORD *)(v93 + 8));
        v95 = (UnityEngine_Object_o *)v94;
        if ( v94 )
        {
          naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)v94 + 304LL) < (unsigned int)naturalAligment
            || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v94 + 200LL) + 8 * naturalAligment - 8) != UnityEngine_Transform_TypeInfo )
          {
            v97 = (UnityEngine_Component_o *)sub_1C37574(v94);
LABEL_132:
            sub_1C372B4(v97);
          }
        }
        v97 = (UnityEngine_Component_o *)this->fields.upConfirmReConfirmMsgLb;
        if ( !v97 )
          goto LABEL_132;
        v98 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(v97, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v98, v95, 0) )
        {
          titleLb = (UnityEngine_Component_o *)this->fields.titleLb;
          if ( !titleLb )
            sub_1C372B4(0);
          v100 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(titleLb, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v101 = UnityEngine_Object__op_Inequality(v100, v95, 0);
          if ( v101 )
          {
            if ( !v95 )
              sub_1C372B4(v101);
            v102 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v95, 0);
            if ( !v102 )
              sub_1C372B4(0);
            UnityEngine_GameObject__SetActive(v102, 0, 0);
          }
        }
      }
      v103 = sub_1C37194(Enumerator, System_IDisposable_TypeInfo);
      if ( v103 )
      {
        v104 = *(_QWORD *)v103;
        v105 = v103;
        v106 = *(unsigned __int16 *)(*(_QWORD *)v103 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v103 + 302LL) )
        {
          v107 = (int *)(*(_QWORD *)(v104 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v107 - 1) != System_IDisposable_TypeInfo )
          {
            --v106;
            v107 += 4;
            if ( !v106 )
              goto LABEL_112;
          }
          v108 = v104 + 16LL * *v107 + 312;
        }
        else
        {
LABEL_112:
          v108 = sub_1C87870(v103, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v108)(v105, *(_QWORD *)(v108 + 8));
      }
      return;
    default:
      goto LABEL_55;
  }
}