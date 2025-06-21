void __fastcall NpUpConfirmComponent___ctor(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall NpUpConfirmComponent__DestroySvtInfo(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *baseInfo; // x0
  __int64 v7; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Component_o *v17; // x0
  __int64 v18; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x20
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x1
  System_Collections_IEnumerator_o *v28; // x19
  System_Collections_IEnumerator_c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  System_Collections_IEnumerator_c *v33; // x8
  __int64 v34; // x9
  System_Collections_IEnumerator_c **v35; // x10
  __int64 v36; // x0
  UnityEngine_Component_o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x9
  UnityEngine_Object_o *v40; // x20
  __int64 v41; // x0
  __int64 v42; // x8
  __int64 v43; // x19
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0

  if ( (byte_4B205D0 & 1) == 0 )
  {
    sub_1BCAFF8(&System_IDisposable_TypeInfo, method);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    sub_1BCAFF8(&UnityEngine_Transform_TypeInfo, v5);
    byte_4B205D0 = 1;
  }
  baseInfo = this->fields.baseInfo;
  if ( !baseInfo )
    goto LABEL_68;
  baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0LL);
  if ( !baseInfo )
    goto LABEL_68;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0LL);
  if ( !Enumerator )
    sub_1BCB254(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1].method;
    }
    else
    {
LABEL_17:
      v16 = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v17 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_66;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v17->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1BCB514(v17);
LABEL_65:
      sub_1BCB514(v37);
LABEL_66:
      sub_1BCB254(v17, v18);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v17, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
  }
  v21 = sub_1BCB134(Enumerator, System_IDisposable_TypeInfo);
  if ( v21 )
  {
    v22 = *(_QWORD *)v21;
    v23 = v21;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_30;
      }
      v26 = v22 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_30:
      v26 = sub_1C1B560(v21, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  }
  baseInfo = this->fields.materialInfo;
  if ( !baseInfo || (baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0LL)) == 0LL )
LABEL_68:
    sub_1BCB254(baseInfo, method);
  v28 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0LL);
  if ( !v28 )
    sub_1BCB254(0LL, v27);
  while ( 1 )
  {
    v29 = v28->klass;
    v30 = *(unsigned __int16 *)(&v28->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v28->klass->_2.bitflags2 + 3) )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_40;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_40:
      v32 = sub_1C1B560(v28, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8)) & 1) == 0 )
      break;
    v33 = v28->klass;
    v34 = *(unsigned __int16 *)(&v28->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v28->klass->_2.bitflags2 + 3) )
    {
      v35 = (System_Collections_IEnumerator_c **)&v33->_1.interfaceOffsets->offset;
      while ( *(v35 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v34;
        v35 += 2;
        if ( !v34 )
          goto LABEL_47;
      }
      v36 = (__int64)&v33->vtable[*(_DWORD *)v35 + 1].method;
    }
    else
    {
LABEL_47:
      v36 = sub_1C1B560(v28, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v37 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v36)(
                                       v28,
                                       *(_QWORD *)(v36 + 8));
    if ( !v37 )
      sub_1BCB254(0LL, v38);
    v39 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v37->klass->vtable._0_Equals.methodPtr) < (unsigned int)v39
      || (UnityEngine_Transform_c *)v37->klass->_2.typeHierarchy[v39 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_65;
    }
    v40 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v37, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v40, 0LL);
  }
  v41 = sub_1BCB134(v28, System_IDisposable_TypeInfo);
  if ( v41 )
  {
    v42 = *(_QWORD *)v41;
    v43 = v41;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_60;
      }
      v46 = v42 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_60:
      v46 = sub_1C1B560(v41, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v46)(v43, *(_QWORD *)(v46 + 8));
  }
}


