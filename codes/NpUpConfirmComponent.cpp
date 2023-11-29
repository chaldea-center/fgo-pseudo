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
  UnityEngine_Transform_o *transform; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
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
  UnityEngine_Object_o *gameObject; // x21
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x20
  unsigned __int64 v23; // x10
  int *v24; // x11
  __int64 v25; // x0
  UnityEngine_GameObject_o *materialInfo; // x0
  UnityEngine_Transform_o *v27; // x0
  System_Collections_IEnumerator_o *v28; // x19
  System_Collections_IEnumerator_c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  System_Collections_IEnumerator_c *v33; // x8
  unsigned __int64 v34; // x10
  System_Collections_IEnumerator_c **v35; // x11
  __int64 v36; // x0
  UnityEngine_Component_o *v37; // x0
  __int64 v38; // x9
  UnityEngine_Object_o *v39; // x20
  int v40; // w22
  __int64 v41; // x0
  __int64 v42; // x8
  __int64 v43; // x19
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  int v47[2]; // [xsp+0h] [xbp-50h]
  int v48; // [xsp+8h] [xbp-48h]

  if ( (byte_40F93A5 & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, method);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Transform_TypeInfo, v5);
    byte_40F93A5 = 1;
  }
  v48 = 0;
  baseInfo = this->fields.baseInfo;
  if ( !baseInfo )
    goto LABEL_73;
  transform = UnityEngine_GameObject__get_transform(baseInfo, 0LL);
  if ( !transform )
    goto LABEL_73;
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_B170D4();
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
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1].method;
    }
    else
    {
LABEL_17:
      v16 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v17 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_71;
    v18 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[v18 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v37 = (UnityEngine_Component_o *)sub_B173C8(v17);
LABEL_70:
      sub_B173C8(v37);
LABEL_71:
      sub_B170D4();
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v17, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
  v47[0] = 67;
  v48 = 1;
  v20 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
  if ( v20 )
  {
    v21 = *(_QWORD *)v20;
    v22 = v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v23 = 0LL;
      v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_31;
      }
      v25 = v21 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_31:
      v25 = sub_AAFEF8(v20, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
  }
  v48 = 0;
  materialInfo = this->fields.materialInfo;
  if ( !materialInfo || (v27 = UnityEngine_GameObject__get_transform(materialInfo, 0LL)) == 0LL )
LABEL_73:
    sub_B170D4();
  v28 = UnityEngine_Transform__GetEnumerator(v27, 0LL);
  if ( !v28 )
    sub_B170D4();
  while ( 1 )
  {
    v29 = v28->klass;
    if ( *(_WORD *)&v28->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)&v28->klass->_2.bitflags1 )
          goto LABEL_41;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_41:
      v32 = sub_AAFEF8(v28, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8)) & 1) == 0 )
      break;
    v33 = v28->klass;
    if ( *(_WORD *)&v28->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      v35 = (System_Collections_IEnumerator_c **)&v33->_1.interfaceOffsets->offset;
      while ( *(v35 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v34;
        v35 += 2;
        if ( v34 >= *(unsigned __int16 *)&v28->klass->_2.bitflags1 )
          goto LABEL_48;
      }
      v36 = (__int64)&v33->vtable[*(_DWORD *)v35 + 1].method;
    }
    else
    {
LABEL_48:
      v36 = sub_AAFEF8(v28, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v37 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v36)(
                                       v28,
                                       *(_QWORD *)(v36 + 8));
    if ( !v37 )
      sub_B170D4();
    v38 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v37->klass->_2.bitflags2 + 1) < (unsigned int)v38
      || (UnityEngine_Transform_c *)v37->klass->_2.typeHierarchy[v38 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_70;
    }
    v39 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v37, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v39, 0LL);
  }
  v47[0] = 134;
  v40 = ++v48;
  v41 = sub_B170BC(v28, System_IDisposable_TypeInfo);
  if ( v41 )
  {
    v42 = *(_QWORD *)v41;
    v43 = v41;
    if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
    {
      v44 = 0LL;
      v45 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
      {
        ++v44;
        v45 += 4;
        if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
          goto LABEL_62;
      }
      v46 = v42 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_62:
      v46 = sub_AAFEF8(v41, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v46)(v43, *(_QWORD *)(v46 + 8));
  }
  if ( v40 && v47[v40 - 1] == 134 )
    v48 = v40 - 1;
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
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x21
  unsigned __int64 v23; // x10
  int *v24; // x11
  __int64 v25; // x0
  UnityEngine_GameObject_o *upTargetRoot; // x0
  UnityEngine_GameObject_o *upTargetAddRoot; // x0

  if ( (byte_40F93A6 & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, updata);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Transform_TypeInfo, v6);
    byte_40F93A6 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_38;
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_B170D4();
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
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v16 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
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
      sub_B173C8(v17);
LABEL_36:
      sub_B170D4();
    }
    gameObject = UnityEngine_Component__get_gameObject(v17, 0LL);
    if ( !gameObject )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  v20 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
  if ( v20 )
  {
    v21 = *(_QWORD *)v20;
    v22 = v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v23 = 0LL;
      v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_28;
      }
      v25 = v21 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_28:
      v25 = sub_AAFEF8(v20, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
  }
  if ( !updata
    || (upTargetRoot = this->fields.upTargetRoot) == 0LL
    || (UnityEngine_GameObject__SetActive(upTargetRoot, !updata->fields.isNpAdd, 0LL),
        (upTargetAddRoot = this->fields.upTargetAddRoot) == 0LL) )
  {
LABEL_38:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(upTargetAddRoot, updata->fields.isNpAdd, 0LL);
}


