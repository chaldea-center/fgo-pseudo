void NpUpConfirmComponent___ctor(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void NpUpConfirmComponent__RemoveAllChild(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseInfo; // x0
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v5; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 v9; // x0
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  UnityEngine_Component_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 naturalAligment; // x9
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *gameObject; // x20
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x21
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  System_Collections_IEnumerator_o *v28; // x0
  __int64 v29; // x1
  System_Collections_IEnumerator_c *v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  System_Collections_IEnumerator_c *v34; // x8
  __int64 v35; // x9
  System_Collections_IEnumerator_c **v36; // x10
  __int64 v37; // x0
  UnityEngine_Component_o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  UnityEngine_Transform_c *v42; // x1
  __int64 v43; // x9
  __int64 v44; // x1
  __int64 v45; // x2
  UnityEngine_Object_o *v46; // x19
  __int64 v47; // x0
  __int64 v48; // x8
  __int64 v49; // x20
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  System_Collections_IEnumerator_o *v53; // [xsp+28h] [xbp-48h]
  System_Collections_IEnumerator_o *v54; // [xsp+28h] [xbp-48h]

  if ( (byte_5932239 & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UnityEngine_Transform_TypeInfo);
    byte_5932239 = 1;
  }
  baseInfo = this->fields.baseInfo;
  if ( !baseInfo )
    goto LABEL_72;
  baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0);
  if ( !baseInfo )
    goto LABEL_72;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0);
  v53 = Enumerator;
  while ( 1 )
  {
    if ( !v53 )
      goto LABEL_68;
    klass = v53->klass;
    v7 = *(unsigned __int16 *)&v53->klass->_2.rank;
    if ( *(_WORD *)&v53->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_11;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v9 = sub_2237E2C(v53, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v9)(v53, *(_QWORD *)(v9 + 8)) & 1) == 0 )
      break;
    v10 = v53->klass;
    v11 = *(unsigned __int16 *)&v53->klass->_2.rank;
    if ( *(_WORD *)&v53->klass->_2.rank )
    {
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 2;
        if ( !v11 )
          goto LABEL_18;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1];
    }
    else
    {
LABEL_18:
      v13 = sub_2237E2C(v53, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v14 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                       v53,
                                       *(_QWORD *)(v13 + 8));
    if ( !v14 )
      sub_21FFECC(0, v15);
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v14->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v14->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      v38 = (UnityEngine_Component_o *)sub_220024C(v14, UnityEngine_Transform_TypeInfo, v16, v17);
LABEL_67:
      Enumerator = (System_Collections_IEnumerator_o *)sub_220024C(v38, v42, v40, v41);
LABEL_68:
      sub_21FFECC(Enumerator, v5);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
  }
  v22 = sub_21FFDA4(v53, System_IDisposable_TypeInfo);
  if ( v22 )
  {
    v23 = *(_QWORD *)v22;
    v24 = v22;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_31;
      }
      v27 = v23 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_31:
      v27 = sub_2237E2C(v22, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  }
  baseInfo = this->fields.materialInfo;
  if ( !baseInfo || (baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0)) == 0 )