void __fastcall NpUpConfirmComponent__SetDefaultLayout(
        NpUpConfirmComponent_o *this,
        SetLevelUpData_o *updata,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v15; // x8
  __int64 v16; // x9
  System_Collections_IEnumerator_c **v17; // x10
  __int64 v18; // x0
  UnityEngine_Component_o *v19; // x0
  __int64 v20; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  UnityEngine_Transform_c *v24; // x8
  UnityEngine_Transform_o *v25; // x21
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0

  if ( (byte_4B205D1 & 1) == 0 )
  {
    sub_1BCAFF8(&System_IDisposable_TypeInfo, updata);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_1BCAFF8(&UnityEngine_Transform_TypeInfo, v6);
    byte_4B205D1 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_38;
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_1BCB254(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
      while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        v17 += 2;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1].method;
    }
    else
    {
LABEL_16:
      v18 = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v19 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                       Enumerator,
                                       *(_QWORD *)(v18 + 8));
    if ( !v19 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v19->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v19->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1BCB514(v19);
LABEL_36:
      sub_1BCB254(v19, v20);
    }
    gameObject = UnityEngine_Component__get_gameObject(v19, 0LL);
    if ( !gameObject )
      sub_1BCB254(0LL, v23);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  transform = (UnityEngine_Transform_o *)sub_1BCB134(Enumerator, System_IDisposable_TypeInfo);
  if ( transform )
  {
    v24 = transform->klass;
    v25 = transform;
    v26 = *(unsigned __int16 *)(&transform->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&transform->klass->_2.bitflags2 + 3) )
    {
      v27 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_28;
      }
      v28 = (__int64)(&v24->vtable._0_Equals.method + 2 * *v27);
    }
    else
    {
LABEL_28:
      v28 = sub_1C1B560(transform, System_IDisposable_TypeInfo, 0LL);
    }
    transform = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))v28)(
                                             v25,
                                             *(_QWORD *)(v28 + 8));
  }
  if ( !updata
    || (transform = (UnityEngine_Transform_o *)this->fields.upTargetRoot) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, !updata->fields.isNpAdd, 0LL),
        (transform = (UnityEngine_Transform_o *)this->fields.upTargetAddRoot) == 0LL) )
  {
LABEL_38:
    sub_1BCB254(transform, v8);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, updata->fields.isNpAdd, 0LL);
}


