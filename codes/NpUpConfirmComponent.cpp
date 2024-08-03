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
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v12; // x8
  __int64 v13; // x9
  System_Collections_IEnumerator_c **v14; // x10
  __int64 v15; // x0
  UnityEngine_Component_o *v16; // x0
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x20
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
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
  __int64 v35; // x9
  UnityEngine_Object_o *v36; // x20
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x19
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0

  if ( (byte_49FFE2E & 1) == 0 )
  {
    sub_1B640C8(&System_IDisposable_TypeInfo, method);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Transform_TypeInfo, v5);
    byte_49FFE2E = 1;
  }
  baseInfo = this->fields.baseInfo;
  if ( !baseInfo )
    goto LABEL_68;
  baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0LL);
  if ( !baseInfo )
    goto LABEL_68;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0LL);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 2;
        if ( !v13 )
          goto LABEL_17;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1].method;
    }
    else
    {
LABEL_17:
      v15 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( !v16 )
      goto LABEL_66;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v16->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B645E4(v16);
LABEL_65:
      sub_1B645E4(v34);
LABEL_66:
      sub_1B64324(v16);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
  }
  v19 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
  if ( v19 )
  {
    v20 = *(_QWORD *)v19;
    v21 = v19;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_30;
      }
      v24 = v20 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_30:
      v24 = sub_1BB60A8(v19, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
  }
  baseInfo = this->fields.materialInfo;
  if ( !baseInfo || (baseInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseInfo, 0LL)) == 0LL )
LABEL_68:
    sub_1B64324(baseInfo);
  v25 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)baseInfo, 0LL);
  if ( !v25 )
    sub_1B64324(0LL);
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
      v29 = sub_1BB60A8(v25, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v33 = sub_1BB60A8(v25, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v34 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v33)(
                                       v25,
                                       *(_QWORD *)(v33 + 8));
    if ( !v34 )
      sub_1B64324(0LL);
    v35 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v34->klass->vtable._0_Equals.methodPtr) < (unsigned int)v35
      || (UnityEngine_Transform_c *)v34->klass->_2.typeHierarchy[v35 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_65;
    }
    v36 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v34, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v36, 0LL);
  }
  v37 = sub_1B64204(v25, System_IDisposable_TypeInfo);
  if ( v37 )
  {
    v38 = *(_QWORD *)v37;
    v39 = v37;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_60;
      }
      v42 = v38 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_60:
      v42 = sub_1BB60A8(v37, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v42)(v39, *(_QWORD *)(v42 + 8));
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
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_c *v20; // x8
  UnityEngine_Transform_o *v21; // x21
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0

  if ( (byte_49FFE2F & 1) == 0 )
  {
    sub_1B640C8(&System_IDisposable_TypeInfo, updata);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Transform_TypeInfo, v6);
    byte_49FFE2F = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_38;
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_1B64324(0LL);
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
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v16 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
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
      sub_1B645E4(v17);
LABEL_36:
      sub_1B64324(v17);
    }
    gameObject = UnityEngine_Component__get_gameObject(v17, 0LL);
    if ( !gameObject )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  transform = (UnityEngine_Transform_o *)sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
  if ( transform )
  {
    v20 = transform->klass;
    v21 = transform;
    v22 = *(unsigned __int16 *)(&transform->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&transform->klass->_2.bitflags2 + 3) )
    {
      v23 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_28;
      }
      v24 = (__int64)(&v20->vtable._0_Equals.method + 2 * *v23);
    }
    else
    {
LABEL_28:
      v24 = sub_1BB60A8(transform, System_IDisposable_TypeInfo, 0LL);
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
    sub_1B64324(transform);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, updata->fields.isNpAdd, 0LL);
}