void __fastcall NpUpConfirmComponent__SetDefaultTitleLb(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLb; // x0
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  titleLb = this->fields.titleLb;
  if ( !titleLb
    || (UILabel__set_fontSize(titleLb, 22, 0LL), (v4 = (UnityEngine_Component_o *)this->fields.titleLb) == 0LL) )
  {
    sub_B170D4();
  }
  gameObject = UnityEngine_Component__get_gameObject(v4, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, 206.0, 0LL);
}


void __fastcall NpUpConfirmComponent__SetMaterialSvtBgWidth(
        NpUpConfirmComponent_o *this,
        int32_t width,
        const MethodInfo *method)
{
  UIWidget_o *materialSvtBg; // x0
  UIWidget_o *materialSvtBgGray; // x0

  materialSvtBg = (UIWidget_o *)this->fields.materialSvtBg;
  if ( !materialSvtBg
    || (UIWidget__set_width(materialSvtBg, width, 0LL),
        (materialSvtBgGray = (UIWidget_o *)this->fields.materialSvtBgGray) == 0LL) )
  {
    sub_B170D4();
  }
  UIWidget__set_width(materialSvtBgGray, width, 0LL);
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
  System_String_o *v37; // x0
  UILabel_o *upTargetRubyLb; // x0
  UILabel_o *upTargetNameLb; // x0
  const MethodInfo *v40; // x3
  UIExtrusionLabel_o *currentLvLb; // x22
  System_String_o *v42; // x0
  UIExtrusionLabel_o *resLvLb; // x22
  System_String_o *v44; // x0
  const MethodInfo *v45; // x1
  UnityEngine_GameObject_o *baseInfo; // x0
  UnityEngine_GameObject_o *svtFaceInfo; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int128 v51; // q1
  NpMaterialSvtInfo_o *v52; // x22
  int64_t v53; // x0
  UserServantEntity_o *v54; // x2
  const MethodInfo *v55; // x5
  UILabel_o *baseTxt; // x22
  System_String_o *v57; // x0
  signed __int64 size; // x8
  int v59; // w21
  unsigned __int64 v60; // x20
  UnityEngine_GameObject_o *materialInfo; // x0
  UnityEngine_GameObject_o *v62; // x26
  int64_t v63; // x22
  UnityEngine_Transform_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  UnityEngine_GameObject_o *v66; // x28
  NpMaterialSvtInfo_o *v67; // x26
  UnityEngine_Transform_o *v68; // x27
  UnityEngine_Transform_o *v69; // x0
  float y; // s8
  UnityEngine_Transform_o *v71; // x0
  int v72; // s2
  float v73; // s0
  float v74; // s1
  UserServantEntity_o *v75; // x2
  const MethodInfo *v76; // x5
  UnityEngine_Component_o *exceededTxt; // x0
  UnityEngine_GameObject_o *gameObject; // x27
  const MethodInfo *v79; // x1
  bool v80; // w0
  UILabel_o *v81; // x22
  System_String_o *v82; // x0
  UILabel_o *mtTxt; // x22
  System_String_o *v84; // x0
  UnityEngine_Component_o *v85; // x0
  UnityEngine_Component_o *materialSvtBg; // x22
  UnityEngine_GameObject_o *v87; // x0
  UnityEngine_GameObject_o *v88; // x28
  UnityEngine_GameObject_o *v89; // x0
  UnityEngine_GameObject_o *v90; // x27
  UnityEngine_Transform_o *v91; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v93; // x0
  UnityEngine_GameObject_o *v94; // x26
  UnityEngine_Transform_o *v95; // x0
  UnityEngine_Component_o *v96; // x0
  UnityEngine_GameObject_o *v97; // x0
  const MethodInfo *v98; // x2
  int v99; // w8
  UnityEngine_GameObject_o *v100; // x25
  UnityEngine_GameObject_o *v101; // x0
  int v102; // s0
  UnityEngine_GameObject_o *v103; // x0
  UnityEngine_GameObject_o *v104; // x0
  UnityEngine_GameObject_o *v105; // x0
  UILabel_o *upSpendQpTxtLb; // x22
  System_String_o *v107; // x0
  UILabel_o *upHaveQpTxtLb; // x22
  System_String_o *v109; // x0
  UILabel_o *upSpendQpLb; // x22
  System_String_o *v111; // x25
  Il2CppObject *v112; // x0
  System_String_o *v113; // x0
  UILabel_o *upHaveQpLb; // x22
  System_String_o *v115; // x25
  Il2CppObject *v116; // x0
  System_String_o *v117; // x0
  UILabel_o *upConfirmReConfirmMsgLb; // x0
  UILabel_o *upConfirmMsgLb; // x0
  struct UILabel_o *v120; // x21
  System_String_o *v121; // x22
  System_String_o *v122; // x0
  System_String_o *v123; // x0
  const MethodInfo *v124; // x2
  UnityEngine_Component_o *v125; // x0
  UnityEngine_GameObject_o *v126; // x0
  UnityEngine_Component_o *v127; // x0
  UnityEngine_GameObject_o *v128; // x0
  float v129; // s0
  UILabel_o *v130; // x22
  System_String_o *v131; // x0
  UILabel_o *titleLb; // x0
  UnityEngine_Component_o *v133; // x0
  UnityEngine_GameObject_o *v134; // x0
  UnityEngine_Transform_o *v135; // x0
  System_Collections_IEnumerator_o *Enumerator; // x24
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v138; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v141; // x8
  unsigned __int64 v142; // x10
  System_Collections_IEnumerator_c **v143; // x11
  __int64 v144; // x0
  __int64 v145; // x0
  UnityEngine_Component_o *v146; // x22
  __int64 v147; // x9
  UnityEngine_Component_o *v148; // x0
  UnityEngine_Object_o *v149; // x25
  UnityEngine_Component_o *v150; // x0
  UnityEngine_Object_o *v151; // x25
  UnityEngine_GameObject_o *v152; // x0
  __int64 v153; // x0
  __int64 v154; // x8
  __int64 v155; // x24
  unsigned __int64 v156; // x10
  int *v157; // x11
  __int64 v158; // x0
  struct UILabel_o *v159; // x21
  System_String_o *mText; // x22
  System_String_o *v161; // x0
  System_String_o *v162; // x0
  struct UILabel_o *v163; // x21
  System_String_o *v164; // x22
  System_String_o *v165; // x0
  System_String_o *v166; // x0
  const MethodInfo *v167; // x2
  UnityEngine_Component_o *v168; // x0
  UnityEngine_GameObject_o *v169; // x0
  UnityEngine_Component_o *v170; // x0
  SetLevelUpData_o *v171; // [xsp+8h] [xbp-B8h]
  int32_t haveQp; // [xsp+1Ch] [xbp-A4h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v176; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v177; // [xsp+40h] [xbp-80h] BYREF
  __int64 v178; // [xsp+68h] [xbp-58h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F93A4 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___, baseData);
    sub_B16FFC(&System_IDisposable_TypeInfo, v14);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_B16FFC(&int_TypeInfo, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Item__, v18);
    sub_B16FFC(&LocalizationManager_TypeInfo, v19);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_B16FFC(&UnityEngine_Transform_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_26, v23);
    sub_B16FFC(&StringLiteral_9241, v24);
    sub_B16FFC(&StringLiteral_9342, v25);
    sub_B16FFC(&StringLiteral_3160, v26);
    sub_B16FFC(&StringLiteral_3185, v27);
    sub_B16FFC(&StringLiteral_3304, v28);
    sub_B16FFC(&StringLiteral_9343, v29);
    sub_B16FFC(&StringLiteral_9341, v30);
    sub_B16FFC(&StringLiteral_3184, v31);
    sub_B16FFC(&StringLiteral_3192, v32);
    sub_B16FFC(&StringLiteral_9340, v33);
    sub_B16FFC(&StringLiteral_1, v34);
    sub_B16FFC(&StringLiteral_3186, v35);
    byte_40F93A4 = 1;
  }
  HIDWORD(v178) = 0;
  upTargetAddLabel = this->fields.upTargetAddLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3186, 0LL);
  if ( !upTargetAddLabel )
    goto LABEL_143;
  UILabel__set_text(upTargetAddLabel, v37, 0LL);
  if ( !updata )
    goto LABEL_143;
  upTargetRubyLb = this->fields.upTargetRubyLb;
  if ( !upTargetRubyLb )
    goto LABEL_143;
  UILabel__set_text(upTargetRubyLb, updata->fields.targetRuby, 0LL);
  upTargetNameLb = this->fields.upTargetNameLb;
  if ( !upTargetNameLb )
    goto LABEL_143;
  UILabel__set_text(upTargetNameLb, updata->fields.targetName, 0LL);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel(
    baseData,
    this->fields.upTargetNameLb,
    this->fields.upTargetRubyLb,
    v40);
  currentLvLb = this->fields.currentLvLb;
  v42 = System_Int32__ToString((int)updata + 56, 0LL);
  if ( !currentLvLb )
    goto LABEL_143;
  UIExtrusionLabel__set_text(currentLvLb, v42, 0LL);
  resLvLb = this->fields.resLvLb;
  v44 = System_Int32__ToString((int)updata + 60, 0LL);
  if ( !resLvLb )
    goto LABEL_143;
  UIExtrusionLabel__set_text(resLvLb, v44, 0LL);
  NpUpConfirmComponent__SetDefaultTitleLb(this, v45);
  baseInfo = this->fields.baseInfo;
  if ( !baseInfo )
    goto LABEL_143;
  svtFaceInfo = this->fields.svtFaceInfo;
  transform = UnityEngine_GameObject__get_transform(baseInfo, 0LL);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
  if ( !Object )
    goto LABEL_143;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              Object,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
  if ( !baseData )
    goto LABEL_143;
  v51 = *(_OWORD *)&baseData->fields.id.fields.fakeValue;
  v52 = (NpMaterialSvtInfo_o *)Component_srcLineSprite;
  *(_OWORD *)&v177.fields.currentCryptoKey = *(_OWORD *)&baseData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v177.fields.fakeValue = v51;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v176 = v177;
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v176, 0LL);
  if ( !v52 )
    goto LABEL_143;
  NpMaterialSvtInfo__setMaterialSvtInfo(v52, 0, v54, v53, 0LL, v55);
  baseTxt = this->fields.baseTxt;
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_3184, 0LL);
  if ( !baseTxt )
    goto LABEL_143;
  v171 = updata;
  UILabel__set_text(baseTxt, v57, 0LL);
  if ( !selectUsrSvtIdList )
    goto LABEL_143;
  LODWORD(size) = selectUsrSvtIdList->fields._size;
  if ( (int)size >= 1 )
  {
    v59 = 0;
    v60 = 0LL;
    do
    {
      if ( v60 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      materialInfo = this->fields.materialInfo;
      if ( !materialInfo )
        goto LABEL_143;
      v62 = this->fields.svtFaceInfo;
      v63 = selectUsrSvtIdList->fields._items->m_Items[v60];
      v64 = UnityEngine_GameObject__get_transform(materialInfo, 0LL);
      v65 = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v62, v64, 0LL, 0LL);
      if ( !v65 )
        goto LABEL_143;
      v66 = v65;
      v67 = (NpMaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v65,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
      v68 = UnityEngine_GameObject__get_transform(v66, 0LL);
      v69 = UnityEngine_GameObject__get_transform(v66, 0LL);
      if ( !v69 )
        goto LABEL_143;
      localPosition = UnityEngine_Transform__get_localPosition(v69, 0LL);
      y = localPosition.fields.y;
      v71 = UnityEngine_GameObject__get_transform(v66, 0LL);
      if ( !v71 )
        goto LABEL_143;
      *(UnityEngine_Vector3_o *)(&v72 - 2) = UnityEngine_Transform__get_localPosition(v71, 0LL);
      if ( !v68 )
        goto LABEL_143;
      v73 = (float)v59;
      v74 = y;
      UnityEngine_Transform__set_localPosition(v68, *(UnityEngine_Vector3_o *)(&v72 - 2), 0LL);
      if ( !v67 )
        goto LABEL_143;
      NpMaterialSvtInfo__setMaterialSvtInfo(v67, 0, v75, v63, 0LL, v76);
      exceededTxt = (UnityEngine_Component_o *)v67->fields.exceededTxt;
      if ( !exceededTxt )
        goto LABEL_143;
      gameObject = UnityEngine_Component__get_gameObject(exceededTxt, 0LL);
      v80 = NpCombineControl__CheckConfirm(v63, v79);
      if ( !gameObject )
        goto LABEL_143;
      UnityEngine_GameObject__SetActive(gameObject, v80, 0LL);
      v81 = v67->fields.exceededTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v82 = LocalizationManager__Get((System_String_o *)StringLiteral_9342, 0LL);
      if ( !v81 )
        goto LABEL_143;
      UILabel__set_text(v81, v82, 0LL);
      size = selectUsrSvtIdList->fields._size;
      ++v60;
      v59 += 140;
    }
    while ( (__int64)v60 < size );
  }
  mtTxt = this->fields.mtTxt;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v84 = LocalizationManager__Get((System_String_o *)StringLiteral_3185, 0LL);
  if ( !mtTxt )
    goto LABEL_143;
  UILabel__set_text(mtTxt, v84, 0LL);
  v85 = (UnityEngine_Component_o *)this->fields.mtTxt;
  if ( !v85 )
    goto LABEL_143;
  materialSvtBg = (UnityEngine_Component_o *)this->fields.materialSvtBg;
  v87 = UnityEngine_Component__get_gameObject(v85, 0LL);
  if ( !this->fields.arrow )
    goto LABEL_143;
  v88 = v87;
  v89 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.arrow, 0LL);
  if ( !this->fields.materialInfo )
    goto LABEL_143;
  v90 = v89;
  v91 = UnityEngine_GameObject__get_transform(this->fields.materialInfo, 0LL);
  if ( !v91 )
    goto LABEL_143;
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v91, 0LL);
  if ( !parent )
    goto LABEL_143;
  v93 = UnityEngine_Component__get_gameObject(parent, 0LL);
  if ( !this->fields.baseInfo )
    goto LABEL_143;
  v94 = v93;
  v95 = UnityEngine_GameObject__get_transform(this->fields.baseInfo, 0LL);
  if ( !v95 )
    goto LABEL_143;
  v96 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v95, 0LL);
  if ( !v96 )
    goto LABEL_143;
  v97 = UnityEngine_Component__get_gameObject(v96, 0LL);
  v99 = selectUsrSvtIdList->fields._size - 1;
  v100 = v97;
  switch ( v99 )
  {
    case 0:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 144, v98);
      if ( !materialSvtBg )
        goto LABEL_143;
      v101 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v101, 77.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v88, 77.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v90, -1.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v100, -100.0, 0LL);
      v102 = 19.0;
      break;
    case 1:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 244, v98);
      if ( !materialSvtBg )
        goto LABEL_143;
      v105 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v105, 127.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v88, 126.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v90, -51.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v100, -150.0, 0LL);
      v102 = -31.0;
      break;
    case 2:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 346, v98);
      if ( !materialSvtBg )
        goto LABEL_143;
      v103 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v103, 176.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v88, 173.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v90, -100.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v100, -200.0, 0LL);
      v102 = -1030094848;
      break;
    case 3:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 445, v98);
      if ( !materialSvtBg )
        goto LABEL_143;
      v104 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v104, 224.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v88, 223.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v90, -150.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v100, -250.0, 0LL);
      v102 = -1023541248;
      break;
    default:
      goto LABEL_60;
  }
  GameObjectExtensions__SetLocalPositionX(v94, *(float *)&v102, 0LL);
