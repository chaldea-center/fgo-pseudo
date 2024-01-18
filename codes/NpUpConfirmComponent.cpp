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
  __int64 v8; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v14; // x3
  System_Collections_IEnumerator_c *v15; // x8
  unsigned __int64 v16; // x10
  System_Collections_IEnumerator_c **v17; // x11
  __int64 v18; // x0
  UnityEngine_Component_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v23; // x0
  __int64 v24; // x3
  __int64 v25; // x8
  __int64 v26; // x20
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x3
  System_Collections_IEnumerator_o *v32; // x19
  System_Collections_IEnumerator_c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  __int64 v37; // x3
  System_Collections_IEnumerator_c *v38; // x8
  unsigned __int64 v39; // x10
  System_Collections_IEnumerator_c **v40; // x11
  __int64 v41; // x0
  UnityEngine_Component_o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x9
  UnityEngine_Object_o *v45; // x20
  int v46; // w22
  __int64 v47; // x0
  __int64 v48; // x3
  __int64 v49; // x8
  __int64 v50; // x19
  unsigned __int64 v51; // x10
  int *v52; // x11
  __int64 v53; // x0
  int v54[2]; // [xsp+0h] [xbp-50h]
  int v55; // [xsp+8h] [xbp-48h]

  if ( (byte_4188475 & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, method);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Transform_TypeInfo, v5);
    byte_4188475 = 1;
  }
  v55 = 0;
  baseInfo = this->fields.baseInfo;
  if ( !baseInfo )
    goto LABEL_73;
  baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0LL);
  if ( !baseInfo )
    goto LABEL_73;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0LL);
  if ( !Enumerator )
    sub_B2C434(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v8);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
      while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        v17 += 2;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1].method;
    }
    else
    {
LABEL_17:
      v18 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v14);
    }
    v19 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                       Enumerator,
                                       *(_QWORD *)(v18 + 8));
    if ( !v19 )
      goto LABEL_71;
    v21 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (UnityEngine_Transform_c *)v19->klass->_2.typeHierarchy[v21 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v42 = (UnityEngine_Component_o *)sub_B2C728(v19);
LABEL_70:
      v19 = (UnityEngine_Component_o *)sub_B2C728(v42);
LABEL_71:
      sub_B2C434(v19, v20);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v19, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  }
  v54[0] = 67;
  v55 = 1;
  v23 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
  if ( v23 )
  {
    v25 = *(_QWORD *)v23;
    v26 = v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v27 = 0LL;
      v28 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_31;
      }
      v29 = v25 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_31:
      v29 = sub_AC5258(v23, System_IDisposable_TypeInfo, 0LL, v24);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  }
  v55 = 0;
  baseInfo = this->fields.materialInfo;
  if ( !baseInfo || (baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0LL)) == 0LL )