void __fastcall NpUpConfirmComponent__SetDefaultTitleLb(NpUpConfirmComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  titleLb = this->fields.titleLb;
  if ( !titleLb || (UILabel__set_fontSize(titleLb, 22, 0LL), (titleLb = this->fields.titleLb) == 0LL) )
    sub_1B64324(titleLb);
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
    sub_1B64324(materialSvtBg);
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
  UIExtrusionLabel_o *currentLvLb; // x21
  UIExtrusionLabel_o *resLvLb; // x21
  const MethodInfo *v39; // x1
  UnityEngine_GameObject_o *svtFaceInfo; // x21
  UnityEngine_Transform_o *transform; // x0
  __int128 v42; // q1
  NpMaterialSvtInfo_o *v43; // x22
  UILabel_o *baseTxt; // x21
  int v45; // w20
  int32_t v46; // w27
  UnityEngine_GameObject_o *v47; // x21
  int64_t v48; // x28
  UnityEngine_Transform_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x21
  NpMaterialSvtInfo_o *Component_object; // x29
  UnityEngine_Transform_o *v52; // x22
  float y; // s8
  int v54; // s2
  float v55; // s0
  float v56; // s1
  UnityEngine_GameObject_o *gameObject; // x21
  UILabel_o *exceededTxt; // x21
  UILabel_o *mtTxt; // x21
  UnityEngine_Component_o *materialSvtBg; // x27
  UnityEngine_GameObject_o *v61; // x26
  UnityEngine_GameObject_o *v62; // x28
  UnityEngine_GameObject_o *v63; // x29
  UnityEngine_GameObject_o *v64; // x0
  const MethodInfo *v65; // x2
  int v66; // w8
  UnityEngine_GameObject_o *v67; // x25
  int v68; // s12
  float v69; // s8
  float v70; // s10
  int v71; // s9
  int v72; // s11
  int v73; // w8
  int v74; // w9
  int v75; // w10
  int v76; // w11
  int v77; // w12
  UnityEngine_GameObject_o *v78; // x0
  UILabel_o *upSpendQpTxtLb; // x21
  UILabel_o *upHaveQpTxtLb; // x21
  UILabel_o *upSpendQpLb; // x21
  System_String_o *v82; // x22
  Il2CppObject *v83; // x0
  UILabel_o *upHaveQpLb; // x21
  System_String_o *v85; // x22
  Il2CppObject *v86; // x0
  struct UILabel_o *upConfirmMsgLb; // x21
  System_String_o *mText; // x22
  System_String_o *v89; // x0
  System_String_o *v90; // x0
  const MethodInfo *v91; // x2
  UnityEngine_GameObject_o *v92; // x0
  float v93; // s8
  UILabel_o *upConfirmReConfirmMsgLb; // x21
  UnityEngine_GameObject_o *v95; // x0
  System_Collections_IEnumerator_o *Enumerator; // x24
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v98; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v101; // x8
  __int64 v102; // x9
  System_Collections_IEnumerator_c **v103; // x10
  __int64 v104; // x0
  __int64 v105; // x0
  UnityEngine_Object_o *v106; // x25
  __int64 methodPtr_low; // x9
  UnityEngine_Component_o *v108; // x0
  UnityEngine_Object_o *v109; // x21
  UnityEngine_Component_o *titleLb; // x0
  UnityEngine_Object_o *v111; // x21
  _BOOL8 v112; // x0
  UnityEngine_GameObject_o *v113; // x0
  __int64 v114; // x0
  __int64 v115; // x8
  __int64 v116; // x24
  __int64 v117; // x9
  int *v118; // x10
  __int64 v119; // x0
  struct UILabel_o *v120; // x21
  System_String_o *v121; // x22
  System_String_o *v122; // x0
  System_String_o *v123; // x0
  struct UILabel_o *v124; // x21
  System_String_o *v125; // x22
  System_String_o *v126; // x0
  System_String_o *v127; // x0
  const MethodInfo *v128; // x2
  UnityEngine_GameObject_o *v129; // x0
  UnityEngine_GameObject_o *v130; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v134; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v135; // [xsp+40h] [xbp-B0h] BYREF
  _BOOL4 v136; // [xsp+68h] [xbp-88h]
  int32_t haveQp; // [xsp+6Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v136 = isExceedMaxLv;
  if ( (byte_49FFE2D & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___, baseData);
    sub_1B640C8(&System_IDisposable_TypeInfo, v13);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1B640C8(&int_TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Item__, v17);
    sub_1B640C8(&LocalizationManager_TypeInfo, v18);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v19);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_1B640C8(&UnityEngine_Transform_TypeInfo, v21);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v22);
    sub_1B640C8(&StringLiteral_9169/*"NEED_QP"*/, v23);
    sub_1B640C8(&StringLiteral_9276/*"NPUP_EXCEEDED"*/, v24);
    sub_1B640C8(&StringLiteral_3640/*"COMBINE_HAVE_QP"*/, v25);
    sub_1B640C8(&StringLiteral_3665/*"COMBINE_NPUP_MATERIAL"*/, v26);
    sub_1B640C8(&StringLiteral_3787/*"CONFIRM_COMBINE_MSG"*/, v27);
    sub_1B640C8(&StringLiteral_9277/*"NPUP_RECONFIRM_TXT"*/, v28);
    sub_1B640C8(&StringLiteral_9275/*"NPUP_CONFIRM_WARNING_TXT"*/, v29);
    sub_1B640C8(&StringLiteral_3664/*"COMBINE_NPUP_BASE"*/, v30);
    sub_1B640C8(&StringLiteral_3672/*"COMBINE_SPEND_QP"*/, v31);
    sub_1B640C8(&StringLiteral_9274/*"NPUP_CONFIRM_TXT"*/, v32);
    sub_1B640C8(&StringLiteral_1/*""*/, v33);
    sub_1B640C8(&StringLiteral_3666/*"COMBINE_NP_ADD_TITLE"*/, v34);
    byte_49FFE2D = 1;
  }
  upTargetAddLabel = this->fields.upTargetAddLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3666/*"COMBINE_NP_ADD_TITLE"*/, 0LL);
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
  NpUpConfirmComponent__SetDefaultTitleLb(this, v39);
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
                              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
  if ( !baseData )
    goto LABEL_130;
  v42 = *(_OWORD *)&baseData->fields.id.fields.fakeValue;
  v43 = (NpMaterialSvtInfo_o *)upTargetRubyLb;
  *(_OWORD *)&v135.fields.currentCryptoKey = *(_OWORD *)&baseData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v135.fields.fakeValue = v42;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v134 = v135;
  upTargetRubyLb = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v134, 0LL);
  if ( !v43 )
    goto LABEL_130;
  NpMaterialSvtInfo__setMaterialSvtInfo(v43, 0, baseData, upTargetRubyLb, 0LL, 0LL);
  baseTxt = this->fields.baseTxt;
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3664/*"COMBINE_NPUP_BASE"*/, 0LL);
  if ( !baseTxt )
    goto LABEL_130;
  UILabel__set_text(baseTxt, (System_String_o *)upTargetRubyLb, 0LL);
  if ( !selectUsrSvtIdList )
    goto LABEL_130;
  if ( selectUsrSvtIdList->fields._size >= 1 )
  {
    v45 = 0;
    v46 = 0;
    do
    {
      upTargetRubyLb = System_Collections_Generic_List_long___get_Item(
                         selectUsrSvtIdList,
                         v46,
                         (const MethodInfo_3494D84 *)Method_System_Collections_Generic_List_long__get_Item__);
      if ( !this->fields.materialInfo )
        goto LABEL_130;
      v47 = this->fields.svtFaceInfo;
      v48 = upTargetRubyLb;
      v49 = UnityEngine_GameObject__get_transform(this->fields.materialInfo, 0LL);
      upTargetRubyLb = (int64_t)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v47, v49, 0LL, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      v50 = (UnityEngine_GameObject_o *)upTargetRubyLb;
      Component_object = (NpMaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  (UnityEngine_GameObject_o *)upTargetRubyLb,
                                                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
      v52 = UnityEngine_GameObject__get_transform(v50, 0LL);
      upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(v50, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
      y = localPosition.fields.y;
      upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(v50, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      *(UnityEngine_Vector3_o *)(&v54 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)upTargetRubyLb,
                                               0LL);
      if ( !v52 )
        goto LABEL_130;
      v55 = (float)v45;
      v56 = y;
      UnityEngine_Transform__set_localPosition(v52, *(UnityEngine_Vector3_o *)(&v54 - 2), 0LL);
      if ( !Component_object )
        goto LABEL_130;
      NpMaterialSvtInfo__setMaterialSvtInfo(Component_object, 0, baseData, v48, 0LL, 0LL);
      upTargetRubyLb = (int64_t)Component_object->fields.exceededTxt;
      if ( !upTargetRubyLb )
        goto LABEL_130;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
      upTargetRubyLb = NpCombineControl__CheckConfirm(v48, 0LL);
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
      ++v46;
      v45 += 140;
    }
    while ( v46 < selectUsrSvtIdList->fields._size );
  }
  mtTxt = this->fields.mtTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3665/*"COMBINE_NPUP_MATERIAL"*/, 0LL);
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
  v61 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.arrow, 0LL);
  if ( !this->fields.materialInfo )
    goto LABEL_130;
  v62 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(this->fields.materialInfo, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
  if ( !this->fields.baseInfo )
    goto LABEL_130;
  v63 = (UnityEngine_GameObject_o *)upTargetRubyLb;
  upTargetRubyLb = (int64_t)UnityEngine_GameObject__get_transform(this->fields.baseInfo, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  upTargetRubyLb = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
  if ( !upTargetRubyLb )
    goto LABEL_130;
  v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
  v66 = selectUsrSvtIdList->fields._size - 1;
  v67 = v64;
  switch ( v66 )
  {
    case 0:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 144, v65);
      if ( !materialSvtBg )
        goto LABEL_130;
      v68 = 1117388800;
      v69 = 19.0;
      v70 = -1.0;
      v71 = -1027080192;
      v72 = 1117388800;
      goto LABEL_54;
    case 1:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 244, v65);
      if ( !materialSvtBg )
        goto LABEL_130;
      v69 = -31.0;
      v71 = -1021968384;
      v70 = -51.0;
      v72 = 1123811328;
      v68 = 1123942400;
      goto LABEL_54;
    case 2:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 346, v65);
      if ( !materialSvtBg )
        goto LABEL_130;
      *(float *)&v73 = -77.0;
      v74 = -1018691584;
      *(float *)&v75 = -100.0;
      v76 = 1127022592;
      v77 = 1127219200;
      goto LABEL_51;
    case 3:
      NpUpConfirmComponent__SetMaterialSvtBgWidth(this, 445, v65);
      if ( !materialSvtBg )
        goto LABEL_130;
      *(float *)&v73 = -127.0;
      v74 = -1015414784;
      *(float *)&v75 = -150.0;
      v76 = 1130299392;
      v77 = 1130364928;
