void __fastcall NpUpConfirmComponent___ctor(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall NpUpConfirmComponent__DestroySvtInfo(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_GameObject_o *baseInfo; // x0
  __int64 v11; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v17; // x8
  __int64 v18; // x9
  System_Collections_IEnumerator_c **v19; // x10
  __int64 v20; // x0
  UnityEngine_Component_o *v21; // x0
  __int64 v22; // x1
  __int64 methodPtr_low; // x9
  __int64 v24; // x1
  UnityEngine_Object_o *gameObject; // x21
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x20
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x1
  System_Collections_IEnumerator_o *v33; // x19
  System_Collections_IEnumerator_c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
  System_Collections_IEnumerator_c *v38; // x8
  __int64 v39; // x9
  System_Collections_IEnumerator_c **v40; // x10
  __int64 v41; // x0
  UnityEngine_Component_o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x9
  __int64 v45; // x1
  UnityEngine_Object_o *v46; // x20
  __int64 v47; // x0
  __int64 v48; // x8
  __int64 v49; // x19
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0

  if ( (byte_4B19E3C & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Transform_TypeInfo, v8, v9);
    byte_4B19E3C = 1;
  }
  baseInfo = this->fields.baseInfo;
  if ( !baseInfo )
    goto LABEL_68;
  baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0LL);
  if ( !baseInfo )
    goto LABEL_68;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0LL);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = (System_Collections_IEnumerator_c **)&v17->_1.interfaceOffsets->offset;
      while ( *(v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        v19 += 2;
        if ( !v18 )
          goto LABEL_17;
      }
      v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 1].method;
    }
    else
    {
LABEL_17:
      v20 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v21 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(
                                       Enumerator,
                                       *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_66;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v21->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v21->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1BCACFC(v21);
LABEL_65:
      sub_1BCACFC(v42);
LABEL_66:
      sub_1BCAA3C(v21, v22);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v21, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
  v26 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
  if ( v26 )
  {
    v27 = *(_QWORD *)v26;
    v28 = v26;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_30;
      }
      v31 = v27 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_30:
      v31 = sub_1C1C7C0(v26, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
  }
  baseInfo = this->fields.materialInfo;
  if ( !baseInfo || (baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0LL)) == 0LL )
LABEL_68:
    sub_1BCAA3C(baseInfo, method);
  v33 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0LL);
  if ( !v33 )
    sub_1BCAA3C(0LL, v32);
  while ( 1 )
  {
    v34 = v33->klass;
    v35 = *(unsigned __int16 *)(&v33->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v33->klass->_2.bitflags2 + 3) )
    {
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_40;
      }
      v37 = (__int64)&v34->vtable[*v36].method;
    }
    else
    {
LABEL_40:
      v37 = sub_1C1C7C0(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) == 0 )
      break;
    v38 = v33->klass;
    v39 = *(unsigned __int16 *)(&v33->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v33->klass->_2.bitflags2 + 3) )
    {
      v40 = (System_Collections_IEnumerator_c **)&v38->_1.interfaceOffsets->offset;
      while ( *(v40 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v39;
        v40 += 2;
        if ( !v39 )
          goto LABEL_47;
      }
      v41 = (__int64)&v38->vtable[*(_DWORD *)v40 + 1].method;
    }
    else
    {
LABEL_47:
      v41 = sub_1C1C7C0(v33, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v42 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v41)(
                                       v33,
                                       *(_QWORD *)(v41 + 8));
    if ( !v42 )
      sub_1BCAA3C(0LL, v43);
    v44 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v42->klass->vtable._0_Equals.methodPtr) < (unsigned int)v44
      || (UnityEngine_Transform_c *)v42->klass->_2.typeHierarchy[v44 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_65;
    }
    v46 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v42, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
    UnityEngine_Object__Destroy_70154244(v46, 0LL);
  }
  v47 = sub_1BCA91C(v33, System_IDisposable_TypeInfo);
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
          goto LABEL_60;
      }
      v52 = v48 + 16LL * *v51 + 312;
    }
    else
    {
LABEL_60:
      v52 = sub_1C1C7C0(v47, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v52)(v49, *(_QWORD *)(v52 + 8));
  }
}


