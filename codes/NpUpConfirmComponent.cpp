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

  if ( (byte_48E6116 & 1) == 0 )
  {
    sub_1B00CCC(&System_IDisposable_TypeInfo, method);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v4);
    sub_1B00CCC(&UnityEngine_Transform_TypeInfo, v5);
    byte_48E6116 = 1;
  }
  baseInfo = this->fields.baseInfo;
  if ( !baseInfo )
    goto LABEL_68;
  baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0LL);
  if ( !baseInfo )
    goto LABEL_68;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0LL);
  if ( !Enumerator )
    sub_1B00F28(0LL, v7);
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
      p_method = sub_1B52CAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v16 = sub_1B52CAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
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
      sub_1B011E8(v17);
LABEL_65:
      sub_1B011E8(v37);
LABEL_66:
      sub_1B00F28(v17, v18);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v17, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68077656(gameObject, 0LL);
  }
  v21 = sub_1B00E08(Enumerator, System_IDisposable_TypeInfo);
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
      v26 = sub_1B52CAC(v21, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  }
  baseInfo = this->fields.materialInfo;
  if ( !baseInfo || (baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0LL)) == 0LL )
LABEL_68:
    sub_1B00F28(baseInfo, method);
  v28 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0LL);
  if ( !v28 )
    sub_1B00F28(0LL, v27);
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
      v32 = sub_1B52CAC(v28, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v36 = sub_1B52CAC(v28, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v37 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v36)(
                                       v28,
                                       *(_QWORD *)(v36 + 8));
    if ( !v37 )
      sub_1B00F28(0LL, v38);
    v39 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v37->klass->vtable._0_Equals.methodPtr) < (unsigned int)v39
      || (UnityEngine_Transform_c *)v37->klass->_2.typeHierarchy[v39 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_65;
    }
    v40 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v37, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68077656(v40, 0LL);
  }
  v41 = sub_1B00E08(v28, System_IDisposable_TypeInfo);
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
      v46 = sub_1B52CAC(v41, System_IDisposable_TypeInfo, 0LL);
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

  if ( (byte_48E6117 & 1) == 0 )
  {
    sub_1B00CCC(&System_IDisposable_TypeInfo, updata);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_1B00CCC(&UnityEngine_Transform_TypeInfo, v6);
    byte_48E6117 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_38;
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_1B00F28(0LL, v9);
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
      p_method = sub_1B52CAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v18 = sub_1B52CAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
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
      sub_1B011E8(v19);
LABEL_36:
      sub_1B00F28(v19, v20);
    }
    gameObject = UnityEngine_Component__get_gameObject(v19, 0LL);
    if ( !gameObject )
      sub_1B00F28(0LL, v23);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  transform = (UnityEngine_Transform_o *)sub_1B00E08(Enumerator, System_IDisposable_TypeInfo);
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
      v28 = sub_1B52CAC(transform, System_IDisposable_TypeInfo, 0LL);
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
    sub_1B00F28(transform, v8);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, updata->fields.isNpAdd, 0LL);
}