LABEL_73:
    sub_B2C434(baseInfo, method);
  v32 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0LL);
  if ( !v32 )
    sub_B2C434(0LL, v30);
  while ( 1 )
  {
    v33 = v32->klass;
    if ( *(_WORD *)&v32->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)&v32->klass->_2.bitflags1 )
          goto LABEL_41;
      }
      v36 = (__int64)&v33->vtable[*v35].method;
    }
    else
    {
LABEL_41:
      v36 = sub_AC5258(v32, System_Collections_IEnumerator_TypeInfo, 0LL, v31);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8)) & 1) == 0 )
      break;
    v38 = v32->klass;
    if ( *(_WORD *)&v32->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      v40 = (System_Collections_IEnumerator_c **)&v38->_1.interfaceOffsets->offset;
      while ( *(v40 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v39;
        v40 += 2;
        if ( v39 >= *(unsigned __int16 *)&v32->klass->_2.bitflags1 )
          goto LABEL_48;
      }
      v41 = (__int64)&v38->vtable[*(_DWORD *)v40 + 1].method;
    }
    else
    {
LABEL_48:
      v41 = sub_AC5258(v32, System_Collections_IEnumerator_TypeInfo, 1LL, v37);
    }
    v42 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v41)(
                                       v32,
                                       *(_QWORD *)(v41 + 8));
    if ( !v42 )
      sub_B2C434(0LL, v43);
    v44 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v42->klass->_2.bitflags2 + 1) < (unsigned int)v44
      || (UnityEngine_Transform_c *)v42->klass->_2.typeHierarchy[v44 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_70;
    }
    v45 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v42, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v45, 0LL);
  }
  v54[0] = 134;
  v46 = ++v55;
  v47 = sub_B2C41C(v32, System_IDisposable_TypeInfo);
  if ( v47 )
  {
    v49 = *(_QWORD *)v47;
    v50 = v47;
    if ( *(_WORD *)(*(_QWORD *)v47 + 298LL) )
    {
      v51 = 0LL;
      v52 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
      {
        ++v51;
        v52 += 4;
        if ( v51 >= *(unsigned __int16 *)(*(_QWORD *)v47 + 298LL) )
          goto LABEL_62;
      }
      v53 = v49 + 16LL * *v52 + 312;
    }
    else
    {
LABEL_62:
      v53 = sub_AC5258(v47, System_IDisposable_TypeInfo, 0LL, v48);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v53)(v50, *(_QWORD *)(v53 + 8));
  }
  if ( v46 && v54[v46 - 1] == 134 )
    v55 = v46 - 1;
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
  __int64 v10; // x3
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x3
  System_Collections_IEnumerator_c *v17; // x8
  unsigned __int64 v18; // x10
  System_Collections_IEnumerator_c **v19; // x11
  __int64 v20; // x0
  UnityEngine_Component_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1
  __int64 v26; // x3
  UnityEngine_Transform_c *v27; // x8
  UnityEngine_Transform_o *v28; // x21
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0

  if ( (byte_4188476 & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, updata);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Transform_TypeInfo, v6);
    byte_4188476 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_38;
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_B2C434(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v10);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = (System_Collections_IEnumerator_c **)&v17->_1.interfaceOffsets->offset;
      while ( *(v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        v19 += 2;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 1].method;
    }
    else
    {
LABEL_16:
      v20 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v16);
    }
    v21 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(
                                       Enumerator,
                                       *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_36;
    v23 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v23
      || (UnityEngine_Transform_c *)v21->klass->_2.typeHierarchy[v23 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v21 = (UnityEngine_Component_o *)sub_B2C728(v21);
LABEL_36:
      sub_B2C434(v21, v22);
    }
    gameObject = UnityEngine_Component__get_gameObject(v21, 0LL);
    if ( !gameObject )
      sub_B2C434(0LL, v25);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  transform = (UnityEngine_Transform_o *)sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
  if ( transform )
  {
    v27 = transform->klass;
    v28 = transform;
    if ( *(_WORD *)&transform->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      v30 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)&transform->klass->_2.bitflags1 )
          goto LABEL_28;
      }
      v31 = (__int64)(&v27->vtable._0_Equals.method + 2 * *v30);
    }
    else
    {
LABEL_28:
      v31 = sub_AC5258(transform, System_IDisposable_TypeInfo, 0LL, v26);
    }
    transform = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))v31)(
                                             v28,
                                             *(_QWORD *)(v31 + 8));
  }
  if ( !updata
    || (transform = (UnityEngine_Transform_o *)this->fields.upTargetRoot) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, !updata->fields.isNpAdd, 0LL),
        (transform = (UnityEngine_Transform_o *)this->fields.upTargetAddRoot) == 0LL) )
  {
LABEL_38:
    sub_B2C434(transform, v8);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, updata->fields.isNpAdd, 0LL);
}