LABEL_72:
    sub_21FFECC(baseInfo, method);
  v28 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0);
  v54 = v28;
  while ( 1 )
  {
    if ( !v54 )
      sub_21FFECC(v28, v29);
    v30 = v54->klass;
    v31 = *(unsigned __int16 *)&v54->klass->_2.rank;
    if ( *(_WORD *)&v54->klass->_2.rank )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v32 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_42;
      }
      v33 = (__int64)&v30->vtable[*v32];
    }
    else
    {
LABEL_42:
      v33 = sub_2237E2C(v54, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v33)(v54, *(_QWORD *)(v33 + 8)) & 1) == 0 )
      break;
    v34 = v54->klass;
    v35 = *(unsigned __int16 *)&v54->klass->_2.rank;
    if ( *(_WORD *)&v54->klass->_2.rank )
    {
      v36 = (System_Collections_IEnumerator_c **)&v34->_1.interfaceOffsets->offset;
      while ( *(v36 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v35;
        v36 += 2;
        if ( !v35 )
          goto LABEL_49;
      }
      v37 = (__int64)&v34->vtable[*(_DWORD *)v36 + 1];
    }
    else
    {
LABEL_49:
      v37 = sub_2237E2C(v54, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v38 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v37)(
                                       v54,
                                       *(_QWORD *)(v37 + 8));
    if ( !v38 )
      sub_21FFECC(0, v39);
    v42 = UnityEngine_Transform_TypeInfo;
    v43 = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v38->klass->_2.naturalAligment < (unsigned int)v43
      || (UnityEngine_Transform_c *)v38->klass->_2.typeHierarchy[v43 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_67;
    }
    v46 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v38, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44, v45);
    UnityEngine_Object__Destroy_83246496(v46, 0);
  }
  v47 = sub_21FFDA4(v54, System_IDisposable_TypeInfo);
  if ( v47 )
  {
    v48 = *(_QWORD *)v47;
    v49 = v47;
    v50 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v51 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
      {
        --v50;
        v51 += 4;
        if ( !v50 )
          goto LABEL_62;
      }
      v52 = v48 + 16LL * *v51 + 312;
    }
    else
    {
LABEL_62:
      v52 = sub_2237E2C(v47, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v52)(v49, *(_QWORD *)(v52 + 8));
  }
}


void NpUpConfirmComponent__SetDefaultLayout(
        NpUpConfirmComponent_o *this,
        SetLevelUpData_o *updata,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v8; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Component_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 naturalAligment; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  UnityEngine_Transform_c *v24; // x8
  UnityEngine_Transform_o *v25; // x22
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  System_Collections_IEnumerator_o *v29; // [xsp+28h] [xbp-38h]

  if ( (byte_593223A & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&UnityEngine_Transform_TypeInfo);
    byte_593223A = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_40;
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0);
  v29 = Enumerator;
  while ( 1 )
  {
    if ( !v29 )
      goto LABEL_37;
    klass = v29->klass;
    v10 = *(unsigned __int16 *)&v29->klass->_2.rank;
    if ( *(_WORD *)&v29->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_2237E2C(v29, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(v29, *(_QWORD *)(v12 + 8)) & 1) == 0 )
      break;
    v13 = v29->klass;
    v14 = *(unsigned __int16 *)&v29->klass->_2.rank;
    if ( *(_WORD *)&v29->klass->_2.rank )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1];
    }
    else
    {
LABEL_17:
      v16 = sub_2237E2C(v29, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v17 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       v29,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      sub_21FFECC(0, v18);
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v17->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      Enumerator = (System_Collections_IEnumerator_o *)sub_220024C(v17, UnityEngine_Transform_TypeInfo, v19, v20);
LABEL_37:
      sub_21FFECC(Enumerator, v8);
    }
    gameObject = UnityEngine_Component__get_gameObject(v17, 0);
    if ( !gameObject )
      sub_21FFECC(0, v23);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  }
  transform = (UnityEngine_Transform_o *)sub_21FFDA4(v29, System_IDisposable_TypeInfo);
  if ( transform )
  {
    v24 = transform->klass;
    v25 = transform;
    v26 = *(unsigned __int16 *)&transform->klass->_2.rank;
    if ( *(_WORD *)&transform->klass->_2.rank )
    {
      v27 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_29;
      }
      v28 = (__int64)&v24->vtable + 16 * *v27;
    }
    else
    {
LABEL_29:
      v28 = sub_2237E2C(transform, System_IDisposable_TypeInfo, 0);
    }
    transform = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))v28)(
                                             v25,
                                             *(_QWORD *)(v28 + 8));
  }
  if ( !updata
    || (transform = (UnityEngine_Transform_o *)this->fields.upTargetRoot) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, !updata->fields.isNpAdd, 0),
        (transform = (UnityEngine_Transform_o *)this->fields.upTargetAddRoot) == 0) )
  {
LABEL_40:
    sub_21FFECC(transform, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, updata->fields.isNpAdd, 0);
}


