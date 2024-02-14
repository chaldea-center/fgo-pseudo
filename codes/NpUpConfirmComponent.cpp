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
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v12; // x8
  unsigned __int64 v13; // x10
  System_Collections_IEnumerator_c **v14; // x11
  __int64 v15; // x0
  UnityEngine_Component_o *v16; // x0
  __int64 v17; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x20
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  System_Collections_IEnumerator_o *v25; // x19
  System_Collections_IEnumerator_c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  System_Collections_IEnumerator_c *v30; // x8
  unsigned __int64 v31; // x10
  System_Collections_IEnumerator_c **v32; // x11
  __int64 v33; // x0
  UnityEngine_Component_o *v34; // x0
  __int64 v35; // x9
  UnityEngine_Object_o *v36; // x20
  int v37; // w22
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x19
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  int v44[2]; // [xsp+0h] [xbp-50h]
  int v45; // [xsp+8h] [xbp-48h]

  if ( (byte_4215078 & 1) == 0 )
  {
    sub_B0D8A4(&System_IDisposable_TypeInfo, method);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_Transform_TypeInfo, v5);
    byte_4215078 = 1;
  }
  v45 = 0;
  baseInfo = this->fields.baseInfo;
  if ( !baseInfo )
    goto LABEL_73;
  baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0LL);
  if ( !baseInfo )
    goto LABEL_73;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0LL);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        v14 += 2;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1].method;
    }
    else
    {
LABEL_17:
      v15 = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( !v16 )
      goto LABEL_71;
    v17 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[v17 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v34 = (UnityEngine_Component_o *)sub_B0DC70(v16);
LABEL_70:
      v16 = (UnityEngine_Component_o *)sub_B0DC70(v34);
LABEL_71:
      sub_B0D97C(v16);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
  }
  v44[0] = 67;
  v45 = 1;
  v19 = sub_B0D964(Enumerator, System_IDisposable_TypeInfo);
  if ( v19 )
  {
    v20 = *(_QWORD *)v19;
    v21 = v19;
    if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
    {
      v22 = 0LL;
      v23 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
          goto LABEL_31;
      }
      v24 = v20 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_31:
      v24 = sub_AA67A0(v19, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
  }
  v45 = 0;
  baseInfo = this->fields.materialInfo;
  if ( !baseInfo || (baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0LL)) == 0LL )
LABEL_73:
    sub_B0D97C(baseInfo);
  v25 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0LL);
  if ( !v25 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v26 = v25->klass;
    if ( *(_WORD *)&v25->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
          goto LABEL_41;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_41:
      v29 = sub_AA67A0(v25, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
      break;
    v30 = v25->klass;
    if ( *(_WORD *)&v25->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      v32 = (System_Collections_IEnumerator_c **)&v30->_1.interfaceOffsets->offset;
      while ( *(v32 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v31;
        v32 += 2;
        if ( v31 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
          goto LABEL_48;
      }
      v33 = (__int64)&v30->vtable[*(_DWORD *)v32 + 1].method;
    }
    else
    {
LABEL_48:
      v33 = sub_AA67A0(v25, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v34 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v33)(
                                       v25,
                                       *(_QWORD *)(v33 + 8));
    if ( !v34 )
      sub_B0D97C(0LL);
    v35 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v34->klass->_2.bitflags2 + 1) < (unsigned int)v35
      || (UnityEngine_Transform_c *)v34->klass->_2.typeHierarchy[v35 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_70;
    }
    v36 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v34, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v36, 0LL);
  }
  v44[0] = 134;
  v37 = ++v45;
  v38 = sub_B0D964(v25, System_IDisposable_TypeInfo);
  if ( v38 )
  {
    v39 = *(_QWORD *)v38;
    v40 = v38;
    if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
    {
      v41 = 0LL;
      v42 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
      {
        ++v41;
        v42 += 4;
        if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
          goto LABEL_62;
      }
      v43 = v39 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_62:
      v43 = sub_AA67A0(v38, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v43)(v40, *(_QWORD *)(v43 + 8));
  }
  if ( v37 && v44[v37 - 1] == 134 )
    v45 = v37 - 1;
}


void __fastcall NpUpConfirmComponent__SetDefaultLayout(
        NpUpConfirmComponent_o *this,
        SetLevelUpData_o *updata,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x0
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v13; // x8
  unsigned __int64 v14; // x10
  System_Collections_IEnumerator_c **v15; // x11
  __int64 v16; // x0
  UnityEngine_Component_o *v17; // x0
  __int64 v18; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_c *v20; // x8
  UnityEngine_Transform_o *v21; // x21
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0

  if ( (byte_4215079 & 1) == 0 )
  {
    sub_B0D8A4(&System_IDisposable_TypeInfo, updata);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Transform_TypeInfo, v6);
    byte_4215079 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_38;
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        v15 += 2;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1].method;
    }
    else
    {
LABEL_16:
      v16 = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v17 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_36;
    v18 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[v18 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v17 = (UnityEngine_Component_o *)sub_B0DC70(v17);
LABEL_36:
      sub_B0D97C(v17);
    }
    gameObject = UnityEngine_Component__get_gameObject(v17, 0LL);
    if ( !gameObject )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  transform = (UnityEngine_Transform_o *)sub_B0D964(Enumerator, System_IDisposable_TypeInfo);
  if ( transform )
  {
    v20 = transform->klass;
    v21 = transform;
    if ( *(_WORD *)&transform->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&transform->klass->_2.bitflags1 )
          goto LABEL_28;
      }
      v24 = (__int64)(&v20->vtable._0_Equals.method + 2 * *v23);
    }
    else
    {
LABEL_28:
      v24 = sub_AA67A0(transform, System_IDisposable_TypeInfo, 0LL);
    }
    transform = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))v24)(
                                             v21,
                                             *(_QWORD *)(v24 + 8));
  }
  if ( !updata
    || (transform = (UnityEngine_Transform_o *)this->fields.upTargetRoot) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, !updata->fields.isNpAdd, 0LL),
        (transform = (UnityEngine_Transform_o *)this->fields.upTargetAddRoot) == 0LL) )
  {
LABEL_38:
    sub_B0D97C(transform);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, updata->fields.isNpAdd, 0LL);
}


