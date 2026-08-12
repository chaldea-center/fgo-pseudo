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

  if ( (byte_596A338 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Transform_TypeInfo);
    byte_596A338 = 1;
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
      v9 = sub_224BC3C(v53, System_Collections_IEnumerator_TypeInfo, 0);
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
      v13 = sub_224BC3C(v53, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v14 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                       v53,
                                       *(_QWORD *)(v13 + 8));
    if ( !v14 )
      sub_2213CDC(0, v15);
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v14->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v14->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      v38 = (UnityEngine_Component_o *)sub_221405C(v14, UnityEngine_Transform_TypeInfo, v16, v17);
LABEL_67:
      Enumerator = (System_Collections_IEnumerator_o *)sub_221405C(v38, v42, v40, v41);
LABEL_68:
      sub_2213CDC(Enumerator, v5);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
  }
  v22 = sub_2213BB4(v53, System_IDisposable_TypeInfo);
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
      v27 = sub_224BC3C(v22, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  }
  baseInfo = this->fields.materialInfo;
  if ( !baseInfo || (baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0)) == 0 )
LABEL_72:
    sub_2213CDC(baseInfo, method);
  v28 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0);
  v54 = v28;
  while ( 1 )
  {
    if ( !v54 )
      sub_2213CDC(v28, v29);
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
      v33 = sub_224BC3C(v54, System_Collections_IEnumerator_TypeInfo, 0);
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
      v37 = sub_224BC3C(v54, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v38 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v37)(
                                       v54,
                                       *(_QWORD *)(v37 + 8));
    if ( !v38 )
      sub_2213CDC(0, v39);
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
    UnityEngine_Object__Destroy_83459800(v46, 0);
  }
  v47 = sub_2213BB4(v54, System_IDisposable_TypeInfo);
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
      v52 = sub_224BC3C(v47, System_IDisposable_TypeInfo, 0);
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

  if ( (byte_596A339 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Transform_TypeInfo);
    byte_596A339 = 1;
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
      v12 = sub_224BC3C(v29, System_Collections_IEnumerator_TypeInfo, 0);
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
      v16 = sub_224BC3C(v29, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v17 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       v29,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      sub_2213CDC(0, v18);
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v17->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      Enumerator = (System_Collections_IEnumerator_o *)sub_221405C(v17, UnityEngine_Transform_TypeInfo, v19, v20);
LABEL_37:
      sub_2213CDC(Enumerator, v8);
    }
    gameObject = UnityEngine_Component__get_gameObject(v17, 0);
    if ( !gameObject )
      sub_2213CDC(0, v23);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  }
  transform = (UnityEngine_Transform_o *)sub_2213BB4(v29, System_IDisposable_TypeInfo);
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
      v28 = sub_224BC3C(transform, System_IDisposable_TypeInfo, 0);
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
    sub_2213CDC(transform, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, updata->fields.isNpAdd, 0);
}