LABEL_60:
  upSpendQpTxtLb = this->fields.upSpendQpTxtLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v107 = LocalizationManager__Get((System_String_o *)StringLiteral_3192, 0LL);
  if ( !upSpendQpTxtLb )
    goto LABEL_143;
  UILabel__set_text(upSpendQpTxtLb, v107, 0LL);
  upHaveQpTxtLb = this->fields.upHaveQpTxtLb;
  v109 = LocalizationManager__Get((System_String_o *)StringLiteral_3160, 0LL);
  if ( !upHaveQpTxtLb )
    goto LABEL_143;
  UILabel__set_text(upHaveQpTxtLb, v109, 0LL);
  upSpendQpLb = this->fields.upSpendQpLb;
  v111 = LocalizationManager__Get((System_String_o *)StringLiteral_9241, 0LL);
  LODWORD(v177.fields.currentCryptoKey) = v171->fields.spendQp;
  v112 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v177);
  v113 = System_String__Format(v111, v112, 0LL);
  if ( !upSpendQpLb )
    goto LABEL_143;
  UILabel__set_text(upSpendQpLb, v113, 0LL);
  upHaveQpLb = this->fields.upHaveQpLb;
  v115 = LocalizationManager__Get((System_String_o *)StringLiteral_9241, 0LL);
  haveQp = v171->fields.haveQp;
  v116 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveQp);
  v117 = System_String__Format(v115, v116, 0LL);
  if ( !upHaveQpLb )
    goto LABEL_143;
  UILabel__set_text(upHaveQpLb, v117, 0LL);
  upConfirmReConfirmMsgLb = this->fields.upConfirmReConfirmMsgLb;
  if ( !upConfirmReConfirmMsgLb )
    goto LABEL_143;
  UILabel__set_text(upConfirmReConfirmMsgLb, (System_String_o *)StringLiteral_1, 0LL);
  upConfirmMsgLb = this->fields.upConfirmMsgLb;
  if ( !upConfirmMsgLb )
    goto LABEL_143;
  UILabel__set_text(upConfirmMsgLb, (System_String_o *)StringLiteral_1, 0LL);
  if ( isExceedMaxLv || isExceedeMaterial || isCombineSvt )
  {
    if ( reConfirmation )
    {
      v130 = this->fields.upConfirmReConfirmMsgLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v131 = LocalizationManager__Get((System_String_o *)StringLiteral_9343, 0LL);
      if ( !v130 )
        goto LABEL_143;
      UILabel__set_text(v130, v131, 0LL);
      titleLb = this->fields.titleLb;
      if ( !titleLb )
        goto LABEL_143;
      UILabel__set_fontSize(titleLb, 27, 0LL);
      v133 = (UnityEngine_Component_o *)this->fields.titleLb;
      if ( !v133 )
        goto LABEL_143;
      v134 = UnityEngine_Component__get_gameObject(v133, 0LL);
      GameObjectExtensions__SetLocalPositionY(v134, 184.0, 0LL);
      v135 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v135 )
        goto LABEL_143;
      Enumerator = UnityEngine_Transform__GetEnumerator(v135, 0LL);
      if ( !Enumerator )
        sub_B170D4();
      while ( 1 )
      {
        klass = Enumerator->klass;
        if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
        {
          v138 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v138;
            p_offset += 4;
            if ( v138 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
              goto LABEL_92;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_92:
          p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                Enumerator,
                *(_QWORD *)(p_method + 8)) & 1) == 0 )
          break;
        v141 = Enumerator->klass;
        if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
        {
          v142 = 0LL;
          v143 = (System_Collections_IEnumerator_c **)&v141->_1.interfaceOffsets->offset;
          while ( *(v143 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v142;
            v143 += 2;
            if ( v142 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
              goto LABEL_99;
          }
          v144 = (__int64)&v141->vtable[*(_DWORD *)v143 + 1].method;
        }
        else
        {
LABEL_99:
          v144 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v145 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v144)(
                 Enumerator,
                 *(_QWORD *)(v144 + 8));
        v146 = (UnityEngine_Component_o *)v145;
        if ( v145 )
        {
          v147 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)v145 + 300LL) < (unsigned int)v147
            || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v145 + 200LL) + 8 * v147 - 8) != UnityEngine_Transform_TypeInfo )
          {
            sub_B173C8(v145);
LABEL_145:
            sub_B170D4();
          }
        }
        v148 = (UnityEngine_Component_o *)this->fields.upConfirmReConfirmMsgLb;
        if ( !v148 )
          goto LABEL_145;
        v149 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(v148, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v149, (UnityEngine_Object_o *)v146, 0LL) )
        {
          v150 = (UnityEngine_Component_o *)this->fields.titleLb;
          if ( !v150 )
            sub_B170D4();
          v151 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(v150, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v151, (UnityEngine_Object_o *)v146, 0LL) )
          {
            if ( !v146 )
              sub_B170D4();
            v152 = UnityEngine_Component__get_gameObject(v146, 0LL);
            if ( !v152 )
              sub_B170D4();
            UnityEngine_GameObject__SetActive(v152, 0, 0LL);
          }
        }
      }
      v178 = 0x10000054FLL;
      v153 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
      if ( v153 )
      {
        v154 = *(_QWORD *)v153;
        v155 = v153;
        if ( *(_WORD *)(*(_QWORD *)v153 + 298LL) )
        {
          v156 = 0LL;
          v157 = (int *)(*(_QWORD *)(v154 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v157 - 1) != System_IDisposable_TypeInfo )
          {
            ++v156;
            v157 += 4;
            if ( v156 >= *(unsigned __int16 *)(*(_QWORD *)v153 + 298LL) )
              goto LABEL_122;
          }
          v158 = v154 + 16LL * *v157 + 312;
        }
        else
        {
LABEL_122:
          v158 = sub_AAFEF8(v153, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v158)(v155, *(_QWORD *)(v158 + 8));
      }
      if ( (_DWORD)v178 == 1359 )
      {
        v178 = 1359LL;
        return;
      }
    }
    if ( isExceedMaxLv || isCombineSvt || isExceedeMaterial )
    {
      v159 = this->fields.upConfirmMsgLb;
      if ( !v159 )
        goto LABEL_143;
      mText = v159->fields.mText;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v161 = LocalizationManager__Get((System_String_o *)StringLiteral_9341, 0LL);
      v162 = System_String__Concat_43743732(mText, v161, 0LL);
      UILabel__set_text(v159, v162, 0LL);
    }
    v163 = this->fields.upConfirmMsgLb;
    if ( !v163 )
      goto LABEL_143;
    v164 = v163->fields.mText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v165 = LocalizationManager__Get((System_String_o *)StringLiteral_9340, 0LL);
    v166 = System_String__Concat_43746016(v164, (System_String_o *)StringLiteral_26, v165, 0LL);
    UILabel__set_text(v163, v166, 0LL);
    NpUpConfirmComponent__SetDefaultLayout(this, v171, v167);
    v168 = (UnityEngine_Component_o *)this->fields.upConfirmMsgLb;
    if ( !v168
      || (v169 = UnityEngine_Component__get_gameObject(v168, 0LL),
          GameObjectExtensions__SetLocalPositionY(v169, -134.0, 0LL),
          (v170 = (UnityEngine_Component_o *)this->fields.upConfirmMsgLb) == 0LL) )
    {
LABEL_143:
      sub_B170D4();
    }
    v128 = UnityEngine_Component__get_gameObject(v170, 0LL);
    v129 = 5.0;
  }
  else
  {
    v120 = this->fields.upConfirmMsgLb;
    if ( !v120 )
      goto LABEL_143;
    v121 = v120->fields.mText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v122 = LocalizationManager__Get((System_String_o *)StringLiteral_3304, 0LL);
    v123 = System_String__Concat_43743732(v121, v122, 0LL);
    UILabel__set_text(v120, v123, 0LL);
    NpUpConfirmComponent__SetDefaultLayout(this, v171, v124);
    v125 = (UnityEngine_Component_o *)this->fields.upConfirmMsgLb;
    if ( !v125 )
      goto LABEL_143;
    v126 = UnityEngine_Component__get_gameObject(v125, 0LL);
    GameObjectExtensions__SetLocalPositionY(v126, -133.0, 0LL);
    v127 = (UnityEngine_Component_o *)this->fields.upConfirmMsgLb;
    if ( !v127 )
      goto LABEL_143;
    v128 = UnityEngine_Component__get_gameObject(v127, 0LL);
    v129 = 2.0;
  }
  GameObjectExtensions__SetLocalPositionX(v128, v129, 0LL);
}