void NpUpConfirmComponent__SetDefaultTitleLb(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  titleLb = this->fields.titleLb;
  if ( !titleLb || (UILabel__set_fontSize(titleLb, 22, 0), (titleLb = this->fields.titleLb) == 0) )
    sub_21FFECC(titleLb, method);
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
    sub_21FFECC(materialSvtBg, *(_QWORD *)&width);
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
  int v17; // w8
  int64_t upTargetRubyLb; // x0
  __int64 v19; // x1
  UIExtrusionLabel_o *currentLvLb; // x21
  UIExtrusionLabel_o *resLvLb; // x21
  const MethodInfo *v22; // x1
  UnityEngine_GameObject_o *svtFaceInfo; // x21
  UnityEngine_Transform_o *transform; // x0
  __int64 v25; // x2
  NpMaterialSvtInfo_o *v26; // x27
  __int128 v27; // q1
  UILabel_o *baseTxt; // x21
  __int64 v29; // x2
  int v30; // w20
  int32_t v31; // w27
  int64_t v32; // x28
  UnityEngine_GameObject_o *v33; // x21
  UnityEngine_Transform_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x22
  NpMaterialSvtInfo_o *Component_object; // x29
  UnityEngine_Transform_o *v37; // x21
  float y; // s8
  float v39; // s0
  float v40; // s1
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  UILabel_o *exceededTxt; // x21
  UILabel_o *mtTxt; // x21
  UnityEngine_Component_o *materialSvtBg; // x27
  UnityEngine_GameObject_o *v47; // x26
  UnityEngine_GameObject_o *v48; // x28
  UnityEngine_GameObject_o *v49; // x29
  UnityEngine_GameObject_o *v50; // x0
  __int64 v51; // x1
  const MethodInfo *v52; // x2
  int32_t size; // w8
  UnityEngine_GameObject_o *v54; // x25
  float v55; // s9
  float v56; // s8
  float v57; // s10
  float v58; // s11
  float v59; // s12
  int v60; // w10
  int v61; // w11
  int v62; // w8
  UnityEngine_GameObject_o *v63; // x0
  UILabel_o *upSpendQpTxtLb; // x21
  UILabel_o *upHaveQpTxtLb; // x21
  UILabel_o *upSpendQpLb; // x21
  System_String_o *v67; // x22
  Il2CppObject *v68; // x0
  UILabel_o *upHaveQpLb; // x21
  System_String_o *v70; // x22
  Il2CppObject *v71; // x0
  __int64 v72; // x2
  struct UILabel_o *upConfirmMsgLb; // x21
  System_String_o *mText; // x22
  System_String_o *v75; // x0
  System_String_o *v76; // x0
  const MethodInfo *v77; // x2
  UnityEngine_GameObject_o *v78; // x0
  float v79; // s8
  UILabel_o *upConfirmReConfirmMsgLb; // x21
  UnityEngine_GameObject_o *v81; // x0
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v83; // x1
  System_Collections_IEnumerator_o *v84; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v86; // x9
  int *p_offset; // x10
  __int64 v88; // x0
  __int64 v89; // x0
  __int64 v90; // x1
  System_Collections_IEnumerator_o *v91; // x21
  System_Collections_IEnumerator_c *v92; // x8
  __int64 v93; // x9
  System_Collections_IEnumerator_c **v94; // x10
  __int64 v95; // x0
  __int64 v96; // x0
  UnityEngine_Transform_c *v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  UnityEngine_Object_o *v100; // x21
  __int64 naturalAligment; // x9
  UnityEngine_Component_o *v102; // x0
  __int64 v103; // x1
  __int64 v104; // x2
  UnityEngine_Object_o *v105; // x22
  UnityEngine_Component_o *titleLb; // x0
  __int64 v107; // x1
  __int64 v108; // x2
  UnityEngine_Object_o *v109; // x22
  UnityEngine_GameObject_o *v110; // x0
  __int64 v111; // x1
  __int64 v112; // x0
  __int64 v113; // x8
  __int64 v114; // x22
  __int64 v115; // x9
  int *v116; // x10
  __int64 v117; // x0
  struct UILabel_o *v118; // x21
  System_String_o *v119; // x22
  System_String_o *v120; // x0
  System_String_o *v121; // x0
  __int64 v122; // x2
  struct UILabel_o *v123; // x21
  System_String_o *v124; // x22
  System_String_o *v125; // x0
  System_String_o *v126; // x0
  const MethodInfo *v127; // x2
  UnityEngine_GameObject_o *v128; // x0
  UnityEngine_GameObject_o *v129; // x0
  bool v130; // [xsp+8h] [xbp-F8h]
  SetLevelUpData_o *v132; // [xsp+10h] [xbp-F0h]
  int32_t spendQp; // [xsp+1Ch] [xbp-E4h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v134; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v135; // [xsp+40h] [xbp-C0h] BYREF
  __int64 v136; // [xsp+68h] [xbp-98h] BYREF
  System_Collections_IEnumerator_o *v137; // [xsp+78h] [xbp-88h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v139; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5932238 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&UnityEngine_Transform_TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_9609/*"NEED_QP"*/);
    sub_21FFC50(&StringLiteral_9723/*"NPUP_EXCEEDED"*/);
    sub_21FFC50(&StringLiteral_3720/*"COMBINE_HAVE_QP"*/);
    sub_21FFC50(&StringLiteral_3747/*"COMBINE_NPUP_MATERIAL"*/);
    sub_21FFC50(&StringLiteral_3882/*"CONFIRM_COMBINE_MSG"*/);
    sub_21FFC50(&StringLiteral_9724/*"NPUP_RECONFIRM_TXT"*/);
    sub_21FFC50(&StringLiteral_9722/*"NPUP_CONFIRM_WARNING_TXT"*/);
    sub_21FFC50(&StringLiteral_3746/*"COMBINE_NPUP_BASE"*/);
    sub_21FFC50(&StringLiteral_3754/*"COMBINE_SPEND_QP"*/);
    sub_21FFC50(&StringLiteral_9721/*"NPUP_CONFIRM_TXT"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_3748/*"COMBINE_NP_ADD_TITLE"*/);
    byte_5932238 = 1;
  }
  upTargetAddLabel = this->fields.upTargetAddLabel;
  v137 = 0;
  v17 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  v136 = 0;
  if ( !v17 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, baseData, selectUsrSvtIdList);
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3748/*"COMBINE_NP_ADD_TITLE"*/, 0);
  if ( !upTargetAddLabel )
    goto LABEL_134;
  UILabel__set_text(upTargetAddLabel, (System_String_o *)upTargetRubyLb, 0);
  if ( !updata )
    goto LABEL_134;
  upTargetRubyLb = (int64_t)this->fields.upTargetRubyLb;
  if ( !upTargetRubyLb )
    goto LABEL_134;
  UILabel__set_text((UILabel_o *)upTargetRubyLb, updata->fields.targetRuby, 0);
  upTargetRubyLb = (int64_t)this->fields.upTargetNameLb;
  if ( !upTargetRubyLb )
    goto LABEL_134;
  UILabel__set_text((UILabel_o *)upTargetRubyLb, updata->fields.targetName, 0);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel(
    baseData,
    this->fields.upTargetNameLb,
    this->fields.upTargetRubyLb,
    0);
  currentLvLb = this->fields.currentLvLb;
  upTargetRubyLb = (int64_t)System_Int32__ToString((int)updata + 64, 0);
  if ( !currentLvLb )
    goto LABEL_134;
  UIExtrusionLabel__set_text(currentLvLb, (System_String_o *)upTargetRubyLb, 0);
  resLvLb = this->fields.resLvLb;
  upTargetRubyLb = (int64_t)System_Int32__ToString((int)updata + 68, 0);
  if ( !resLvLb )
    goto LABEL_134;
  UIExtrusionLabel__set_text(resLvLb, (System_String_o *)upTargetRubyLb, 0);
  NpUpConfirmComponent__SetDefaultTitleLb(this, v22);
  upTargetRubyLb = (int64_t)this->fields.baseInfo;
  if ( !upTargetRubyLb )
    goto LABEL_134;
  svtFaceInfo = this->fields.svtFaceInfo;
  v130 = isExceedMaxLv;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)upTargetRubyLb, 0);
  upTargetRubyLb = (int64_t)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
  if ( !upTargetRubyLb )
    goto LABEL_134;
  upTargetRubyLb = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)upTargetRubyLb,
                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
  if ( !baseData )
    goto LABEL_134;
  v26 = (NpMaterialSvtInfo_o *)upTargetRubyLb;
  v27 = *(_OWORD *)&baseData->fields.id.fields.fakeValue;
  *(_OWORD *)&v135.fields.currentCryptoKey = *(_OWORD *)&baseData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v135.fields.fakeValue = v27;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v25);
  v134 = v135;
  upTargetRubyLb = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v134, 0);
  if ( !v26 )
    goto LABEL_134;
  NpMaterialSvtInfo__setMaterialSvtInfo(v26, 0, baseData, upTargetRubyLb, 0, 0);
  baseTxt = this->fields.baseTxt;
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3746/*"COMBINE_NPUP_BASE"*/, 0);
  if ( !baseTxt )
    goto LABEL_134;
  v132 = updata;
  UILabel__set_text(baseTxt, (System_String_o *)upTargetRubyLb, 0);
  if ( !selectUsrSvtIdList )
    goto LABEL_134;
  if ( selectUsrSvtIdList->fields._size >= 1 )
  {
    v30 = 0;
    v31 = 0;
    while ( 1 )
    {
      upTargetRubyLb = System_Collections_Generic_List_long___get_Item(
                         selectUsrSvtIdList,
                         v31,
                         (const MethodInfo_4437E70 *)Method_System_Collections_Generic_List_long__get_Item__);
      if ( !this->fields.materialInfo )
        break;
      v32 = upTargetRubyLb;
      v33 = this->fields.svtFaceInfo;
      v34 = UnityEngine_GameObject__get_transform(this->fields.materialInfo, 0);
      upTargetRubyLb = (int64_t)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v33, v34, 0, 0);
      if ( !upTargetRubyLb )
        break;
      v35 = (UnityEngine_GameObject_o *)upTargetRubyLb;
      Component_object = (NpMaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  (UnityEngine_GameObject_o *)upTargetRubyLb,
                                                  (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
      v37 = UnityEngine_GameObject__get_transform(v35, 0);
      upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(v35, 0);
      if ( !upTargetRubyLb )
        break;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)upTargetRubyLb, 0);
      y = localPosition.fields.y;
      upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(v35, 0);
      if ( !upTargetRubyLb )
        break;
      v139 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)upTargetRubyLb, 0);
      if ( !v37 )
        break;
      v39 = (float)v30;
      v40 = y;
      UnityEngine_Transform__set_localPosition(v37, v139, 0);
      if ( !Component_object )
        break;
      NpMaterialSvtInfo__setMaterialSvtInfo(Component_object, 0, baseData, v32, 0, 0);
      upTargetRubyLb = (int64_t)Component_object->fields.exceededTxt;
      if ( !upTargetRubyLb )
        break;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
      upTargetRubyLb = NpCombineControl__CheckConfirm(v32, 0);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, upTargetRubyLb & 1, 0);
      exceededTxt = Component_object->fields.exceededTxt;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42, v43);
      upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_9723/*"NPUP_EXCEEDED"*/, 0);
      if ( !exceededTxt )
        break;
      UILabel__set_text(exceededTxt, (System_String_o *)upTargetRubyLb, 0);
      ++v31;
      v30 += 140;
      if ( v31 >= selectUsrSvtIdList->fields._size )
        goto LABEL_33;
    }
