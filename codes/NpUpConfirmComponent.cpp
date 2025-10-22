void NpUpConfirmComponent___ctor(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void NpUpConfirmComponent__DestroySvtInfo(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseInfo; // x0
  __int64 v4; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  UnityEngine_Component_o *v14; // x0
  __int64 v15; // x1
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x20
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x1
  System_Collections_IEnumerator_o *v25; // x19
  System_Collections_IEnumerator_c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  System_Collections_IEnumerator_c *v30; // x8
  __int64 v31; // x9
  System_Collections_IEnumerator_c **v32; // x10
  __int64 v33; // x0
  UnityEngine_Component_o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x9
  UnityEngine_Object_o *v37; // x20
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x19
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0

  if ( (byte_4C50D99 & 1) == 0 )
  {
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UnityEngine_Transform_TypeInfo);
    byte_4C50D99 = 1;
  }
  baseInfo = this->fields.baseInfo;
  if ( !baseInfo )
    goto LABEL_68;
  baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0);
  if ( !baseInfo )
    goto LABEL_68;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0);
  if ( !Enumerator )
    sub_1C3E7C0(0, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_10;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v9 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v9)(Enumerator, *(_QWORD *)(v9 + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 2;
        if ( !v11 )
          goto LABEL_17;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1];
    }
    else
    {
LABEL_17:
      v13 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v14 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                       Enumerator,
                                       *(_QWORD *)(v13 + 8));
    if ( !v14 )
      goto LABEL_66;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v14->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v14->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      v34 = (UnityEngine_Component_o *)sub_1C3EA80(v14);
LABEL_65:
      v14 = (UnityEngine_Component_o *)sub_1C3EA80(v34);
LABEL_66:
      sub_1C3E7C0(v14, v15);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(gameObject, 0);
  }
  v18 = sub_1C3E6A0(Enumerator, System_IDisposable_TypeInfo);
  if ( v18 )
  {
    v19 = *(_QWORD *)v18;
    v20 = v18;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_30;
      }
      v23 = v19 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_30:
      v23 = sub_1C8ED7C(v18, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  }
  baseInfo = this->fields.materialInfo;
  if ( !baseInfo || (baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0)) == 0 )