void __fastcall NpUpConfirmComponent__SetDefaultTitleLb(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  titleLb = this->fields.titleLb;
  if ( !titleLb || (UILabel__set_fontSize(titleLb, 22, 0LL), (titleLb = this->fields.titleLb) == 0LL) )
    sub_B0D97C(titleLb);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLb, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, 206.0, 0LL);
}


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
    sub_B0D97C(materialSvtBg);
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
  const MethodInfo *v38; // x3
  UIExtrusionLabel_o *currentLvLb; // x22
  UIExtrusionLabel_o *resLvLb; // x22
  const MethodInfo *v41; // x1
  UnityEngine_GameObject_o *svtFaceInfo; // x22
  UnityEngine_Transform_o *transform; // x0
  __int128 v44; // q1
  NpMaterialSvtInfo_o *v45; // x22
  UserServantEntity_o *v46; // x2
  const MethodInfo *v47; // x5
  UILabel_o *baseTxt; // x22
  signed __int64 size; // x8
  int v50; // w21
  unsigned __int64 v51; // x20
  UnityEngine_GameObject_o *v52; // x26
  int64_t v53; // x22
  UnityEngine_Transform_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x28
  NpMaterialSvtInfo_o *Component_srcLineSprite; // x26
  UnityEngine_Transform_o *v57; // x27
  float y; // s8
  int v59; // s2
  float v60; // s0
  float v61; // s1
  UserServantEntity_o *v62; // x2
  const MethodInfo *v63; // x5
  UnityEngine_GameObject_o *gameObject; // x27
  const MethodInfo *v65; // x1
  UILabel_o *exceededTxt; // x22
  UILabel_o *mtTxt; // x22
  UnityEngine_Component_o *materialSvtBg; // x22
  UnityEngine_GameObject_o *v69; // x28
  UnityEngine_GameObject_o *v70; // x27
  UnityEngine_GameObject_o *v71; // x26
  UnityEngine_GameObject_o *v72; // x0
  const MethodInfo *v73; // x2
  int v74; // w8
  UnityEngine_GameObject_o *v75; // x25
  UnityEngine_GameObject_o *v76; // x0
  int v77; // s0
  UnityEngine_GameObject_o *v78; // x0
  UnityEngine_GameObject_o *v79; // x0
  UnityEngine_GameObject_o *v80; // x0
  UILabel_o *upSpendQpTxtLb; // x22
  UILabel_o *upHaveQpTxtLb; // x22
  UILabel_o *upSpendQpLb; // x22
  System_String_o *v84; // x25
  Il2CppObject *v85; // x0
  UILabel_o *upHaveQpLb; // x22
  System_String_o *v87; // x25
  Il2CppObject *v88; // x0
  struct UILabel_o *v89; // x21
  System_String_o *v90; // x22
  System_String_o *v91; // x0
  System_String_o *v92; // x0
  const MethodInfo *v93; // x2
  UnityEngine_GameObject_o *v94; // x0
  UnityEngine_GameObject_o *v95; // x0
  float v96; // s0
  UILabel_o *upConfirmReConfirmMsgLb; // x22
  UnityEngine_GameObject_o *v98; // x0
  System_Collections_IEnumerator_o *Enumerator; // x24
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v101; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v104; // x8
  unsigned __int64 v105; // x10
  System_Collections_IEnumerator_c **v106; // x11
  __int64 v107; // x0
  __int64 v108; // x0
  UnityEngine_Object_o *v109; // x22
  __int64 v110; // x9
  UnityEngine_Component_o *v111; // x0
  UnityEngine_Object_o *v112; // x25
  UnityEngine_Component_o *titleLb; // x0
  UnityEngine_Object_o *v114; // x25
  _BOOL8 v115; // x0
  UnityEngine_GameObject_o *v116; // x0
  __int64 v117; // x8
  __int64 v118; // x24
  unsigned __int64 v119; // x10
  int *v120; // x11
  __int64 v121; // x0
  struct UILabel_o *upConfirmMsgLb; // x21
  System_String_o *mText; // x22
  System_String_o *v124; // x0
  System_String_o *v125; // x0
  struct UILabel_o *v126; // x21
  System_String_o *v127; // x22
  System_String_o *v128; // x0
  System_String_o *v129; // x0
  const MethodInfo *v130; // x2
  UnityEngine_GameObject_o *v131; // x0
  SetLevelUpData_o *v132; // [xsp+8h] [xbp-B8h]
  int32_t haveQp; // [xsp+1Ch] [xbp-A4h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v137; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v138; // [xsp+40h] [xbp-80h] BYREF
  __int64 v139; // [xsp+68h] [xbp-58h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4215077 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___, baseData);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v14);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_B0D8A4(&int_TypeInfo, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Item__, v18);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v19);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v20);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_B0D8A4(&UnityEngine_Transform_TypeInfo, v22);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v23);
    sub_B0D8A4(&StringLiteral_9294/*"NEED_QP"*/, v24);
    sub_B0D8A4(&StringLiteral_9395/*"NPUP_EXCEEDED"*/, v25);
    sub_B0D8A4(&StringLiteral_3181/*"COMBINE_HAVE_QP"*/, v26);
    sub_B0D8A4(&StringLiteral_3206/*"COMBINE_NPUP_MATERIAL"*/, v27);
    sub_B0D8A4(&StringLiteral_3326/*"CONFIRM_COMBINE_MSG"*/, v28);
    sub_B0D8A4(&StringLiteral_9396/*"NPUP_RECONFIRM_TXT"*/, v29);
    sub_B0D8A4(&StringLiteral_9394/*"NPUP_CONFIRM_WARNING_TXT"*/, v30);
    sub_B0D8A4(&StringLiteral_3205/*"COMBINE_NPUP_BASE"*/, v31);
    sub_B0D8A4(&StringLiteral_3213/*"COMBINE_SPEND_QP"*/, v32);
    sub_B0D8A4(&StringLiteral_9393/*"NPUP_CONFIRM_TXT"*/, v33);
    sub_B0D8A4(&StringLiteral_1/*""*/, v34);
    sub_B0D8A4(&StringLiteral_3207/*"COMBINE_NP_ADD_TITLE"*/, v35);
    byte_4215077 = 1;
  }
  HIDWORD(v139) = 0;
  upTargetAddLabel = this->fields.upTargetAddLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3207/*"COMBINE_NP_ADD_TITLE"*/, 0LL);
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
    v38);
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
  NpUpConfirmComponent__SetDefaultTitleLb(this, v41);
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
                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
  if ( !baseData )
    goto LABEL_143;
  v44 = *(_OWORD *)&baseData->fields.id.fields.fakeValue;
  v45 = (NpMaterialSvtInfo_o *)upTargetRubyLb;
  *(_OWORD *)&v138.fields.currentCryptoKey = *(_OWORD *)&baseData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v138.fields.fakeValue = v44;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v137 = v138;
  upTargetRubyLb = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v137, 0LL);
  if ( !v45 )
    goto LABEL_143;
  NpMaterialSvtInfo__setMaterialSvtInfo(v45, 0, v46, upTargetRubyLb, 0LL, v47);
  baseTxt = this->fields.baseTxt;
  upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3205/*"COMBINE_NPUP_BASE"*/, 0LL);
  if ( !baseTxt )
    goto LABEL_143;
  v132 = updata;
  UILabel__set_text(baseTxt, (System_String_o *)upTargetRubyLb, 0LL);
  if ( !selectUsrSvtIdList )
    goto LABEL_143;
  LODWORD(size) = selectUsrSvtIdList->fields._size;
  if ( (int)size >= 1 )
  {
    v50 = 0;
    v51 = 0LL;
    do
    {
      if ( v51 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      upTargetRubyLb = (__int64)this->fields.materialInfo;
      if ( !upTargetRubyLb )
        goto LABEL_143;
      v52 = this->fields.svtFaceInfo;
      v53 = selectUsrSvtIdList->fields._items->m_Items[v51];
      v54 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)upTargetRubyLb, 0LL);
      upTargetRubyLb = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v52, v54, 0LL, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_143;
      v55 = (UnityEngine_GameObject_o *)upTargetRubyLb;
      Component_srcLineSprite = (NpMaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)upTargetRubyLb,
                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
      v57 = UnityEngine_GameObject__get_transform(v55, 0LL);
      upTargetRubyLb = (__int64)UnityEngine_GameObject__get_transform(v55, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_143;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
      y = localPosition.fields.y;
      upTargetRubyLb = (__int64)UnityEngine_GameObject__get_transform(v55, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_143;
      *(UnityEngine_Vector3_o *)(&v59 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)upTargetRubyLb,
                                               0LL);
      if ( !v57 )
        goto LABEL_143;
      v60 = (float)v50;
      v61 = y;
      UnityEngine_Transform__set_localPosition(v57, *(UnityEngine_Vector3_o *)(&v59 - 2), 0LL);
      if ( !Component_srcLineSprite )
        goto LABEL_143;
      NpMaterialSvtInfo__setMaterialSvtInfo(Component_srcLineSprite, 0, v62, v53, 0LL, v63);
      upTargetRubyLb = (__int64)Component_srcLineSprite->fields.exceededTxt;
      if ( !upTargetRubyLb )
        goto LABEL_143;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
      upTargetRubyLb = NpCombineControl__CheckConfirm(v53, v65);
      if ( !gameObject )
        goto LABEL_143;
      UnityEngine_GameObject__SetActive(gameObject, upTargetRubyLb & 1, 0LL);
      exceededTxt = Component_srcLineSprite->fields.exceededTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9395/*"NPUP_EXCEEDED"*/, 0LL);
      if ( !exceededTxt )
        goto LABEL_143;
      UILabel__set_text(exceededTxt, (System_String_o *)upTargetRubyLb, 0LL);
      size = selectUsrSvtIdList->fields._size;
      ++v51;
      v50 += 140;
    }
    while ( (__int64)v51 < size );
  }
  mtTxt = this->fields.mtTxt;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3206/*"COMBINE_NPUP_MATERIAL"*/, 0LL);
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
  v69 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.arrow, 0LL);
  if ( !this->fields.materialInfo )
    goto LABEL_143;
  v70 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (__int64)UnityEngine_GameObject__get_transform(this->fields.materialInfo, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_143;
  upTargetRubyLb = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_143;
  upTargetRubyLb = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
  if ( !this->fields.baseInfo )
    goto LABEL_143;
  v71 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (__int64)UnityEngine_GameObject__get_transform(this->fields.baseInfo, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_143;
  upTargetRubyLb = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_143;
  v72 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
  v74 = selectUsrSvtIdList->fields._size - 1;
  v75 = v72;
  switch ( v74 )
  {
    case 0:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 144, v73);
      if ( !materialSvtBg )
        goto LABEL_143;
      v76 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v76, 77.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v69, 77.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v70, -1.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v75, -100.0, 0LL);
      v77 = 19.0;
      break;
    case 1:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 244, v73);
      if ( !materialSvtBg )
        goto LABEL_143;
      v80 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v80, 127.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v69, 126.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v70, -51.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v75, -150.0, 0LL);
      v77 = -31.0;
      break;
    case 2:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 346, v73);
      if ( !materialSvtBg )
        goto LABEL_143;
      v78 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v78, 176.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v69, 173.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v70, -100.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v75, -200.0, 0LL);
      v77 = -1030094848;
      break;
    case 3:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 445, v73);
      if ( !materialSvtBg )
        goto LABEL_143;
      v79 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v79, 224.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v69, 223.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v70, -150.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v75, -250.0, 0LL);
      v77 = -1023541248;
      break;
    default:
      goto LABEL_60;
  }
  GameObjectExtensions__SetLocalPositionX(v71, *(float *)&v77, 0LL);
