void __fastcall NpUpConfirmComponent___ctor(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall NpUpConfirmComponent__DestroySvtInfo(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_GameObject_o *baseInfo; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x3
  System_Collections_IEnumerator_c *v23; // x8
  unsigned __int64 v24; // x10
  System_Collections_IEnumerator_c **v25; // x11
  __int64 v26; // x0
  UnityEngine_Component_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v31; // x0
  __int64 v32; // x3
  __int64 v33; // x8
  __int64 v34; // x20
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x3
  System_Collections_IEnumerator_o *v40; // x19
  System_Collections_IEnumerator_c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  __int64 v45; // x3
  System_Collections_IEnumerator_c *v46; // x8
  unsigned __int64 v47; // x10
  System_Collections_IEnumerator_c **v48; // x11
  __int64 v49; // x0
  UnityEngine_Component_o *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x9
  UnityEngine_Object_o *v53; // x20
  int v54; // w22
  __int64 v55; // x0
  __int64 v56; // x3
  __int64 v57; // x8
  __int64 v58; // x19
  unsigned __int64 v59; // x10
  int *v60; // x11
  __int64 v61; // x0
  int v62[2]; // [xsp+0h] [xbp-50h]
  int v63; // [xsp+8h] [xbp-48h]

  if ( (byte_42E9201 & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Transform_TypeInfo, v11, v12, v13);
    byte_42E9201 = 1;
  }
  v63 = 0;
  baseInfo = this->fields.baseInfo;
  if ( !baseInfo )
    goto LABEL_73;
  baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0LL);
  if ( !baseInfo )
    goto LABEL_73;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0LL);
  if ( !Enumerator )
    sub_B5D69C(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = (System_Collections_IEnumerator_c **)&v23->_1.interfaceOffsets->offset;
      while ( *(v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        v25 += 2;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v26 = (__int64)&v23->vtable[*(_DWORD *)v25 + 1].method;
    }
    else
    {
LABEL_17:
      v26 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v22);
    }
    v27 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v26)(
                                       Enumerator,
                                       *(_QWORD *)(v26 + 8));
    if ( !v27 )
      goto LABEL_71;
    v29 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v29
      || (UnityEngine_Transform_c *)v27->klass->_2.typeHierarchy[v29 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v50 = (UnityEngine_Component_o *)sub_B5D990(v27);
LABEL_70:
      v27 = (UnityEngine_Component_o *)sub_B5D990(v50);
LABEL_71:
      sub_B5D69C(v27, v28);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v27, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  }
  v62[0] = 67;
  v63 = 1;
  v31 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
  if ( v31 )
  {
    v33 = *(_QWORD *)v31;
    v34 = v31;
    if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
    {
      v35 = 0LL;
      v36 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
          goto LABEL_31;
      }
      v37 = v33 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_31:
      v37 = sub_AF54C0(v31, System_IDisposable_TypeInfo, 0LL, v32);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v37)(v34, *(_QWORD *)(v37 + 8));
  }
  v63 = 0;
  baseInfo = this->fields.materialInfo;
  if ( !baseInfo || (baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0LL)) == 0LL )