LABEL_68:
    sub_1C3E7C0(baseInfo, method);
  v25 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0);
  if ( !v25 )
    sub_1C3E7C0(0, v24);
  while ( 1 )
  {
    v26 = v25->klass;
    v27 = *(unsigned __int16 *)&v25->klass->_2.rank;
    if ( *(_WORD *)&v25->klass->_2.rank )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_40;
      }
      v29 = (__int64)&v26->vtable[*v28];
    }
    else
    {
LABEL_40:
      v29 = sub_1C8ED7C(v25, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
      break;
    v30 = v25->klass;
    v31 = *(unsigned __int16 *)&v25->klass->_2.rank;
    if ( *(_WORD *)&v25->klass->_2.rank )
    {
      v32 = (System_Collections_IEnumerator_c **)&v30->_1.interfaceOffsets->offset;
      while ( *(v32 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        v32 += 2;
        if ( !v31 )
          goto LABEL_47;
      }
      v33 = (__int64)&v30->vtable[*(_DWORD *)v32 + 1];
    }
    else
    {
LABEL_47:
      v33 = sub_1C8ED7C(v25, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v34 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v33)(
                                       v25,
                                       *(_QWORD *)(v33 + 8));
    if ( !v34 )
      sub_1C3E7C0(0, v35);
    v36 = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v34->klass->_2.naturalAligment < (unsigned int)v36
      || (UnityEngine_Transform_c *)v34->klass->_2.typeHierarchy[v36 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_65;
    }
    v37 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v34, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(v37, 0);
  }
  v38 = sub_1C3E6A0(v25, System_IDisposable_TypeInfo);
  if ( v38 )
  {
    v39 = *(_QWORD *)v38;
    v40 = v38;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_60;
      }
      v43 = v39 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_60:
      v43 = sub_1C8ED7C(v38, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v43)(v40, *(_QWORD *)(v43 + 8));
  }
}


void NpUpConfirmComponent__SetDefaultLayout(
        NpUpConfirmComponent_o *this,
        SetLevelUpData_o *updata,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Component_o *v17; // x0
  __int64 v18; // x1
  __int64 naturalAligment; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  UnityEngine_Transform_c *v22; // x8
  UnityEngine_Transform_o *v23; // x21
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4C50D9A & 1) == 0 )
  {
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&UnityEngine_Transform_TypeInfo);
    byte_4C50D9A = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_38;
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0);
  if ( !Enumerator )
    sub_1C3E7C0(0, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_9;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v12 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(Enumerator, *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1];
    }
    else
    {
LABEL_16:
      v16 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v17 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_36;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v17->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      v17 = (UnityEngine_Component_o *)sub_1C3EA80(v17);
LABEL_36:
      sub_1C3E7C0(v17, v18);
    }
    gameObject = UnityEngine_Component__get_gameObject(v17, 0);
    if ( !gameObject )
      sub_1C3E7C0(0, v21);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  }
  transform = (UnityEngine_Transform_o *)sub_1C3E6A0(Enumerator, System_IDisposable_TypeInfo);
  if ( transform )
  {
    v22 = transform->klass;
    v23 = transform;
    v24 = *(unsigned __int16 *)&transform->klass->_2.rank;
    if ( *(_WORD *)&transform->klass->_2.rank )
    {
      v25 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_28;
      }
      v26 = (__int64)&v22->vtable + 16 * *v25;
    }
    else
    {
LABEL_28:
      v26 = sub_1C8ED7C(transform, System_IDisposable_TypeInfo, 0);
    }
    transform = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))v26)(
                                             v23,
                                             *(_QWORD *)(v26 + 8));
  }
  if ( !updata
    || (transform = (UnityEngine_Transform_o *)this->fields.upTargetRoot) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, !updata->fields.isNpAdd, 0),
        (transform = (UnityEngine_Transform_o *)this->fields.upTargetAddRoot) == 0) )
  {
LABEL_38:
    sub_1C3E7C0(transform, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, updata->fields.isNpAdd, 0);
}


void NpUpConfirmComponent__SetDefaultTitleLb(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  titleLb = this->fields.titleLb;
  if ( !titleLb || (UILabel__set_fontSize(titleLb, 22, 0), (titleLb = this->fields.titleLb) == 0) )
    sub_1C3E7C0(titleLb, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLb, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, 206.0, 0);
}


