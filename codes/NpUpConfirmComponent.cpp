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
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  UnityEngine_Component_o *v14; // x0
  __int64 v15; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x20
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x1
  System_Collections_IEnumerator_o *v25; // x19
  System_Collections_IEnumerator_c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  System_Collections_IEnumerator_c *v30; // x8
  __int64 v31; // x9
  System_Collections_IEnumerator_c **v32; // x10
  __int64 v33; // x0
  UnityEngine_Component_o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x9
  UnityEngine_Object_o *v37; // x20
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x19
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0

  if ( (byte_4BE0288 & 1) == 0 )
  {
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_Transform_TypeInfo);
    byte_4BE0288 = 1;
  }
  baseInfo = this->fields.baseInfo;
  if ( !baseInfo )
    goto LABEL_68;
  baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0LL);
  if ( !baseInfo )
    goto LABEL_68;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0LL);
  if ( !Enumerator )
    sub_1C22094(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 2;
        if ( !v11 )
          goto LABEL_17;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1].method;
    }
    else
    {
LABEL_17:
      v13 = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v14 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                       Enumerator,
                                       *(_QWORD *)(v13 + 8));
    if ( !v14 )
      goto LABEL_66;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v14->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v14->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C22354(v14);
LABEL_65:
      sub_1C22354(v34);
LABEL_66:
      sub_1C22094(v14, v15);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
  }
  v18 = sub_1C21F74(Enumerator, System_IDisposable_TypeInfo);
  if ( v18 )
  {
    v19 = *(_QWORD *)v18;
    v20 = v18;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_30;
      }
      v23 = v19 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_30:
      v23 = sub_1C73E18(v18, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  }
  baseInfo = this->fields.materialInfo;
  if ( !baseInfo || (baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0LL)) == 0LL )
LABEL_68:
    sub_1C22094(baseInfo, method);
  v25 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0LL);
  if ( !v25 )
    sub_1C22094(0LL, v24);
  while ( 1 )
  {
    v26 = v25->klass;
    v27 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_40;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_40:
      v29 = sub_1C73E18(v25, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
      break;
    v30 = v25->klass;
    v31 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
    {
      v32 = (System_Collections_IEnumerator_c **)&v30->_1.interfaceOffsets->offset;
      while ( *(v32 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        v32 += 2;
        if ( !v31 )
          goto LABEL_47;
      }
      v33 = (__int64)&v30->vtable[*(_DWORD *)v32 + 1].method;
    }
    else
    {
LABEL_47:
      v33 = sub_1C73E18(v25, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v34 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v33)(
                                       v25,
                                       *(_QWORD *)(v33 + 8));
    if ( !v34 )
      sub_1C22094(0LL, v35);
    v36 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v34->klass->vtable._0_Equals.methodPtr) < (unsigned int)v36
      || (UnityEngine_Transform_c *)v34->klass->_2.typeHierarchy[v36 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_65;
    }
    v37 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v34, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(v37, 0LL);
  }
  v38 = sub_1C21F74(v25, System_IDisposable_TypeInfo);
  if ( v38 )
  {
    v39 = *(_QWORD *)v38;
    v40 = v38;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_60;
      }
      v43 = v39 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_60:
      v43 = sub_1C73E18(v38, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v43)(v40, *(_QWORD *)(v43 + 8));
  }
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  UnityEngine_Transform_c *v22; // x8
  UnityEngine_Transform_o *v23; // x21
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4BE0289 & 1) == 0 )
  {
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&UnityEngine_Transform_TypeInfo);
    byte_4BE0289 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_38;
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_1C22094(0LL, v7);
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
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1].method;
    }
    else
    {
LABEL_16:
      v16 = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v17 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v17->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C22354(v17);
LABEL_36:
      sub_1C22094(v17, v18);
    }
    gameObject = UnityEngine_Component__get_gameObject(v17, 0LL);
    if ( !gameObject )
      sub_1C22094(0LL, v21);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  transform = (UnityEngine_Transform_o *)sub_1C21F74(Enumerator, System_IDisposable_TypeInfo);
  if ( transform )
  {
    v22 = transform->klass;
    v23 = transform;
    v24 = *(unsigned __int16 *)(&transform->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&transform->klass->_2.bitflags2 + 3) )
    {
      v25 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_28;
      }
      v26 = (__int64)(&v22->vtable._0_Equals.method + 2 * *v25);
    }
    else
    {
LABEL_28:
      v26 = sub_1C73E18(transform, System_IDisposable_TypeInfo, 0LL);
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
    sub_1C22094(transform, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, updata->fields.isNpAdd, 0LL);
}