LABEL_73:
    sub_B5D69C(baseInfo, method);
  v40 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0LL);
  if ( !v40 )
    sub_B5D69C(0LL, v38);
  while ( 1 )
  {
    v41 = v40->klass;
    if ( *(_WORD *)&v40->klass->_2.bitflags1 )
    {
      v42 = 0LL;
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v43 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)&v40->klass->_2.bitflags1 )
          goto LABEL_41;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_41:
      v44 = sub_AF54C0(v40, System_Collections_IEnumerator_TypeInfo, 0LL, v39);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v44)(v40, *(_QWORD *)(v44 + 8)) & 1) == 0 )
      break;
    v46 = v40->klass;
    if ( *(_WORD *)&v40->klass->_2.bitflags1 )
    {
      v47 = 0LL;
      v48 = (System_Collections_IEnumerator_c **)&v46->_1.interfaceOffsets->offset;
      while ( *(v48 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v47;
        v48 += 2;
        if ( v47 >= *(unsigned __int16 *)&v40->klass->_2.bitflags1 )
          goto LABEL_48;
      }
      v49 = (__int64)&v46->vtable[*(_DWORD *)v48 + 1].method;
    }
    else
    {
LABEL_48:
      v49 = sub_AF54C0(v40, System_Collections_IEnumerator_TypeInfo, 1LL, v45);
    }
    v50 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v49)(
                                       v40,
                                       *(_QWORD *)(v49 + 8));
    if ( !v50 )
      sub_B5D69C(0LL, v51);
    v52 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v50->klass->_2.bitflags2 + 1) < (unsigned int)v52
      || (UnityEngine_Transform_c *)v50->klass->_2.typeHierarchy[v52 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_70;
    }
    v53 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v50, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v53, 0LL);
  }
  v62[0] = 134;
  v54 = ++v63;
  v55 = sub_B5D684(v40, System_IDisposable_TypeInfo);
  if ( v55 )
  {
    v57 = *(_QWORD *)v55;
    v58 = v55;
    if ( *(_WORD *)(*(_QWORD *)v55 + 298LL) )
    {
      v59 = 0LL;
      v60 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
      {
        ++v59;
        v60 += 4;
        if ( v59 >= *(unsigned __int16 *)(*(_QWORD *)v55 + 298LL) )
          goto LABEL_62;
      }
      v61 = v57 + 16LL * *v60 + 312;
    }
    else
    {
LABEL_62:
      v61 = sub_AF54C0(v55, System_IDisposable_TypeInfo, 0LL, v56);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v61)(v58, *(_QWORD *)(v61 + 8));
  }
  if ( v54 && v62[v54 - 1] == 134 )
    v63 = v54 - 1;
}


void __fastcall NpUpConfirmComponent__SetDefaultLayout(
        NpUpConfirmComponent_o *this,
        SetLevelUpData_o *updata,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Transform_o *transform; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x3
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x3
  System_Collections_IEnumerator_c *v22; // x8
  unsigned __int64 v23; // x10
  System_Collections_IEnumerator_c **v24; // x11
  __int64 v25; // x0
  UnityEngine_Component_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  __int64 v31; // x3
  UnityEngine_Transform_c *v32; // x8
  UnityEngine_Transform_o *v33; // x21
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0

  if ( (byte_42E9202 & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)updata, (_DWORD)method, v3);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Transform_TypeInfo, v9, v10, v11);
    byte_42E9202 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_38;
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_B5D69C(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v15);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = (System_Collections_IEnumerator_c **)&v22->_1.interfaceOffsets->offset;
      while ( *(v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        v24 += 2;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*(_DWORD *)v24 + 1].method;
    }
    else
    {
LABEL_16:
      v25 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v21);
    }
    v26 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v25)(
                                       Enumerator,
                                       *(_QWORD *)(v25 + 8));
    if ( !v26 )
      goto LABEL_36;
    v28 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v28
      || (UnityEngine_Transform_c *)v26->klass->_2.typeHierarchy[v28 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v26 = (UnityEngine_Component_o *)sub_B5D990(v26);
LABEL_36:
      sub_B5D69C(v26, v27);
    }
    gameObject = UnityEngine_Component__get_gameObject(v26, 0LL);
    if ( !gameObject )
      sub_B5D69C(0LL, v30);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  transform = (UnityEngine_Transform_o *)sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
  if ( transform )
  {
    v32 = transform->klass;
    v33 = transform;
    if ( *(_WORD *)&transform->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      v35 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)&transform->klass->_2.bitflags1 )
          goto LABEL_28;
      }
      v36 = (__int64)(&v32->vtable._0_Equals.method + 2 * *v35);
    }
    else
    {
LABEL_28:
      v36 = sub_AF54C0(transform, System_IDisposable_TypeInfo, 0LL, v31);
    }
    transform = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))v36)(
                                             v33,
                                             *(_QWORD *)(v36 + 8));
  }
  if ( !updata
    || (transform = (UnityEngine_Transform_o *)this->fields.upTargetRoot) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, !updata->fields.isNpAdd, 0LL),
        (transform = (UnityEngine_Transform_o *)this->fields.upTargetAddRoot) == 0LL) )
  {
LABEL_38:
    sub_B5D69C(transform, v13);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, updata->fields.isNpAdd, 0LL);
}