void NpUpConfirmComponent__SetDefaultTitleLb(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  titleLb = this->fields.titleLb;
  if ( !titleLb || (UILabel__set_fontSize(titleLb, 22, 0), (titleLb = this->fields.titleLb) == 0) )
    sub_2213CDC(titleLb, method);
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
    sub_2213CDC(materialSvtBg, *(_QWORD *)&width);
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
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  UILabel_o *exceededTxt; // x21
  UILabel_o *mtTxt; // x21
  UnityEngine_Component_o *materialSvtBg; // x27
  UnityEngine_GameObject_o *v45; // x26
  UnityEngine_GameObject_o *v46; // x28
  UnityEngine_GameObject_o *v47; // x29
  UnityEngine_GameObject_o *v48; // x0
  __int64 v49; // x1
  const MethodInfo *v50; // x2
  int32_t size; // w8
  UnityEngine_GameObject_o *v52; // x25
  float v53; // s9
  float v54; // s8
  float v55; // s10
  float v56; // s11
  float v57; // s12
  int v58; // w10
  int v59; // w11
  int v60; // w8
  UnityEngine_GameObject_o *v61; // x0
  UILabel_o *upSpendQpTxtLb; // x21
  UILabel_o *upHaveQpTxtLb; // x21
  UILabel_o *upSpendQpLb; // x21
  System_String_o *v65; // x22
  Il2CppObject *v66; // x0
  UILabel_o *upHaveQpLb; // x21
  System_String_o *v68; // x22
  Il2CppObject *v69; // x0
  __int64 v70; // x2
  struct UILabel_o *upConfirmMsgLb; // x21
  System_String_o *mText; // x22
  System_String_o *v73; // x0
  System_String_o *v74; // x0
  const MethodInfo *v75; // x2
  UnityEngine_GameObject_o *v76; // x0
  float v77; // s8
  UILabel_o *upConfirmReConfirmMsgLb; // x21
  UnityEngine_GameObject_o *v79; // x0
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v81; // x1
  System_Collections_IEnumerator_o *v82; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v84; // x9
  int *p_offset; // x10
  __int64 v86; // x0
  __int64 v87; // x0
  __int64 v88; // x1
  System_Collections_IEnumerator_o *v89; // x21
  System_Collections_IEnumerator_c *v90; // x8
  __int64 v91; // x9
  System_Collections_IEnumerator_c **v92; // x10
  __int64 v93; // x0
  __int64 v94; // x0
  UnityEngine_Transform_c *v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  UnityEngine_Object_o *v98; // x21
  __int64 naturalAligment; // x9
  UnityEngine_Component_o *v100; // x0
  __int64 v101; // x1
  __int64 v102; // x2
  UnityEngine_Object_o *v103; // x22
  UnityEngine_Component_o *titleLb; // x0
  __int64 v105; // x1
  __int64 v106; // x2
  UnityEngine_Object_o *v107; // x22
  UnityEngine_GameObject_o *v108; // x0
  __int64 v109; // x1
  __int64 v110; // x0
  __int64 v111; // x8
  __int64 v112; // x22
  __int64 v113; // x9
  int *v114; // x10
  __int64 v115; // x0
  struct UILabel_o *v116; // x21
  System_String_o *v117; // x22
  System_String_o *v118; // x0
  System_String_o *v119; // x0
  __int64 v120; // x2
  struct UILabel_o *v121; // x21
  System_String_o *v122; // x22
  System_String_o *v123; // x0
  System_String_o *v124; // x0
  const MethodInfo *v125; // x2
  UnityEngine_GameObject_o *v126; // x0
  UnityEngine_GameObject_o *v127; // x0
  bool v128; // [xsp+8h] [xbp-F8h]
  SetLevelUpData_o *v130; // [xsp+10h] [xbp-F0h]
  int32_t spendQp; // [xsp+1Ch] [xbp-E4h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v132; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+40h] [xbp-C0h] BYREF
  __int64 v134; // [xsp+68h] [xbp-98h] BYREF
  System_Collections_IEnumerator_o *v135; // [xsp+78h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A337 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&UnityEngine_Transform_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_9622/*"NEED_QP"*/);
    sub_2213A60(&StringLiteral_9736/*"NPUP_EXCEEDED"*/);
    sub_2213A60(&StringLiteral_3725/*"COMBINE_HAVE_QP"*/);
    sub_2213A60(&StringLiteral_3752/*"COMBINE_NPUP_MATERIAL"*/);
    sub_2213A60(&StringLiteral_3887/*"CONFIRM_COMBINE_MSG"*/);
    sub_2213A60(&StringLiteral_9737/*"NPUP_RECONFIRM_TXT"*/);
    sub_2213A60(&StringLiteral_9735/*"NPUP_CONFIRM_WARNING_TXT"*/);
    sub_2213A60(&StringLiteral_3751/*"COMBINE_NPUP_BASE"*/);
    sub_2213A60(&StringLiteral_3759/*"COMBINE_SPEND_QP"*/);
    sub_2213A60(&StringLiteral_9734/*"NPUP_CONFIRM_TXT"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_3753/*"COMBINE_NP_ADD_TITLE"*/);
    byte_596A337 = 1;
  }
  upTargetAddLabel = this->fields.upTargetAddLabel;
  v135 = 0;
  v17 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  v134 = 0;
  if ( !v17 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, baseData, selectUsrSvtIdList);
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3753/*"COMBINE_NP_ADD_TITLE"*/, 0);
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
  v128 = isExceedMaxLv;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)upTargetRubyLb, 0);
  upTargetRubyLb = (int64_t)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
  if ( !upTargetRubyLb )
    goto LABEL_134;
  upTargetRubyLb = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)upTargetRubyLb,
                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
  if ( !baseData )
    goto LABEL_134;
  v26 = (NpMaterialSvtInfo_o *)upTargetRubyLb;
  v27 = *(_OWORD *)&baseData->fields.id.fields.fakeValue;
  *(_OWORD *)&v133.fields.currentCryptoKey = *(_OWORD *)&baseData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v133.fields.fakeValue = v27;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v25);
  v132 = v133;
  upTargetRubyLb = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v132, 0);
  if ( !v26 )
    goto LABEL_134;
  NpMaterialSvtInfo__setMaterialSvtInfo(v26, 0, baseData, upTargetRubyLb, 0, 0);
  baseTxt = this->fields.baseTxt;
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3751/*"COMBINE_NPUP_BASE"*/, 0);
  if ( !baseTxt )
    goto LABEL_134;
  v130 = updata;
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
                         (const MethodInfo_446BFA8 *)Method_System_Collections_Generic_List_long__get_Item__);
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
                                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
      v37 = UnityEngine_GameObject__get_transform(v35, 0);
      upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(v35, 0);
      if ( !upTargetRubyLb )
        break;
      y = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)upTargetRubyLb, 0).fields.y;
      upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(v35, 0);
      if ( !upTargetRubyLb )
        break;
      v136.fields.z = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)upTargetRubyLb, 0).fields.z;
      if ( !v37 )
        break;
      v136.fields.x = (float)v30;
      v136.fields.y = y;
      UnityEngine_Transform__set_localPosition(v37, v136, 0);
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
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40, v41);
      upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_9736/*"NPUP_EXCEEDED"*/, 0);
      if ( !exceededTxt )
        break;
      UILabel__set_text(exceededTxt, (System_String_o *)upTargetRubyLb, 0);
      ++v31;
      v30 += 140;
      if ( v31 >= selectUsrSvtIdList->fields._size )
        goto LABEL_33;
    }
