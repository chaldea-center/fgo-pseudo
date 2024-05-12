void __fastcall NpUpConfirmComponent___ctor(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall NpUpConfirmComponent__DestroySvtInfo(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseInfo; // x0
  __int64 v4; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v10; // x8
  unsigned __int64 v11; // x10
  System_Collections_IEnumerator_c **v12; // x11
  __int64 v13; // x0
  UnityEngine_Component_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x20
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x1
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
  __int64 v35; // x1
  __int64 v36; // x9
  UnityEngine_Object_o *v37; // x20
  int v38; // w22
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x19
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  int v45[2]; // [xsp+0h] [xbp-50h]
  int v46; // [xsp+8h] [xbp-48h]

  if ( (byte_438BAE7 & 1) == 0 )
  {
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&UnityEngine_Transform_TypeInfo);
    byte_438BAE7 = 1;
  }
  v46 = 0;
  baseInfo = this->fields.baseInfo;
  if ( !baseInfo )
    goto LABEL_73;
  baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0LL);
  if ( !baseInfo )
    goto LABEL_73;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0LL);
  if ( !Enumerator )
    sub_B7769C(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v7 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v7;
        p_offset += 4;
        if ( v7 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        v12 += 2;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1].method;
    }
    else
    {
LABEL_17:
      v13 = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v14 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                       Enumerator,
                                       *(_QWORD *)(v13 + 8));
    if ( !v14 )
      goto LABEL_71;
    v16 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v14->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (UnityEngine_Transform_c *)v14->klass->_2.typeHierarchy[v16 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v34 = (UnityEngine_Component_o *)sub_B77990(v14);
LABEL_70:
      v14 = (UnityEngine_Component_o *)sub_B77990(v34);
LABEL_71:
      sub_B7769C(v14, v15);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
  }
  v45[0] = 67;
  v46 = 1;
  v18 = sub_B77684(Enumerator, System_IDisposable_TypeInfo);
  if ( v18 )
  {
    v19 = *(_QWORD *)v18;
    v20 = v18;
    if ( *(_WORD *)(*(_QWORD *)v18 + 298LL) )
    {
      v21 = 0LL;
      v22 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v18 + 298LL) )
          goto LABEL_31;
      }
      v23 = v19 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_31:
      v23 = sub_B0F4C0(v18, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  }
  v46 = 0;
  baseInfo = this->fields.materialInfo;
  if ( !baseInfo || (baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0LL)) == 0LL )
LABEL_73:
    sub_B7769C(baseInfo, method);
  v25 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0LL);
  if ( !v25 )
    sub_B7769C(0LL, v24);
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
      v29 = sub_B0F4C0(v25, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v33 = sub_B0F4C0(v25, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v34 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v33)(
                                       v25,
                                       *(_QWORD *)(v33 + 8));
    if ( !v34 )
      sub_B7769C(0LL, v35);
    v36 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v34->klass->_2.bitflags2 + 1) < (unsigned int)v36
      || (UnityEngine_Transform_c *)v34->klass->_2.typeHierarchy[v36 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_70;
    }
    v37 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v34, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(v37, 0LL);
  }
  v45[0] = 134;
  v38 = ++v46;
  v39 = sub_B77684(v25, System_IDisposable_TypeInfo);
  if ( v39 )
  {
    v40 = *(_QWORD *)v39;
    v41 = v39;
    if ( *(_WORD *)(*(_QWORD *)v39 + 298LL) )
    {
      v42 = 0LL;
      v43 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v39 + 298LL) )
          goto LABEL_62;
      }
      v44 = v40 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_62:
      v44 = sub_B0F4C0(v39, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v44)(v41, *(_QWORD *)(v44 + 8));
  }
  if ( v38 && v45[v38 - 1] == 134 )
    v46 = v38 - 1;
}