LABEL_51:
      v69 = *(float *)&v73;
      v71 = v74;
      v70 = *(float *)&v75;
      v72 = v76;
      v68 = v77;
LABEL_54:
      v78 = UnityEngine_Component__get_gameObject(materialSvtBg, 0LL);
      GameObjectExtensions__SetLocalPositionX(v78, *(float *)&v68, 0LL);
      GameObjectExtensions__SetLocalPositionX(v61, *(float *)&v72, 0LL);
      GameObjectExtensions__SetLocalPositionX(v62, v70, 0LL);
      GameObjectExtensions__SetLocalPositionX(v67, *(float *)&v71, 0LL);
      GameObjectExtensions__SetLocalPositionX(v63, v69, 0LL);
LABEL_55:
      upSpendQpTxtLb = this->fields.upSpendQpTxtLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3672/*"COMBINE_SPEND_QP"*/, 0LL);
      if ( !upSpendQpTxtLb )
        goto LABEL_130;
      UILabel__set_text(upSpendQpTxtLb, (System_String_o *)upTargetRubyLb, 0LL);
      upHaveQpTxtLb = this->fields.upHaveQpTxtLb;
      upTargetRubyLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3640/*"COMBINE_HAVE_QP"*/, 0LL);
      if ( !upHaveQpTxtLb )
        goto LABEL_130;
      UILabel__set_text(upHaveQpTxtLb, (System_String_o *)upTargetRubyLb, 0LL);
      upSpendQpLb = this->fields.upSpendQpLb;
      v82 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
      LODWORD(v135.fields.currentCryptoKey) = updata->fields.spendQp;
      v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v135);
      upTargetRubyLb = (int64_t)System_String__Format(v82, v83, 0LL);
      if ( !upSpendQpLb )
        goto LABEL_130;
      UILabel__set_text(upSpendQpLb, (System_String_o *)upTargetRubyLb, 0LL);
      upHaveQpLb = this->fields.upHaveQpLb;
      v85 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
      haveQp = updata->fields.haveQp;
      v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveQp);
      upTargetRubyLb = (int64_t)System_String__Format(v85, v86, 0LL);
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
      if ( !v136 && !isExceedeMaterial && !isCombineSvt )
      {
        upConfirmMsgLb = this->fields.upConfirmMsgLb;
        if ( !upConfirmMsgLb )
          goto LABEL_130;
        mText = upConfirmMsgLb->fields.mText;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v89 = LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"CONFIRM_COMBINE_MSG"*/, 0LL);
        v90 = System_String__Concat_61375396(mText, v89, 0LL);
        UILabel__set_text(upConfirmMsgLb, v90, 0LL);
        NpUpConfirmComponent__SetDefaultLayout(this, updata, v91);
        upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
        if ( !upTargetRubyLb )
          goto LABEL_130;
        v92 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
        GameObjectExtensions__SetLocalPositionY(v92, -133.0, 0LL);
        upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
        if ( !upTargetRubyLb )
          goto LABEL_130;
        v93 = 2.0;