void __fastcall NpUpConfirmComponent__SetDefaultLayout(
        NpUpConfirmComponent_o *this,
        SetLevelUpData_o *updata,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v17; // x8
  __int64 v18; // x9
  System_Collections_IEnumerator_c **v19; // x10
  __int64 v20; // x0
  UnityEngine_Component_o *v21; // x0
  __int64 v22; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1
  UnityEngine_Transform_c *v26; // x8
  UnityEngine_Transform_o *v27; // x21
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4B19E3D & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, updata, method);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Transform_TypeInfo, v7, v8);
    byte_4B19E3D = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_38;
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = (System_Collections_IEnumerator_c **)&v17->_1.interfaceOffsets->offset;
      while ( *(v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        v19 += 2;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 1].method;
    }
    else
    {
LABEL_16:
      v20 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v21 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(
                                       Enumerator,
                                       *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v21->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v21->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1BCACFC(v21);
LABEL_36:
      sub_1BCAA3C(v21, v22);
    }
    gameObject = UnityEngine_Component__get_gameObject(v21, 0LL);
    if ( !gameObject )
      sub_1BCAA3C(0LL, v25);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  transform = (UnityEngine_Transform_o *)sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
  if ( transform )
  {
    v26 = transform->klass;
    v27 = transform;
    v28 = *(unsigned __int16 *)(&transform->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&transform->klass->_2.bitflags2 + 3) )
    {
      v29 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_28;
      }
      v30 = (__int64)(&v26->vtable._0_Equals.method + 2 * *v29);
    }
    else
    {
LABEL_28:
      v30 = sub_1C1C7C0(transform, System_IDisposable_TypeInfo, 0LL);
    }
    transform = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))v30)(
                                             v27,
                                             *(_QWORD *)(v30 + 8));
  }
  if ( !updata
    || (transform = (UnityEngine_Transform_o *)this->fields.upTargetRoot) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, !updata->fields.isNpAdd, 0LL),
        (transform = (UnityEngine_Transform_o *)this->fields.upTargetAddRoot) == 0LL) )
  {
LABEL_38:
    sub_1BCAA3C(transform, v10);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, updata->fields.isNpAdd, 0LL);
}