void __fastcall NpUpConfirmComponent__SetDefaultLayout(
        NpUpConfirmComponent_o *this,
        SetLevelUpData_o *updata,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  __int64 v7; // x1
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
  __int64 v18; // x1
  __int64 v19; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  UnityEngine_Transform_c *v22; // x8
  UnityEngine_Transform_o *v23; // x21
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0

  if ( (byte_438BAE8 & 1) == 0 )
  {
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&UnityEngine_Transform_TypeInfo);
    byte_438BAE8 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_38;
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_B7769C(0LL, v7);
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
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v16 = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v17 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_36;
    v19 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[v19 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v17 = (UnityEngine_Component_o *)sub_B77990(v17);
LABEL_36:
      sub_B7769C(v17, v18);
    }
    gameObject = UnityEngine_Component__get_gameObject(v17, 0LL);
    if ( !gameObject )
      sub_B7769C(0LL, v21);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  transform = (UnityEngine_Transform_o *)sub_B77684(Enumerator, System_IDisposable_TypeInfo);
  if ( transform )
  {
    v22 = transform->klass;
    v23 = transform;
    if ( *(_WORD *)&transform->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&transform->klass->_2.bitflags1 )
          goto LABEL_28;
      }
      v26 = (__int64)(&v22->vtable._0_Equals.method + 2 * *v25);
    }
    else
    {
LABEL_28:
      v26 = sub_B0F4C0(transform, System_IDisposable_TypeInfo, 0LL);
    }
    transform = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))v26)(
                                             v23,
                                             *(_QWORD *)(v26 + 8));
  }
  if ( !updata
    || (transform = (UnityEngine_Transform_o *)this->fields.upTargetRoot) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, !updata->fields.isNpAdd, 0LL),
        (transform = (UnityEngine_Transform_o *)this->fields.upTargetAddRoot) == 0LL) )
  {
LABEL_38:
    sub_B7769C(transform, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, updata->fields.isNpAdd, 0LL);
}