void __fastcall NpUpConfirmComponent__SetDefaultTitleLb(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  titleLb = this->fields.titleLb;
  if ( !titleLb || (UILabel__set_fontSize(titleLb, 22, 0LL), (titleLb = this->fields.titleLb) == 0LL) )
    sub_1BCB254(titleLb, method);
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
    sub_1BCB254(materialSvtBg, *(_QWORD *)&width);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  UILabel_o *upTargetAddLabel; // x21
  int64_t upTargetRubyLb; // x0
  __int64 v38; // x1
  UIExtrusionLabel_o *currentLvLb; // x21
  UIExtrusionLabel_o *resLvLb; // x21
  const MethodInfo *v41; // x1
  UnityEngine_GameObject_o *svtFaceInfo; // x21
  UnityEngine_Transform_o *transform; // x0
  __int128 v44; // q1
  NpMaterialSvtInfo_o *v45; // x22
  UILabel_o *baseTxt; // x21
  int v47; // w20
  int32_t v48; // w27
  UnityEngine_GameObject_o *v49; // x21
  int64_t v50; // x28
  UnityEngine_Transform_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x21
  NpMaterialSvtInfo_o *Component_object; // x29
  UnityEngine_Transform_o *v54; // x22
  float y; // s8
  int v56; // s2
  float v57; // s0
  float v58; // s1
  UnityEngine_GameObject_o *gameObject; // x21
  UILabel_o *exceededTxt; // x21
  UILabel_o *mtTxt; // x21
  UnityEngine_Component_o *materialSvtBg; // x27
  UnityEngine_GameObject_o *v63; // x26
  UnityEngine_GameObject_o *v64; // x28
  UnityEngine_GameObject_o *v65; // x29
  UnityEngine_GameObject_o *v66; // x0
  const MethodInfo *v67; // x2
  int v68; // w8
  UnityEngine_GameObject_o *v69; // x25
  int v70; // s12
  float v71; // s8
  float v72; // s10
  int v73; // s9
  int v74; // s11
  int v75; // w8
  int v76; // w9
  int v77; // w10
  int v78; // w11
  int v79; // w12
  UnityEngine_GameObject_o *v80; // x0
  UILabel_o *upSpendQpTxtLb; // x21
  UILabel_o *upHaveQpTxtLb; // x21
  UILabel_o *upSpendQpLb; // x21
  System_String_o *v84; // x22
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  Il2CppObject *v88; // x0
  UILabel_o *upHaveQpLb; // x21
  System_String_o *v90; // x22
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  Il2CppObject *v94; // x0
  struct UILabel_o *upConfirmMsgLb; // x21
  System_String_o *mText; // x22
  System_String_o *v97; // x0
  System_String_o *v98; // x0
  const MethodInfo *v99; // x2
  UnityEngine_GameObject_o *v100; // x0
  float v101; // s8
  UILabel_o *upConfirmReConfirmMsgLb; // x21
  UnityEngine_GameObject_o *v103; // x0
  __int64 v104; // x1
  System_Collections_IEnumerator_o *Enumerator; // x24
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v107; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v110; // x8
  __int64 v111; // x9
  System_Collections_IEnumerator_c **v112; // x10
  __int64 v113; // x0
  __int64 v114; // x0
  UnityEngine_Transform_c *v115; // x1
  UnityEngine_Object_o *v116; // x25
  __int64 methodPtr_low; // x9
  UnityEngine_Component_o *v118; // x0
  UnityEngine_Object_o *v119; // x21
  __int64 v120; // x1
  UnityEngine_Component_o *titleLb; // x0
  UnityEngine_Object_o *v122; // x21
  _BOOL8 v123; // x0
  __int64 v124; // x1
  UnityEngine_GameObject_o *v125; // x0
  __int64 v126; // x1
  __int64 v127; // x0
  __int64 v128; // x8
  __int64 v129; // x24
  __int64 v130; // x9
  int *v131; // x10
  __int64 v132; // x0
  struct UILabel_o *v133; // x21
  System_String_o *v134; // x22
  System_String_o *v135; // x0
  System_String_o *v136; // x0
  struct UILabel_o *v137; // x21
  System_String_o *v138; // x22
  System_String_o *v139; // x0
  System_String_o *v140; // x0
  const MethodInfo *v141; // x2
  UnityEngine_GameObject_o *v142; // x0
  UnityEngine_GameObject_o *v143; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v147; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v148; // [xsp+40h] [xbp-B0h] BYREF
  _BOOL4 v149; // [xsp+68h] [xbp-88h]
  int32_t spendQp; // [xsp+6Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v149 = isExceedMaxLv;
  if ( (byte_4B205CF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___, baseData);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v13);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1BCAFF8(&int_TypeInfo, v15);
    sub_1BCAFF8(&long_TypeInfo, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__get_Count__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__get_Item__, v18);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v19);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v20);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_1BCAFF8(&UnityEngine_Transform_TypeInfo, v22);
    sub_1BCAFF8(&StringLiteral_43/*"\n"*/, v23);
    sub_1BCAFF8(&StringLiteral_9166/*"NEED_QP"*/, v24);
    sub_1BCAFF8(&StringLiteral_9276/*"NPUP_EXCEEDED"*/, v25);
    sub_1BCAFF8(&StringLiteral_3548/*"COMBINE_HAVE_QP"*/, v26);
    sub_1BCAFF8(&StringLiteral_3575/*"COMBINE_NPUP_MATERIAL"*/, v27);
    sub_1BCAFF8(&StringLiteral_3710/*"CONFIRM_COMBINE_MSG"*/, v28);
    sub_1BCAFF8(&StringLiteral_9277/*"NPUP_RECONFIRM_TXT"*/, v29);
    sub_1BCAFF8(&StringLiteral_9275/*"NPUP_CONFIRM_WARNING_TXT"*/, v30);
    sub_1BCAFF8(&StringLiteral_3574/*"COMBINE_NPUP_BASE"*/, v31);
    sub_1BCAFF8(&StringLiteral_3582/*"COMBINE_SPEND_QP"*/, v32);
    sub_1BCAFF8(&StringLiteral_9274/*"NPUP_CONFIRM_TXT"*/, v33);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v34);
    sub_1BCAFF8(&StringLiteral_3576/*"COMBINE_NP_ADD_TITLE"*/, v35);
    byte_4B205CF = 1;
  }
  upTargetAddLabel = this->fields.upTargetAddLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3576/*"COMBINE_NP_ADD_TITLE"*/, 0LL);
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
  NpUpConfirmComponent__SetDefaultTitleLb(this, v41);
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
                              (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
  if ( !baseData )
    goto LABEL_130;
  v44 = *(_OWORD *)&baseData->fields.id.fields.fakeValue;
  v45 = (NpMaterialSvtInfo_o *)upTargetRubyLb;
  *(_OWORD *)&v148.fields.currentCryptoKey = *(_OWORD *)&baseData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v148.fields.fakeValue = v44;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v147 = v148;
  upTargetRubyLb = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v147, 0LL);
  if ( !v45 )
    goto LABEL_130;
  NpMaterialSvtInfo__setMaterialSvtInfo(v45, 0, baseData, upTargetRubyLb, 0LL, 0LL);
  baseTxt = this->fields.baseTxt;
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3574/*"COMBINE_NPUP_BASE"*/, 0LL);
  if ( !baseTxt )
    goto LABEL_130;
  UILabel__set_text(baseTxt, (System_String_o *)upTargetRubyLb, 0LL);
  if ( !selectUsrSvtIdList )
    goto LABEL_130;
  if ( selectUsrSvtIdList->fields._size >= 1 )
  {
    v47 = 0;
    v48 = 0;
    do
    {
      upTargetRubyLb = System_Collections_Generic_List_long___get_Item(
                         selectUsrSvtIdList,
                         v48,
                         (const MethodInfo_36A1914 *)Method_System_Collections_Generic_List_long__get_Item__);
      if ( !this->fields.materialInfo )
        goto LABEL_130;
      v49 = this->fields.svtFaceInfo;
      v50 = upTargetRubyLb;
      v51 = UnityEngine_GameObject__get_transform(this->fields.materialInfo, 0LL);
      upTargetRubyLb = (int64_t)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v49, v51, 0LL, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      v52 = (UnityEngine_GameObject_o *)upTargetRubyLb;
      Component_object = (NpMaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  (UnityEngine_GameObject_o *)upTargetRubyLb,
                                                  (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
      v54 = UnityEngine_GameObject__get_transform(v52, 0LL);
      upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(v52, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
      y = localPosition.fields.y;
      upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(v52, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      *(UnityEngine_Vector3_o *)(&v56 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)upTargetRubyLb,
                                               0LL);
      if ( !v54 )
        goto LABEL_130;
      v57 = (float)v47;
      v58 = y;
      UnityEngine_Transform__set_localPosition(v54, *(UnityEngine_Vector3_o *)(&v56 - 2), 0LL);
      if ( !Component_object )
        goto LABEL_130;
      NpMaterialSvtInfo__setMaterialSvtInfo(Component_object, 0, baseData, v50, 0LL, 0LL);
      upTargetRubyLb = (int64_t)Component_object->fields.exceededTxt;
      if ( !upTargetRubyLb )
        goto LABEL_130;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
      upTargetRubyLb = NpCombineControl__CheckConfirm(v50, 0LL);
      if ( !gameObject )
        goto LABEL_130;
      UnityEngine_GameObject__SetActive(gameObject, upTargetRubyLb & 1, 0LL);
      exceededTxt = Component_object->fields.exceededTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_9276/*"NPUP_EXCEEDED"*/, 0LL);
      if ( !exceededTxt )
        goto LABEL_130;
      UILabel__set_text(exceededTxt, (System_String_o *)upTargetRubyLb, 0LL);
      ++v48;
      v47 += 140;
    }
    while ( v48 < selectUsrSvtIdList->fields._size );
  }
  mtTxt = this->fields.mtTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3575/*"COMBINE_NPUP_MATERIAL"*/, 0LL);
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
  v63 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.arrow, 0LL);
  if ( !this->fields.materialInfo )
    goto LABEL_130;
  v64 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(this->fields.materialInfo, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
  if ( !this->fields.baseInfo )
    goto LABEL_130;
  v65 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(this->fields.baseInfo, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  v66 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
  v68 = selectUsrSvtIdList->fields._size - 1;
  v69 = v66;
  switch ( v68 )
  {
    case 0:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 144, v67);
      if ( !materialSvtBg )
        goto LABEL_130;
      v70 = 1117388800;
      v71 = 19.0;
      v72 = -1.0;
      v73 = -1027080192;
      v74 = 1117388800;
      goto LABEL_54;
    case 1:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 244, v67);
      if ( !materialSvtBg )
        goto LABEL_130;
      v71 = -31.0;
      v73 = -1021968384;
      v72 = -51.0;
      v74 = 1123811328;
      v70 = 1123942400;
      goto LABEL_54;
    case 2:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 346, v67);
      if ( !materialSvtBg )
        goto LABEL_130;
      *(float *)&v75 = -77.0;
      v76 = -1018691584;
      *(float *)&v77 = -100.0;
      v78 = 1127022592;
      v79 = 1127219200;
      goto LABEL_51;
    case 3:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 445, v67);
      if ( !materialSvtBg )
        goto LABEL_130;
      *(float *)&v75 = -127.0;
      v76 = -1015414784;
      *(float *)&v77 = -150.0;
      v78 = 1130299392;
      v79 = 1130364928;