LABEL_134:
    sub_21FFECC(upTargetRubyLb, v19);
  }
LABEL_33:
  mtTxt = this->fields.mtTxt;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v29);
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3747/*"COMBINE_NPUP_MATERIAL"*/, 0);
  if ( !mtTxt )
    goto LABEL_134;
  UILabel__set_text(mtTxt, (System_String_o *)upTargetRubyLb, 0);
  upTargetRubyLb = (int64_t)this->fields.mtTxt;
  if ( !upTargetRubyLb )
    goto LABEL_134;
  materialSvtBg = (UnityEngine_Component_o *)this->fields.materialSvtBg;
  upTargetRubyLb = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
  if ( !this->fields.arrow )
    goto LABEL_134;
  v47 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.arrow, 0);
  if ( !this->fields.materialInfo )
    goto LABEL_134;
  v48 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(this->fields.materialInfo, 0);
  if ( !upTargetRubyLb )
    goto LABEL_134;
  upTargetRubyLb = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0);
  if ( !upTargetRubyLb )
    goto LABEL_134;
  upTargetRubyLb = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
  if ( !this->fields.baseInfo )
    goto LABEL_134;
  v49 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(this->fields.baseInfo, 0);
  if ( !upTargetRubyLb )
    goto LABEL_134;
  upTargetRubyLb = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0);
  if ( !upTargetRubyLb )
    goto LABEL_134;
  v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
  size = selectUsrSvtIdList->fields._size;
  v54 = v50;
  if ( size > 2 )
  {
    if ( size == 3 )
    {
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 346, v52);
      if ( !materialSvtBg )
        goto LABEL_134;
      *(float *)&v60 = -100.0;
      v56 = -77.0;
      v55 = -200.0;
      *(float *)&v61 = 173.0;
      *(float *)&v62 = 176.0;
    }
    else
    {
      if ( size != 4 )
        goto LABEL_59;
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 445, v52);
      if ( !materialSvtBg )
        goto LABEL_134;
      *(float *)&v60 = -150.0;
      *(float *)&v61 = 223.0;
      v56 = -127.0;
      v55 = -250.0;
      *(float *)&v62 = 224.0;
    }
    v57 = *(float *)&v60;
    v58 = *(float *)&v61;
    v59 = *(float *)&v62;
  }
  else if ( size == 1 )
  {
    NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 144, v52);
    if ( !materialSvtBg )
      goto LABEL_134;
    v56 = 19.0;
    v59 = 77.0;
    v57 = -1.0;
    v55 = -100.0;
    v58 = 77.0;
  }
  else
  {
    if ( size != 2 )
      goto LABEL_59;
    NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 244, v52);
    if ( !materialSvtBg )
      goto LABEL_134;
    v55 = -150.0;
    v56 = -31.0;
    v57 = -51.0;
    v58 = 126.0;
    v59 = 127.0;
  }
  v63 = UnityEngine_Component__get_gameObject(materialSvtBg, 0);
  GameObjectExtensions__SetLocalPositionX(v63, v59, 0);
  GameObjectExtensions__SetLocalPositionX(v47, v58, 0);
  GameObjectExtensions__SetLocalPositionX(v48, v57, 0);
  GameObjectExtensions__SetLocalPositionX(v54, v55, 0);
  GameObjectExtensions__SetLocalPositionX(v49, v56, 0);