void __fastcall NpUpConfirmComponent__SetDefaultTitleLb(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  titleLb = this->fields.titleLb;
  if ( !titleLb || (UILabel__set_fontSize(titleLb, 22, 0LL), (titleLb = this->fields.titleLb) == 0LL) )
    sub_B7769C(titleLb, method);
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
    sub_B7769C(materialSvtBg, *(_QWORD *)&width);
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
  UILabel_o *upTargetAddLabel; // x22
  __int64 upTargetRubyLb; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  UIExtrusionLabel_o *currentLvLb; // x22
  UIExtrusionLabel_o *resLvLb; // x22
  const MethodInfo *v20; // x1
  UnityEngine_GameObject_o *svtFaceInfo; // x22
  UnityEngine_Transform_o *transform; // x0
  __int128 v23; // q1
  NpMaterialSvtInfo_o *v24; // x22
  UserServantEntity_o *v25; // x2
  const MethodInfo *v26; // x5
  UILabel_o *baseTxt; // x22
  signed __int64 size; // x8
  int v29; // w21
  unsigned __int64 v30; // x20
  UnityEngine_GameObject_o *v31; // x26
  int64_t v32; // x22
  UnityEngine_Transform_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x28
  NpMaterialSvtInfo_o *Component_srcLineSprite; // x26
  UnityEngine_Transform_o *v36; // x27
  float y; // s8
  int v38; // s2
  float v39; // s0
  float v40; // s1
  UserServantEntity_o *v41; // x2
  const MethodInfo *v42; // x5
  UnityEngine_GameObject_o *gameObject; // x27
  const MethodInfo *v44; // x1
  UILabel_o *exceededTxt; // x22
  UILabel_o *mtTxt; // x22
  UnityEngine_Component_o *materialSvtBg; // x22
  UnityEngine_GameObject_o *v48; // x28
  UnityEngine_GameObject_o *v49; // x27
  UnityEngine_GameObject_o *v50; // x26
  UnityEngine_GameObject_o *v51; // x0
  const MethodInfo *v52; // x2
  int v53; // w8
  UnityEngine_GameObject_o *v54; // x25
  UnityEngine_GameObject_o *v55; // x0
  int v56; // s0
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  UILabel_o *upSpendQpTxtLb; // x22
  UILabel_o *upHaveQpTxtLb; // x22
  UILabel_o *upSpendQpLb; // x22
  System_String_o *v63; // x25
  __int64 v64; // x2
  Il2CppObject *v65; // x0
  UILabel_o *upHaveQpLb; // x22
  System_String_o *v67; // x25
  __int64 v68; // x2
  Il2CppObject *v69; // x0
  struct UILabel_o *v70; // x21
  System_String_o *v71; // x22
  System_String_o *v72; // x0
  System_String_o *v73; // x0
  const MethodInfo *v74; // x2
  UnityEngine_GameObject_o *v75; // x0
  UnityEngine_GameObject_o *v76; // x0
  float v77; // s0
  UILabel_o *upConfirmReConfirmMsgLb; // x22
  UnityEngine_GameObject_o *v79; // x0
  __int64 v80; // x1
  System_Collections_IEnumerator_o *Enumerator; // x24
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v83; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v86; // x8
  unsigned __int64 v87; // x10
  System_Collections_IEnumerator_c **v88; // x11
  __int64 v89; // x0
  __int64 v90; // x0
  UnityEngine_Transform_c *v91; // x1
  UnityEngine_Object_o *v92; // x22
  __int64 v93; // x9
  UnityEngine_Component_o *v94; // x0
  UnityEngine_Object_o *v95; // x25
  __int64 v96; // x1
  UnityEngine_Component_o *titleLb; // x0
  UnityEngine_Object_o *v98; // x25
  _BOOL8 v99; // x0
  __int64 v100; // x1
  UnityEngine_GameObject_o *v101; // x0
  __int64 v102; // x1
  __int64 v103; // x8
  __int64 v104; // x24
  unsigned __int64 v105; // x10
  int *v106; // x11
  __int64 v107; // x0
  struct UILabel_o *upConfirmMsgLb; // x21
  System_String_o *mText; // x22
  System_String_o *v110; // x0
  System_String_o *v111; // x0
  struct UILabel_o *v112; // x21
  System_String_o *v113; // x22
  System_String_o *v114; // x0
  System_String_o *v115; // x0
  const MethodInfo *v116; // x2
  UnityEngine_GameObject_o *v117; // x0
  SetLevelUpData_o *v118; // [xsp+8h] [xbp-B8h]
  int32_t haveQp; // [xsp+1Ch] [xbp-A4h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v123; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v124; // [xsp+40h] [xbp-80h] BYREF
  __int64 v125; // [xsp+68h] [xbp-58h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438BAE6 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&UnityEngine_Transform_TypeInfo);
    sub_B775C4(&StringLiteral_26/*"\n"*/);
    sub_B775C4(&StringLiteral_9439/*"NEED_QP"*/);
    sub_B775C4(&StringLiteral_9543/*"NPUP_EXCEEDED"*/);
    sub_B775C4(&StringLiteral_3294/*"COMBINE_HAVE_QP"*/);
    sub_B775C4(&StringLiteral_3319/*"COMBINE_NPUP_MATERIAL"*/);
    sub_B775C4(&StringLiteral_3439/*"CONFIRM_COMBINE_MSG"*/);
    sub_B775C4(&StringLiteral_9544/*"NPUP_RECONFIRM_TXT"*/);
    sub_B775C4(&StringLiteral_9542/*"NPUP_CONFIRM_WARNING_TXT"*/);
    sub_B775C4(&StringLiteral_3318/*"COMBINE_NPUP_BASE"*/);
    sub_B775C4(&StringLiteral_3326/*"COMBINE_SPEND_QP"*/);
    sub_B775C4(&StringLiteral_9541/*"NPUP_CONFIRM_TXT"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_3320/*"COMBINE_NP_ADD_TITLE"*/);
    byte_438BAE6 = 1;
  }
  HIDWORD(v125) = 0;
  upTargetAddLabel = this->fields.upTargetAddLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3320/*"COMBINE_NP_ADD_TITLE"*/, 0LL);
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
    v17);
  currentLvLb = this->fields.currentLvLb;
  upTargetRubyLb = (__int64)System_Int32__ToString((int)updata + 64, 0LL);
  if ( !currentLvLb )
    goto LABEL_143;
  UIExtrusionLabel__set_text(currentLvLb, (System_String_o *)upTargetRubyLb, 0LL);
  resLvLb = this->fields.resLvLb;
  upTargetRubyLb = (__int64)System_Int32__ToString((int)updata + 68, 0LL);
  if ( !resLvLb )
    goto LABEL_143;
  UIExtrusionLabel__set_text(resLvLb, (System_String_o *)upTargetRubyLb, 0LL);
  NpUpConfirmComponent__SetDefaultTitleLb(this, v20);
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
                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
  if ( !baseData )
    goto LABEL_143;
  v23 = *(_OWORD *)&baseData->fields.id.fields.fakeValue;
  v24 = (NpMaterialSvtInfo_o *)upTargetRubyLb;
  *(_OWORD *)&v124.fields.currentCryptoKey = *(_OWORD *)&baseData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v124.fields.fakeValue = v23;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v123 = v124;
  upTargetRubyLb = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v123, 0LL);
  if ( !v24 )
    goto LABEL_143;
  NpMaterialSvtInfo__setMaterialSvtInfo(v24, 0, v25, upTargetRubyLb, 0LL, v26);
  baseTxt = this->fields.baseTxt;
  upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3318/*"COMBINE_NPUP_BASE"*/, 0LL);
  if ( !baseTxt )
    goto LABEL_143;
  v118 = updata;
  UILabel__set_text(baseTxt, (System_String_o *)upTargetRubyLb, 0LL);
  if ( !selectUsrSvtIdList )
    goto LABEL_143;
  LODWORD(size) = selectUsrSvtIdList->fields._size;
  if ( (int)size >= 1 )
  {
    v29 = 0;
    v30 = 0LL;
    do
    {
      if ( v30 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      upTargetRubyLb = (__int64)this->fields.materialInfo;
      if ( !upTargetRubyLb )
        goto LABEL_143;
      v31 = this->fields.svtFaceInfo;
      v32 = selectUsrSvtIdList->fields._items->m_Items[v30];
      v33 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)upTargetRubyLb, 0LL);
      upTargetRubyLb = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v31, v33, 0LL, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_143;
      v34 = (UnityEngine_GameObject_o *)upTargetRubyLb;
      Component_srcLineSprite = (NpMaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)upTargetRubyLb,
                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
      v36 = UnityEngine_GameObject__get_transform(v34, 0LL);
      upTargetRubyLb = (__int64)UnityEngine_GameObject__get_transform(v34, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_143;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
      y = localPosition.fields.y;
      upTargetRubyLb = (__int64)UnityEngine_GameObject__get_transform(v34, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_143;
      *(UnityEngine_Vector3_o *)(&v38 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)upTargetRubyLb,
                                               0LL);
      if ( !v36 )
        goto LABEL_143;
      v39 = (float)v29;
      v40 = y;
      UnityEngine_Transform__set_localPosition(v36, *(UnityEngine_Vector3_o *)(&v38 - 2), 0LL);
      if ( !Component_srcLineSprite )
        goto LABEL_143;
      NpMaterialSvtInfo__setMaterialSvtInfo(Component_srcLineSprite, 0, v41, v32, 0LL, v42);
      upTargetRubyLb = (__int64)Component_srcLineSprite->fields.exceededTxt;
      if ( !upTargetRubyLb )
        goto LABEL_143;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
      upTargetRubyLb = NpCombineControl__CheckConfirm(v32, v44);
      if ( !gameObject )
        goto LABEL_143;
      UnityEngine_GameObject__SetActive(gameObject, upTargetRubyLb & 1, 0LL);
      exceededTxt = Component_srcLineSprite->fields.exceededTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9543/*"NPUP_EXCEEDED"*/, 0LL);
      if ( !exceededTxt )
        goto LABEL_143;
      UILabel__set_text(exceededTxt, (System_String_o *)upTargetRubyLb, 0LL);
      size = selectUsrSvtIdList->fields._size;
      ++v30;
      v29 += 140;
    }
    while ( (__int64)v30 < size );
  }
  mtTxt = this->fields.mtTxt;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3319/*"COMBINE_NPUP_MATERIAL"*/, 0LL);
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
  v48 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.arrow, 0LL);
  if ( !this->fields.materialInfo )
    goto LABEL_143;
  v49 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (__int64)UnityEngine_GameObject__get_transform(this->fields.materialInfo, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_143;
  upTargetRubyLb = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_143;
  upTargetRubyLb = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
  if ( !this->fields.baseInfo )
    goto LABEL_143;
  v50 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (__int64)UnityEngine_GameObject__get_transform(this->fields.baseInfo, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_143;
  upTargetRubyLb = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_143;
  v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
  v53 = selectUsrSvtIdList->fields._size - 1;
  v54 = v51;
  switch ( v53 )
  {
    case 0:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 144, v52);
      if ( !materialSvtBg )
        goto LABEL_143;
      v55 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v55, 77.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v48, 77.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v49, -1.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v54, -100.0, 0LL);
      v56 = 19.0;
      break;
    case 1:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 244, v52);
      if ( !materialSvtBg )
        goto LABEL_143;
      v59 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v59, 127.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v48, 126.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v49, -51.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v54, -150.0, 0LL);
      v56 = -31.0;
      break;
    case 2:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 346, v52);
      if ( !materialSvtBg )
        goto LABEL_143;
      v57 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v57, 176.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v48, 173.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v49, -100.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v54, -200.0, 0LL);
      v56 = -1030094848;
      break;
    case 3:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 445, v52);
      if ( !materialSvtBg )
        goto LABEL_143;
      v58 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v58, 224.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v48, 223.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v49, -150.0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v54, -250.0, 0LL);
      v56 = -1023541248;
      break;
    default:
      goto LABEL_60;
  }
  GameObjectExtensions__SetLocalPositionX(v50, *(float *)&v56, 0LL);