LABEL_134:
    sub_2213CDC(upTargetRubyLb, v19);
  }
LABEL_33:
  mtTxt = this->fields.mtTxt;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v29);
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3752/*"COMBINE_NPUP_MATERIAL"*/, 0);
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
  v45 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.arrow, 0);
  if ( !this->fields.materialInfo )
    goto LABEL_134;
  v46 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(this->fields.materialInfo, 0);
  if ( !upTargetRubyLb )
    goto LABEL_134;
  upTargetRubyLb = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0);
  if ( !upTargetRubyLb )
    goto LABEL_134;
  upTargetRubyLb = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
  if ( !this->fields.baseInfo )
    goto LABEL_134;
  v47 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(this->fields.baseInfo, 0);
  if ( !upTargetRubyLb )
    goto LABEL_134;
  upTargetRubyLb = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0);
  if ( !upTargetRubyLb )
    goto LABEL_134;
  v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
  size = selectUsrSvtIdList->fields._size;
  v52 = v48;
  if ( size > 2 )
  {
    if ( size == 3 )
    {
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 346, v50);
      if ( !materialSvtBg )
        goto LABEL_134;
      v58 = -1027080192;
      v54 = -77.0;
      v53 = -200.0;
      v59 = 1127022592;
      v60 = 1127219200;
    }
    else
    {
      if ( size != 4 )
        goto LABEL_59;
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 445, v50);
      if ( !materialSvtBg )
        goto LABEL_134;
      v58 = -1021968384;
      v59 = 1130299392;
      v54 = -127.0;
      v53 = -250.0;
      v60 = 1130364928;
    }
    v55 = *(float *)&v58;
    v56 = *(float *)&v59;
    v57 = *(float *)&v60;
  }
  else if ( size == 1 )
  {
    NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 144, v50);
    if ( !materialSvtBg )
      goto LABEL_134;
    v54 = 19.0;
    v57 = 77.0;
    v55 = -1.0;
    v53 = -100.0;
    v56 = 77.0;
  }
  else
  {
    if ( size != 2 )
      goto LABEL_59;
    NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 244, v50);
    if ( !materialSvtBg )
      goto LABEL_134;
    v53 = -150.0;
    v54 = -31.0;
    v55 = -51.0;
    v56 = 126.0;
    v57 = 127.0;
  }
  v61 = UnityEngine_Component__get_gameObject(materialSvtBg, 0);
  GameObjectExtensions__SetLocalPositionX(v61, v57, 0);
  GameObjectExtensions__SetLocalPositionX(v45, v56, 0);
  GameObjectExtensions__SetLocalPositionX(v46, v55, 0);
  GameObjectExtensions__SetLocalPositionX(v52, v53, 0);
  GameObjectExtensions__SetLocalPositionX(v47, v54, 0);