LABEL_59:
  upSpendQpTxtLb = this->fields.upSpendQpTxtLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51, v52);
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"COMBINE_SPEND_QP"*/, 0);
  if ( !upSpendQpTxtLb )
    goto LABEL_134;
  UILabel__set_text(upSpendQpTxtLb, (System_String_o *)upTargetRubyLb, 0);
  upHaveQpTxtLb = this->fields.upHaveQpTxtLb;
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3720/*"COMBINE_HAVE_QP"*/, 0);
  if ( !upHaveQpTxtLb )
    goto LABEL_134;
  UILabel__set_text(upHaveQpTxtLb, (System_String_o *)upTargetRubyLb, 0);
  upSpendQpLb = this->fields.upSpendQpLb;
  v67 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  spendQp = v132->fields.spendQp;
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &spendQp);
  upTargetRubyLb = (int64_t)System_String__Format(v67, v68, 0);
  if ( !upSpendQpLb )
    goto LABEL_134;
  UILabel__set_text(upSpendQpLb, (System_String_o *)upTargetRubyLb, 0);
  upHaveQpLb = this->fields.upHaveQpLb;
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  v135.fields.currentCryptoKey = v132->fields.haveQp;
  v71 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v135);
  upTargetRubyLb = (int64_t)System_String__Format(v70, v71, 0);
  if ( !upHaveQpLb )
    goto LABEL_134;
  UILabel__set_text(upHaveQpLb, (System_String_o *)upTargetRubyLb, 0);
  upTargetRubyLb = (int64_t)this->fields.upConfirmReConfirmMsgLb;
  if ( !upTargetRubyLb )
    goto LABEL_134;
  UILabel__set_text((UILabel_o *)upTargetRubyLb, (System_String_o *)StringLiteral_1/*""*/, 0);
  upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
  if ( !upTargetRubyLb )
    goto LABEL_134;
  UILabel__set_text((UILabel_o *)upTargetRubyLb, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !isCombineSvt && !v130 && !isExceedeMaterial )
  {
    upConfirmMsgLb = this->fields.upConfirmMsgLb;
    if ( !upConfirmMsgLb )
      goto LABEL_134;
    mText = upConfirmMsgLb->fields.mText;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v72);
    v75 = LocalizationManager__Get((System_String_o *)StringLiteral_3882/*"CONFIRM_COMBINE_MSG"*/, 0);
    v76 = System_String__Concat_75438412(mText, v75, 0);
    UILabel__set_text(upConfirmMsgLb, v76, 0);
    NpUpConfirmComponent__SetDefaultLayout(this, v132, v77);
    upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
    if ( !upTargetRubyLb )
      goto LABEL_134;
    v78 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
    GameObjectExtensions__SetLocalPositionY(v78, -133.0, 0);
    upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
    if ( !upTargetRubyLb )
      goto LABEL_134;
    v79 = 2.0;