void __fastcall NpUpConfirmComponent__SetDefaultTitleLb(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  titleLb = this->fields.titleLb;
  if ( !titleLb || (UILabel__set_fontSize(titleLb, 22, 0LL), (titleLb = this->fields.titleLb) == 0LL) )
    sub_1B00F28(titleLb, method);
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
    sub_1B00F28(materialSvtBg, *(_QWORD *)&width);
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
  UILabel_o *upTargetAddLabel; // x21
  int64_t upTargetRubyLb; // x0
  __int64 v37; // x1
  UIExtrusionLabel_o *currentLvLb; // x21
  UIExtrusionLabel_o *resLvLb; // x21
  const MethodInfo *v40; // x1
  UnityEngine_GameObject_o *svtFaceInfo; // x21
  UnityEngine_Transform_o *transform; // x0
  __int128 v43; // q1
  NpMaterialSvtInfo_o *v44; // x22
  UILabel_o *baseTxt; // x21
  int v46; // w20
  int32_t v47; // w27
  UnityEngine_GameObject_o *v48; // x21
  int64_t v49; // x28
  UnityEngine_Transform_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x21
  NpMaterialSvtInfo_o *Component_object; // x29
  UnityEngine_Transform_o *v53; // x22
  float y; // s8
  int v55; // s2
  float v56; // s0
  float v57; // s1
  UnityEngine_GameObject_o *gameObject; // x21
  UILabel_o *exceededTxt; // x21
  UILabel_o *mtTxt; // x21
  UnityEngine_Component_o *materialSvtBg; // x27
  UnityEngine_GameObject_o *v62; // x26
  UnityEngine_GameObject_o *v63; // x28
  UnityEngine_GameObject_o *v64; // x29
  UnityEngine_GameObject_o *v65; // x0
  const MethodInfo *v66; // x2
  int v67; // w8
  UnityEngine_GameObject_o *v68; // x25
  int v69; // s12
  float v70; // s8
  float v71; // s10
  int v72; // s9
  int v73; // s11
  int v74; // w8
  int v75; // w9
  int v76; // w10
  int v77; // w11
  int v78; // w12
  UnityEngine_GameObject_o *v79; // x0
  UILabel_o *upSpendQpTxtLb; // x21
  UILabel_o *upHaveQpTxtLb; // x21
  UILabel_o *upSpendQpLb; // x21
  System_String_o *v83; // x22
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  Il2CppObject *v87; // x0
  UILabel_o *upHaveQpLb; // x21
  System_String_o *v89; // x22
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  Il2CppObject *v93; // x0
  struct UILabel_o *upConfirmMsgLb; // x21
  System_String_o *mText; // x22
  System_String_o *v96; // x0
  System_String_o *v97; // x0
  const MethodInfo *v98; // x2
  UnityEngine_GameObject_o *v99; // x0
  float v100; // s8
  UILabel_o *upConfirmReConfirmMsgLb; // x21
  UnityEngine_GameObject_o *v102; // x0
  __int64 v103; // x1
  System_Collections_IEnumerator_o *Enumerator; // x24
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v106; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v109; // x8
  __int64 v110; // x9
  System_Collections_IEnumerator_c **v111; // x10
  __int64 v112; // x0
  __int64 v113; // x0
  UnityEngine_Transform_c *v114; // x1
  UnityEngine_Object_o *v115; // x25
  __int64 methodPtr_low; // x9
  UnityEngine_Component_o *v117; // x0
  UnityEngine_Object_o *v118; // x21
  __int64 v119; // x1
  UnityEngine_Component_o *titleLb; // x0
  UnityEngine_Object_o *v121; // x21
  _BOOL8 v122; // x0
  __int64 v123; // x1
  UnityEngine_GameObject_o *v124; // x0
  __int64 v125; // x1
  __int64 v126; // x0
  __int64 v127; // x8
  __int64 v128; // x24
  __int64 v129; // x9
  int *v130; // x10
  __int64 v131; // x0
  struct UILabel_o *v132; // x21
  System_String_o *v133; // x22
  System_String_o *v134; // x0
  System_String_o *v135; // x0
  struct UILabel_o *v136; // x21
  System_String_o *v137; // x22
  System_String_o *v138; // x0
  System_String_o *v139; // x0
  const MethodInfo *v140; // x2
  UnityEngine_GameObject_o *v141; // x0
  UnityEngine_GameObject_o *v142; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v146; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v147; // [xsp+40h] [xbp-B0h] BYREF
  _BOOL4 v148; // [xsp+68h] [xbp-88h]
  int32_t haveQp; // [xsp+6Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v148 = isExceedMaxLv;
  if ( (byte_48E6115 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___, baseData);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v13);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1B00CCC(&int_TypeInfo, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_long__get_Count__, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_long__get_Item__, v17);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v18);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v19);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_1B00CCC(&UnityEngine_Transform_TypeInfo, v21);
    sub_1B00CCC(&StringLiteral_43/*"\n"*/, v22);
    sub_1B00CCC(&StringLiteral_9108/*"NEED_QP"*/, v23);
    sub_1B00CCC(&StringLiteral_9215/*"NPUP_EXCEEDED"*/, v24);
    sub_1B00CCC(&StringLiteral_3622/*"COMBINE_HAVE_QP"*/, v25);
    sub_1B00CCC(&StringLiteral_3647/*"COMBINE_NPUP_MATERIAL"*/, v26);
    sub_1B00CCC(&StringLiteral_3767/*"CONFIRM_COMBINE_MSG"*/, v27);
    sub_1B00CCC(&StringLiteral_9216/*"NPUP_RECONFIRM_TXT"*/, v28);
    sub_1B00CCC(&StringLiteral_9214/*"NPUP_CONFIRM_WARNING_TXT"*/, v29);
    sub_1B00CCC(&StringLiteral_3646/*"COMBINE_NPUP_BASE"*/, v30);
    sub_1B00CCC(&StringLiteral_3654/*"COMBINE_SPEND_QP"*/, v31);
    sub_1B00CCC(&StringLiteral_9213/*"NPUP_CONFIRM_TXT"*/, v32);
    sub_1B00CCC(&StringLiteral_1/*""*/, v33);
    sub_1B00CCC(&StringLiteral_3648/*"COMBINE_NP_ADD_TITLE"*/, v34);
    byte_48E6115 = 1;
  }
  upTargetAddLabel = this->fields.upTargetAddLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3648/*"COMBINE_NP_ADD_TITLE"*/, 0LL);
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
  NpUpConfirmComponent__SetDefaultTitleLb(this, v40);
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
                              (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
  if ( !baseData )
    goto LABEL_130;
  v43 = *(_OWORD *)&baseData->fields.id.fields.fakeValue;
  v44 = (NpMaterialSvtInfo_o *)upTargetRubyLb;
  *(_OWORD *)&v147.fields.currentCryptoKey = *(_OWORD *)&baseData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v147.fields.fakeValue = v43;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v146 = v147;
  upTargetRubyLb = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v146, 0LL);
  if ( !v44 )
    goto LABEL_130;
  NpMaterialSvtInfo__setMaterialSvtInfo(v44, 0, baseData, upTargetRubyLb, 0LL, 0LL);
  baseTxt = this->fields.baseTxt;
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3646/*"COMBINE_NPUP_BASE"*/, 0LL);
  if ( !baseTxt )
    goto LABEL_130;
  UILabel__set_text(baseTxt, (System_String_o *)upTargetRubyLb, 0LL);
  if ( !selectUsrSvtIdList )
    goto LABEL_130;
  if ( selectUsrSvtIdList->fields._size >= 1 )
  {
    v46 = 0;
    v47 = 0;
    do
    {
      upTargetRubyLb = System_Collections_Generic_List_long___get_Item(
                         selectUsrSvtIdList,
                         v47,
                         (const MethodInfo_33A9714 *)Method_System_Collections_Generic_List_long__get_Item__);
      if ( !this->fields.materialInfo )
        goto LABEL_130;
      v48 = this->fields.svtFaceInfo;
      v49 = upTargetRubyLb;
      v50 = UnityEngine_GameObject__get_transform(this->fields.materialInfo, 0LL);
      upTargetRubyLb = (int64_t)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v48, v50, 0LL, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      v51 = (UnityEngine_GameObject_o *)upTargetRubyLb;
      Component_object = (NpMaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  (UnityEngine_GameObject_o *)upTargetRubyLb,
                                                  (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
      v53 = UnityEngine_GameObject__get_transform(v51, 0LL);
      upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(v51, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
      y = localPosition.fields.y;
      upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(v51, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      *(UnityEngine_Vector3_o *)(&v55 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)upTargetRubyLb,
                                               0LL);
      if ( !v53 )
        goto LABEL_130;
      v56 = (float)v46;
      v57 = y;
      UnityEngine_Transform__set_localPosition(v53, *(UnityEngine_Vector3_o *)(&v55 - 2), 0LL);
      if ( !Component_object )
        goto LABEL_130;
      NpMaterialSvtInfo__setMaterialSvtInfo(Component_object, 0, baseData, v49, 0LL, 0LL);
      upTargetRubyLb = (int64_t)Component_object->fields.exceededTxt;
      if ( !upTargetRubyLb )
        goto LABEL_130;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
      upTargetRubyLb = NpCombineControl__CheckConfirm(v49, 0LL);
      if ( !gameObject )
        goto LABEL_130;
      UnityEngine_GameObject__SetActive(gameObject, upTargetRubyLb & 1, 0LL);
      exceededTxt = Component_object->fields.exceededTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_9215/*"NPUP_EXCEEDED"*/, 0LL);
      if ( !exceededTxt )
        goto LABEL_130;
      UILabel__set_text(exceededTxt, (System_String_o *)upTargetRubyLb, 0LL);
      ++v47;
      v46 += 140;
    }
    while ( v47 < selectUsrSvtIdList->fields._size );
  }
  mtTxt = this->fields.mtTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3647/*"COMBINE_NPUP_MATERIAL"*/, 0LL);
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
  v62 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.arrow, 0LL);
  if ( !this->fields.materialInfo )
    goto LABEL_130;
  v63 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(this->fields.materialInfo, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
  if ( !this->fields.baseInfo )
    goto LABEL_130;
  v64 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(this->fields.baseInfo, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
  v67 = selectUsrSvtIdList->fields._size - 1;
  v68 = v65;
  switch ( v67 )
  {
    case 0:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 144, v66);
      if ( !materialSvtBg )
        goto LABEL_130;
      v69 = 1117388800;
      v70 = 19.0;
      v71 = -1.0;
      v72 = -1027080192;
      v73 = 1117388800;
      goto LABEL_54;
    case 1:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 244, v66);
      if ( !materialSvtBg )
        goto LABEL_130;
      v70 = -31.0;
      v72 = -1021968384;
      v71 = -51.0;
      v73 = 1123811328;
      v69 = 1123942400;
      goto LABEL_54;
    case 2:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 346, v66);
      if ( !materialSvtBg )
        goto LABEL_130;
      *(float *)&v74 = -77.0;
      v75 = -1018691584;
      *(float *)&v76 = -100.0;
      v77 = 1127022592;
      v78 = 1127219200;
      goto LABEL_51;
    case 3:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 445, v66);
      if ( !materialSvtBg )
        goto LABEL_130;
      *(float *)&v74 = -127.0;
      v75 = -1015414784;
      *(float *)&v76 = -150.0;
      v77 = 1130299392;
      v78 = 1130364928;