// local variable allocation has failed, the output may be wrong!
void NpUpConfirmComponent__SetMaterialSvtBgWidth(NpUpConfirmComponent_o *this, int32_t width, const MethodInfo *method)
{
  UIWidget_o *materialSvtBg; // x0

  materialSvtBg = (UIWidget_o *)this->fields.materialSvtBg;
  if ( !materialSvtBg
    || (UIWidget__set_width(materialSvtBg, width, 0), (materialSvtBg = (UIWidget_o *)this->fields.materialSvtBgGray) == 0) )
  {
    sub_1C3E7C0(materialSvtBg, *(_QWORD *)&width);
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
  __int64 v15; // x1
  UIExtrusionLabel_o *currentLvLb; // x21
  UIExtrusionLabel_o *resLvLb; // x21
  const MethodInfo *v18; // x1
  UnityEngine_GameObject_o *svtFaceInfo; // x21
  UnityEngine_Transform_o *transform; // x0
  __int128 v21; // q1
  NpMaterialSvtInfo_o *v22; // x22
  UILabel_o *baseTxt; // x21
  int v24; // w20
  int32_t v25; // w27
  UnityEngine_GameObject_o *v26; // x21
  int64_t v27; // x28
  UnityEngine_Transform_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x21
  NpMaterialSvtInfo_o *Component_object; // x29
  UnityEngine_Transform_o *v31; // x22
  float y; // s8
  float v33; // s0
  float v34; // s1
  UnityEngine_GameObject_o *gameObject; // x21
  UILabel_o *exceededTxt; // x21
  UILabel_o *mtTxt; // x21
  UnityEngine_Component_o *materialSvtBg; // x27
  UnityEngine_GameObject_o *v39; // x26
  UnityEngine_GameObject_o *v40; // x28
  UnityEngine_GameObject_o *v41; // x29
  UnityEngine_GameObject_o *v42; // x0
  const MethodInfo *v43; // x2
  int v44; // w8
  UnityEngine_GameObject_o *v45; // x25
  float v46; // s12
  float v47; // s8
  float v48; // s10
  float v49; // s9
  float v50; // s11
  int v51; // w8
  int v52; // w9
  int v53; // w10
  int v54; // w11
  int v55; // w12
  UnityEngine_GameObject_o *v56; // x0
  UILabel_o *upSpendQpTxtLb; // x21
  UILabel_o *upHaveQpTxtLb; // x21
  UILabel_o *upSpendQpLb; // x21
  System_String_o *v60; // x22
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  __int64 v64; // x5
  __int64 v65; // x6
  __int64 v66; // x7
  Il2CppObject *v67; // x0
  UILabel_o *upHaveQpLb; // x21
  System_String_o *v69; // x22
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  __int64 v73; // x5
  __int64 v74; // x6
  __int64 v75; // x7
  Il2CppObject *v76; // x0
  struct UILabel_o *upConfirmMsgLb; // x21
  System_String_o *mText; // x22
  System_String_o *v79; // x0
  System_String_o *v80; // x0
  const MethodInfo *v81; // x2
  UnityEngine_GameObject_o *v82; // x0
  float v83; // s8
  UILabel_o *upConfirmReConfirmMsgLb; // x21
  UnityEngine_GameObject_o *v85; // x0
  __int64 v86; // x1
  System_Collections_IEnumerator_o *Enumerator; // x24
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v89; // x9
  int32_t *p_offset; // x10
  __int64 v91; // x0
  System_Collections_IEnumerator_c *v92; // x8
  __int64 v93; // x9
  System_Collections_IEnumerator_c **v94; // x10
  __int64 v95; // x0
  __int64 v96; // x0
  UnityEngine_Transform_c *v97; // x1
  UnityEngine_Object_o *v98; // x25
  __int64 naturalAligment; // x9
  UnityEngine_Component_o *v100; // x0
  UnityEngine_Object_o *v101; // x21
  __int64 v102; // x1
  UnityEngine_Component_o *titleLb; // x0
  UnityEngine_Object_o *v104; // x21
  _BOOL8 v105; // x0
  __int64 v106; // x1
  UnityEngine_GameObject_o *v107; // x0
  __int64 v108; // x1
  __int64 v109; // x0
  __int64 v110; // x8
  __int64 v111; // x24
  __int64 v112; // x9
  int *v113; // x10
  __int64 v114; // x0
  struct UILabel_o *v115; // x21
  System_String_o *v116; // x22
  System_String_o *v117; // x0
  System_String_o *v118; // x0
  struct UILabel_o *v119; // x21
  System_String_o *v120; // x22
  System_String_o *v121; // x0
  System_String_o *v122; // x0
  const MethodInfo *v123; // x2
  UnityEngine_GameObject_o *v124; // x0
  UnityEngine_GameObject_o *v125; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v129; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v130; // [xsp+40h] [xbp-B0h] BYREF
  _BOOL4 v131; // [xsp+68h] [xbp-88h]
  int32_t spendQp; // [xsp+6Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v134; // 0:s0.4,4:s1.4,8:s2.4

  v131 = isExceedMaxLv;
  if ( (byte_4C50D98 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&long_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&UnityEngine_Transform_TypeInfo);
    sub_1C3E564(&StringLiteral_43/*"\n"*/);
    sub_1C3E564(&StringLiteral_9237/*"NEED_QP"*/);
    sub_1C3E564(&StringLiteral_9350/*"NPUP_EXCEEDED"*/);
    sub_1C3E564(&StringLiteral_3583/*"COMBINE_HAVE_QP"*/);
    sub_1C3E564(&StringLiteral_3610/*"COMBINE_NPUP_MATERIAL"*/);
    sub_1C3E564(&StringLiteral_3744/*"CONFIRM_COMBINE_MSG"*/);
    sub_1C3E564(&StringLiteral_9351/*"NPUP_RECONFIRM_TXT"*/);
    sub_1C3E564(&StringLiteral_9349/*"NPUP_CONFIRM_WARNING_TXT"*/);
    sub_1C3E564(&StringLiteral_3609/*"COMBINE_NPUP_BASE"*/);
    sub_1C3E564(&StringLiteral_3617/*"COMBINE_SPEND_QP"*/);
    sub_1C3E564(&StringLiteral_9348/*"NPUP_CONFIRM_TXT"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_3611/*"COMBINE_NP_ADD_TITLE"*/);
    byte_4C50D98 = 1;
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
  NpUpConfirmComponent__SetDefaultTitleLb(this, v18);
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
                              (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
  if ( !baseData )
    goto LABEL_130;
  v21 = *(_OWORD *)&baseData->fields.id.fields.fakeValue;
  v22 = (NpMaterialSvtInfo_o *)upTargetRubyLb;
  *(_OWORD *)&v130.fields.currentCryptoKey = *(_OWORD *)&baseData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v130.fields.fakeValue = v21;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v129 = v130;
  upTargetRubyLb = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v129, 0);
  if ( !v22 )
    goto LABEL_130;
  NpMaterialSvtInfo__setMaterialSvtInfo(v22, 0, baseData, upTargetRubyLb, 0, 0);
  baseTxt = this->fields.baseTxt;
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3609/*"COMBINE_NPUP_BASE"*/, 0);
  if ( !baseTxt )
    goto LABEL_130;
  UILabel__set_text(baseTxt, (System_String_o *)upTargetRubyLb, 0);
  if ( !selectUsrSvtIdList )
    goto LABEL_130;
  if ( selectUsrSvtIdList->fields._size >= 1 )
  {
    v24 = 0;
    v25 = 0;
    do
    {
      upTargetRubyLb = System_Collections_Generic_List_long___get_Item(
                         selectUsrSvtIdList,
                         v25,
                         (const MethodInfo_379D1A4 *)Method_System_Collections_Generic_List_long__get_Item__);
      if ( !this->fields.materialInfo )
        goto LABEL_130;
      v26 = this->fields.svtFaceInfo;
      v27 = upTargetRubyLb;
      v28 = UnityEngine_GameObject__get_transform(this->fields.materialInfo, 0);
      upTargetRubyLb = (int64_t)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v26, v28, 0, 0);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      v29 = (UnityEngine_GameObject_o *)upTargetRubyLb;
      Component_object = (NpMaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  (UnityEngine_GameObject_o *)upTargetRubyLb,
                                                  (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
      v31 = UnityEngine_GameObject__get_transform(v29, 0);
      upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(v29, 0);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)upTargetRubyLb, 0);
      y = localPosition.fields.y;
      upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(v29, 0);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      v134 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)upTargetRubyLb, 0);
      if ( !v31 )
        goto LABEL_130;
      v33 = (float)v24;
      v34 = y;
      UnityEngine_Transform__set_localPosition(v31, v134, 0);
      if ( !Component_object )
        goto LABEL_130;
      NpMaterialSvtInfo__setMaterialSvtInfo(Component_object, 0, baseData, v27, 0, 0);
      upTargetRubyLb = (int64_t)Component_object->fields.exceededTxt;
      if ( !upTargetRubyLb )
        goto LABEL_130;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
      upTargetRubyLb = NpCombineControl__CheckConfirm(v27, 0);
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
      ++v25;
      v24 += 140;
    }
    while ( v25 < selectUsrSvtIdList->fields._size );
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
  v39 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.arrow, 0);
  if ( !this->fields.materialInfo )
    goto LABEL_130;
  v40 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(this->fields.materialInfo, 0);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
  if ( !this->fields.baseInfo )
    goto LABEL_130;
  v41 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(this->fields.baseInfo, 0);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
  v44 = selectUsrSvtIdList->fields._size - 1;
  v45 = v42;
  switch ( v44 )
  {
    case 0:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 144, v43);
      if ( !materialSvtBg )
        goto LABEL_130;
      v46 = 77.0;
      v47 = 19.0;
      v48 = -1.0;
      v49 = -100.0;
      v50 = 77.0;
      goto LABEL_54;
    case 1:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 244, v43);
      if ( !materialSvtBg )
        goto LABEL_130;
      v47 = -31.0;
      v49 = -150.0;
      v48 = -51.0;
      v50 = 126.0;
      v46 = 127.0;
      goto LABEL_54;
    case 2:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 346, v43);
      if ( !materialSvtBg )
        goto LABEL_130;
      *(float *)&v51 = -77.0;
      *(float *)&v52 = -200.0;
      *(float *)&v53 = -100.0;
      *(float *)&v54 = 173.0;
      *(float *)&v55 = 176.0;
      goto LABEL_51;
    case 3:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 445, v43);
      if ( !materialSvtBg )
        goto LABEL_130;
      *(float *)&v51 = -127.0;
      *(float *)&v52 = -250.0;
      *(float *)&v53 = -150.0;
      *(float *)&v54 = 223.0;
      *(float *)&v55 = 224.0;