LABEL_60:
  upSpendQpTxtLb = this->fields.upSpendQpTxtLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3213/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !upSpendQpTxtLb )
    goto LABEL_143;
  UILabel__set_text(upSpendQpTxtLb, (System_String_o *)upTargetRubyLb, 0LL);
  upHaveQpTxtLb = this->fields.upHaveQpTxtLb;
  upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3181/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !upHaveQpTxtLb )
    goto LABEL_143;
  UILabel__set_text(upHaveQpTxtLb, (System_String_o *)upTargetRubyLb, 0LL);
  upSpendQpLb = this->fields.upSpendQpLb;
  v84 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
  LODWORD(v138.fields.currentCryptoKey) = v132->fields.spendQp;
  v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v138);
  upTargetRubyLb = (__int64)System_String__Format(v84, v85, 0LL);
  if ( !upSpendQpLb )
    goto LABEL_143;
  UILabel__set_text(upSpendQpLb, (System_String_o *)upTargetRubyLb, 0LL);
  upHaveQpLb = this->fields.upHaveQpLb;
  v87 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
  haveQp = v132->fields.haveQp;
  v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveQp);
  upTargetRubyLb = (__int64)System_String__Format(v87, v88, 0LL);
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
      upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9396/*"NPUP_RECONFIRM_TXT"*/, 0LL);
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
      v98 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
      GameObjectExtensions__SetLocalPositionY(v98, 184.0, 0LL);
      upTargetRubyLb = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_143;
      Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
      if ( !Enumerator )
        sub_B0D97C(0LL);
      while ( 1 )
      {
        klass = Enumerator->klass;
        if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
        {
          v101 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v101;
            p_offset += 4;
            if ( v101 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
              goto LABEL_92;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_92:
          p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                Enumerator,
                *(_QWORD *)(p_method + 8)) & 1) == 0 )
          break;
        v104 = Enumerator->klass;
        if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
        {
          v105 = 0LL;
          v106 = (System_Collections_IEnumerator_c **)&v104->_1.interfaceOffsets->offset;
          while ( *(v106 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v105;
            v106 += 2;
            if ( v105 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
              goto LABEL_99;
          }
          v107 = (__int64)&v104->vtable[*(_DWORD *)v106 + 1].method;
        }
        else
        {
LABEL_99:
          v107 = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v108 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v107)(
                 Enumerator,
                 *(_QWORD *)(v107 + 8));
        v109 = (UnityEngine_Object_o *)v108;
        if ( v108 )
        {
          v110 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)v108 + 300LL) < (unsigned int)v110
            || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v108 + 200LL) + 8 * v110 - 8) != UnityEngine_Transform_TypeInfo )
          {
            v111 = (UnityEngine_Component_o *)sub_B0DC70(v108);
LABEL_145:
            sub_B0D97C(v111);
          }
        }
        v111 = (UnityEngine_Component_o *)this->fields.upConfirmReConfirmMsgLb;
        if ( !v111 )
          goto LABEL_145;
        v112 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(v111, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v112, v109, 0LL) )
        {
          titleLb = (UnityEngine_Component_o *)this->fields.titleLb;
          if ( !titleLb )
            sub_B0D97C(0LL);
          v114 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(titleLb, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v115 = UnityEngine_Object__op_Inequality(v114, v109, 0LL);
          if ( v115 )
          {
            if ( !v109 )
              sub_B0D97C(v115);
            v116 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v109, 0LL);
            if ( !v116 )
              sub_B0D97C(0LL);
            UnityEngine_GameObject__SetActive(v116, 0, 0LL);
          }
        }
      }
      v139 = 0x10000054FLL;
      upTargetRubyLb = sub_B0D964(Enumerator, System_IDisposable_TypeInfo);
      if ( upTargetRubyLb )
      {
        v117 = *(_QWORD *)upTargetRubyLb;
        v118 = upTargetRubyLb;
        if ( *(_WORD *)(*(_QWORD *)upTargetRubyLb + 298LL) )
        {
          v119 = 0LL;
          v120 = (int *)(*(_QWORD *)(v117 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v120 - 1) != System_IDisposable_TypeInfo )
          {
            ++v119;
            v120 += 4;
            if ( v119 >= *(unsigned __int16 *)(*(_QWORD *)upTargetRubyLb + 298LL) )
              goto LABEL_122;
          }
          v121 = v117 + 16LL * *v120 + 312;
        }
        else
        {
LABEL_122:
          v121 = sub_AA67A0(upTargetRubyLb, System_IDisposable_TypeInfo, 0LL);
        }
        upTargetRubyLb = (*(__int64 (__fastcall **)(__int64, _QWORD))v121)(v118, *(_QWORD *)(v121 + 8));
      }
      if ( (_DWORD)v139 == 1359 )
      {
        v139 = 1359LL;
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
      v124 = LocalizationManager__Get((System_String_o *)StringLiteral_9394/*"NPUP_CONFIRM_WARNING_TXT"*/, 0LL);
      v125 = System_String__Concat_43849904(mText, v124, 0LL);
      UILabel__set_text(upConfirmMsgLb, v125, 0LL);
    }
    v126 = this->fields.upConfirmMsgLb;
    if ( !v126 )
      goto LABEL_143;
    v127 = v126->fields.mText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v128 = LocalizationManager__Get((System_String_o *)StringLiteral_9393/*"NPUP_CONFIRM_TXT"*/, 0LL);
    v129 = System_String__Concat_43852188(v127, (System_String_o *)StringLiteral_26/*"\n"*/, v128, 0LL);
    UILabel__set_text(v126, v129, 0LL);
    NpUpConfirmComponent__SetDefaultLayout(this, v132, v130);
    upTargetRubyLb = (__int64)this->fields.upConfirmMsgLb;
    if ( !upTargetRubyLb
      || (v131 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL),
          GameObjectExtensions__SetLocalPositionY(v131, -134.0, 0LL),
          (upTargetRubyLb = (__int64)this->fields.upConfirmMsgLb) == 0) )
    {
LABEL_143:
      sub_B0D97C(upTargetRubyLb);
    }
    v95 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
    v96 = 5.0;
  }
  else
  {
    v89 = this->fields.upConfirmMsgLb;
    if ( !v89 )
      goto LABEL_143;
    v90 = v89->fields.mText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v91 = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"CONFIRM_COMBINE_MSG"*/, 0LL);
    v92 = System_String__Concat_43849904(v90, v91, 0LL);
    UILabel__set_text(v89, v92, 0LL);
    NpUpConfirmComponent__SetDefaultLayout(this, v132, v93);
    upTargetRubyLb = (__int64)this->fields.upConfirmMsgLb;
    if ( !upTargetRubyLb )
      goto LABEL_143;
    v94 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
    GameObjectExtensions__SetLocalPositionY(v94, -133.0, 0LL);
    upTargetRubyLb = (__int64)this->fields.upConfirmMsgLb;
    if ( !upTargetRubyLb )
      goto LABEL_143;
    v95 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
    v96 = 2.0;
  }
  GameObjectExtensions__SetLocalPositionX(v95, v96, 0LL);
}