void __fastcall NpUpConfirmComponent__SetDefaultTitleLb(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  titleLb = this->fields.titleLb;
  if ( !titleLb || (UILabel__set_fontSize(titleLb, 22, 0LL), (titleLb = this->fields.titleLb) == 0LL) )
    sub_1C22094(titleLb, method);
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
    sub_1C22094(materialSvtBg, *(_QWORD *)&width);
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
  UILabel_o *upTargetAddLabel; // x21
  int64_t upTargetRubyLb; // x0
  __int64 v15; // x1
  UIExtrusionLabel_o *currentLvLb; // x21
  UIExtrusionLabel_o *resLvLb; // x21
  const MethodInfo *v18; // x1
  UnityEngine_GameObject_o *svtFaceInfo; // x21
  UnityEngine_Transform_o *transform; // x0
  __int128 v21; // q1
  NpMaterialSvtInfo_o *v22; // x22
  UILabel_o *baseTxt; // x21
  int v24; // w20
  int32_t v25; // w27
  UnityEngine_GameObject_o *v26; // x21
  int64_t v27; // x28
  UnityEngine_Transform_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x21
  NpMaterialSvtInfo_o *Component_object; // x29
  UnityEngine_Transform_o *v31; // x22
  float y; // s8
  int v33; // s2
  float v34; // s0
  float v35; // s1
  UnityEngine_GameObject_o *gameObject; // x21
  UILabel_o *exceededTxt; // x21
  UILabel_o *mtTxt; // x21
  UnityEngine_Component_o *materialSvtBg; // x27
  UnityEngine_GameObject_o *v40; // x26
  UnityEngine_GameObject_o *v41; // x28
  UnityEngine_GameObject_o *v42; // x29
  UnityEngine_GameObject_o *v43; // x0
  const MethodInfo *v44; // x2
  int v45; // w8
  UnityEngine_GameObject_o *v46; // x25
  int v47; // s12
  float v48; // s8
  float v49; // s10
  int v50; // s9
  int v51; // s11
  int v52; // w8
  int v53; // w9
  int v54; // w10
  int v55; // w11
  int v56; // w12
  UnityEngine_GameObject_o *v57; // x0
  UILabel_o *upSpendQpTxtLb; // x21
  UILabel_o *upHaveQpTxtLb; // x21
  UILabel_o *upSpendQpLb; // x21
  System_String_o *v61; // x22
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  Il2CppObject *v65; // x0
  UILabel_o *upHaveQpLb; // x21
  System_String_o *v67; // x22
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  Il2CppObject *v71; // x0
  struct UILabel_o *upConfirmMsgLb; // x21
  System_String_o *mText; // x22
  System_String_o *v74; // x0
  System_String_o *v75; // x0
  const MethodInfo *v76; // x2
  UnityEngine_GameObject_o *v77; // x0
  float v78; // s8
  UILabel_o *upConfirmReConfirmMsgLb; // x21
  UnityEngine_GameObject_o *v80; // x0
  __int64 v81; // x1
  System_Collections_IEnumerator_o *Enumerator; // x24
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v84; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v87; // x8
  __int64 v88; // x9
  System_Collections_IEnumerator_c **v89; // x10
  __int64 v90; // x0
  __int64 v91; // x0
  UnityEngine_Transform_c *v92; // x1
  UnityEngine_Object_o *v93; // x25
  __int64 methodPtr_low; // x9
  UnityEngine_Component_o *v95; // x0
  UnityEngine_Object_o *v96; // x21
  __int64 v97; // x1
  UnityEngine_Component_o *titleLb; // x0
  UnityEngine_Object_o *v99; // x21
  _BOOL8 v100; // x0
  __int64 v101; // x1
  UnityEngine_GameObject_o *v102; // x0
  __int64 v103; // x1
  __int64 v104; // x0
  __int64 v105; // x8
  __int64 v106; // x24
  __int64 v107; // x9
  int *v108; // x10
  __int64 v109; // x0
  struct UILabel_o *v110; // x21
  System_String_o *v111; // x22
  System_String_o *v112; // x0
  System_String_o *v113; // x0
  struct UILabel_o *v114; // x21
  System_String_o *v115; // x22
  System_String_o *v116; // x0
  System_String_o *v117; // x0
  const MethodInfo *v118; // x2
  UnityEngine_GameObject_o *v119; // x0
  UnityEngine_GameObject_o *v120; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v124; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+40h] [xbp-B0h] BYREF
  _BOOL4 v126; // [xsp+68h] [xbp-88h]
  int32_t haveQp; // [xsp+6Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v126 = isExceedMaxLv;
  if ( (byte_4BE0287 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&UnityEngine_Transform_TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_9404/*"NEED_QP"*/);
    sub_1C21E38(&StringLiteral_9512/*"NPUP_EXCEEDED"*/);
    sub_1C21E38(&StringLiteral_3717/*"COMBINE_HAVE_QP"*/);
    sub_1C21E38(&StringLiteral_3742/*"COMBINE_NPUP_MATERIAL"*/);
    sub_1C21E38(&StringLiteral_3867/*"CONFIRM_COMBINE_MSG"*/);
    sub_1C21E38(&StringLiteral_9513/*"NPUP_RECONFIRM_TXT"*/);
    sub_1C21E38(&StringLiteral_9511/*"NPUP_CONFIRM_WARNING_TXT"*/);
    sub_1C21E38(&StringLiteral_3741/*"COMBINE_NPUP_BASE"*/);
    sub_1C21E38(&StringLiteral_3749/*"COMBINE_SPEND_QP"*/);
    sub_1C21E38(&StringLiteral_9510/*"NPUP_CONFIRM_TXT"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_3743/*"COMBINE_NP_ADD_TITLE"*/);
    byte_4BE0287 = 1;
  }
  upTargetAddLabel = this->fields.upTargetAddLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3743/*"COMBINE_NP_ADD_TITLE"*/, 0LL);
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
  NpUpConfirmComponent__SetDefaultTitleLb(this, v18);
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
                              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
  if ( !baseData )
    goto LABEL_130;
  v21 = *(_OWORD *)&baseData->fields.id.fields.fakeValue;
  v22 = (NpMaterialSvtInfo_o *)upTargetRubyLb;
  *(_OWORD *)&v125.fields.currentCryptoKey = *(_OWORD *)&baseData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v125.fields.fakeValue = v21;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v124 = v125;
  upTargetRubyLb = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v124, 0LL);
  if ( !v22 )
    goto LABEL_130;
  NpMaterialSvtInfo__setMaterialSvtInfo(v22, 0, baseData, upTargetRubyLb, 0LL, 0LL);
  baseTxt = this->fields.baseTxt;
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3741/*"COMBINE_NPUP_BASE"*/, 0LL);
  if ( !baseTxt )
    goto LABEL_130;
  UILabel__set_text(baseTxt, (System_String_o *)upTargetRubyLb, 0LL);
  if ( !selectUsrSvtIdList )
    goto LABEL_130;
  if ( selectUsrSvtIdList->fields._size >= 1 )
  {
    v24 = 0;
    v25 = 0;
    do
    {
      upTargetRubyLb = System_Collections_Generic_List_long___get_Item(
                         selectUsrSvtIdList,
                         v25,
                         (const MethodInfo_3636DF8 *)Method_System_Collections_Generic_List_long__get_Item__);
      if ( !this->fields.materialInfo )
        goto LABEL_130;
      v26 = this->fields.svtFaceInfo;
      v27 = upTargetRubyLb;
      v28 = UnityEngine_GameObject__get_transform(this->fields.materialInfo, 0LL);
      upTargetRubyLb = (int64_t)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v26, v28, 0LL, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      v29 = (UnityEngine_GameObject_o *)upTargetRubyLb;
      Component_object = (NpMaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  (UnityEngine_GameObject_o *)upTargetRubyLb,
                                                  (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
      v31 = UnityEngine_GameObject__get_transform(v29, 0LL);
      upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(v29, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
      y = localPosition.fields.y;
      upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(v29, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      *(UnityEngine_Vector3_o *)(&v33 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)upTargetRubyLb,
                                               0LL);
      if ( !v31 )
        goto LABEL_130;
      v34 = (float)v24;
      v35 = y;
      UnityEngine_Transform__set_localPosition(v31, *(UnityEngine_Vector3_o *)(&v33 - 2), 0LL);
      if ( !Component_object )
        goto LABEL_130;
      NpMaterialSvtInfo__setMaterialSvtInfo(Component_object, 0, baseData, v27, 0LL, 0LL);
      upTargetRubyLb = (int64_t)Component_object->fields.exceededTxt;
      if ( !upTargetRubyLb )
        goto LABEL_130;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
      upTargetRubyLb = NpCombineControl__CheckConfirm(v27, 0LL);
      if ( !gameObject )
        goto LABEL_130;
      UnityEngine_GameObject__SetActive(gameObject, upTargetRubyLb & 1, 0LL);
      exceededTxt = Component_object->fields.exceededTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_9512/*"NPUP_EXCEEDED"*/, 0LL);
      if ( !exceededTxt )
        goto LABEL_130;
      UILabel__set_text(exceededTxt, (System_String_o *)upTargetRubyLb, 0LL);
      ++v25;
      v24 += 140;
    }
    while ( v25 < selectUsrSvtIdList->fields._size );
  }
  mtTxt = this->fields.mtTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3742/*"COMBINE_NPUP_MATERIAL"*/, 0LL);
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
  v40 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.arrow, 0LL);
  if ( !this->fields.materialInfo )
    goto LABEL_130;
  v41 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(this->fields.materialInfo, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
  if ( !this->fields.baseInfo )
    goto LABEL_130;
  v42 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(this->fields.baseInfo, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
  v45 = selectUsrSvtIdList->fields._size - 1;
  v46 = v43;
  switch ( v45 )
  {
    case 0:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 144, v44);
      if ( !materialSvtBg )
        goto LABEL_130;
      v47 = 1117388800;
      v48 = 19.0;
      v49 = -1.0;
      v50 = -1027080192;
      v51 = 1117388800;
      goto LABEL_54;
    case 1:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 244, v44);
      if ( !materialSvtBg )
        goto LABEL_130;
      v48 = -31.0;
      v50 = -1021968384;
      v49 = -51.0;
      v51 = 1123811328;
      v47 = 1123942400;
      goto LABEL_54;
    case 2:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 346, v44);
      if ( !materialSvtBg )
        goto LABEL_130;
      *(float *)&v52 = -77.0;
      v53 = -1018691584;
      *(float *)&v54 = -100.0;
      v55 = 1127022592;
      v56 = 1127219200;
      goto LABEL_51;
    case 3:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 445, v44);
      if ( !materialSvtBg )
        goto LABEL_130;
      *(float *)&v52 = -127.0;
      v53 = -1015414784;
      *(float *)&v54 = -150.0;
      v55 = 1130299392;
      v56 = 1130364928;