LABEL_51:
      v47 = *(float *)&v51;
      v49 = *(float *)&v52;
      v48 = *(float *)&v53;
      v50 = *(float *)&v54;
      v46 = *(float *)&v55;
LABEL_54:
      v56 = UnityEngine_Component__get_gameObject(materialSvtBg, 0);
      GameObjectExtensions__SetLocalPositionX(v56, v46, 0);
      GameObjectExtensions__SetLocalPositionX(v39, v50, 0);
      GameObjectExtensions__SetLocalPositionX(v40, v48, 0);
      GameObjectExtensions__SetLocalPositionX(v45, v49, 0);
      GameObjectExtensions__SetLocalPositionX(v41, v47, 0);
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
      v60 = LocalizationManager__Get((System_String_o *)StringLiteral_9237/*"NEED_QP"*/, 0);
      spendQp = updata->fields.spendQp;
      v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendQp, v61, v62, v63, v64, v65, v66);
      upTargetRubyLb = (int64_t)System_String__Format(v60, v67, 0);
      if ( !upSpendQpLb )
        goto LABEL_130;
      UILabel__set_text(upSpendQpLb, (System_String_o *)upTargetRubyLb, 0);
      upHaveQpLb = this->fields.upHaveQpLb;
      v69 = LocalizationManager__Get((System_String_o *)StringLiteral_9237/*"NEED_QP"*/, 0);
      v130.fields.currentCryptoKey = updata->fields.haveQp;
      v76 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v130, v70, v71, v72, v73, v74, v75);
      upTargetRubyLb = (int64_t)System_String__Format(v69, v76, 0);
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
      if ( !v131 && !isExceedeMaterial && !isCombineSvt )
      {
        upConfirmMsgLb = this->fields.upConfirmMsgLb;
        if ( !upConfirmMsgLb )
          goto LABEL_130;
        mText = upConfirmMsgLb->fields.mText;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v79 = LocalizationManager__Get((System_String_o *)StringLiteral_3744/*"CONFIRM_COMBINE_MSG"*/, 0);
        v80 = System_String__Concat_63636468(mText, v79, 0);
        UILabel__set_text(upConfirmMsgLb, v80, 0);
        NpUpConfirmComponent__SetDefaultLayout(this, updata, v81);
        upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
        if ( !upTargetRubyLb )
          goto LABEL_130;
        v82 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
        GameObjectExtensions__SetLocalPositionY(v82, -133.0, 0);
        upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
        if ( !upTargetRubyLb )
          goto LABEL_130;
        v83 = 2.0;
LABEL_129:
        v125 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
        GameObjectExtensions__SetLocalPositionX(v125, v83, 0);
        return;
      }
      if ( !reConfirmation )
      {
        if ( v131 || isCombineSvt || isExceedeMaterial )
        {
          v115 = this->fields.upConfirmMsgLb;
          if ( !v115 )
            goto LABEL_130;
          v116 = v115->fields.mText;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v117 = LocalizationManager__Get((System_String_o *)StringLiteral_9349/*"NPUP_CONFIRM_WARNING_TXT"*/, 0);
          v118 = System_String__Concat_63636468(v116, v117, 0);
          UILabel__set_text(v115, v118, 0);
        }
        v119 = this->fields.upConfirmMsgLb;
        if ( !v119 )
          goto LABEL_130;
        v120 = v119->fields.mText;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v121 = LocalizationManager__Get((System_String_o *)StringLiteral_9348/*"NPUP_CONFIRM_TXT"*/, 0);
        v122 = System_String__Concat_63674716(v120, (System_String_o *)StringLiteral_43/*"\n"*/, v121, 0);
        UILabel__set_text(v119, v122, 0);
        NpUpConfirmComponent__SetDefaultLayout(this, updata, v123);
        upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
        if ( !upTargetRubyLb
          || (v124 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0),
              GameObjectExtensions__SetLocalPositionY(v124, -134.0, 0),
              (upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb) == 0) )
        {
LABEL_130:
          sub_1C3E7C0(upTargetRubyLb, v15);
        }
        v83 = 5.0;
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
      v85 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
      GameObjectExtensions__SetLocalPositionY(v85, 184.0, 0);
      upTargetRubyLb = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)upTargetRubyLb, 0);
      if ( !Enumerator )
        sub_1C3E7C0(0, v86);
      while ( 1 )
      {
        klass = Enumerator->klass;
        v89 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
        if ( *(_WORD *)&Enumerator->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v89;
            p_offset += 4;
            if ( !v89 )
              goto LABEL_84;
          }
          v91 = (__int64)&klass->vtable[*p_offset];
        }
        else
        {
LABEL_84:
          v91 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v91)(
                Enumerator,
                *(_QWORD *)(v91 + 8))
            & 1) == 0 )
          break;
        v92 = Enumerator->klass;
        v93 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
        if ( *(_WORD *)&Enumerator->klass->_2.rank )
        {
          v94 = (System_Collections_IEnumerator_c **)&v92->_1.interfaceOffsets->offset;
          while ( *(v94 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v93;
            v94 += 2;
            if ( !v93 )
              goto LABEL_91;
          }
          v95 = (__int64)&v92->vtable[*(_DWORD *)v94 + 1];
        }
        else
        {
LABEL_91:
          v95 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v96 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v95)(
                Enumerator,
                *(_QWORD *)(v95 + 8));
        v98 = (UnityEngine_Object_o *)v96;
        if ( v96 )
        {
          v97 = UnityEngine_Transform_TypeInfo;
          naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)v96 + 304LL) < (unsigned int)naturalAligment
            || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v96 + 200LL) + 8 * naturalAligment - 8) != UnityEngine_Transform_TypeInfo )
          {
            v100 = (UnityEngine_Component_o *)sub_1C3EA80(v96);
LABEL_132:
            sub_1C3E7C0(v100, v97);
          }
        }
        v100 = (UnityEngine_Component_o *)this->fields.upConfirmReConfirmMsgLb;
        if ( !v100 )
          goto LABEL_132;
        v101 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(v100, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v101, v98, 0) )
        {
          titleLb = (UnityEngine_Component_o *)this->fields.titleLb;
          if ( !titleLb )
            sub_1C3E7C0(0, v102);
          v104 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(titleLb, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v105 = UnityEngine_Object__op_Inequality(v104, v98, 0);
          if ( v105 )
          {
            if ( !v98 )
              sub_1C3E7C0(v105, v106);
            v107 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v98, 0);
            if ( !v107 )
              sub_1C3E7C0(0, v108);
            UnityEngine_GameObject__SetActive(v107, 0, 0);
          }
        }
      }
      v109 = sub_1C3E6A0(Enumerator, System_IDisposable_TypeInfo);
      if ( v109 )
      {
        v110 = *(_QWORD *)v109;
        v111 = v109;
        v112 = *(unsigned __int16 *)(*(_QWORD *)v109 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v109 + 302LL) )
        {
          v113 = (int *)(*(_QWORD *)(v110 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v113 - 1) != System_IDisposable_TypeInfo )
          {
            --v112;
            v113 += 4;
            if ( !v112 )
              goto LABEL_112;
          }
          v114 = v110 + 16LL * *v113 + 312;
        }
        else
        {
LABEL_112:
          v114 = sub_1C8ED7C(v109, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v114)(v111, *(_QWORD *)(v114 + 8));
      }
      return;
    default:
      goto LABEL_55;
  }
}