void __fastcall NpUpConfirmComponent__SetDefaultTitleLb(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  titleLb = this->fields.titleLb;
  if ( !titleLb || (UILabel__set_fontSize(titleLb, 22, 0LL), (titleLb = this->fields.titleLb) == 0LL) )
    sub_B2C434(titleLb, method);
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
    sub_B2C434(materialSvtBg, *(_QWORD *)&width);
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
  UILabel_o *upTargetAddLabel; // x22
  __int64 upTargetRubyLb; // x0
  __int64 v38; // x1
  const MethodInfo *v39; // x3
  UIExtrusionLabel_o *currentLvLb; // x22
  UIExtrusionLabel_o *resLvLb; // x22
  const MethodInfo *v42; // x1
  UnityEngine_GameObject_o *svtFaceInfo; // x22
  UnityEngine_Transform_o *transform; // x0
  __int128 v45; // q1
  NpMaterialSvtInfo_o *v46; // x22
  UserServantEntity_o *v47; // x2
  const MethodInfo *v48; // x5
  UILabel_o *baseTxt; // x22
  signed __int64 size; // x8
  int v51; // w21
  unsigned __int64 v52; // x20
  UnityEngine_GameObject_o *v53; // x26
  int64_t v54; // x22
  UnityEngine_Transform_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x28
  NpMaterialSvtInfo_o *Component_srcLineSprite; // x26
  UnityEngine_Transform_o *v58; // x27
  float y; // s8
  int v60; // s2
  float v61; // s0
  float v62; // s1
  UserServantEntity_o *v63; // x2
  const MethodInfo *v64; // x5
  UnityEngine_GameObject_o *gameObject; // x27
  const MethodInfo *v66; // x1
  UILabel_o *exceededTxt; // x22
  UILabel_o *mtTxt; // x22
  UnityEngine_Component_o *materialSvtBg; // x22
  UnityEngine_GameObject_o *v70; // x28
  UnityEngine_GameObject_o *v71; // x27
  UnityEngine_GameObject_o *v72; // x26
  UnityEngine_GameObject_o *v73; // x0
  const MethodInfo *v74; // x2
  int v75; // w8
  UnityEngine_GameObject_o *v76; // x25
  UnityEngine_GameObject_o *v77; // x0
  int v78; // s0
  UnityEngine_GameObject_o *v79; // x0
  UnityEngine_GameObject_o *v80; // x0
  UnityEngine_GameObject_o *v81; // x0
  UILabel_o *upSpendQpTxtLb; // x22
  UILabel_o *upHaveQpTxtLb; // x22
  UILabel_o *upSpendQpLb; // x22
  System_String_o *v85; // x25
  Il2CppObject *v86; // x0
  UILabel_o *upHaveQpLb; // x22
  System_String_o *v88; // x25
  Il2CppObject *v89; // x0
  struct UILabel_o *v90; // x21
  System_String_o *v91; // x22
  System_String_o *v92; // x0
  System_String_o *v93; // x0
  const MethodInfo *v94; // x2
  UnityEngine_GameObject_o *v95; // x0
  UnityEngine_GameObject_o *v96; // x0
  float v97; // s0
  UILabel_o *upConfirmReConfirmMsgLb; // x22
  UnityEngine_GameObject_o *v99; // x0
  __int64 v100; // x1
  __int64 v101; // x3
  System_Collections_IEnumerator_o *Enumerator; // x24
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v104; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v107; // x3
  System_Collections_IEnumerator_c *v108; // x8
  unsigned __int64 v109; // x10
  System_Collections_IEnumerator_c **v110; // x11
  __int64 v111; // x0
  __int64 v112; // x0
  UnityEngine_Transform_c *v113; // x1
  UnityEngine_Object_o *v114; // x22
  __int64 v115; // x9
  UnityEngine_Component_o *v116; // x0
  UnityEngine_Object_o *v117; // x25
  __int64 v118; // x1
  UnityEngine_Component_o *titleLb; // x0
  UnityEngine_Object_o *v120; // x25
  _BOOL8 v121; // x0
  __int64 v122; // x1
  UnityEngine_GameObject_o *v123; // x0
  __int64 v124; // x1
  __int64 v125; // x3
  __int64 v126; // x8
  __int64 v127; // x24
  unsigned __int64 v128; // x10
  int *v129; // x11
  __int64 v130; // x0
  struct UILabel_o *upConfirmMsgLb; // x21
  System_String_o *mText; // x22
  System_String_o *v133; // x0
  System_String_o *v134; // x0
  struct UILabel_o *v135; // x21
  System_String_o *v136; // x22
  System_String_o *v137; // x0
  System_String_o *v138; // x0
  const MethodInfo *v139; // x2
  UnityEngine_GameObject_o *v140; // x0
  SetLevelUpData_o *v141; // [xsp+8h] [xbp-B8h]
  int32_t haveQp; // [xsp+1Ch] [xbp-A4h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v146; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v147; // [xsp+40h] [xbp-80h] BYREF
  __int64 v148; // [xsp+68h] [xbp-58h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4188474 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___, baseData);
    sub_B2C35C(&System_IDisposable_TypeInfo, v14);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_B2C35C(&int_TypeInfo, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Item__, v18);
    sub_B2C35C(&LocalizationManager_TypeInfo, v19);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v20);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_B2C35C(&UnityEngine_Transform_TypeInfo, v22);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v23);
    sub_B2C35C(&StringLiteral_9271/*"NEED_QP"*/, v24);
    sub_B2C35C(&StringLiteral_9372/*"NPUP_EXCEEDED"*/, v25);
    sub_B2C35C(&StringLiteral_3169/*"COMBINE_HAVE_QP"*/, v26);
    sub_B2C35C(&StringLiteral_3194/*"COMBINE_NPUP_MATERIAL"*/, v27);
    sub_B2C35C(&StringLiteral_3313/*"CONFIRM_COMBINE_MSG"*/, v28);
    sub_B2C35C(&StringLiteral_9373/*"NPUP_RECONFIRM_TXT"*/, v29);
    sub_B2C35C(&StringLiteral_9371/*"NPUP_CONFIRM_WARNING_TXT"*/, v30);
    sub_B2C35C(&StringLiteral_3193/*"COMBINE_NPUP_BASE"*/, v31);
    sub_B2C35C(&StringLiteral_3201/*"COMBINE_SPEND_QP"*/, v32);
    sub_B2C35C(&StringLiteral_9370/*"NPUP_CONFIRM_TXT"*/, v33);
    sub_B2C35C(&StringLiteral_1/*""*/, v34);
    sub_B2C35C(&StringLiteral_3195/*"COMBINE_NP_ADD_TITLE"*/, v35);
    byte_4188474 = 1;
  }
  HIDWORD(v148) = 0;
  upTargetAddLabel = this->fields.upTargetAddLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3195/*"COMBINE_NP_ADD_TITLE"*/, 0LL);
  if ( !upTargetAddLabel )
    goto LABEL_143;
  UILabel__set_text(upTargetAddLabel, (System_String_o *)upTargetRubyLb, 0LL);
  if ( !updata )
    goto LABEL_143;
  upTargetRubyLb = (__int64)this->fields.upTargetRubyLb;
  if ( !upTargetRubyLb )
    goto LABEL_143;
  UILabel__set_text((UILabel_o *)upTargetRubyLb, updata->fields.targetRuby, 0LL);
  upTargetRubyLb = (__int64)this->fields.upTargetNameLb;
  if ( !upTargetRubyLb )
    goto LABEL_143;
  UILabel__set_text((UILabel_o *)upTargetRubyLb, updata->fields.targetName, 0LL);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel(
    baseData,
    this->fields.upTargetNameLb,
    this->fields.upTargetRubyLb,
    v39);
  currentLvLb = this->fields.currentLvLb;
  upTargetRubyLb = (__int64)System_Int32__ToString((int)updata + 56, 0LL);
  if ( !currentLvLb )
    goto LABEL_143;
  UIExtrusionLabel__set_text(currentLvLb, (System_String_o *)upTargetRubyLb, 0LL);
  resLvLb = this->fields.resLvLb;
  upTargetRubyLb = (__int64)System_Int32__ToString((int)updata + 60, 0LL);
  if ( !resLvLb )
    goto LABEL_143;
  UIExtrusionLabel__set_text(resLvLb, (System_String_o *)upTargetRubyLb, 0LL);
  NpUpConfirmComponent__SetDefaultTitleLb(this, v42);
  upTargetRubyLb = (__int64)this->fields.baseInfo;
  if ( !upTargetRubyLb )
    goto LABEL_143;
  svtFaceInfo = this->fields.svtFaceInfo;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)upTargetRubyLb, 0LL);
  upTargetRubyLb = (__int64)BaseMonoBehaviour__createObject(
                              (BaseMonoBehaviour_o *)this,
                              svtFaceInfo,
                              transform,
                              0LL,
                              0LL);
  if ( !upTargetRubyLb )
    goto LABEL_143;
  upTargetRubyLb = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)upTargetRubyLb,
                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
  if ( !baseData )
    goto LABEL_143;
  v45 = *(_OWORD *)&baseData->fields.id.fields.fakeValue;
  v46 = (NpMaterialSvtInfo_o *)upTargetRubyLb;
  *(_OWORD *)&v147.fields.currentCryptoKey = *(_OWORD *)&baseData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v147.fields.fakeValue = v45;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v146 = v147;
  upTargetRubyLb = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v146, 0LL);
  if ( !v46 )
    goto LABEL_143;
  NpMaterialSvtInfo__setMaterialSvtInfo(v46, 0, v47, upTargetRubyLb, 0LL, v48);
  baseTxt = this->fields.baseTxt;
  upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3193/*"COMBINE_NPUP_BASE"*/, 0LL);
  if ( !baseTxt )
    goto LABEL_143;
  v141 = updata;
  UILabel__set_text(baseTxt, (System_String_o *)upTargetRubyLb, 0LL);
  if ( !selectUsrSvtIdList )
    goto LABEL_143;
  LODWORD(size) = selectUsrSvtIdList->fields._size;
  if ( (int)size >= 1 )
  {
    v51 = 0;
    v52 = 0LL;
    do
    {
      if ( v52 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      upTargetRubyLb = (__int64)this->fields.materialInfo;
      if ( !upTargetRubyLb )
        goto LABEL_143;
      v53 = this->fields.svtFaceInfo;
      v54 = selectUsrSvtIdList->fields._items->m_Items[v52];
      v55 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)upTargetRubyLb, 0LL);
      upTargetRubyLb = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v53, v55, 0LL, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_143;
      v56 = (UnityEngine_GameObject_o *)upTargetRubyLb;
      Component_srcLineSprite = (NpMaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)upTargetRubyLb,
                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
      v58 = UnityEngine_GameObject__get_transform(v56, 0LL);
      upTargetRubyLb = (__int64)UnityEngine_GameObject__get_transform(v56, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_143;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
      y = localPosition.fields.y;
      upTargetRubyLb = (__int64)UnityEngine_GameObject__get_transform(v56, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_143;
      *(UnityEngine_Vector3_o *)(&v60 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)upTargetRubyLb,
                                               0LL);
      if ( !v58 )
        goto LABEL_143;
      v61 = (float)v51;
      v62 = y;
      UnityEngine_Transform__set_localPosition(v58, *(UnityEngine_Vector3_o *)(&v60 - 2), 0LL);
      if ( !Component_srcLineSprite )
        goto LABEL_143;
      NpMaterialSvtInfo__setMaterialSvtInfo(Component_srcLineSprite, 0, v63, v54, 0LL, v64);
      upTargetRubyLb = (__int64)Component_srcLineSprite->fields.exceededTxt;
      if ( !upTargetRubyLb )
        goto LABEL_143;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
      upTargetRubyLb = NpCombineControl__CheckConfirm(v54, v66);
      if ( !gameObject )
        goto LABEL_143;
      UnityEngine_GameObject__SetActive(gameObject, upTargetRubyLb & 1, 0LL);
      exceededTxt = Component_srcLineSprite->fields.exceededTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9372/*"NPUP_EXCEEDED"*/, 0LL);
      if ( !exceededTxt )
        goto LABEL_143;
      UILabel__set_text(exceededTxt, (System_String_o *)upTargetRubyLb, 0LL);
      size = selectUsrSvtIdList->fields._size;
      ++v52;
      v51 += 140;
    }
    while ( (__int64)v52 < size );
  }
  mtTxt = this->fields.mtTxt;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3194/*"COMBINE_NPUP_MATERIAL"*/, 0LL);
  if ( !mtTxt )
    goto LABEL_143;
  UILabel__set_text(mtTxt, (System_String_o *)upTargetRubyLb, 0LL);
  upTargetRubyLb = (__int64)this->fields.mtTxt;
  if ( !upTargetRubyLb )
    goto LABEL_143;
  materialSvtBg = (UnityEngine_Component_o *)this->fields.materialSvtBg;
  upTargetRubyLb = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
  if ( !this->fields.arrow )
    goto LABEL_143;
  v70 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.arrow, 0LL);
  if ( !this->fields.materialInfo )
    goto LABEL_143;
  v71 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (__int64)UnityEngine_GameObject__get_transform(this->fields.materialInfo, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_143;
  upTargetRubyLb = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_143;
  upTargetRubyLb = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
  if ( !this->fields.baseInfo )
    goto LABEL_143;
  v72 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (__int64)UnityEngine_GameObject__get_transform(this->fields.baseInfo, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_143;
  upTargetRubyLb = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_143;
  v73 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
  v75 = selectUsrSvtIdList->fields._size - 1;
  v76 = v73;
  switch ( v75 )
  {
    case 0:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 144, v74);
      if ( !materialSvtBg )
        goto LABEL_143;
      v77 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v77, 77.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v70, 77.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v71, -1.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v76, -100.0, 0LL);
      v78 = 19.0;
      break;
    case 1:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 244, v74);
      if ( !materialSvtBg )
        goto LABEL_143;
      v81 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v81, 127.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v70, 126.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v71, -51.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v76, -150.0, 0LL);
      v78 = -31.0;
      break;
    case 2:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 346, v74);
      if ( !materialSvtBg )
        goto LABEL_143;
      v79 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v79, 176.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v70, 173.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v71, -100.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v76, -200.0, 0LL);
      v78 = -1030094848;
      break;
    case 3:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 445, v74);
      if ( !materialSvtBg )
        goto LABEL_143;
      v80 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v80, 224.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v70, 223.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v71, -150.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v76, -250.0, 0LL);
      v78 = -1023541248;
      break;
    default:
      goto LABEL_60;
  }
  GameObjectExtensions__SetLocalPositionX(v72, *(float *)&v78, 0LL);