LABEL_51:
      v48 = *(float *)&v52;
      v50 = v53;
      v49 = *(float *)&v54;
      v51 = v55;
      v47 = v56;
LABEL_54:
      v57 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v57, *(float *)&v47, 0LL);
      GameObjectExtensions__SetLocalPositionX(v40, *(float *)&v51, 0LL);
      GameObjectExtensions__SetLocalPositionX(v41, v49, 0LL);
      GameObjectExtensions__SetLocalPositionX(v46, *(float *)&v50, 0LL);
      GameObjectExtensions__SetLocalPositionX(v42, v48, 0LL);
LABEL_55:
      upSpendQpTxtLb = this->fields.upSpendQpTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3749/*"COMBINE_SPEND_QP"*/, 0LL);
      if ( !upSpendQpTxtLb )
        goto LABEL_130;
      UILabel__set_text(upSpendQpTxtLb, (System_String_o *)upTargetRubyLb, 0LL);
      upHaveQpTxtLb = this->fields.upHaveQpTxtLb;
      upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3717/*"COMBINE_HAVE_QP"*/, 0LL);
      if ( !upHaveQpTxtLb )
        goto LABEL_130;
      UILabel__set_text(upHaveQpTxtLb, (System_String_o *)upTargetRubyLb, 0LL);
      upSpendQpLb = this->fields.upSpendQpLb;
      v61 = LocalizationManager__Get((System_String_o *)StringLiteral_9404/*"NEED_QP"*/, 0LL);
      LODWORD(v125.fields.currentCryptoKey) = updata->fields.spendQp;
      v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v125, v62, v63, v64);
      upTargetRubyLb = (int64_t)System_String__Format(v61, v65, 0LL);
      if ( !upSpendQpLb )
        goto LABEL_130;
      UILabel__set_text(upSpendQpLb, (System_String_o *)upTargetRubyLb, 0LL);
      upHaveQpLb = this->fields.upHaveQpLb;
      v67 = LocalizationManager__Get((System_String_o *)StringLiteral_9404/*"NEED_QP"*/, 0LL);
      haveQp = updata->fields.haveQp;
      v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveQp, v68, v69, v70);
      upTargetRubyLb = (int64_t)System_String__Format(v67, v71, 0LL);
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
      if ( !v126 && !isExceedeMaterial && !isCombineSvt )
      {
        upConfirmMsgLb = this->fields.upConfirmMsgLb;
        if ( !upConfirmMsgLb )
          goto LABEL_130;
        mText = upConfirmMsgLb->fields.mText;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v74 = LocalizationManager__Get((System_String_o *)StringLiteral_3867/*"CONFIRM_COMBINE_MSG"*/, 0LL);
        v75 = System_String__Concat_63115476(mText, v74, 0LL);
        UILabel__set_text(upConfirmMsgLb, v75, 0LL);
        NpUpConfirmComponent__SetDefaultLayout(this, updata, v76);
        upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
        if ( !upTargetRubyLb )
          goto LABEL_130;
        v77 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
        GameObjectExtensions__SetLocalPositionY(v77, -133.0, 0LL);
        upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
        if ( !upTargetRubyLb )
          goto LABEL_130;
        v78 = 2.0;
LABEL_129:
        v120 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
        GameObjectExtensions__SetLocalPositionX(v120, v78, 0LL);
        return;
      }
      if ( !reConfirmation )
      {
        if ( v126 || isCombineSvt || isExceedeMaterial )
        {
          v110 = this->fields.upConfirmMsgLb;
          if ( !v110 )
            goto LABEL_130;
          v111 = v110->fields.mText;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v112 = LocalizationManager__Get((System_String_o *)StringLiteral_9511/*"NPUP_CONFIRM_WARNING_TXT"*/, 0LL);
          v113 = System_String__Concat_63115476(v111, v112, 0LL);
          UILabel__set_text(v110, v113, 0LL);
        }
        v114 = this->fields.upConfirmMsgLb;
        if ( !v114 )
          goto LABEL_130;
        v115 = v114->fields.mText;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v116 = LocalizationManager__Get((System_String_o *)StringLiteral_9510/*"NPUP_CONFIRM_TXT"*/, 0LL);
        v117 = System_String__Concat_63126736(v115, (System_String_o *)StringLiteral_43/*"\n"*/, v116, 0LL);
        UILabel__set_text(v114, v117, 0LL);
        NpUpConfirmComponent__SetDefaultLayout(this, updata, v118);
        upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
        if ( !upTargetRubyLb
          || (v119 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL),
              GameObjectExtensions__SetLocalPositionY(v119, -134.0, 0LL),
              (upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb) == 0) )
        {
LABEL_130:
          sub_1C22094(upTargetRubyLb, v15);
        }
        v78 = 5.0;
        goto LABEL_129;
      }
      upConfirmReConfirmMsgLb = this->fields.upConfirmReConfirmMsgLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_9513/*"NPUP_RECONFIRM_TXT"*/, 0LL);
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
      v80 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
      GameObjectExtensions__SetLocalPositionY(v80, 184.0, 0LL);
      upTargetRubyLb = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
      if ( !Enumerator )
        sub_1C22094(0LL, v81);
      while ( 1 )
      {
        klass = Enumerator->klass;
        v84 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v84;
            p_offset += 4;
            if ( !v84 )
              goto LABEL_84;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_84:
          p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                Enumerator,
                *(_QWORD *)(p_method + 8)) & 1) == 0 )
          break;
        v87 = Enumerator->klass;
        v88 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          v89 = (System_Collections_IEnumerator_c **)&v87->_1.interfaceOffsets->offset;
          while ( *(v89 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v88;
            v89 += 2;
            if ( !v88 )
              goto LABEL_91;
          }
          v90 = (__int64)&v87->vtable[*(_DWORD *)v89 + 1].method;
        }
        else
        {
LABEL_91:
          v90 = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v91 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v90)(
                Enumerator,
                *(_QWORD *)(v90 + 8));
        v93 = (UnityEngine_Object_o *)v91;
        if ( v91 )
        {
          v92 = UnityEngine_Transform_TypeInfo;
          methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v91 + 304LL) < (unsigned int)methodPtr_low
            || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v91 + 200LL) + 8 * methodPtr_low - 8) != UnityEngine_Transform_TypeInfo )
          {
            sub_1C22354(v91);
LABEL_132:
            sub_1C22094(v95, v92);
          }
        }
        v95 = (UnityEngine_Component_o *)this->fields.upConfirmReConfirmMsgLb;
        if ( !v95 )
          goto LABEL_132;
        v96 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(v95, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v96, v93, 0LL) )
        {
          titleLb = (UnityEngine_Component_o *)this->fields.titleLb;
          if ( !titleLb )
            sub_1C22094(0LL, v97);
          v99 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(titleLb, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v100 = UnityEngine_Object__op_Inequality(v99, v93, 0LL);
          if ( v100 )
          {
            if ( !v93 )
              sub_1C22094(v100, v101);
            v102 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v93, 0LL);
            if ( !v102 )
              sub_1C22094(0LL, v103);
            UnityEngine_GameObject__SetActive(v102, 0, 0LL);
          }
        }
      }
      v104 = sub_1C21F74(Enumerator, System_IDisposable_TypeInfo);
      if ( v104 )
      {
        v105 = *(_QWORD *)v104;
        v106 = v104;
        v107 = *(unsigned __int16 *)(*(_QWORD *)v104 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v104 + 302LL) )
        {
          v108 = (int *)(*(_QWORD *)(v105 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v108 - 1) != System_IDisposable_TypeInfo )
          {
            --v107;
            v108 += 4;
            if ( !v107 )
              goto LABEL_112;
          }
          v109 = v105 + 16LL * *v108 + 312;
        }
        else
        {
LABEL_112:
          v109 = sub_1C73E18(v104, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v109)(v106, *(_QWORD *)(v109 + 8));
      }
      return;
    default:
      goto LABEL_55;
  }
}