LABEL_51:
      v71 = *(float *)&v75;
      v73 = v76;
      v72 = *(float *)&v77;
      v74 = v78;
      v70 = v79;
LABEL_54:
      v80 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v80, *(float *)&v70, 0LL);
      GameObjectExtensions__SetLocalPositionX(v63, *(float *)&v74, 0LL);
      GameObjectExtensions__SetLocalPositionX(v64, v72, 0LL);
      GameObjectExtensions__SetLocalPositionX(v69, *(float *)&v73, 0LL);
      GameObjectExtensions__SetLocalPositionX(v65, v71, 0LL);
LABEL_55:
      upSpendQpTxtLb = this->fields.upSpendQpTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3582/*"COMBINE_SPEND_QP"*/, 0LL);
      if ( !upSpendQpTxtLb )
        goto LABEL_130;
      UILabel__set_text(upSpendQpTxtLb, (System_String_o *)upTargetRubyLb, 0LL);
      upHaveQpTxtLb = this->fields.upHaveQpTxtLb;
      upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3548/*"COMBINE_HAVE_QP"*/, 0LL);
      if ( !upHaveQpTxtLb )
        goto LABEL_130;
      UILabel__set_text(upHaveQpTxtLb, (System_String_o *)upTargetRubyLb, 0LL);
      upSpendQpLb = this->fields.upSpendQpLb;
      v84 = LocalizationManager__Get((System_String_o *)StringLiteral_9166/*"NEED_QP"*/, 0LL);
      spendQp = updata->fields.spendQp;
      v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendQp, v85, v86, v87);
      upTargetRubyLb = (int64_t)System_String__Format(v84, v88, 0LL);
      if ( !upSpendQpLb )
        goto LABEL_130;
      UILabel__set_text(upSpendQpLb, (System_String_o *)upTargetRubyLb, 0LL);
      upHaveQpLb = this->fields.upHaveQpLb;
      v90 = LocalizationManager__Get((System_String_o *)StringLiteral_9166/*"NEED_QP"*/, 0LL);
      v148.fields.currentCryptoKey = updata->fields.haveQp;
      v94 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v148, v91, v92, v93);
      upTargetRubyLb = (int64_t)System_String__Format(v90, v94, 0LL);
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
      if ( !v149 && !isExceedeMaterial && !isCombineSvt )
      {
        upConfirmMsgLb = this->fields.upConfirmMsgLb;
        if ( !upConfirmMsgLb )
          goto LABEL_130;
        mText = upConfirmMsgLb->fields.mText;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v97 = LocalizationManager__Get((System_String_o *)StringLiteral_3710/*"CONFIRM_COMBINE_MSG"*/, 0LL);
        v98 = System_String__Concat_62450424(mText, v97, 0LL);
        UILabel__set_text(upConfirmMsgLb, v98, 0LL);
        NpUpConfirmComponent__SetDefaultLayout(this, updata, v99);
        upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
        if ( !upTargetRubyLb )
          goto LABEL_130;
        v100 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
        GameObjectExtensions__SetLocalPositionY(v100, -133.0, 0LL);
        upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
        if ( !upTargetRubyLb )
          goto LABEL_130;
        v101 = 2.0;
LABEL_129:
        v143 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
        GameObjectExtensions__SetLocalPositionX(v143, v101, 0LL);
        return;
      }
      if ( !reConfirmation )
      {
        if ( v149 || isCombineSvt || isExceedeMaterial )
        {
          v133 = this->fields.upConfirmMsgLb;
          if ( !v133 )
            goto LABEL_130;
          v134 = v133->fields.mText;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v135 = LocalizationManager__Get((System_String_o *)StringLiteral_9275/*"NPUP_CONFIRM_WARNING_TXT"*/, 0LL);
          v136 = System_String__Concat_62450424(v134, v135, 0LL);
          UILabel__set_text(v133, v136, 0LL);
        }
        v137 = this->fields.upConfirmMsgLb;
        if ( !v137 )
          goto LABEL_130;
        v138 = v137->fields.mText;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v139 = LocalizationManager__Get((System_String_o *)StringLiteral_9274/*"NPUP_CONFIRM_TXT"*/, 0LL);
        v140 = System_String__Concat_62488672(v138, (System_String_o *)StringLiteral_43/*"\n"*/, v139, 0LL);
        UILabel__set_text(v137, v140, 0LL);
        NpUpConfirmComponent__SetDefaultLayout(this, updata, v141);
        upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
        if ( !upTargetRubyLb
          || (v142 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL),
              GameObjectExtensions__SetLocalPositionY(v142, -134.0, 0LL),
              (upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb) == 0) )
        {
LABEL_130:
          sub_1BCB254(upTargetRubyLb, v38);
        }
        v101 = 5.0;
        goto LABEL_129;
      }
      upConfirmReConfirmMsgLb = this->fields.upConfirmReConfirmMsgLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_9277/*"NPUP_RECONFIRM_TXT"*/, 0LL);
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
      v103 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
      GameObjectExtensions__SetLocalPositionY(v103, 184.0, 0LL);
      upTargetRubyLb = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
      if ( !Enumerator )
        sub_1BCB254(0LL, v104);
      while ( 1 )
      {
        klass = Enumerator->klass;
        v107 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v107;
            p_offset += 4;
            if ( !v107 )
              goto LABEL_84;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_84:
          p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                Enumerator,
                *(_QWORD *)(p_method + 8)) & 1) == 0 )
          break;
        v110 = Enumerator->klass;
        v111 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          v112 = (System_Collections_IEnumerator_c **)&v110->_1.interfaceOffsets->offset;
          while ( *(v112 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v111;
            v112 += 2;
            if ( !v111 )
              goto LABEL_91;
          }
          v113 = (__int64)&v110->vtable[*(_DWORD *)v112 + 1].method;
        }
        else
        {
LABEL_91:
          v113 = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v114 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v113)(
                 Enumerator,
                 *(_QWORD *)(v113 + 8));
        v116 = (UnityEngine_Object_o *)v114;
        if ( v114 )
        {
          v115 = UnityEngine_Transform_TypeInfo;
          methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v114 + 304LL) < (unsigned int)methodPtr_low
            || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v114 + 200LL) + 8 * methodPtr_low - 8) != UnityEngine_Transform_TypeInfo )
          {
            sub_1BCB514(v114);
LABEL_132:
            sub_1BCB254(v118, v115);
          }
        }
        v118 = (UnityEngine_Component_o *)this->fields.upConfirmReConfirmMsgLb;
        if ( !v118 )
          goto LABEL_132;
        v119 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(v118, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v119, v116, 0LL) )
        {
          titleLb = (UnityEngine_Component_o *)this->fields.titleLb;
          if ( !titleLb )
            sub_1BCB254(0LL, v120);
          v122 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(titleLb, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v123 = UnityEngine_Object__op_Inequality(v122, v116, 0LL);
          if ( v123 )
          {
            if ( !v116 )
              sub_1BCB254(v123, v124);
            v125 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v116, 0LL);
            if ( !v125 )
              sub_1BCB254(0LL, v126);
            UnityEngine_GameObject__SetActive(v125, 0, 0LL);
          }
        }
      }
      v127 = sub_1BCB134(Enumerator, System_IDisposable_TypeInfo);
      if ( v127 )
      {
        v128 = *(_QWORD *)v127;
        v129 = v127;
        v130 = *(unsigned __int16 *)(*(_QWORD *)v127 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v127 + 302LL) )
        {
          v131 = (int *)(*(_QWORD *)(v128 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v131 - 1) != System_IDisposable_TypeInfo )
          {
            --v130;
            v131 += 4;
            if ( !v130 )
              goto LABEL_112;
          }
          v132 = v128 + 16LL * *v131 + 312;
        }
        else
        {
LABEL_112:
          v132 = sub_1C1B560(v127, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v132)(v129, *(_QWORD *)(v132 + 8));
      }
      return;
    default:
      goto LABEL_55;
  }
}