LABEL_59:
  upSpendQpTxtLb = this->fields.upSpendQpTxtLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49, v50);
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3759/*"COMBINE_SPEND_QP"*/, 0);
  if ( !upSpendQpTxtLb )
    goto LABEL_134;
  UILabel__set_text(upSpendQpTxtLb, (System_String_o *)upTargetRubyLb, 0);
  upHaveQpTxtLb = this->fields.upHaveQpTxtLb;
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3725/*"COMBINE_HAVE_QP"*/, 0);
  if ( !upHaveQpTxtLb )
    goto LABEL_134;
  UILabel__set_text(upHaveQpTxtLb, (System_String_o *)upTargetRubyLb, 0);
  upSpendQpLb = this->fields.upSpendQpLb;
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_9622/*"NEED_QP"*/, 0);
  spendQp = v130->fields.spendQp;
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &spendQp);
  upTargetRubyLb = (int64_t)System_String__Format(v65, v66, 0);
  if ( !upSpendQpLb )
    goto LABEL_134;
  UILabel__set_text(upSpendQpLb, (System_String_o *)upTargetRubyLb, 0);
  upHaveQpLb = this->fields.upHaveQpLb;
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_9622/*"NEED_QP"*/, 0);
  v133.fields.currentCryptoKey = v130->fields.haveQp;
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v133);
  upTargetRubyLb = (int64_t)System_String__Format(v68, v69, 0);
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
  if ( !isCombineSvt && !v128 && !isExceedeMaterial )
  {
    upConfirmMsgLb = this->fields.upConfirmMsgLb;
    if ( !upConfirmMsgLb )
      goto LABEL_134;
    mText = upConfirmMsgLb->fields.mText;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v70);
    v73 = LocalizationManager__Get((System_String_o *)StringLiteral_3887/*"CONFIRM_COMBINE_MSG"*/, 0);
    v74 = System_String__Concat_75651716(mText, v73, 0);
    UILabel__set_text(upConfirmMsgLb, v74, 0);
    NpUpConfirmComponent__SetDefaultLayout(this, v130, v75);
    upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
    if ( !upTargetRubyLb )
      goto LABEL_134;
    v76 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
    GameObjectExtensions__SetLocalPositionY(v76, -133.0, 0);
    upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
    if ( !upTargetRubyLb )
      goto LABEL_134;
    v77 = 2.0;
LABEL_133:
    v127 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
    GameObjectExtensions__SetLocalPositionX(v127, v77, 0);
    return;
  }
  if ( !reConfirmation )
  {
    v116 = this->fields.upConfirmMsgLb;
    if ( !v116 )
      goto LABEL_134;
    v117 = v116->fields.mText;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v70);
    v118 = LocalizationManager__Get((System_String_o *)StringLiteral_9735/*"NPUP_CONFIRM_WARNING_TXT"*/, 0);
    v119 = System_String__Concat_75651716(v117, v118, 0);
    UILabel__set_text(v116, v119, 0);
    v121 = this->fields.upConfirmMsgLb;
    if ( !v121 )
      goto LABEL_134;
    v122 = v121->fields.mText;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v120);
    v123 = LocalizationManager__Get((System_String_o *)StringLiteral_9734/*"NPUP_CONFIRM_TXT"*/, 0);
    v124 = System_String__Concat_75694928(v122, (System_String_o *)StringLiteral_43/*"\n"*/, v123, 0);
    UILabel__set_text(v121, v124, 0);
    NpUpConfirmComponent__SetDefaultLayout(this, v130, v125);
    upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
    if ( !upTargetRubyLb )
      goto LABEL_134;
    v126 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
    GameObjectExtensions__SetLocalPositionY(v126, -134.0, 0);
    upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
    if ( !upTargetRubyLb )
      goto LABEL_134;
    v77 = 5.0;
    goto LABEL_133;
  }
  upConfirmReConfirmMsgLb = this->fields.upConfirmReConfirmMsgLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v70);
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_9737/*"NPUP_RECONFIRM_TXT"*/, 0);
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
  v79 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0);
  GameObjectExtensions__SetLocalPositionY(v79, 184.0, 0);
  upTargetRubyLb = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !upTargetRubyLb )
    goto LABEL_134;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)upTargetRubyLb, 0);
  v135 = Enumerator;
  v133.fields.currentCryptoKey = 0;
  v133.fields.hiddenValue = (int64_t)&v135;
  v133.fields.fakeValue = (int64_t)&v134;
  if ( !Enumerator )