void __fastcall NpUpConfirmComponent__SetDefaultTitleLb(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  titleLb = this->fields.titleLb;
  if ( !titleLb || (UILabel__set_fontSize(titleLb, 22, 0LL), (titleLb = this->fields.titleLb) == 0LL) )
    sub_B5D69C(titleLb, method);
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
    sub_B5D69C(materialSvtBg, *(_QWORD *)&width);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  UILabel_o *upTargetAddLabel; // x22
  __int64 upTargetRubyLb; // x0
  __int64 v82; // x1
  const MethodInfo *v83; // x3
  UIExtrusionLabel_o *currentLvLb; // x22
  UIExtrusionLabel_o *resLvLb; // x22
  const MethodInfo *v86; // x1
  UnityEngine_GameObject_o *svtFaceInfo; // x22
  UnityEngine_Transform_o *transform; // x0
  __int128 v89; // q1
  NpMaterialSvtInfo_o *v90; // x22
  UserServantEntity_o *v91; // x2
  const MethodInfo *v92; // x5
  UILabel_o *baseTxt; // x22
  signed __int64 size; // x8
  int v95; // w21
  unsigned __int64 v96; // x20
  UnityEngine_GameObject_o *v97; // x26
  int64_t v98; // x22
  UnityEngine_Transform_o *v99; // x0
  UnityEngine_GameObject_o *v100; // x28
  NpMaterialSvtInfo_o *Component_srcLineSprite; // x26
  UnityEngine_Transform_o *v102; // x27
  float y; // s8
  int v104; // s2
  float v105; // s0
  float v106; // s1
  UserServantEntity_o *v107; // x2
  const MethodInfo *v108; // x5
  UnityEngine_GameObject_o *gameObject; // x27
  const MethodInfo *v110; // x1
  UILabel_o *exceededTxt; // x22
  UILabel_o *mtTxt; // x22
  UnityEngine_Component_o *materialSvtBg; // x22
  UnityEngine_GameObject_o *v114; // x28
  UnityEngine_GameObject_o *v115; // x27
  UnityEngine_GameObject_o *v116; // x26
  UnityEngine_GameObject_o *v117; // x0
  const MethodInfo *v118; // x2
  int v119; // w8
  UnityEngine_GameObject_o *v120; // x25
  UnityEngine_GameObject_o *v121; // x0
  int v122; // s0
  UnityEngine_GameObject_o *v123; // x0
  UnityEngine_GameObject_o *v124; // x0
  UnityEngine_GameObject_o *v125; // x0
  UILabel_o *upSpendQpTxtLb; // x22
  UILabel_o *upHaveQpTxtLb; // x22
  UILabel_o *upSpendQpLb; // x22
  System_String_o *v129; // x25
  Il2CppObject *v130; // x0
  UILabel_o *upHaveQpLb; // x22
  System_String_o *v132; // x25
  Il2CppObject *v133; // x0
  struct UILabel_o *v134; // x21
  System_String_o *v135; // x22
  System_String_o *v136; // x0
  System_String_o *v137; // x0
  const MethodInfo *v138; // x2
  UnityEngine_GameObject_o *v139; // x0
  UnityEngine_GameObject_o *v140; // x0
  float v141; // s0
  UILabel_o *upConfirmReConfirmMsgLb; // x22
  UnityEngine_GameObject_o *v143; // x0
  __int64 v144; // x1
  __int64 v145; // x3
  System_Collections_IEnumerator_o *Enumerator; // x24
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v148; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v151; // x3
  System_Collections_IEnumerator_c *v152; // x8
  unsigned __int64 v153; // x10
  System_Collections_IEnumerator_c **v154; // x11
  __int64 v155; // x0
  __int64 v156; // x0
  UnityEngine_Transform_c *v157; // x1
  UnityEngine_Object_o *v158; // x22
  __int64 v159; // x9
  UnityEngine_Component_o *v160; // x0
  UnityEngine_Object_o *v161; // x25
  __int64 v162; // x1
  UnityEngine_Component_o *titleLb; // x0
  UnityEngine_Object_o *v164; // x25
  _BOOL8 v165; // x0
  __int64 v166; // x1
  UnityEngine_GameObject_o *v167; // x0
  __int64 v168; // x1
  __int64 v169; // x3
  __int64 v170; // x8
  __int64 v171; // x24
  unsigned __int64 v172; // x10
  int *v173; // x11
  __int64 v174; // x0
  struct UILabel_o *upConfirmMsgLb; // x21
  System_String_o *mText; // x22
  System_String_o *v177; // x0
  System_String_o *v178; // x0
  struct UILabel_o *v179; // x21
  System_String_o *v180; // x22
  System_String_o *v181; // x0
  System_String_o *v182; // x0
  const MethodInfo *v183; // x2
  UnityEngine_GameObject_o *v184; // x0
  SetLevelUpData_o *v185; // [xsp+8h] [xbp-B8h]
  int32_t haveQp; // [xsp+1Ch] [xbp-A4h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v190; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v191; // [xsp+40h] [xbp-80h] BYREF
  __int64 v192; // [xsp+68h] [xbp-58h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9200 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___,
      (_DWORD)baseData,
      (_DWORD)selectUsrSvtIdList,
      updata);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&int_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Item__, v26, v27, v28);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&UnityEngine_Transform_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_9366/*"NEED_QP"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_9468/*"NPUP_EXCEEDED"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_3234/*"COMBINE_HAVE_QP"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_3259/*"COMBINE_NPUP_MATERIAL"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_3379/*"CONFIRM_COMBINE_MSG"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_9469/*"NPUP_RECONFIRM_TXT"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_9467/*"NPUP_CONFIRM_WARNING_TXT"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_3258/*"COMBINE_NPUP_BASE"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_3266/*"COMBINE_SPEND_QP"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_9466/*"NPUP_CONFIRM_TXT"*/, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_1/*""*/, v74, v75, v76);
    sub_B5D5C4(&StringLiteral_3260/*"COMBINE_NP_ADD_TITLE"*/, v77, v78, v79);
    byte_42E9200 = 1;
  }
  HIDWORD(v192) = 0;
  upTargetAddLabel = this->fields.upTargetAddLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMBINE_NP_ADD_TITLE"*/, 0LL);
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
    v83);
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
  NpUpConfirmComponent__SetDefaultTitleLb(this, v86);
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
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
  if ( !baseData )
    goto LABEL_143;
  v89 = *(_OWORD *)&baseData->fields.id.fields.fakeValue;
  v90 = (NpMaterialSvtInfo_o *)upTargetRubyLb;
  *(_OWORD *)&v191.fields.currentCryptoKey = *(_OWORD *)&baseData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v191.fields.fakeValue = v89;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v190 = v191;
  upTargetRubyLb = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v190, 0LL);
  if ( !v90 )
    goto LABEL_143;
  NpMaterialSvtInfo__setMaterialSvtInfo(v90, 0, v91, upTargetRubyLb, 0LL, v92);
  baseTxt = this->fields.baseTxt;
  upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3258/*"COMBINE_NPUP_BASE"*/, 0LL);
  if ( !baseTxt )
    goto LABEL_143;
  v185 = updata;
  UILabel__set_text(baseTxt, (System_String_o *)upTargetRubyLb, 0LL);
  if ( !selectUsrSvtIdList )
    goto LABEL_143;
  LODWORD(size) = selectUsrSvtIdList->fields._size;
  if ( (int)size >= 1 )
  {
    v95 = 0;
    v96 = 0LL;
    do
    {
      if ( v96 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      upTargetRubyLb = (__int64)this->fields.materialInfo;
      if ( !upTargetRubyLb )
        goto LABEL_143;
      v97 = this->fields.svtFaceInfo;
      v98 = selectUsrSvtIdList->fields._items->m_Items[v96];
      v99 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)upTargetRubyLb, 0LL);
      upTargetRubyLb = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v97, v99, 0LL, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_143;
      v100 = (UnityEngine_GameObject_o *)upTargetRubyLb;
      Component_srcLineSprite = (NpMaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)upTargetRubyLb,
                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
      v102 = UnityEngine_GameObject__get_transform(v100, 0LL);
      upTargetRubyLb = (__int64)UnityEngine_GameObject__get_transform(v100, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_143;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
      y = localPosition.fields.y;
      upTargetRubyLb = (__int64)UnityEngine_GameObject__get_transform(v100, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_143;
      *(UnityEngine_Vector3_o *)(&v104 - 2) = UnityEngine_Transform__get_localPosition(
                                                (UnityEngine_Transform_o *)upTargetRubyLb,
                                                0LL);
      if ( !v102 )
        goto LABEL_143;
      v105 = (float)v95;
      v106 = y;
      UnityEngine_Transform__set_localPosition(v102, *(UnityEngine_Vector3_o *)(&v104 - 2), 0LL);
      if ( !Component_srcLineSprite )
        goto LABEL_143;
      NpMaterialSvtInfo__setMaterialSvtInfo(Component_srcLineSprite, 0, v107, v98, 0LL, v108);
      upTargetRubyLb = (__int64)Component_srcLineSprite->fields.exceededTxt;
      if ( !upTargetRubyLb )
        goto LABEL_143;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
      upTargetRubyLb = NpCombineControl__CheckConfirm(v98, v110);
      if ( !gameObject )
        goto LABEL_143;
      UnityEngine_GameObject__SetActive(gameObject, upTargetRubyLb & 1, 0LL);
      exceededTxt = Component_srcLineSprite->fields.exceededTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9468/*"NPUP_EXCEEDED"*/, 0LL);
      if ( !exceededTxt )
        goto LABEL_143;
      UILabel__set_text(exceededTxt, (System_String_o *)upTargetRubyLb, 0LL);
      size = selectUsrSvtIdList->fields._size;
      ++v96;
      v95 += 140;
    }
    while ( (__int64)v96 < size );
  }
  mtTxt = this->fields.mtTxt;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3259/*"COMBINE_NPUP_MATERIAL"*/, 0LL);
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
  v114 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.arrow, 0LL);
  if ( !this->fields.materialInfo )
    goto LABEL_143;
  v115 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (__int64)UnityEngine_GameObject__get_transform(this->fields.materialInfo, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_143;
  upTargetRubyLb = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_143;
  upTargetRubyLb = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
  if ( !this->fields.baseInfo )
    goto LABEL_143;
  v116 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (__int64)UnityEngine_GameObject__get_transform(this->fields.baseInfo, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_143;
  upTargetRubyLb = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_143;
  v117 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
  v119 = selectUsrSvtIdList->fields._size - 1;
  v120 = v117;
  switch ( v119 )
  {
    case 0:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 144, v118);
      if ( !materialSvtBg )
        goto LABEL_143;
      v121 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v121, 77.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v114, 77.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v115, -1.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v120, -100.0, 0LL);
      v122 = 19.0;
      break;
    case 1:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 244, v118);
      if ( !materialSvtBg )
        goto LABEL_143;
      v125 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v125, 127.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v114, 126.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v115, -51.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v120, -150.0, 0LL);
      v122 = -31.0;
      break;
    case 2:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 346, v118);
      if ( !materialSvtBg )
        goto LABEL_143;
      v123 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v123, 176.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v114, 173.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v115, -100.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v120, -200.0, 0LL);
      v122 = -1030094848;
      break;
    case 3:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 445, v118);
      if ( !materialSvtBg )
        goto LABEL_143;
      v124 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v124, 224.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v114, 223.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v115, -150.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v120, -250.0, 0LL);
      v122 = -1023541248;
      break;
    default:
      goto LABEL_60;
  }
  GameObjectExtensions__SetLocalPositionX(v116, *(float *)&v122, 0LL);