LABEL_133:
    v129 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
    GameObjectExtensions__SetLocalPositionX(v129, v79, 0);
    return;
  }
  if ( !reConfirmation )
  {
    v118 = this->fields.upConfirmMsgLb;
    if ( !v118 )
      goto LABEL_134;
    v119 = v118->fields.mText;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v72);
    v120 = LocalizationManager__Get((System_String_o *)StringLiteral_9722/*"NPUP_CONFIRM_WARNING_TXT"*/, 0);
    v121 = System_String__Concat_75438412(v119, v120, 0);
    UILabel__set_text(v118, v121, 0);
    v123 = this->fields.upConfirmMsgLb;
    if ( !v123 )
      goto LABEL_134;
    v124 = v123->fields.mText;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v122);
    v125 = LocalizationManager__Get((System_String_o *)StringLiteral_9721/*"NPUP_CONFIRM_TXT"*/, 0);
    v126 = System_String__Concat_75481624(v124, (System_String_o *)StringLiteral_43/*"\n"*/, v125, 0);
    UILabel__set_text(v123, v126, 0);
    NpUpConfirmComponent__SetDefaultLayout(this, v132, v127);
    upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
    if ( !upTargetRubyLb )
      goto LABEL_134;
    v128 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
    GameObjectExtensions__SetLocalPositionY(v128, -134.0, 0);
    upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
    if ( !upTargetRubyLb )
      goto LABEL_134;
    v79 = 5.0;
    goto LABEL_133;
  }
  upConfirmReConfirmMsgLb = this->fields.upConfirmReConfirmMsgLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v72);
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_9724/*"NPUP_RECONFIRM_TXT"*/, 0);
  if ( !upConfirmReConfirmMsgLb )
    goto LABEL_134;
  UILabel__set_text(upConfirmReConfirmMsgLb, (System_String_o *)upTargetRubyLb, 0);
  upTargetRubyLb = (int64_t)this->fields.titleLb;
  if ( !upTargetRubyLb )
    goto LABEL_134;
  UILabel__set_fontSize((UILabel_o *)upTargetRubyLb, 27, 0);
  upTargetRubyLb = (int64_t)this->fields.titleLb;
  if ( !upTargetRubyLb )
    goto LABEL_134;
  v81 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
  GameObjectExtensions__SetLocalPositionY(v81, 184.0, 0);
  upTargetRubyLb = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !upTargetRubyLb )
    goto LABEL_134;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)upTargetRubyLb, 0);
  v137 = Enumerator;
  v135.fields.currentCryptoKey = 0;
  v135.fields.hiddenValue = (int64_t)&v137;
  v135.fields.fakeValue = (int64_t)&v136;
  if ( !Enumerator )