LABEL_114:
    sub_2213CDC(Enumerator, v81);
  v82 = Enumerator;
  while ( 1 )
  {
    klass = v82->klass;
    v84 = *(unsigned __int16 *)&v82->klass->_2.rank;
    if ( *(_WORD *)&v82->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v84;
        p_offset += 4;
        if ( !v84 )
          goto LABEL_89;
      }
      v86 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_89:
      v86 = sub_224BC3C(v82, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v87 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v86)(v82, *(_QWORD *)(v86 + 8));
    if ( (v87 & 1) == 0 )
      break;
    v89 = v135;
    if ( !v135 )
      sub_2213CDC(v87, v88);
    v90 = v135->klass;
    v91 = *(unsigned __int16 *)&v135->klass->_2.rank;
    if ( *(_WORD *)&v135->klass->_2.rank )
    {
      v92 = (System_Collections_IEnumerator_c **)&v90->_1.interfaceOffsets->offset;
      while ( *(v92 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v91;
        v92 += 2;
        if ( !v91 )
          goto LABEL_97;
      }
      v93 = (__int64)&v90->vtable[*(_DWORD *)v92 + 1];
    }
    else
    {
LABEL_97:
      v93 = sub_224BC3C(v135, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v94 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v93)(v89, *(_QWORD *)(v93 + 8));
    v98 = (UnityEngine_Object_o *)v94;
    if ( v94 )
    {
      v95 = UnityEngine_Transform_TypeInfo;
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)v94 + 304LL) < (unsigned int)naturalAligment
        || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v94 + 200LL) + 8 * naturalAligment - 8) != UnityEngine_Transform_TypeInfo )
      {
        v100 = (UnityEngine_Component_o *)sub_221405C(v94, UnityEngine_Transform_TypeInfo, v96, v97);
LABEL_136:
        sub_2213CDC(v100, v95);
      }
    }
    v100 = (UnityEngine_Component_o *)this->fields.upConfirmReConfirmMsgLb;
    if ( !v100 )
      goto LABEL_136;
    v103 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(v100, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v101, v102);
    Enumerator = (System_Collections_IEnumerator_o *)UnityEngine_Object__op_Inequality(v103, v98, 0);
    if ( ((unsigned __int8)Enumerator & 1) != 0 )
    {
      titleLb = (UnityEngine_Component_o *)this->fields.titleLb;
      if ( !titleLb )
        sub_2213CDC(0, v81);
      v107 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(titleLb, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v105, v106);
      Enumerator = (System_Collections_IEnumerator_o *)UnityEngine_Object__op_Inequality(v107, v98, 0);
      if ( ((unsigned __int8)Enumerator & 1) != 0 )
      {
        if ( !v98 )
          sub_2213CDC(Enumerator, v81);
        v108 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v98, 0);
        if ( !v108 )
          sub_2213CDC(0, v109);
        UnityEngine_GameObject__SetActive(v108, 0, 0);
      }
    }
    v82 = v135;
    if ( !v135 )
      goto LABEL_114;
  }
  v110 = sub_2213BB4(v135, System_IDisposable_TypeInfo);
  v134 = v110;
  if ( v110 )
  {
    v111 = *(_QWORD *)v110;
    v112 = v110;
    v113 = *(unsigned __int16 *)(*(_QWORD *)v110 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v110 + 302LL) )
    {
      v114 = (int *)(*(_QWORD *)(v111 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v114 - 1) != System_IDisposable_TypeInfo )
      {
        --v113;
        v114 += 4;
        if ( !v113 )
          goto LABEL_120;
      }
      v115 = v111 + 16LL * *v114 + 312;
    }
    else
    {
LABEL_120:
      v115 = sub_224BC3C(v110, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v115)(v112, *(_QWORD *)(v115 + 8));
  }
}