void __fastcall NpUpConfirmComponent__SetDefaultTitleLb(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  titleLb = this->fields.titleLb;
  if ( !titleLb || (UILabel__set_fontSize(titleLb, 22, 0LL), (titleLb = this->fields.titleLb) == 0LL) )
    sub_1BCAA3C(titleLb, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLb, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, 206.0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpUpConfirmComponent__SetMaterialSvtBgWidth(
        NpUpConfirmComponent_o *this,
        int32_t width,
        const MethodInfo *method)
{
  UIWidget_o *materialSvtBg; // x0

  materialSvtBg = (UIWidget_o *)this->fields.materialSvtBg;
  if ( !materialSvtBg
    || (UIWidget__set_width(materialSvtBg, width, 0LL),
        (materialSvtBg = (UIWidget_o *)this->fields.materialSvtBgGray) == 0LL) )
  {
    sub_1BCAA3C(materialSvtBg, *(_QWORD *)&width);
  }
  UIWidget__set_width(materialSvtBg, width, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpUpConfirmComponent__setNpUpConfirmInfo(
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  UILabel_o *upTargetAddLabel; // x21
  int64_t upTargetRubyLb; // x0
  __int64 v59; // x1
  UIExtrusionLabel_o *currentLvLb; // x21
  UIExtrusionLabel_o *resLvLb; // x21
  const MethodInfo *v62; // x1
  UnityEngine_GameObject_o *svtFaceInfo; // x21
  UnityEngine_Transform_o *transform; // x0
  __int128 v65; // q1
  NpMaterialSvtInfo_o *v66; // x22
  UILabel_o *baseTxt; // x21
  int v68; // w20
  int32_t v69; // w27
  UnityEngine_GameObject_o *v70; // x21
  int64_t v71; // x28
  UnityEngine_Transform_o *v72; // x0
  UnityEngine_GameObject_o *v73; // x21
  NpMaterialSvtInfo_o *Component_object; // x29
  UnityEngine_Transform_o *v75; // x22
  float y; // s8
  int v77; // s2
  float v78; // s0
  float v79; // s1
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v81; // x1
  UILabel_o *exceededTxt; // x21
  UILabel_o *mtTxt; // x21
  UnityEngine_Component_o *materialSvtBg; // x27
  UnityEngine_GameObject_o *v85; // x26
  UnityEngine_GameObject_o *v86; // x28
  UnityEngine_GameObject_o *v87; // x29
  UnityEngine_GameObject_o *v88; // x0
  __int64 v89; // x1
  const MethodInfo *v90; // x2
  int v91; // w8
  UnityEngine_GameObject_o *v92; // x25
  int v93; // s12
  float v94; // s8
  float v95; // s10
  int v96; // s9
  int v97; // s11
  int v98; // w8
  int v99; // w9
  int v100; // w10
  int v101; // w11
  int v102; // w12
  UnityEngine_GameObject_o *v103; // x0
  UILabel_o *upSpendQpTxtLb; // x21
  UILabel_o *upHaveQpTxtLb; // x21
  UILabel_o *upSpendQpLb; // x21
  System_String_o *v107; // x22
  Il2CppObject *v108; // x0
  UILabel_o *upHaveQpLb; // x21
  System_String_o *v110; // x22
  Il2CppObject *v111; // x0
  struct UILabel_o *upConfirmMsgLb; // x21
  System_String_o *mText; // x22
  System_String_o *v114; // x0
  System_String_o *v115; // x0
  const MethodInfo *v116; // x2
  UnityEngine_GameObject_o *v117; // x0
  float v118; // s8
  UILabel_o *upConfirmReConfirmMsgLb; // x21
  UnityEngine_GameObject_o *v120; // x0
  __int64 v121; // x1
  System_Collections_IEnumerator_o *Enumerator; // x24
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v124; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v127; // x8
  __int64 v128; // x9
  System_Collections_IEnumerator_c **v129; // x10
  __int64 v130; // x0
  __int64 v131; // x0
  UnityEngine_Transform_c *v132; // x1
  UnityEngine_Object_o *v133; // x25
  __int64 methodPtr_low; // x9
  UnityEngine_Component_o *v135; // x0
  __int64 v136; // x1
  UnityEngine_Object_o *v137; // x21
  __int64 v138; // x1
  UnityEngine_Component_o *titleLb; // x0
  __int64 v140; // x1
  UnityEngine_Object_o *v141; // x21
  _BOOL8 v142; // x0
  __int64 v143; // x1
  UnityEngine_GameObject_o *v144; // x0
  __int64 v145; // x1
  __int64 v146; // x0
  __int64 v147; // x8
  __int64 v148; // x24
  __int64 v149; // x9
  int *v150; // x10
  __int64 v151; // x0
  struct UILabel_o *v152; // x21
  System_String_o *v153; // x22
  System_String_o *v154; // x0
  System_String_o *v155; // x0
  struct UILabel_o *v156; // x21
  System_String_o *v157; // x22
  System_String_o *v158; // x0
  System_String_o *v159; // x0
  const MethodInfo *v160; // x2
  UnityEngine_GameObject_o *v161; // x0
  UnityEngine_GameObject_o *v162; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v166; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v167; // [xsp+40h] [xbp-B0h] BYREF
  _BOOL4 v168; // [xsp+68h] [xbp-88h]
  int32_t haveQp; // [xsp+6Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v168 = isExceedMaxLv;
  if ( (byte_4B19E3B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___, baseData, selectUsrSvtIdList);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Item__, v21, v22);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v25, v26);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27, v28);
    sub_1BCA7E0(&UnityEngine_Transform_TypeInfo, v29, v30);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_9342/*"NEED_QP"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_9450/*"NPUP_EXCEEDED"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_3693/*"COMBINE_HAVE_QP"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_3718/*"COMBINE_NPUP_MATERIAL"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_3843/*"CONFIRM_COMBINE_MSG"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_9451/*"NPUP_RECONFIRM_TXT"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_9449/*"NPUP_CONFIRM_WARNING_TXT"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_3717/*"COMBINE_NPUP_BASE"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_3725/*"COMBINE_SPEND_QP"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_9448/*"NPUP_CONFIRM_TXT"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_3719/*"COMBINE_NP_ADD_TITLE"*/, v55, v56);
    byte_4B19E3B = 1;
  }
  upTargetAddLabel = this->fields.upTargetAddLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, baseData);
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3719/*"COMBINE_NP_ADD_TITLE"*/, 0LL);
  if ( !upTargetAddLabel )
    goto LABEL_130;
  UILabel__set_text(upTargetAddLabel, (System_String_o *)upTargetRubyLb, 0LL);
  if ( !updata )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)this->fields.upTargetRubyLb;
  if ( !upTargetRubyLb )
    goto LABEL_130;
  UILabel__set_text((UILabel_o *)upTargetRubyLb, updata->fields.targetRuby, 0LL);
  upTargetRubyLb = (int64_t)this->fields.upTargetNameLb;
  if ( !upTargetRubyLb )
    goto LABEL_130;
  UILabel__set_text((UILabel_o *)upTargetRubyLb, updata->fields.targetName, 0LL);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel(
    baseData,
    this->fields.upTargetNameLb,
    this->fields.upTargetRubyLb,
    0LL);
  currentLvLb = this->fields.currentLvLb;
  upTargetRubyLb = (int64_t)System_Int32__ToString((int)updata + 64, 0LL);
  if ( !currentLvLb )
    goto LABEL_130;
  UIExtrusionLabel__set_text(currentLvLb, (System_String_o *)upTargetRubyLb, 0LL);
  resLvLb = this->fields.resLvLb;
  upTargetRubyLb = (int64_t)System_Int32__ToString((int)updata + 68, 0LL);
  if ( !resLvLb )
    goto LABEL_130;
  UIExtrusionLabel__set_text(resLvLb, (System_String_o *)upTargetRubyLb, 0LL);
  NpUpConfirmComponent__SetDefaultTitleLb(this, v62);
  upTargetRubyLb = (int64_t)this->fields.baseInfo;
  if ( !upTargetRubyLb )
    goto LABEL_130;
  svtFaceInfo = this->fields.svtFaceInfo;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)upTargetRubyLb, 0LL);
  upTargetRubyLb = (int64_t)BaseMonoBehaviour__createObject(
                              (BaseMonoBehaviour_o *)this,
                              svtFaceInfo,
                              transform,
                              0LL,
                              0LL);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)upTargetRubyLb,
                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
  if ( !baseData )
    goto LABEL_130;
  v65 = *(_OWORD *)&baseData->fields.id.fields.fakeValue;
  v66 = (NpMaterialSvtInfo_o *)upTargetRubyLb;
  *(_OWORD *)&v167.fields.currentCryptoKey = *(_OWORD *)&baseData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v167.fields.fakeValue = v65;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v59);
  v166 = v167;
  upTargetRubyLb = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v166, 0LL);
  if ( !v66 )
    goto LABEL_130;
  NpMaterialSvtInfo__setMaterialSvtInfo(v66, 0, baseData, upTargetRubyLb, 0LL, 0LL);
  baseTxt = this->fields.baseTxt;
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3717/*"COMBINE_NPUP_BASE"*/, 0LL);
  if ( !baseTxt )
    goto LABEL_130;
  UILabel__set_text(baseTxt, (System_String_o *)upTargetRubyLb, 0LL);
  if ( !selectUsrSvtIdList )
    goto LABEL_130;
  if ( selectUsrSvtIdList->fields._size >= 1 )
  {
    v68 = 0;
    v69 = 0;
    do
    {
      upTargetRubyLb = System_Collections_Generic_List_long___get_Item(
                         selectUsrSvtIdList,
                         v69,
                         (const MethodInfo_35899A0 *)Method_System_Collections_Generic_List_long__get_Item__);
      if ( !this->fields.materialInfo )
        goto LABEL_130;
      v70 = this->fields.svtFaceInfo;
      v71 = upTargetRubyLb;
      v72 = UnityEngine_GameObject__get_transform(this->fields.materialInfo, 0LL);
      upTargetRubyLb = (int64_t)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v70, v72, 0LL, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      v73 = (UnityEngine_GameObject_o *)upTargetRubyLb;
      Component_object = (NpMaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  (UnityEngine_GameObject_o *)upTargetRubyLb,
                                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
      v75 = UnityEngine_GameObject__get_transform(v73, 0LL);
      upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(v73, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
      y = localPosition.fields.y;
      upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(v73, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      *(UnityEngine_Vector3_o *)(&v77 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)upTargetRubyLb,
                                               0LL);
      if ( !v75 )
        goto LABEL_130;
      v78 = (float)v68;
      v79 = y;
      UnityEngine_Transform__set_localPosition(v75, *(UnityEngine_Vector3_o *)(&v77 - 2), 0LL);
      if ( !Component_object )
        goto LABEL_130;
      NpMaterialSvtInfo__setMaterialSvtInfo(Component_object, 0, baseData, v71, 0LL, 0LL);
      upTargetRubyLb = (int64_t)Component_object->fields.exceededTxt;
      if ( !upTargetRubyLb )
        goto LABEL_130;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
      upTargetRubyLb = NpCombineControl__CheckConfirm(v71, 0LL);
      if ( !gameObject )
        goto LABEL_130;
      UnityEngine_GameObject__SetActive(gameObject, upTargetRubyLb & 1, 0LL);
      exceededTxt = Component_object->fields.exceededTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v81);
      upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_9450/*"NPUP_EXCEEDED"*/, 0LL);
      if ( !exceededTxt )
        goto LABEL_130;
      UILabel__set_text(exceededTxt, (System_String_o *)upTargetRubyLb, 0LL);
      ++v69;
      v68 += 140;
    }
    while ( v69 < selectUsrSvtIdList->fields._size );
  }
  mtTxt = this->fields.mtTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v59);
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3718/*"COMBINE_NPUP_MATERIAL"*/, 0LL);
  if ( !mtTxt )
    goto LABEL_130;
  UILabel__set_text(mtTxt, (System_String_o *)upTargetRubyLb, 0LL);
  upTargetRubyLb = (int64_t)this->fields.mtTxt;
  if ( !upTargetRubyLb )
    goto LABEL_130;
  materialSvtBg = (UnityEngine_Component_o *)this->fields.materialSvtBg;
  upTargetRubyLb = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
  if ( !this->fields.arrow )
    goto LABEL_130;
  v85 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.arrow, 0LL);
  if ( !this->fields.materialInfo )
    goto LABEL_130;
  v86 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(this->fields.materialInfo, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
  if ( !this->fields.baseInfo )
    goto LABEL_130;
  v87 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(this->fields.baseInfo, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  v88 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
  v91 = selectUsrSvtIdList->fields._size - 1;
  v92 = v88;
  switch ( v91 )
  {
    case 0:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 144, v90);
      if ( !materialSvtBg )
        goto LABEL_130;
      v93 = 1117388800;
      v94 = 19.0;
      v95 = -1.0;
      v96 = -1027080192;
      v97 = 1117388800;
      goto LABEL_54;
    case 1:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 244, v90);
      if ( !materialSvtBg )
        goto LABEL_130;
      v94 = -31.0;
      v96 = -1021968384;
      v95 = -51.0;
      v97 = 1123811328;
      v93 = 1123942400;
      goto LABEL_54;
    case 2:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 346, v90);
      if ( !materialSvtBg )
        goto LABEL_130;
      *(float *)&v98 = -77.0;
      v99 = -1018691584;
      *(float *)&v100 = -100.0;
      v101 = 1127022592;
      v102 = 1127219200;
      goto LABEL_51;
    case 3:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 445, v90);
      if ( !materialSvtBg )
        goto LABEL_130;
      *(float *)&v98 = -127.0;
      v99 = -1015414784;
      *(float *)&v100 = -150.0;
      v101 = 1130299392;
      v102 = 1130364928;