LABEL_60:
  upSpendQpTxtLb = this->fields.upSpendQpTxtLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !upSpendQpTxtLb )
    goto LABEL_143;
  UILabel__set_text(upSpendQpTxtLb, (System_String_o *)upTargetRubyLb, 0LL);
  upHaveQpTxtLb = this->fields.upHaveQpTxtLb;
  upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !upHaveQpTxtLb )
    goto LABEL_143;
  UILabel__set_text(upHaveQpTxtLb, (System_String_o *)upTargetRubyLb, 0LL);
  upSpendQpLb = this->fields.upSpendQpLb;
  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
  LODWORD(v124.fields.currentCryptoKey) = v118->fields.spendQp;
  v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v124, v64);
  upTargetRubyLb = (__int64)System_String__Format(v63, v65, 0LL);
  if ( !upSpendQpLb )
    goto LABEL_143;
  UILabel__set_text(upSpendQpLb, (System_String_o *)upTargetRubyLb, 0LL);
  upHaveQpLb = this->fields.upHaveQpLb;
  v67 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
  haveQp = v118->fields.haveQp;
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveQp, v68);
  upTargetRubyLb = (__int64)System_String__Format(v67, v69, 0LL);
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
      upTargetRubyLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9544/*"NPUP_RECONFIRM_TXT"*/, 0LL);
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
      v79 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
      GameObjectExtensions__SetLocalPositionY(v79, 184.0, 0LL);
      upTargetRubyLb = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_143;
      Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
      if ( !Enumerator )
        sub_B7769C(0LL, v80);
      while ( 1 )
      {
        klass = Enumerator->klass;
        if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
        {
          v83 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v83;
            p_offset += 4;
            if ( v83 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
              goto LABEL_92;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_92:
          p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                Enumerator,
                *(_QWORD *)(p_method + 8)) & 1) == 0 )
          break;
        v86 = Enumerator->klass;
        if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
        {
          v87 = 0LL;
          v88 = (System_Collections_IEnumerator_c **)&v86->_1.interfaceOffsets->offset;
          while ( *(v88 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v87;
            v88 += 2;
            if ( v87 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
              goto LABEL_99;
          }
          v89 = (__int64)&v86->vtable[*(_DWORD *)v88 + 1].method;
        }
        else
        {
LABEL_99:
          v89 = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v90 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v89)(
                Enumerator,
                *(_QWORD *)(v89 + 8));
        v92 = (UnityEngine_Object_o *)v90;
        if ( v90 )
        {
          v91 = UnityEngine_Transform_TypeInfo;
          v93 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)v90 + 300LL) < (unsigned int)v93
            || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v90 + 200LL) + 8 * v93 - 8) != UnityEngine_Transform_TypeInfo )
          {
            v94 = (UnityEngine_Component_o *)sub_B77990(v90);
LABEL_145:
            sub_B7769C(v94, v91);
          }
        }
        v94 = (UnityEngine_Component_o *)this->fields.upConfirmReConfirmMsgLb;
        if ( !v94 )
          goto LABEL_145;
        v95 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(v94, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v95, v92, 0LL) )
        {
          titleLb = (UnityEngine_Component_o *)this->fields.titleLb;
          if ( !titleLb )
            sub_B7769C(0LL, v96);
          v98 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(titleLb, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v99 = UnityEngine_Object__op_Inequality(v98, v92, 0LL);
          if ( v99 )
          {
            if ( !v92 )
              sub_B7769C(v99, v100);
            v101 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v92, 0LL);
            if ( !v101 )
              sub_B7769C(0LL, v102);
            UnityEngine_GameObject__SetActive(v101, 0, 0LL);
          }
        }
      }
      v125 = 0x10000054FLL;
      upTargetRubyLb = sub_B77684(Enumerator, System_IDisposable_TypeInfo);
      if ( upTargetRubyLb )
      {
        v103 = *(_QWORD *)upTargetRubyLb;
        v104 = upTargetRubyLb;
        if ( *(_WORD *)(*(_QWORD *)upTargetRubyLb + 298LL) )
        {
          v105 = 0LL;
          v106 = (int *)(*(_QWORD *)(v103 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v106 - 1) != System_IDisposable_TypeInfo )
          {
            ++v105;
            v106 += 4;
            if ( v105 >= *(unsigned __int16 *)(*(_QWORD *)upTargetRubyLb + 298LL) )
              goto LABEL_122;
          }
          v107 = v103 + 16LL * *v106 + 312;
        }
        else
        {
LABEL_122:
          v107 = sub_B0F4C0(upTargetRubyLb, System_IDisposable_TypeInfo, 0LL);
        }
        upTargetRubyLb = (*(__int64 (__fastcall **)(__int64, _QWORD))v107)(v104, *(_QWORD *)(v107 + 8));
      }
      if ( (_DWORD)v125 == 1359 )
      {
        v125 = 1359LL;
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
      v110 = LocalizationManager__Get((System_String_o *)StringLiteral_9542/*"NPUP_CONFIRM_WARNING_TXT"*/, 0LL);
      v111 = System_String__Concat_44901936(mText, v110, 0LL);
      UILabel__set_text(upConfirmMsgLb, v111, 0LL);
    }
    v112 = this->fields.upConfirmMsgLb;
    if ( !v112 )
      goto LABEL_143;
    v113 = v112->fields.mText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v114 = LocalizationManager__Get((System_String_o *)StringLiteral_9541/*"NPUP_CONFIRM_TXT"*/, 0LL);
    v115 = System_String__Concat_44904220(v113, (System_String_o *)StringLiteral_26/*"\n"*/, v114, 0LL);
    UILabel__set_text(v112, v115, 0LL);
    NpUpConfirmComponent__SetDefaultLayout(this, v118, v116);
    upTargetRubyLb = (__int64)this->fields.upConfirmMsgLb;
    if ( !upTargetRubyLb
      || (v117 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL),
          GameObjectExtensions__SetLocalPositionY(v117, -134.0, 0LL),
          (upTargetRubyLb = (__int64)this->fields.upConfirmMsgLb) == 0) )
    {
LABEL_143:
      sub_B7769C(upTargetRubyLb, v16);
    }
    v76 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
    v77 = 5.0;
  }
  else
  {
    v70 = this->fields.upConfirmMsgLb;
    if ( !v70 )
      goto LABEL_143;
    v71 = v70->fields.mText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v72 = LocalizationManager__Get((System_String_o *)StringLiteral_3439/*"CONFIRM_COMBINE_MSG"*/, 0LL);
    v73 = System_String__Concat_44901936(v71, v72, 0LL);
    UILabel__set_text(v70, v73, 0LL);
    NpUpConfirmComponent__SetDefaultLayout(this, v118, v74);
    upTargetRubyLb = (__int64)this->fields.upConfirmMsgLb;
    if ( !upTargetRubyLb )
      goto LABEL_143;
    v75 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
    GameObjectExtensions__SetLocalPositionY(v75, -133.0, 0LL);
    upTargetRubyLb = (__int64)this->fields.upConfirmMsgLb;
    if ( !upTargetRubyLb )
      goto LABEL_143;
    v76 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
    v77 = 2.0;
  }
  GameObjectExtensions__SetLocalPositionX(v76, v77, 0LL);
}