LABEL_114:
    sub_21FFECC(Enumerator, v83);
  v84 = Enumerator;
  while ( 1 )
  {
    klass = v84->klass;
    v86 = *(unsigned __int16 *)&v84->klass->_2.rank;
    if ( *(_WORD *)&v84->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v86;
        p_offset += 4;
        if ( !v86 )
          goto LABEL_89;
      }
      v88 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_89:
      v88 = sub_2237E2C(v84, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v89 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v88)(v84, *(_QWORD *)(v88 + 8));
    if ( (v89 & 1) == 0 )
      break;
    v91 = v137;
    if ( !v137 )
      sub_21FFECC(v89, v90);
    v92 = v137->klass;
    v93 = *(unsigned __int16 *)&v137->klass->_2.rank;
    if ( *(_WORD *)&v137->klass->_2.rank )
    {
      v94 = (System_Collections_IEnumerator_c **)&v92->_1.interfaceOffsets->offset;
      while ( *(v94 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v93;
        v94 += 2;
        if ( !v93 )
          goto LABEL_97;
      }
      v95 = (__int64)&v92->vtable[*(_DWORD *)v94 + 1];
    }
    else
    {
LABEL_97:
      v95 = sub_2237E2C(v137, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v96 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v95)(v91, *(_QWORD *)(v95 + 8));
    v100 = (UnityEngine_Object_o *)v96;
    if ( v96 )
    {
      v97 = UnityEngine_Transform_TypeInfo;
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)v96 + 304LL) < (unsigned int)naturalAligment
        || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v96 + 200LL) + 8 * naturalAligment - 8) != UnityEngine_Transform_TypeInfo )
      {
        v102 = (UnityEngine_Component_o *)sub_220024C(v96, UnityEngine_Transform_TypeInfo, v98, v99);
LABEL_136:
        sub_21FFECC(v102, v97);
      }
    }
    v102 = (UnityEngine_Component_o *)this->fields.upConfirmReConfirmMsgLb;
    if ( !v102 )
      goto LABEL_136;
    v105 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(v102, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v103, v104);
    Enumerator = (System_Collections_IEnumerator_o *)UnityEngine_Object__op_Inequality(v105, v100, 0);
    if ( ((unsigned __int8)Enumerator & 1) != 0 )
    {
      titleLb = (UnityEngine_Component_o *)this->fields.titleLb;
      if ( !titleLb )
        sub_21FFECC(0, v83);
      v109 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(titleLb, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v107, v108);
      Enumerator = (System_Collections_IEnumerator_o *)UnityEngine_Object__op_Inequality(v109, v100, 0);
      if ( ((unsigned __int8)Enumerator & 1) != 0 )
      {
        if ( !v100 )
          sub_21FFECC(Enumerator, v83);
        v110 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v100, 0);
        if ( !v110 )
          sub_21FFECC(0, v111);
        UnityEngine_GameObject__SetActive(v110, 0, 0);
      }
    }
    v84 = v137;
    if ( !v137 )
      goto LABEL_114;
  }
  v112 = sub_21FFDA4(v137, System_IDisposable_TypeInfo);
  v136 = v112;
  if ( v112 )
  {
    v113 = *(_QWORD *)v112;
    v114 = v112;
    v115 = *(unsigned __int16 *)(*(_QWORD *)v112 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v112 + 302LL) )
    {
      v116 = (int *)(*(_QWORD *)(v113 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v116 - 1) != System_IDisposable_TypeInfo )
      {
        --v115;
        v116 += 4;
        if ( !v115 )
          goto LABEL_120;
      }
      v117 = v113 + 16LL * *v116 + 312;
    }
    else
    {
LABEL_120:
      v117 = sub_2237E2C(v112, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v117)(v114, *(_QWORD *)(v117 + 8));
  }
}