LABEL_51:
      v94 = *(float *)&v98;
      v96 = v99;
      v95 = *(float *)&v100;
      v97 = v101;
      v93 = v102;
LABEL_54:
      v103 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v103, *(float *)&v93, 0LL);
      GameObjectExtensions__SetLocalPositionX(v85, *(float *)&v97, 0LL);
      GameObjectExtensions__SetLocalPositionX(v86, v95, 0LL);
      GameObjectExtensions__SetLocalPositionX(v92, *(float *)&v96, 0LL);
      GameObjectExtensions__SetLocalPositionX(v87, v94, 0LL);
LABEL_55:
      upSpendQpTxtLb = this->fields.upSpendQpTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v89);
      upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3725/*"COMBINE_SPEND_QP"*/, 0LL);
      if ( !upSpendQpTxtLb )
        goto LABEL_130;
      UILabel__set_text(upSpendQpTxtLb, (System_String_o *)upTargetRubyLb, 0LL);
      upHaveQpTxtLb = this->fields.upHaveQpTxtLb;
      upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMBINE_HAVE_QP"*/, 0LL);
      if ( !upHaveQpTxtLb )
        goto LABEL_130;
      UILabel__set_text(upHaveQpTxtLb, (System_String_o *)upTargetRubyLb, 0LL);
      upSpendQpLb = this->fields.upSpendQpLb;
      v107 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
      LODWORD(v167.fields.currentCryptoKey) = updata->fields.spendQp;
      v108 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v167);
      upTargetRubyLb = (int64_t)System_String__Format(v107, v108, 0LL);
      if ( !upSpendQpLb )
        goto LABEL_130;
      UILabel__set_text(upSpendQpLb, (System_String_o *)upTargetRubyLb, 0LL);
      upHaveQpLb = this->fields.upHaveQpLb;
      v110 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
      haveQp = updata->fields.haveQp;
      v111 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveQp);
      upTargetRubyLb = (int64_t)System_String__Format(v110, v111, 0LL);
      if ( !upHaveQpLb )
        goto LABEL_130;
      UILabel__set_text(upHaveQpLb, (System_String_o *)upTargetRubyLb, 0LL);
      upTargetRubyLb = (int64_t)this->fields.upConfirmReConfirmMsgLb;
      if ( !upTargetRubyLb )
        goto LABEL_130;
      UILabel__set_text((UILabel_o *)upTargetRubyLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
      if ( !upTargetRubyLb )
        goto LABEL_130;
      UILabel__set_text((UILabel_o *)upTargetRubyLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( !v168 && !isExceedeMaterial && !isCombineSvt )
      {
        upConfirmMsgLb = this->fields.upConfirmMsgLb;
        if ( !upConfirmMsgLb )
          goto LABEL_130;
        mText = upConfirmMsgLb->fields.mText;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v59);
        v114 = LocalizationManager__Get((System_String_o *)StringLiteral_3843/*"CONFIRM_COMBINE_MSG"*/, 0LL);
        v115 = System_String__Concat_62401220(mText, v114, 0LL);
        UILabel__set_text(upConfirmMsgLb, v115, 0LL);
        NpUpConfirmComponent__SetDefaultLayout(this, updata, v116);
        upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
        if ( !upTargetRubyLb )
          goto LABEL_130;
        v117 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
        GameObjectExtensions__SetLocalPositionY(v117, -133.0, 0LL);
        upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
        if ( !upTargetRubyLb )
          goto LABEL_130;
        v118 = 2.0;
LABEL_129:
        v162 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
        GameObjectExtensions__SetLocalPositionX(v162, v118, 0LL);
        return;
      }
      if ( !reConfirmation )
      {
        if ( v168 || isCombineSvt || isExceedeMaterial )
        {
          v152 = this->fields.upConfirmMsgLb;
          if ( !v152 )
            goto LABEL_130;
          v153 = v152->fields.mText;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v59);
          v154 = LocalizationManager__Get((System_String_o *)StringLiteral_9449/*"NPUP_CONFIRM_WARNING_TXT"*/, 0LL);
          v155 = System_String__Concat_62401220(v153, v154, 0LL);
          UILabel__set_text(v152, v155, 0LL);
        }
        v156 = this->fields.upConfirmMsgLb;
        if ( !v156 )
          goto LABEL_130;
        v157 = v156->fields.mText;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v59);
        v158 = LocalizationManager__Get((System_String_o *)StringLiteral_9448/*"NPUP_CONFIRM_TXT"*/, 0LL);
        v159 = System_String__Concat_62412480(v157, (System_String_o *)StringLiteral_43/*"\n"*/, v158, 0LL);
        UILabel__set_text(v156, v159, 0LL);
        NpUpConfirmComponent__SetDefaultLayout(this, updata, v160);
        upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
        if ( !upTargetRubyLb
          || (v161 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL),
              GameObjectExtensions__SetLocalPositionY(v161, -134.0, 0LL),
              (upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb) == 0) )
        {
LABEL_130:
          sub_1BCAA3C(upTargetRubyLb, v59);
        }
        v118 = 5.0;
        goto LABEL_129;
      }
      upConfirmReConfirmMsgLb = this->fields.upConfirmReConfirmMsgLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v59);
      upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_9451/*"NPUP_RECONFIRM_TXT"*/, 0LL);
      if ( !upConfirmReConfirmMsgLb )
        goto LABEL_130;
      UILabel__set_text(upConfirmReConfirmMsgLb, (System_String_o *)upTargetRubyLb, 0LL);
      upTargetRubyLb = (int64_t)this->fields.titleLb;
      if ( !upTargetRubyLb )
        goto LABEL_130;
      UILabel__set_fontSize((UILabel_o *)upTargetRubyLb, 27, 0LL);
      upTargetRubyLb = (int64_t)this->fields.titleLb;
      if ( !upTargetRubyLb )
        goto LABEL_130;
      v120 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
      GameObjectExtensions__SetLocalPositionY(v120, 184.0, 0LL);
      upTargetRubyLb = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
      if ( !Enumerator )
        sub_1BCAA3C(0LL, v121);
      while ( 1 )
      {
        klass = Enumerator->klass;
        v124 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v124;
            p_offset += 4;
            if ( !v124 )
              goto LABEL_84;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_84:
          p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                Enumerator,
                *(_QWORD *)(p_method + 8)) & 1) == 0 )
          break;
        v127 = Enumerator->klass;
        v128 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          v129 = (System_Collections_IEnumerator_c **)&v127->_1.interfaceOffsets->offset;
          while ( *(v129 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v128;
            v129 += 2;
            if ( !v128 )
              goto LABEL_91;
          }
          v130 = (__int64)&v127->vtable[*(_DWORD *)v129 + 1].method;
        }
        else
        {
LABEL_91:
          v130 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v131 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v130)(
                 Enumerator,
                 *(_QWORD *)(v130 + 8));
        v133 = (UnityEngine_Object_o *)v131;
        if ( v131 )
        {
          v132 = UnityEngine_Transform_TypeInfo;
          methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v131 + 304LL) < (unsigned int)methodPtr_low
            || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v131 + 200LL) + 8 * methodPtr_low - 8) != UnityEngine_Transform_TypeInfo )
          {
            sub_1BCACFC(v131);
LABEL_132:
            sub_1BCAA3C(v135, v132);
          }
        }
        v135 = (UnityEngine_Component_o *)this->fields.upConfirmReConfirmMsgLb;
        if ( !v135 )
          goto LABEL_132;
        v137 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(v135, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v136);
        if ( UnityEngine_Object__op_Inequality(v137, v133, 0LL) )
        {
          titleLb = (UnityEngine_Component_o *)this->fields.titleLb;
          if ( !titleLb )
            sub_1BCAA3C(0LL, v138);
          v141 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(titleLb, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v140);
          v142 = UnityEngine_Object__op_Inequality(v141, v133, 0LL);
          if ( v142 )
          {
            if ( !v133 )
              sub_1BCAA3C(v142, v143);
            v144 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v133, 0LL);
            if ( !v144 )
              sub_1BCAA3C(0LL, v145);
            UnityEngine_GameObject__SetActive(v144, 0, 0LL);
          }
        }
      }
      v146 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
      if ( v146 )
      {
        v147 = *(_QWORD *)v146;
        v148 = v146;
        v149 = *(unsigned __int16 *)(*(_QWORD *)v146 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v146 + 302LL) )
        {
          v150 = (int *)(*(_QWORD *)(v147 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v150 - 1) != System_IDisposable_TypeInfo )
          {
            --v149;
            v150 += 4;
            if ( !v149 )
              goto LABEL_112;
          }
          v151 = v147 + 16LL * *v150 + 312;
        }
        else
        {
LABEL_112:
          v151 = sub_1C1C7C0(v146, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v151)(v148, *(_QWORD *)(v151 + 8));
      }
      return;
    default:
      goto LABEL_55;
  }
}