LABEL_129:
        v130 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
        GameObjectExtensions__SetLocalPositionX(v130, v93, 0LL);
        return;
      }
      if ( !reConfirmation )
      {
        if ( v136 || isCombineSvt || isExceedeMaterial )
        {
          v120 = this->fields.upConfirmMsgLb;
          if ( !v120 )
            goto LABEL_130;
          v121 = v120->fields.mText;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v122 = LocalizationManager__Get((System_String_o *)StringLiteral_9275/*"NPUP_CONFIRM_WARNING_TXT"*/, 0LL);
          v123 = System_String__Concat_61375396(v121, v122, 0LL);
          UILabel__set_text(v120, v123, 0LL);
        }
        v124 = this->fields.upConfirmMsgLb;
        if ( !v124 )
          goto LABEL_130;
        v125 = v124->fields.mText;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v126 = LocalizationManager__Get((System_String_o *)StringLiteral_9274/*"NPUP_CONFIRM_TXT"*/, 0LL);
        v127 = System_String__Concat_61386656(v125, (System_String_o *)StringLiteral_43/*"\n"*/, v126, 0LL);
        UILabel__set_text(v124, v127, 0LL);
        NpUpConfirmComponent__SetDefaultLayout(this, updata, v128);
        upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb;
        if ( !upTargetRubyLb
          || (v129 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL),
              GameObjectExtensions__SetLocalPositionY(v129, -134.0, 0LL),
              (upTargetRubyLb = (int64_t)this->fields.upConfirmMsgLb) == 0) )
        {
LABEL_130:
          sub_1B64324(upTargetRubyLb);
        }
        v93 = 5.0;
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
      v95 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)upTargetRubyLb, 0LL);
      GameObjectExtensions__SetLocalPositionY(v95, 184.0, 0LL);
      upTargetRubyLb = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !upTargetRubyLb )
        goto LABEL_130;
      Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)upTargetRubyLb, 0LL);
      if ( !Enumerator )
        sub_1B64324(0LL);
      while ( 1 )
      {
        klass = Enumerator->klass;
        v98 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v98;
            p_offset += 4;
            if ( !v98 )
              goto LABEL_84;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_84:
          p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                Enumerator,
                *(_QWORD *)(p_method + 8)) & 1) == 0 )
          break;
        v101 = Enumerator->klass;
        v102 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          v103 = (System_Collections_IEnumerator_c **)&v101->_1.interfaceOffsets->offset;
          while ( *(v103 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v102;
            v103 += 2;
            if ( !v102 )
              goto LABEL_91;
          }
          v104 = (__int64)&v101->vtable[*(_DWORD *)v103 + 1].method;
        }
        else
        {
LABEL_91:
          v104 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v105 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v104)(
                 Enumerator,
                 *(_QWORD *)(v104 + 8));
        v106 = (UnityEngine_Object_o *)v105;
        if ( v105 )
        {
          methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v105 + 304LL) < (unsigned int)methodPtr_low
            || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v105 + 200LL) + 8 * methodPtr_low - 8) != UnityEngine_Transform_TypeInfo )
          {
            sub_1B645E4(v105);
LABEL_132:
            sub_1B64324(v108);
          }
        }
        v108 = (UnityEngine_Component_o *)this->fields.upConfirmReConfirmMsgLb;
        if ( !v108 )
          goto LABEL_132;
        v109 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(v108, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v109, v106, 0LL) )
        {
          titleLb = (UnityEngine_Component_o *)this->fields.titleLb;
          if ( !titleLb )
            sub_1B64324(0LL);
          v111 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(titleLb, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v112 = UnityEngine_Object__op_Inequality(v111, v106, 0LL);
          if ( v112 )
          {
            if ( !v106 )
              sub_1B64324(v112);
            v113 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v106, 0LL);
            if ( !v113 )
              sub_1B64324(0LL);
            UnityEngine_GameObject__SetActive(v113, 0, 0LL);
          }
        }
      }
      v114 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
      if ( v114 )
      {
        v115 = *(_QWORD *)v114;
        v116 = v114;
        v117 = *(unsigned __int16 *)(*(_QWORD *)v114 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v114 + 302LL) )
        {
          v118 = (int *)(*(_QWORD *)(v115 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v118 - 1) != System_IDisposable_TypeInfo )
          {
            --v117;
            v118 += 4;
            if ( !v117 )
              goto LABEL_112;
          }
          v119 = v115 + 16LL * *v118 + 312;
        }
        else
        {
LABEL_112:
          v119 = sub_1BB60A8(v114, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v119)(v116, *(_QWORD *)(v119 + 8));
      }
      return;
    default:
      goto LABEL_55;
  }
}