LABEL_60:
  upSpendQpTxtLb = this->fields.upSpendQpTxtLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3201/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !upSpendQpTxtLb )
    goto LABEL_143;
  UILabel__set_text(upSpendQpTxtLb, (System_String_o *)upTargetRubyLb, 0LL);
  upHaveQpTxtLb = this->fields.upHaveQpTxtLb;
  upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3169/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !upHaveQpTxtLb )
    goto LABEL_143;
  UILabel__set_text(upHaveQpTxtLb, (System_String_o *)upTargetRubyLb, 0LL);
  upSpendQpLb = this->fields.upSpendQpLb;
  v85 = LocalizationManager__Get((System_String_o *)StringLiteral_9271/*"NEED_QP"*/, 0LL);
  LODWORD(v147.fields.currentCryptoKey) = v141->fields.spendQp;
  v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v147);
  upTargetRubyLb = (__int64)System_String__Format(v85, v86, 0LL);
  if ( !upSpendQpLb )
    goto LABEL_143;
  UILabel__set_text(upSpendQpLb, (System_String_o *)upTargetRubyLb, 0LL);
  upHaveQpLb = this->fields.upHaveQpLb;
  v88 = LocalizationManager__Get((System_String_o *)StringLiteral_9271/*"NEED_QP"*/, 0LL);
  haveQp = v141->fields.haveQp;
  v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveQp);
  upTargetRubyLb = (__int64)System_String__Format(v88, v89, 0LL);
  if ( !upHaveQpLb )
    goto LABEL_143;
  UILabel__set_text(upHaveQpLb, (System_String_o *)upTargetRubyLb, 0LL);
  upTargetRubyLb = (__int64)this->fields.upConfirmReConfirmMsgLb;
  if ( !upTargetRubyLb )
    goto LABEL_143;
  UILabel__set_text((UILabel_o *)upTargetRubyLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  upTargetRubyLb = (__int64)this->fields.upConfirmMsgLb;
  if ( !upTargetRubyLb )
    goto LABEL_143;
  UILabel__set_text((UILabel_o *)upTargetRubyLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( isExceedMaxLv || isExceedeMaterial || isCombineSvt )
  {
    if ( reConfirmation )
    {
      upConfirmReConfirmMsgLb = this->fields.upConfirmReConfirmMsgLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9373/*"NPUP_RECONFIRM_TXT"*/, 0LL);
      if ( !upConfirmReConfirmMsgLb )
        goto LABEL_143;
      UILabel__set_text(upConfirmReConfirmMsgLb, (System_String_o *)upTargetRubyLb, 0LL);
      upTargetRubyLb = (__int64)this->fields.titleLb;
      if ( !upTargetRubyLb )
        goto LABEL_143;
      UILabel__set_fontSize((UILabel_o *)upTargetRubyLb, 27, 0LL);
      upTargetRubyLb = (__int64)this->fields.titleLb;
      if ( !upTargetRubyLb )
        goto LABEL_143;
      v99 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
      GameObjectExtensions__SetLocalPositionY(v99, 184.0, 0LL);
      upTargetRubyLb = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_143;
      Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
      if ( !Enumerator )
        sub_B2C434(0LL, v100);
      while ( 1 )
      {
        klass = Enumerator->klass;
        if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
        {
          v104 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v104;
            p_offset += 4;
            if ( v104 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
              goto LABEL_92;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_92:
          p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v101);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                Enumerator,
                *(_QWORD *)(p_method + 8)) & 1) == 0 )
          break;
        v108 = Enumerator->klass;
        if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
        {
          v109 = 0LL;
          v110 = (System_Collections_IEnumerator_c **)&v108->_1.interfaceOffsets->offset;
          while ( *(v110 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v109;
            v110 += 2;
            if ( v109 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
              goto LABEL_99;
          }
          v111 = (__int64)&v108->vtable[*(_DWORD *)v110 + 1].method;
        }
        else
        {
LABEL_99:
          v111 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v107);
        }
        v112 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v111)(
                 Enumerator,
                 *(_QWORD *)(v111 + 8));
        v114 = (UnityEngine_Object_o *)v112;
        if ( v112 )
        {
          v113 = UnityEngine_Transform_TypeInfo;
          v115 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)v112 + 300LL) < (unsigned int)v115
            || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v112 + 200LL) + 8 * v115 - 8) != UnityEngine_Transform_TypeInfo )
          {
            v116 = (UnityEngine_Component_o *)sub_B2C728(v112);
LABEL_145:
            sub_B2C434(v116, v113);
          }
        }
        v116 = (UnityEngine_Component_o *)this->fields.upConfirmReConfirmMsgLb;
        if ( !v116 )
          goto LABEL_145;
        v117 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(v116, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v117, v114, 0LL) )
        {
          titleLb = (UnityEngine_Component_o *)this->fields.titleLb;
          if ( !titleLb )
            sub_B2C434(0LL, v118);
          v120 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(titleLb, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v121 = UnityEngine_Object__op_Inequality(v120, v114, 0LL);
          if ( v121 )
          {
            if ( !v114 )
              sub_B2C434(v121, v122);
            v123 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v114, 0LL);
            if ( !v123 )
              sub_B2C434(0LL, v124);
            UnityEngine_GameObject__SetActive(v123, 0, 0LL);
          }
        }
      }
      v148 = 0x10000054FLL;
      upTargetRubyLb = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
      if ( upTargetRubyLb )
      {
        v126 = *(_QWORD *)upTargetRubyLb;
        v127 = upTargetRubyLb;
        if ( *(_WORD *)(*(_QWORD *)upTargetRubyLb + 298LL) )
        {
          v128 = 0LL;
          v129 = (int *)(*(_QWORD *)(v126 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v129 - 1) != System_IDisposable_TypeInfo )
          {
            ++v128;
            v129 += 4;
            if ( v128 >= *(unsigned __int16 *)(*(_QWORD *)upTargetRubyLb + 298LL) )
              goto LABEL_122;
          }
          v130 = v126 + 16LL * *v129 + 312;
        }
        else
        {
LABEL_122:
          v130 = sub_AC5258(upTargetRubyLb, System_IDisposable_TypeInfo, 0LL, v125);
        }
        upTargetRubyLb = (*(__int64 (__fastcall **)(__int64, _QWORD))v130)(v127, *(_QWORD *)(v130 + 8));
      }
      if ( (_DWORD)v148 == 1359 )
      {
        v148 = 1359LL;
        return;
      }
    }
    if ( isExceedMaxLv || isCombineSvt || isExceedeMaterial )
    {
      upConfirmMsgLb = this->fields.upConfirmMsgLb;
      if ( !upConfirmMsgLb )
        goto LABEL_143;
      mText = upConfirmMsgLb->fields.mText;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v133 = LocalizationManager__Get((System_String_o *)StringLiteral_9371/*"NPUP_CONFIRM_WARNING_TXT"*/, 0LL);
      v134 = System_String__Concat_44305532(mText, v133, 0LL);
      UILabel__set_text(upConfirmMsgLb, v134, 0LL);
    }
    v135 = this->fields.upConfirmMsgLb;
    if ( !v135 )
      goto LABEL_143;
    v136 = v135->fields.mText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v137 = LocalizationManager__Get((System_String_o *)StringLiteral_9370/*"NPUP_CONFIRM_TXT"*/, 0LL);
    v138 = System_String__Concat_44307816(v136, (System_String_o *)StringLiteral_26/*"\n"*/, v137, 0LL);
    UILabel__set_text(v135, v138, 0LL);
    NpUpConfirmComponent__SetDefaultLayout(this, v141, v139);
    upTargetRubyLb = (__int64)this->fields.upConfirmMsgLb;
    if ( !upTargetRubyLb
      || (v140 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL),
          GameObjectExtensions__SetLocalPositionY(v140, -134.0, 0LL),
          (upTargetRubyLb = (__int64)this->fields.upConfirmMsgLb) == 0) )
    {
LABEL_143:
      sub_B2C434(upTargetRubyLb, v38);
    }
    v96 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
    v97 = 5.0;
  }
  else
  {
    v90 = this->fields.upConfirmMsgLb;
    if ( !v90 )
      goto LABEL_143;
    v91 = v90->fields.mText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v92 = LocalizationManager__Get((System_String_o *)StringLiteral_3313/*"CONFIRM_COMBINE_MSG"*/, 0LL);
    v93 = System_String__Concat_44305532(v91, v92, 0LL);
    UILabel__set_text(v90, v93, 0LL);
    NpUpConfirmComponent__SetDefaultLayout(this, v141, v94);
    upTargetRubyLb = (__int64)this->fields.upConfirmMsgLb;
    if ( !upTargetRubyLb )
      goto LABEL_143;
    v95 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
    GameObjectExtensions__SetLocalPositionY(v95, -133.0, 0LL);
    upTargetRubyLb = (__int64)this->fields.upConfirmMsgLb;
    if ( !upTargetRubyLb )
      goto LABEL_143;
    v96 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
    v97 = 2.0;
  }
  GameObjectExtensions__SetLocalPositionX(v96, v97, 0LL);
}