LABEL_51:
      v70 = *(float *)&v74;
      v72 = v75;
      v71 = *(float *)&v76;
      v73 = v77;
      v69 = v78;
LABEL_54:
      v79 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v79, *(float *)&v69, 0LL);
      GameObjectExtensions__SetLocalPositionX(v62, *(float *)&v73, 0LL);
      GameObjectExtensions__SetLocalPositionX(v63, v71, 0LL);
      GameObjectExtensions__SetLocalPositionX(v68, *(float *)&v72, 0LL);
      GameObjectExtensions__SetLocalPositionX(v64, v70, 0LL);
LABEL_55:
      upSpendQpTxtLb = this->fields.upSpendQpTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3654/*"COMBINE_SPEND_QP"*/, 0LL);
      if ( !upSpendQpTxtLb )
        goto LABEL_130;
      UILabel__set_text(upSpendQpTxtLb, (System_String_o *)upTargetRubyLb, 0LL);
      upHaveQpTxtLb = this->fields.upHaveQpTxtLb;
      upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3622/*"COMBINE_HAVE_QP"*/, 0LL);
      if ( !upHaveQpTxtLb )
        goto LABEL_130;
      UILabel__set_text(upHaveQpTxtLb, (System_String_o *)upTargetRubyLb, 0LL);
      upSpendQpLb = this->fields.upSpendQpLb;
      v83 = LocalizationManager__Get((System_String_o *)StringLiteral_9108/*"NEED_QP"*/, 0LL);
      LODWORD(v147.fields.currentCryptoKey) = updata->fields.spendQp;
      v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v147, v84, v85, v86);
      upTargetRubyLb = (int64_t)System_String__Format(v83, v87, 0LL);
      if ( !upSpendQpLb )
        goto LABEL_130;
      UILabel__set_text(upSpendQpLb, (System_String_o *)upTargetRubyLb, 0LL);
      upHaveQpLb = this->fields.upHaveQpLb;
      v89 = LocalizationManager__Get((System_String_o *)StringLiteral_9108/*"NEED_QP"*/, 0LL);
      haveQp = updata->fields.haveQp;
      v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveQp, v90, v91, v92);
      upTargetRubyLb = (int64_t)System_String__Format(v89, v93, 0LL);
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
      if ( !v148 && !isExceedeMaterial && !isCombineSvt )
      {
        upConfirmMsgLb = this->fields.upConfirmMsgLb;
        if ( !upConfirmMsgLb )
          goto LABEL_130;
        mText = upConfirmMsgLb->fields.mText;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v96 = LocalizationManager__Get((System_String_o *)StringLiteral_3767/*"CONFIRM_COMBINE_MSG"*/, 0LL);
        v97 = System_String__Concat_60325748(mText, v96, 0LL);
        UILabel__set_text(upConfirmMsgLb, v97, 0LL);
        NpUpConfirmComponent__SetDefaultLayout(this, updata, v98);
        upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
        if ( !upTargetRubyLb )
          goto LABEL_130;
        v99 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
        GameObjectExtensions__SetLocalPositionY(v99, -133.0, 0LL);
        upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
        if ( !upTargetRubyLb )
          goto LABEL_130;
        v100 = 2.0;
LABEL_129:
        v142 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
        GameObjectExtensions__SetLocalPositionX(v142, v100, 0LL);
        return;
      }
      if ( !reConfirmation )
      {
        if ( v148 || isCombineSvt || isExceedeMaterial )
        {
          v132 = this->fields.upConfirmMsgLb;
          if ( !v132 )
            goto LABEL_130;
          v133 = v132->fields.mText;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v134 = LocalizationManager__Get((System_String_o *)StringLiteral_9214/*"NPUP_CONFIRM_WARNING_TXT"*/, 0LL);
          v135 = System_String__Concat_60325748(v133, v134, 0LL);
          UILabel__set_text(v132, v135, 0LL);
        }
        v136 = this->fields.upConfirmMsgLb;
        if ( !v136 )
          goto LABEL_130;
        v137 = v136->fields.mText;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v138 = LocalizationManager__Get((System_String_o *)StringLiteral_9213/*"NPUP_CONFIRM_TXT"*/, 0LL);
        v139 = System_String__Concat_60337008(v137, (System_String_o *)StringLiteral_43/*"\n"*/, v138, 0LL);
        UILabel__set_text(v136, v139, 0LL);
        NpUpConfirmComponent__SetDefaultLayout(this, updata, v140);
        upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
        if ( !upTargetRubyLb
          || (v141 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL),
              GameObjectExtensions__SetLocalPositionY(v141, -134.0, 0LL),
              (upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb) == 0) )
        {
LABEL_130:
          sub_1B00F28(upTargetRubyLb, v37);
        }
        v100 = 5.0;
        goto LABEL_129;
      }
      upConfirmReConfirmMsgLb = this->fields.upConfirmReConfirmMsgLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_9216/*"NPUP_RECONFIRM_TXT"*/, 0LL);
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
      v102 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
      GameObjectExtensions__SetLocalPositionY(v102, 184.0, 0LL);
      upTargetRubyLb = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
      if ( !Enumerator )
        sub_1B00F28(0LL, v103);
      while ( 1 )
      {
        klass = Enumerator->klass;
        v106 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v106;
            p_offset += 4;
            if ( !v106 )
              goto LABEL_84;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_84:
          p_method = sub_1B52CAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                Enumerator,
                *(_QWORD *)(p_method + 8)) & 1) == 0 )
          break;
        v109 = Enumerator->klass;
        v110 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          v111 = (System_Collections_IEnumerator_c **)&v109->_1.interfaceOffsets->offset;
          while ( *(v111 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v110;
            v111 += 2;
            if ( !v110 )
              goto LABEL_91;
          }
          v112 = (__int64)&v109->vtable[*(_DWORD *)v111 + 1].method;
        }
        else
        {
LABEL_91:
          v112 = sub_1B52CAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v113 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v112)(
                 Enumerator,
                 *(_QWORD *)(v112 + 8));
        v115 = (UnityEngine_Object_o *)v113;
        if ( v113 )
        {
          v114 = UnityEngine_Transform_TypeInfo;
          methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v113 + 304LL) < (unsigned int)methodPtr_low
            || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v113 + 200LL) + 8 * methodPtr_low - 8) != UnityEngine_Transform_TypeInfo )
          {
            sub_1B011E8(v113);
LABEL_132:
            sub_1B00F28(v117, v114);
          }
        }
        v117 = (UnityEngine_Component_o *)this->fields.upConfirmReConfirmMsgLb;
        if ( !v117 )
          goto LABEL_132;
        v118 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(v117, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v118, v115, 0LL) )
        {
          titleLb = (UnityEngine_Component_o *)this->fields.titleLb;
          if ( !titleLb )
            sub_1B00F28(0LL, v119);
          v121 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(titleLb, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v122 = UnityEngine_Object__op_Inequality(v121, v115, 0LL);
          if ( v122 )
          {
            if ( !v115 )
              sub_1B00F28(v122, v123);
            v124 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v115, 0LL);
            if ( !v124 )
              sub_1B00F28(0LL, v125);
            UnityEngine_GameObject__SetActive(v124, 0, 0LL);
          }
        }
      }
      v126 = sub_1B00E08(Enumerator, System_IDisposable_TypeInfo);
      if ( v126 )
      {
        v127 = *(_QWORD *)v126;
        v128 = v126;
        v129 = *(unsigned __int16 *)(*(_QWORD *)v126 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v126 + 302LL) )
        {
          v130 = (int *)(*(_QWORD *)(v127 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v130 - 1) != System_IDisposable_TypeInfo )
          {
            --v129;
            v130 += 4;
            if ( !v129 )
              goto LABEL_112;
          }
          v131 = v127 + 16LL * *v130 + 312;
        }
        else
        {
LABEL_112:
          v131 = sub_1B52CAC(v126, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v131)(v128, *(_QWORD *)(v131 + 8));
      }
      return;
    default:
      goto LABEL_55;
  }
}