LABEL_60:
  upSpendQpTxtLb = this->fields.upSpendQpTxtLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3266/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !upSpendQpTxtLb )
    goto LABEL_143;
  UILabel__set_text(upSpendQpTxtLb, (System_String_o *)upTargetRubyLb, 0LL);
  upHaveQpTxtLb = this->fields.upHaveQpTxtLb;
  upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3234/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !upHaveQpTxtLb )
    goto LABEL_143;
  UILabel__set_text(upHaveQpTxtLb, (System_String_o *)upTargetRubyLb, 0LL);
  upSpendQpLb = this->fields.upSpendQpLb;
  v129 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  LODWORD(v191.fields.currentCryptoKey) = v185->fields.spendQp;
  v130 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v191);
  upTargetRubyLb = (__int64)System_String__Format(v129, v130, 0LL);
  if ( !upSpendQpLb )
    goto LABEL_143;
  UILabel__set_text(upSpendQpLb, (System_String_o *)upTargetRubyLb, 0LL);
  upHaveQpLb = this->fields.upHaveQpLb;
  v132 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  haveQp = v185->fields.haveQp;
  v133 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveQp);
  upTargetRubyLb = (__int64)System_String__Format(v132, v133, 0LL);
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
      upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9469/*"NPUP_RECONFIRM_TXT"*/, 0LL);
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
      v143 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
      GameObjectExtensions__SetLocalPositionY(v143, 184.0, 0LL);
      upTargetRubyLb = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_143;
      Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
      if ( !Enumerator )
        sub_B5D69C(0LL, v144);
      while ( 1 )
      {
        klass = Enumerator->klass;
        if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
        {
          v148 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v148;
            p_offset += 4;
            if ( v148 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
              goto LABEL_92;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_92:
          p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v145);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                Enumerator,
                *(_QWORD *)(p_method + 8)) & 1) == 0 )
          break;
        v152 = Enumerator->klass;
        if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
        {
          v153 = 0LL;
          v154 = (System_Collections_IEnumerator_c **)&v152->_1.interfaceOffsets->offset;
          while ( *(v154 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v153;
            v154 += 2;
            if ( v153 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
              goto LABEL_99;
          }
          v155 = (__int64)&v152->vtable[*(_DWORD *)v154 + 1].method;
        }
        else
        {
LABEL_99:
          v155 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v151);
        }
        v156 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v155)(
                 Enumerator,
                 *(_QWORD *)(v155 + 8));
        v158 = (UnityEngine_Object_o *)v156;
        if ( v156 )
        {
          v157 = UnityEngine_Transform_TypeInfo;
          v159 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)v156 + 300LL) < (unsigned int)v159
            || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v156 + 200LL) + 8 * v159 - 8) != UnityEngine_Transform_TypeInfo )
          {
            v160 = (UnityEngine_Component_o *)sub_B5D990(v156);
LABEL_145:
            sub_B5D69C(v160, v157);
          }
        }
        v160 = (UnityEngine_Component_o *)this->fields.upConfirmReConfirmMsgLb;
        if ( !v160 )
          goto LABEL_145;
        v161 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(v160, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v161, v158, 0LL) )
        {
          titleLb = (UnityEngine_Component_o *)this->fields.titleLb;
          if ( !titleLb )
            sub_B5D69C(0LL, v162);
          v164 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(titleLb, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v165 = UnityEngine_Object__op_Inequality(v164, v158, 0LL);
          if ( v165 )
          {
            if ( !v158 )
              sub_B5D69C(v165, v166);
            v167 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v158, 0LL);
            if ( !v167 )
              sub_B5D69C(0LL, v168);
            UnityEngine_GameObject__SetActive(v167, 0, 0LL);
          }
        }
      }
      v192 = 0x10000054FLL;
      upTargetRubyLb = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
      if ( upTargetRubyLb )
      {
        v170 = *(_QWORD *)upTargetRubyLb;
        v171 = upTargetRubyLb;
        if ( *(_WORD *)(*(_QWORD *)upTargetRubyLb + 298LL) )
        {
          v172 = 0LL;
          v173 = (int *)(*(_QWORD *)(v170 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v173 - 1) != System_IDisposable_TypeInfo )
          {
            ++v172;
            v173 += 4;
            if ( v172 >= *(unsigned __int16 *)(*(_QWORD *)upTargetRubyLb + 298LL) )
              goto LABEL_122;
          }
          v174 = v170 + 16LL * *v173 + 312;
        }
        else
        {
LABEL_122:
          v174 = sub_AF54C0(upTargetRubyLb, System_IDisposable_TypeInfo, 0LL, v169);
        }
        upTargetRubyLb = (*(__int64 (__fastcall **)(__int64, _QWORD))v174)(v171, *(_QWORD *)(v174 + 8));
      }
      if ( (_DWORD)v192 == 1359 )
      {
        v192 = 1359LL;
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
      v177 = LocalizationManager__Get((System_String_o *)StringLiteral_9467/*"NPUP_CONFIRM_WARNING_TXT"*/, 0LL);
      v178 = System_String__Concat_44577788(mText, v177, 0LL);
      UILabel__set_text(upConfirmMsgLb, v178, 0LL);
    }
    v179 = this->fields.upConfirmMsgLb;
    if ( !v179 )
      goto LABEL_143;
    v180 = v179->fields.mText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v181 = LocalizationManager__Get((System_String_o *)StringLiteral_9466/*"NPUP_CONFIRM_TXT"*/, 0LL);
    v182 = System_String__Concat_44580072(v180, (System_String_o *)StringLiteral_26/*"\n"*/, v181, 0LL);
    UILabel__set_text(v179, v182, 0LL);
    NpUpConfirmComponent__SetDefaultLayout(this, v185, v183);
    upTargetRubyLb = (__int64)this->fields.upConfirmMsgLb;
    if ( !upTargetRubyLb
      || (v184 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL),
          GameObjectExtensions__SetLocalPositionY(v184, -134.0, 0LL),
          (upTargetRubyLb = (__int64)this->fields.upConfirmMsgLb) == 0) )
    {
LABEL_143:
      sub_B5D69C(upTargetRubyLb, v82);
    }
    v140 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
    v141 = 5.0;
  }
  else
  {
    v134 = this->fields.upConfirmMsgLb;
    if ( !v134 )
      goto LABEL_143;
    v135 = v134->fields.mText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v136 = LocalizationManager__Get((System_String_o *)StringLiteral_3379/*"CONFIRM_COMBINE_MSG"*/, 0LL);
    v137 = System_String__Concat_44577788(v135, v136, 0LL);
    UILabel__set_text(v134, v137, 0LL);
    NpUpConfirmComponent__SetDefaultLayout(this, v185, v138);
    upTargetRubyLb = (__int64)this->fields.upConfirmMsgLb;
    if ( !upTargetRubyLb )
      goto LABEL_143;
    v139 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
    GameObjectExtensions__SetLocalPositionY(v139, -133.0, 0LL);
    upTargetRubyLb = (__int64)this->fields.upConfirmMsgLb;
    if ( !upTargetRubyLb )
      goto LABEL_143;
    v140 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
    v141 = 2.0;
  }
  GameObjectExtensions__SetLocalPositionX(v140, v141, 0LL);
}