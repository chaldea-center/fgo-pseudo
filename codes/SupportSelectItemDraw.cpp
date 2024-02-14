void __fastcall SupportSelectItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x19
  __int64 v20; // x0
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  SupportSelectItemDraw_c *v85; // x8
  struct SupportSelectItemDraw_StaticFields *v86; // x8
  __int64 v87; // x0
  __int64 v88; // x0

  if ( (byte_4217095 & 1) == 0 )
  {
    sub_B0D8A4(&string___TypeInfo, v1);
    sub_B0D8A4(&SupportSelectItemDraw_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_19355/*"icon_class1002"*/, v3);
    sub_B0D8A4(&StringLiteral_19353/*"icon_class007"*/, v4);
    sub_B0D8A4(&StringLiteral_19352/*"icon_class006"*/, v5);
    sub_B0D8A4(&StringLiteral_19350/*"icon_class004"*/, v6);
    sub_B0D8A4(&StringLiteral_19347/*"icon_class001"*/, v7);
    sub_B0D8A4(&StringLiteral_19354/*"icon_class1001"*/, v8);
    sub_B0D8A4(&StringLiteral_19348/*"icon_class002"*/, v9);
    sub_B0D8A4(&StringLiteral_19351/*"icon_class005"*/, v10);
    sub_B0D8A4(&StringLiteral_19349/*"icon_class003"*/, v11);
    byte_4217095 = 1;
  }
  v12 = sub_B0D8BC(string___TypeInfo, 9LL);
  if ( !v12 )
    sub_B0D97C(0LL);
  v19 = (System_Int32_array **)v12;
  v20 = StringLiteral_19354/*"icon_class1001"*/;
  if ( StringLiteral_19354/*"icon_class1001"*/ )
  {
    v20 = sub_B0D964(StringLiteral_19354/*"icon_class1001"*/, *(_QWORD *)&(*v19)->m_Items[9]);
    if ( !v20 )
      goto LABEL_51;
    v21 = (System_Int32_array **)StringLiteral_19354/*"icon_class1001"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( !*((_DWORD *)v19 + 6) )
    goto LABEL_50;
  v19[4] = (System_Int32_array *)v21;
  sub_B0D840((BattleServantConfConponent_o *)(v19 + 4), v21, v13, v14, v15, v16, v17, v18);
  v20 = StringLiteral_19347/*"icon_class001"*/;
  if ( StringLiteral_19347/*"icon_class001"*/ )
  {
    v20 = sub_B0D964(StringLiteral_19347/*"icon_class001"*/, *(_QWORD *)&(*v19)->m_Items[9]);
    if ( !v20 )
      goto LABEL_51;
    v28 = (System_Int32_array **)StringLiteral_19347/*"icon_class001"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( *((_DWORD *)v19 + 6) <= 1u )
    goto LABEL_50;
  v19[5] = (System_Int32_array *)v28;
  sub_B0D840((BattleServantConfConponent_o *)(v19 + 5), v28, v22, v23, v24, v25, v26, v27);
  v20 = StringLiteral_19348/*"icon_class002"*/;
  if ( StringLiteral_19348/*"icon_class002"*/ )
  {
    v20 = sub_B0D964(StringLiteral_19348/*"icon_class002"*/, *(_QWORD *)&(*v19)->m_Items[9]);
    if ( !v20 )
      goto LABEL_51;
    v35 = (System_Int32_array **)StringLiteral_19348/*"icon_class002"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( *((_DWORD *)v19 + 6) <= 2u )
    goto LABEL_50;
  v19[6] = (System_Int32_array *)v35;
  sub_B0D840((BattleServantConfConponent_o *)(v19 + 6), v35, v29, v30, v31, v32, v33, v34);
  v20 = StringLiteral_19349/*"icon_class003"*/;
  if ( StringLiteral_19349/*"icon_class003"*/ )
  {
    v20 = sub_B0D964(StringLiteral_19349/*"icon_class003"*/, *(_QWORD *)&(*v19)->m_Items[9]);
    if ( !v20 )
      goto LABEL_51;
    v42 = (System_Int32_array **)StringLiteral_19349/*"icon_class003"*/;
  }
  else
  {
    v42 = 0LL;
  }
  if ( *((_DWORD *)v19 + 6) <= 3u )
    goto LABEL_50;
  v19[7] = (System_Int32_array *)v42;
  sub_B0D840((BattleServantConfConponent_o *)(v19 + 7), v42, v36, v37, v38, v39, v40, v41);
  v20 = StringLiteral_19350/*"icon_class004"*/;
  if ( StringLiteral_19350/*"icon_class004"*/ )
  {
    v20 = sub_B0D964(StringLiteral_19350/*"icon_class004"*/, *(_QWORD *)&(*v19)->m_Items[9]);
    if ( !v20 )
      goto LABEL_51;
    v49 = (System_Int32_array **)StringLiteral_19350/*"icon_class004"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( *((_DWORD *)v19 + 6) <= 4u )
    goto LABEL_50;
  v19[8] = (System_Int32_array *)v49;
  sub_B0D840((BattleServantConfConponent_o *)(v19 + 8), v49, v43, v44, v45, v46, v47, v48);
  v20 = StringLiteral_19351/*"icon_class005"*/;
  if ( StringLiteral_19351/*"icon_class005"*/ )
  {
    v20 = sub_B0D964(StringLiteral_19351/*"icon_class005"*/, *(_QWORD *)&(*v19)->m_Items[9]);
    if ( !v20 )
      goto LABEL_51;
    v56 = (System_Int32_array **)StringLiteral_19351/*"icon_class005"*/;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *((_DWORD *)v19 + 6) <= 5u )
    goto LABEL_50;
  v19[9] = (System_Int32_array *)v56;
  sub_B0D840((BattleServantConfConponent_o *)(v19 + 9), v56, v50, v51, v52, v53, v54, v55);
  v20 = StringLiteral_19352/*"icon_class006"*/;
  if ( StringLiteral_19352/*"icon_class006"*/ )
  {
    v20 = sub_B0D964(StringLiteral_19352/*"icon_class006"*/, *(_QWORD *)&(*v19)->m_Items[9]);
    if ( !v20 )
      goto LABEL_51;
    v63 = (System_Int32_array **)StringLiteral_19352/*"icon_class006"*/;
  }
  else
  {
    v63 = 0LL;
  }
  if ( *((_DWORD *)v19 + 6) <= 6u )
    goto LABEL_50;
  v19[10] = (System_Int32_array *)v63;
  sub_B0D840((BattleServantConfConponent_o *)(v19 + 10), v63, v57, v58, v59, v60, v61, v62);
  v20 = StringLiteral_19353/*"icon_class007"*/;
  if ( StringLiteral_19353/*"icon_class007"*/ )
  {
    v20 = sub_B0D964(StringLiteral_19353/*"icon_class007"*/, *(_QWORD *)&(*v19)->m_Items[9]);
    if ( !v20 )
      goto LABEL_51;
    v70 = (System_Int32_array **)StringLiteral_19353/*"icon_class007"*/;
  }
  else
  {
    v70 = 0LL;
  }
  if ( *((_DWORD *)v19 + 6) <= 7u )
    goto LABEL_50;
  v19[11] = (System_Int32_array *)v70;
  sub_B0D840((BattleServantConfConponent_o *)(v19 + 11), v70, v64, v65, v66, v67, v68, v69);
  v20 = StringLiteral_19355/*"icon_class1002"*/;
  if ( StringLiteral_19355/*"icon_class1002"*/ )
  {
    v20 = sub_B0D964(StringLiteral_19355/*"icon_class1002"*/, *(_QWORD *)&(*v19)->m_Items[9]);
    if ( v20 )
    {
      v77 = (System_Int32_array **)StringLiteral_19355/*"icon_class1002"*/;
      goto LABEL_48;
    }
LABEL_51:
    v88 = sub_B0D99C(v20);
    sub_B0D948(v88, 0LL);
  }
  v77 = 0LL;
LABEL_48:
  if ( *((_DWORD *)v19 + 6) <= 8u )
  {
LABEL_50:
    v87 = sub_B0D9A8(v20);
    sub_B0D948(v87, 0LL);
  }
  v19[12] = (System_Int32_array *)v77;
  sub_B0D840((BattleServantConfConponent_o *)(v19 + 12), v77, v71, v72, v73, v74, v75, v76);
  static_fields = (BattleServantConfConponent_o *)SupportSelectItemDraw_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v19;
  sub_B0D840(static_fields, v19, v79, v80, v81, v82, v83, v84);
  v85 = SupportSelectItemDraw_TypeInfo;
  SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_WIDTH = 156;
  v85->static_fields->DATA_LOST_MASK_HEIGHT = 258;
  v86 = v85->static_fields;
  *(_QWORD *)&v86->DATA_LOST_MASK_POSITION.fields.x = 0x43410000BF800000LL;
  v86->DATA_LOST_MASK_POSITION.fields.z = 0.0;
}


void __fastcall SupportSelectItemDraw___ctor(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SupportSelectItemDraw__ActivateEquipOnly(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Transform_o *transform; // x0
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v12; // x8
  unsigned __int64 v13; // x10
  System_Collections_IEnumerator_c **v14; // x11
  __int64 v15; // x0
  UnityEngine_Component_o *v16; // x0
  UnityEngine_Component_o *v17; // x21
  __int64 v18; // x9
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Component_o *equipRootObj; // x0
  UnityEngine_Object_o *v21; // x23
  UnityEngine_GameObject_o *v22; // x0
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x19
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0

  if ( (byte_4217094 & 1) == 0 )
  {
    sub_B0D8A4(&System_IDisposable_TypeInfo, method);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_Transform_TypeInfo, v5);
    byte_4217094 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B0D97C(0LL);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
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
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1].method;
    }
    else
    {
LABEL_16:
      v15 = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    v17 = v16;
    if ( !v16 )
      goto LABEL_38;
    v18 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[v18 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B0DC70(v16);
LABEL_38:
      sub_B0D97C(v16);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
    equipRootObj = (UnityEngine_Component_o *)this->fields.equipRootObj;
    if ( !equipRootObj )
      sub_B0D97C(0LL);
    v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(equipRootObj, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(gameObject, v21, 0LL) )
    {
      v22 = UnityEngine_Component__get_gameObject(v17, 0LL);
      if ( !v22 )
        sub_B0D97C(0LL);
      UnityEngine_GameObject__SetActive(v22, 0, 0LL);
    }
  }
  v23 = sub_B0D964(Enumerator, System_IDisposable_TypeInfo);
  if ( v23 )
  {
    v24 = *(_QWORD *)v23;
    v25 = v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v26 = 0LL;
      v27 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_33;
      }
      v28 = v24 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_33:
      v28 = sub_AA67A0(v23, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
  }
}


void __fastcall SupportSelectItemDraw__Awake(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *raritySprite; // x20
  void *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct UISprite_o *v15; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *baseSprite; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct UISprite_o *v24; // x8
  struct UIAtlas_o *v25; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct UISprite_o *v33; // x8
  struct UIAtlas_o *v34; // x1
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421708C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_421708C = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    transform = this->fields.raritySprite;
    if ( !transform )
      goto LABEL_42;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_42;
    this->fields.baseRarityPosition = UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)transform,
                                        0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    transform = this->fields.restrictionWarningMessageLabel;
    if ( !transform )
      goto LABEL_42;
    this->fields.restrictionWarningMessageWidth = *((_DWORD *)transform + 40);
    UIWidget__set_width((UIWidget_o *)transform, 1000, 0LL);
    transform = this->fields.restrictionWarningBase;
    if ( !transform )
      goto LABEL_42;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_42;
    this->fields.restrictionWarningCenter = UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)transform,
                                              0LL);
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    transform = this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_42;
    this->fields.restrictionMaskMessageWidth = *((_DWORD *)transform + 40);
    UIWidget__set_width((UIWidget_o *)transform, 1000, 0LL);
    transform = this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_42;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_42;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    v15 = this->fields.restrictionMaskSprite;
    this->fields.restrictionWarningCenter.fields.x = localPosition.fields.x;
    this->fields.restrictionWarningCenter.fields.z = localPosition.fields.z;
    this->fields.restrictionWarningCenter.fields.y = localPosition.fields.y + -55.0;
    if ( !v15 )
      goto LABEL_42;
    mAtlas = v15->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.maskSpriteDefaultAtlas,
      (System_Int32_array **)mAtlas,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    transform = this->fields.restrictionMaskSprite;
    if ( !transform )
      goto LABEL_42;
    this->fields.maskSpriteDefaultWidth = *((_DWORD *)transform + 40);
    this->fields.maskSpriteDefaultHeight = *((_DWORD *)transform + 41);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_42;
    this->fields.maskSpriteDefaultPosition = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)transform,
                                               0LL);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (void *)UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v24 = this->fields.baseSprite;
    if ( !v24 )
      goto LABEL_42;
    v25 = v24->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = v25;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.baseDefaultUIAtlas,
      (System_Int32_array **)v25,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (void *)UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v33 = this->fields.base2Sprite;
    if ( v33 )
    {
      v34 = v33->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v34;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.base2DefaultUIAtlas,
        (System_Int32_array **)v34,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      goto LABEL_41;
    }
LABEL_42:
    sub_B0D97C(transform);
  }
LABEL_41:
  SupportSelectItemDraw__SetActiveDragSwapGuide(this, 0, (const MethodInfo *)v27);
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                  v35,
                                                                                                  v36);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v37;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.switchSkillUIList,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
}


void __fastcall SupportSelectItemDraw__ClearItem(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *sortieMaskSprite; // x20
  const MethodInfo *v6; // x1

  if ( (byte_421708D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421708D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantNarrowTexture;
  if ( !gameObject )
    goto LABEL_22;
  UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)gameObject, 0LL);
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_22;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_22;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.sortieMaskSprite;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        goto LABEL_21;
      }
    }
LABEL_22:
    sub_B0D97C(gameObject);
  }
LABEL_21:
  SupportSelectItemDraw__ClearMessage(this, v6);
}


void __fastcall SupportSelectItemDraw__ClearMessage(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_421708F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_421708F = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_20;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          return;
        }
      }
    }
LABEL_20:
    sub_B0D97C(gameObject);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetActiveDragSwapGuide(
        SupportSelectItemDraw_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragSwapGuideObj; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4217092 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, flag);
    byte_4217092 = 1;
  }
  dragSwapGuideObj = (UnityEngine_Object_o *)this->fields.dragSwapGuideObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(dragSwapGuideObj, 0LL, 0LL) )
  {
    v6 = this->fields.dragSwapGuideObj;
    if ( !v6 )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(v6, flag, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetEquipAlpha(
        SupportSelectItemDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_Object_o *equipRootObj; // x20
  struct UIWidget_o *v6; // x0

  v3 = *(long double *)&alpha;
  if ( (byte_4217093 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217093 = 1;
  }
  equipRootObj = (UnityEngine_Object_o *)this->fields.equipRootObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equipRootObj, 0LL, 0LL) )
  {
    v6 = this->fields.equipRootObj;
    if ( !v6 )
      sub_B0D97C(0LL);
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, long double))v6->klass->vtable._8_set_alpha.method)(
      v6,
      v6->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetItem(
        SupportSelectItemDraw_o *this,
        SupportServantData_o *supportServantData,
        int32_t classPos,
        EventCampaignEntity_array *eventFriendPoints,
        int32_t mode,
        const MethodInfo *method)
{
  SupportServantData_o *v7; // x26
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
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
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 gameObject; // x0
  UnityEngine_Object_o *skillInfoUiWidget; // x20
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x20
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x24
  struct EquipTargetInfo_o *equipTarget1; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v56; // x21
  __int64 v57; // x20
  __int64 v58; // x23
  System_Int32_array *v59; // x23
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  UserServantEntity_o *v61; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v62; // x21
  __int64 v63; // x20
  __int64 v64; // x23
  int32_t svtId; // w19
  struct ServantLeaderInfo_o *servantLeaderInfo; // x28
  int32_t atk; // w8
  int hp; // w8
  UISprite_o *backClassIcon; // x21
  __int64 v70; // x8
  UnityEngine_Object_o *v71; // x20
  UISprite_o *v72; // x20
  UIAtlas_o *v73; // x21
  UnityEngine_Object_o *v74; // x20
  UISprite_o *v75; // x20
  UIAtlas_o *v76; // x21
  UnityEngine_Object_o *v77; // x20
  UnityEngine_Object_o *v78; // x20
  UnityEngine_Object_o *v79; // x20
  UnityEngine_Object_o *v80; // x20
  UnityEngine_Object_o *v81; // x20
  UnityEngine_Object_o *v82; // x20
  const MethodInfo *v83; // x1
  UnityEngine_Object_o *v84; // x20
  UnityEngine_Object_o *v85; // x20
  UnityEngine_Object_o *v86; // x20
  UnityEngine_Object_o *v87; // x20
  UISprite_o *v88; // x21
  __int64 v89; // x20
  __int64 v90; // x23
  int32_t v91; // w20
  UnityEngine_Object_o *v92; // x20
  int v93; // w19
  bool v94; // cc
  UserServantEntity_o *v95; // x21
  int v96; // w8
  int v97; // w8
  UnityEngine_Object_o *v98; // x20
  bool v99; // w1
  int32_t Rarity; // w19
  int32_t FrameType; // w22
  int32_t CardImageLimitCount; // w21
  EventUpValSetupInfo_o *eventSetupInfo; // x2
  struct System_Int32_array *eventIdList; // x8
  bool EventUpVal_28150548; // w24
  WarQuestSelectionMaster_o *v106; // x25
  __int64 v107; // x1
  __int64 v108; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v109; // x23
  struct EventUpValSetupInfo_o *v110; // x8
  struct System_Int32_array *v111; // x19
  __int64 v112; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v113; // x24
  unsigned __int64 v114; // x26
  int32_t v115; // w27
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 v117; // x1
  __int64 v118; // x2
  int32_t eventSvtPoint; // w20
  __int64 v120; // x21
  __int64 v121; // x24
  int32_t v122; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  __int64 v124; // x1
  __int64 v125; // x2
  int32_t svtPointRank; // w25
  EventMargeItemUpValInfo_o *v127; // x21
  EventPersonalMargeUpValInfo_o *v128; // x25
  __int64 v129; // x8
  __int64 v130; // x25
  unsigned __int64 v131; // x20
  int v132; // w24
  WarBoardUiData_SaveData_array *v133; // x0
  System_Collections_Generic_IEnumerable_T__o *v134; // x21
  _BOOL4 UniqueSvtRestriction; // w25
  _BOOL4 IsRestrictionServantIndividuality; // w20
  int v137; // w20
  int32_t v138; // w21
  int v139; // w25
  int32_t v140; // w24
  System_Int32_array *v141; // x19
  QuestRestrictionInfo_o *v142; // x22
  __int64 v143; // x20
  __int64 v144; // x23
  int32_t v145; // w0
  int32_t v146; // w20
  int32_t v147; // w23
  bool IsDataLost; // w26
  int32_t v149; // w21
  int32_t v150; // w0
  int v151; // w8
  UserServantEntity_o *v152; // x20
  __int128 v153; // q1
  int64_t v154; // x20
  bool EventUpVal_21266016; // w19
  DataMasterBase_WarMaster__WarEntity__int__o *v156; // x28
  EventServantPointRankMaster_o *v157; // x22
  __int64 v158; // x1
  __int64 v159; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v160; // x21
  struct EventUpValSetupInfo_o *v161; // x8
  struct System_Int32_array *v162; // x23
  __int64 v163; // x8
  unsigned __int64 v164; // x26
  int32_t v165; // w27
  __int64 v166; // x1
  __int64 v167; // x2
  __int128 v168; // q0
  int64_t v169; // x20
  int32_t v170; // w4
  int32_t BuddyPoint; // w25
  int32_t v172; // w0
  EventServantPointRankEntity_o *v173; // x0
  __int64 v174; // x1
  __int64 v175; // x2
  int32_t v176; // w24
  EventMargeItemUpValInfo_o *v177; // x20
  EventPersonalMargeUpValInfo_o *v178; // x25
  __int64 v179; // x8
  __int64 v180; // x25
  unsigned __int64 v181; // x20
  _BOOL4 v182; // w0
  UnityEngine_Object_o *servantClassIcon; // x20
  UnityEngine_Object_o *levelLabel; // x20
  UILabel_o *v185; // x20
  UnityEngine_Object_o *raritySprite; // x20
  System_Int32_array *v187; // x28
  bool v188; // w23
  int v189; // w26
  int32_t v190; // w24
  int32_t v191; // w20
  int32_t v192; // w22
  System_String_o *Icon_21504332; // x21
  int32_t RarityIcon; // w20
  int32_t v195; // w8
  UISprite_o *v196; // x22
  float v197; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *skillListTreasureDevice; // x20
  SkillListTreasureDeviceComponent_o *v201; // x20
  SkillInfo_array *v202; // x21
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x0
  UnityEngine_Object_o *appendSkillList; // x20
  AppendSkillListComponent_o *v205; // x20
  SkillInfo_array *v206; // x21
  struct System_Collections_Generic_List_UIWidget__o *v207; // x0
  UnityEngine_Object_o *switchSkillInfo; // x20
  struct System_Collections_Generic_List_UIWidget__o *v209; // x0
  SwitchUIWidgetComponent_o *v210; // x20
  UnityEngine_Object_o *svtCommandCardList; // x20
  UnityEngine_Object_o *attackLabel; // x20
  int v213; // s0
  UILabel_o *v217; // x20
  UnityEngine_Object_o *hpLabel; // x20
  int v219; // s0
  UILabel_o *v223; // x20
  UnityEngine_Object_o *baseSprite; // x20
  UISprite_o *v225; // x21
  UIAtlas_o *baseDefaultUIAtlas; // x20
  UnityEngine_Object_o *base2Sprite; // x20
  UISprite_o *v228; // x21
  UIAtlas_o *base2DefaultUIAtlas; // x20
  const MethodInfo *v230; // x4
  UnityEngine_Object_o *sortieMaskSprite; // x20
  System_String_o *v232; // x0
  System_String_o *v233; // x1
  bool v234; // w2
  SupportSelectItemDraw_o *v235; // x0
  bool v236; // w3
  bool v237; // w19
  UnityEngine_Object_o *v238; // x20
  const MethodInfo *v239; // x1
  bool v240; // w1
  System_String_o *v241; // x0
  const MethodInfo *v242; // x3
  System_String_o *v243; // x20
  Il2CppObject *v244; // x0
  UnityEngine_Object_o *v245; // x20
  UnityEngine_Object_o *friendPointBonus; // x20
  UnityEngine_Object_o *friendPointBonusBase; // x20
  UnityEngine_Object_o *eventUpValIcon; // x20
  __int64 v249; // x1
  __int64 v250; // x2
  bool v251; // w8
  __int64 v252; // x8
  System_Int32_array *v253; // x28
  unsigned int v254; // w19
  int32_t v255; // w23
  int32_t v256; // w21
  Il2CppClass **v257; // x24
  Il2CppClass *v258; // x8
  __int64 *v259; // x24
  Il2CppClass *v260; // t1
  __int64 v261; // x9
  __int64 v262; // x10
  _BOOL4 v263; // w10
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v264; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v265; // x24
  __int64 v266; // x1
  __int64 v267; // x2
  EventMargeItemUpValInfo_o *v268; // x20
  System_Int32_array *v269; // x9
  UISprite_o *equipSprite; // x21
  __int64 v271; // x23
  __int64 v272; // x20
  System_Int32_array *v273; // x28
  int32_t v274; // w20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  __int64 v276; // x20
  __int64 v277; // x21
  int v278; // w20
  UnityEngine_Object_o *v279; // x20
  UserServantLeaderEntity_o *v280; // x19
  struct ServantLeaderInfo_o *v281; // x8
  __int64 v282; // x20
  __int64 v283; // x21
  int32_t v284; // w21
  int32_t v285; // w0
  UnityEngine_Object_o *v286; // x20
  bool v287; // w1
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v289; // x20
  __int64 v290; // x21
  int32_t v291; // w3
  int32_t equipSvtId; // w4
  UnityEngine_Object_o *bounusIcon; // x20
  UnityEngine_Object_o *baseButton; // x20
  UnityEngine_Object_o *pushSprite; // x20
  UnityEngine_Component_o *v296; // x0
  int64_t pushUserServantId; // x8
  __int64 v298; // x0
  int32_t TimesToRestart; // [xsp+8h] [xbp-1A8h]
  int32_t classId; // [xsp+Ch] [xbp-1A4h]
  System_Int32_array *cardParams; // [xsp+10h] [xbp-1A0h]
  _BOOL4 IsUniqueIndividualityRestriction; // [xsp+18h] [xbp-198h]
  _BOOL4 v303; // [xsp+1Ch] [xbp-194h]
  int32_t v304; // [xsp+1Ch] [xbp-194h]
  System_Int32_array *codeIds; // [xsp+20h] [xbp-190h]
  System_Int32_array *codeIdsa; // [xsp+20h] [xbp-190h]
  System_Int32_array *codeIdsb; // [xsp+20h] [xbp-190h]
  int32_t treasureDeviceNum; // [xsp+28h] [xbp-188h]
  int32_t strengthStatus; // [xsp+2Ch] [xbp-184h]
  int32_t lv; // [xsp+30h] [xbp-180h]
  int adjustAtk; // [xsp+34h] [xbp-17Ch]
  int adjustHp; // [xsp+38h] [xbp-178h]
  int32_t v313; // [xsp+3Ch] [xbp-174h]
  int32_t v314; // [xsp+3Ch] [xbp-174h]
  SupportSelectItemDraw_o *v315; // [xsp+40h] [xbp-170h]
  SupportSelectItemDraw_o *v316; // [xsp+40h] [xbp-170h]
  bool v317; // [xsp+48h] [xbp-168h]
  _BOOL4 QuestRestriction; // [xsp+48h] [xbp-168h]
  int32_t limitCount; // [xsp+50h] [xbp-160h]
  int exceedCount; // [xsp+54h] [xbp-15Ch]
  WarEntity_o *v321; // [xsp+58h] [xbp-158h]
  struct EquipTargetInfo_o *v323; // [xsp+68h] [xbp-148h]
  System_Collections_Generic_IEnumerable_T__o *v324; // [xsp+70h] [xbp-140h]
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // [xsp+70h] [xbp-140h]
  UserEventServantPointMaster_o *v326; // [xsp+70h] [xbp-140h]
  UserServantLeaderEntity_o *v327; // [xsp+78h] [xbp-138h]
  EventServantPointRankMaster_o *v328; // [xsp+80h] [xbp-130h]
  EventServantPointRankMaster_o *v329; // [xsp+80h] [xbp-130h]
  _BOOL4 v330; // [xsp+80h] [xbp-130h]
  ServantEntity_o *servantEntity; // [xsp+88h] [xbp-128h]
  SupportServantData_o *v332; // [xsp+90h] [xbp-120h]
  bool v333; // [xsp+90h] [xbp-120h]
  int32_t value; // [xsp+9Ch] [xbp-114h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v335; // [xsp+A0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v336; // [xsp+C0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v337; // [xsp+E0h] [xbp-D0h] BYREF
  UserEventServantPointEntity_o *entity; // [xsp+108h] [xbp-A8h] BYREF
  SkillInfo_array *v339; // [xsp+110h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+118h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+120h] [xbp-90h] BYREF
  int v342; // [xsp+12Ch] [xbp-84h] BYREF
  __int64 v343[2]; // [xsp+130h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+148h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v345; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v346; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v347; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v348; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v349; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v350; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v351; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v352; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v353; // 0:x0.16
  UnityEngine_Vector3_o v354; // 0:s0.4,4:s1.4,8:s2.4

  v7 = supportServantData;
  if ( (byte_421708E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, supportServantData);
    sub_B0D8A4(&AtlasManager_TypeInfo, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventDetailMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantExceedMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v18);
    sub_B0D8A4(&DataManager_TypeInfo, v19);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v21);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v22);
    sub_B0D8A4(&EventMargeItemUpValInfo_TypeInfo, v23);
    sub_B0D8A4(&EventPersonalMargeUpValInfo_TypeInfo, v24);
    sub_B0D8A4(&int_TypeInfo, v25);
    sub_B0D8A4(&long___TypeInfo, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__Add__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__Clear__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v31);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v32);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___67879744, v33);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v34);
    sub_B0D8A4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v35);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v36);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v37);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v38);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v39);
    sub_B0D8A4(&Rarity_TypeInfo, v40);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v42);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v43);
    sub_B0D8A4(&SupportSelectItemDraw_TypeInfo, v44);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v45);
    sub_B0D8A4(&StringLiteral_11664/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v46);
    sub_B0D8A4(&StringLiteral_10387/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v47);
    sub_B0D8A4(&StringLiteral_6410/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v48);
    sub_B0D8A4(&StringLiteral_345/*"#,0"*/, v49);
    sub_B0D8A4(&StringLiteral_1/*""*/, v50);
    byte_421708E = 1;
  }
  eventUpVallInfo = 0LL;
  v343[0] = 0LL;
  v342 = 0;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  entity = 0LL;
  v339 = 0LL;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_592;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (__int64)this->fields.switchSkillUIList;
  if ( !gameObject )
    goto LABEL_592;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)gameObject,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.skillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_592;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
      0.0);
  }
  appendSkillInfoUiWidget = (UnityEngine_Object_o *)this->fields.appendSkillInfoUiWidget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)this->fields.appendSkillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
                   gameObject,
                   *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
                   0.0);
  }
  if ( !v7 )
    goto LABEL_592;
  UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(v7, classPos, 0LL);
  eventUpVallInfo = 0LL;
  gameObject = SupportServantData__getEquip(v7, classPos, 0LL);
  v327 = UserServantLeaderEntity;
  if ( !gameObject )
  {
    v59 = 0LL;
    goto LABEL_38;
  }
  if ( !v7->fields.isFriendInfo )
  {
    gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_592;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)gameObject, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    gameObject = SupportServantData__getEquip(v7, classPos, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_592;
    v61 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
            MasterData_WarQuestSelectionMaster,
            gameObject,
            (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !v61 )
      goto LABEL_592;
    v62 = (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject;
    v64 = *(_QWORD *)&v61->fields.svtId.fields.currentCryptoKey;
    v63 = *(_QWORD *)&v61->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v346.fields.currentCryptoKey = v64;
    *(_QWORD *)&v346.fields.fakeValue = v63;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v346, 0LL);
    if ( !v62 )
      goto LABEL_592;
    gameObject = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v62,
                            gameObject,
                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    v59 = (System_Int32_array *)v61;
LABEL_38:
    equipTarget1 = 0LL;
    v321 = (WarEntity_o *)gameObject;
    if ( !UserServantLeaderEntity )
      goto LABEL_48;
    goto LABEL_39;
  }
  if ( !UserServantLeaderEntity )
    goto LABEL_592;
  equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
  gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_592;
  gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !equipTarget1 )
    goto LABEL_592;
  v56 = (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject;
  v58 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v57 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v345.fields.currentCryptoKey = v58;
  *(_QWORD *)&v345.fields.fakeValue = v57;
  gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v345, 0LL);
  if ( !v56 )
    goto LABEL_592;
  v321 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
           v56,
           gameObject,
           (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v59 = 0LL;
LABEL_39:
  if ( UserServantLeaderEntity->fields.userSvtId )
  {
    svtId = UserServantLeaderEntity->fields.svtId;
    gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                            svtId,
                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !gameObject )
      goto LABEL_592;
    servantEntity = (ServantEntity_o *)gameObject;
    v332 = v7;
    v323 = equipTarget1;
    value = svtId;
    classId = *(_DWORD *)(gameObject + 80);
    if ( v7->fields.isFriendInfo )
    {
      servantLeaderInfo = UserServantLeaderEntity->fields.servantLeaderInfo;
      v315 = this;
      if ( !servantLeaderInfo )
        goto LABEL_592;
      ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(servantLeaderInfo, 0LL);
      HIDWORD(v343[0]) = servantLeaderInfo->fields.lv;
      atk = servantLeaderInfo->fields.atk;
      LODWORD(v343[0]) = atk;
      if ( v323 )
      {
        LODWORD(v343[0]) = v323->fields.atk + atk;
        adjustAtk = servantLeaderInfo->fields.adjustAtk;
        hp = v323->fields.hp + servantLeaderInfo->fields.hp;
      }
      else
      {
        adjustAtk = servantLeaderInfo->fields.adjustAtk;
        hp = servantLeaderInfo->fields.hp;
      }
      v342 = hp;
      adjustHp = servantLeaderInfo->fields.adjustHp;
      Rarity = ServantLeaderInfo__getRarity(servantLeaderInfo, 0LL);
      exceedCount = servantLeaderInfo->fields.exceedCount;
      FrameType = ServantLeaderInfo__getFrameType(servantLeaderInfo, 0LL);
      CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(servantLeaderInfo, 0LL);
      ServantLeaderInfo__getSkillInfo(servantLeaderInfo, &skillInfoList, 0LL);
      gameObject = ServantLeaderInfo__getTreasureDeviceInfo(servantLeaderInfo, &tdInfo, 0LL);
      if ( !tdInfo )
        goto LABEL_592;
      lv = tdInfo->fields.lv;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      strengthStatus = tdInfo->fields.strengthStatus;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_28164780(servantLeaderInfo, &v339, 0, 0LL);
      eventSetupInfo = v7->fields.eventSetupInfo;
      v313 = Rarity;
      limitCount = CardImageLimitCount;
      if ( !eventSetupInfo )
        goto LABEL_212;
      eventIdList = eventSetupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_592;
      if ( *(_QWORD *)&eventIdList->max_length )
      {
        codeIds = v59;
        EventUpVal_28150548 = ServantLeaderInfo__getEventUpVal_28150548(
                                servantLeaderInfo,
                                &eventUpVallInfo,
                                eventSetupInfo,
                                0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventDetailMaster___);
        v106 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
        v109 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v107, v108);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v109,
          (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
        v110 = v7->fields.eventSetupInfo;
        if ( !v110 )
          goto LABEL_592;
        v111 = v110->fields.eventIdList;
        v328 = (EventServantPointRankMaster_o *)v106;
        v317 = EventUpVal_28150548;
        if ( !v111 )
          goto LABEL_592;
        v112 = *(_QWORD *)&v111->max_length;
        v113 = Master_WarQuestSelectionMaster;
        if ( (int)v112 >= 1 )
        {
          v114 = 0LL;
          while ( 1 )
          {
            if ( v114 >= (unsigned int)v112 )
              goto LABEL_593;
            v115 = v111->m_Items[v114 + 1];
            questRestrictionInfo = v332->fields.questRestrictionInfo;
            if ( !questRestrictionInfo || questRestrictionInfo->fields.eventId == v115 )
            {
              if ( !v113 )
                goto LABEL_592;
              gameObject = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v113,
                                      v115,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
              if ( !gameObject
                || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0LL),
                    (gameObject & 1) == 0) )
              {
                if ( !v328 )
                  goto LABEL_592;
                if ( EventServantPointRankMaster__IsEnableEvent(v328, v115, 0LL) )
                {
                  eventSvtPoint = servantLeaderInfo->fields.eventSvtPoint;
                  v121 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                  v120 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v348.fields.currentCryptoKey = v121;
                  *(_QWORD *)&v348.fields.fakeValue = v120;
                  v122 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v348, 0LL);
                  EnableEntity = EventServantPointRankMaster__GetEnableEntity(v328, v115, eventSvtPoint, v122, 0LL);
                  if ( EnableEntity )
                    svtPointRank = EnableEntity->fields.svtPointRank;
                  else
                    svtPointRank = 0;
                  v113 = Master_WarQuestSelectionMaster;
                  v127 = (EventMargeItemUpValInfo_o *)sub_B0D974(EventMargeItemUpValInfo_TypeInfo, v124, v125);
                  EventMargeItemUpValInfo___ctor_26624100(v127, v115, 0LL);
                  if ( !v127 )
                    goto LABEL_592;
                  EventMargeItemUpValInfo__SetServantPointInfo(
                    v127,
                    servantLeaderInfo->fields.eventSvtPoint,
                    svtPointRank,
                    1,
                    0LL);
                  if ( !v109 )
                    goto LABEL_592;
                  System_Collections_Generic_List_XWeaponTrail_Element___Insert(
                    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v109,
                    0,
                    (XWeaponTrail_Element_o *)v127,
                    (const MethodInfo_2FC68FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                }
                v128 = (EventPersonalMargeUpValInfo_o *)sub_B0D974(EventPersonalMargeUpValInfo_TypeInfo, v117, v118);
                EventPersonalMargeUpValInfo___ctor(v128, v115, servantEntity, 0LL);
                gameObject = (__int64)eventUpVallInfo;
                if ( !eventUpVallInfo )
                  goto LABEL_592;
                gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
                if ( !v128 )
                  goto LABEL_592;
                EventPersonalMargeUpValInfo__Add(v128, (EventDropItemUpValInfo_array *)gameObject, 0LL);
                gameObject = EventPersonalMargeUpValInfo__IsEmpty(v128, 0LL);
                if ( (gameObject & 1) == 0 )
                {
                  gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v128, 0LL);
                  if ( !gameObject )
                    goto LABEL_592;
                  v129 = *(_QWORD *)(gameObject + 24);
                  v130 = gameObject;
                  if ( (int)v129 >= 1 )
                    break;
                }
              }
            }
LABEL_209:
            LODWORD(v112) = v111->max_length;
            if ( (__int64)++v114 >= (int)v112 )
              goto LABEL_210;
          }
          v131 = 0LL;
          while ( v131 < (unsigned int)v129 )
          {
            if ( !v109 )
              goto LABEL_592;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v109,
              *(EventMissionProgressRequest_Argument_ProgressData_o **)(v130 + 32 + 8 * v131),
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
            LODWORD(v129) = *(_DWORD *)(v130 + 24);
            if ( (__int64)++v131 >= (int)v129 )
              goto LABEL_209;
          }
          goto LABEL_593;
        }
LABEL_210:
        if ( !v109 )
          goto LABEL_592;
        v132 = v317;
        v133 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v109,
                 (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
        v7 = v332;
        v59 = codeIds;
        v134 = (System_Collections_Generic_IEnumerable_T__o *)v133;
      }
      else
      {
LABEL_212:
        v134 = 0LL;
        v132 = 0;
      }
      codeIdsa = ServantLeaderInfo__getCommandCodeIdList(servantLeaderInfo, 0LL);
      cardParams = servantLeaderInfo->fields.commandCardParam;
      QuestRestriction = ServantLeaderInfo__getQuestRestriction(servantLeaderInfo, v7->fields.questRestrictionInfo, 0LL);
      UniqueSvtRestriction = ServantLeaderInfo__getUniqueSvtRestriction(
                               servantLeaderInfo,
                               v7->fields.questRestrictionInfo,
                               0LL);
      v324 = v134;
      IsUniqueIndividualityRestriction = ServantLeaderInfo__IsUniqueIndividualityRestriction(
                                           servantLeaderInfo,
                                           v7->fields.questRestrictionInfo,
                                           0LL);
      v303 = UniqueSvtRestriction;
      if ( ServantLeaderInfo__IsSlotRestriction(servantLeaderInfo, v7->fields.questRestrictionInfo, 0LL) )
      {
        IsRestrictionServantIndividuality = 1;
      }
      else
      {
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        gameObject = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_592;
        v137 = *(_DWORD *)(gameObject + 48);
        gameObject = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_592;
        if ( v137 < 1 )
          goto LABEL_228;
        if ( !v7->fields.questRestrictionInfo )
          goto LABEL_592;
        v138 = *(_DWORD *)(gameObject + 52);
        if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_30625648(v7->fields.questRestrictionInfo, v138, 0LL) )
        {
          v139 = v132;
          v140 = FrameType;
          v141 = v59;
          v142 = v7->fields.questRestrictionInfo;
          v144 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
          v143 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v349.fields.currentCryptoKey = v144;
          *(_QWORD *)&v349.fields.fakeValue = v143;
          v145 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v349, 0LL);
          v146 = servantLeaderInfo->fields.limitCount;
          v147 = v145;
          gameObject = ServantLeaderInfo__getDispLimitCount(servantLeaderInfo, 0LL);
          if ( !v142 )
            goto LABEL_592;
          IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                v142,
                                                v147,
                                                v146,
                                                gameObject,
                                                v138,
                                                1,
                                                0LL);
          v59 = v141;
          FrameType = v140;
          v132 = v139;
        }
        else
        {
LABEL_228:
          IsRestrictionServantIndividuality = 0;
        }
      }
      IsDataLost = ServantLeaderInfo__IsDataLost(servantLeaderInfo, v332->fields.questRestrictionInfo, 0LL);
      TimesToRestart = ServantLeaderInfo__GetTimesToRestart(servantLeaderInfo, v332->fields.questRestrictionInfo, 0LL);
      this = v315;
      equipTarget1 = v323;
      svtId = value;
      v149 = v313;
    }
    else
    {
      gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_592;
      gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !gameObject )
        goto LABEL_592;
      gameObject = (__int64)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                              (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)gameObject,
                              UserServantLeaderEntity->fields.userSvtId,
                              (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !gameObject )
        goto LABEL_592;
      v95 = (UserServantEntity_o *)gameObject;
      HIDWORD(v343[0]) = *(_DWORD *)(gameObject + 256);
      v96 = *(_DWORD *)(gameObject + 264);
      LODWORD(v343[0]) = v96;
      if ( v59 )
      {
        LODWORD(v343[0]) = v59->m_Items[59] + v96;
        adjustAtk = *(_DWORD *)(gameObject + 272);
        v97 = v59->m_Items[60] + *(_DWORD *)(gameObject + 268);
      }
      else
      {
        adjustAtk = *(_DWORD *)(gameObject + 272);
        v97 = *(_DWORD *)(gameObject + 268);
      }
      v342 = v97;
      adjustHp = *(_DWORD *)(gameObject + 276);
      v150 = UserServantEntity__getRarity((UserServantEntity_o *)gameObject, 0LL);
      v151 = v95->fields.exceedCount;
      v152 = v95;
      v149 = v150;
      exceedCount = v151;
      FrameType = UserServantEntity__getFrameType(v152, 0LL);
      limitCount = UserServantEntity__getCardImageLimitCount(v152, 0, 0LL);
      UserServantEntity__getSkillInfo(v152, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
      gameObject = UserServantEntity__getTreasureDeviceInfo(v152, &tdInfo, -1, -1, 0, 0LL);
      if ( !tdInfo )
        goto LABEL_592;
      lv = tdInfo->fields.lv;
      v329 = (EventServantPointRankMaster_o *)v152;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      strengthStatus = tdInfo->fields.strengthStatus;
      UserServantEntity__GetAppendPassiveSkillInfo_21292424(v152, &v339, 0LL);
      if ( v7->fields.eventSetupInfo )
      {
        if ( v59 )
        {
          v153 = *(_OWORD *)&v59->m_Items[1];
          *(_OWORD *)&v337.fields.currentCryptoKey = *(_OWORD *)&v59->bounds;
          *(_OWORD *)&v337.fields.fakeValue = v153;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v336 = v337;
          v154 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v336, 0LL);
        }
        else
        {
          v154 = -1LL;
        }
        gameObject = sub_B0D8BC(long___TypeInfo, 1LL);
        if ( !gameObject )
          goto LABEL_592;
        if ( !*(_DWORD *)(gameObject + 24) )
          goto LABEL_593;
        *(_QWORD *)(gameObject + 32) = v154;
        v316 = this;
        EventUpVal_21266016 = UserServantEntity__getEventUpVal_21266016(
                                (UserServantEntity_o *)v329,
                                &eventUpVallInfo,
                                v7->fields.eventSetupInfo,
                                (System_Int64_array *)gameObject,
                                0LL);
        gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_592;
        v314 = v149;
        v304 = FrameType;
        v156 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)gameObject,
                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        codeIdsb = v59;
        v157 = (EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
        v326 = (UserEventServantPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
        v160 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v158, v159);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v160,
          (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
        v161 = v7->fields.eventSetupInfo;
        if ( !v161 )
          goto LABEL_592;
        v162 = v161->fields.eventIdList;
        if ( !v162 )
          goto LABEL_592;
        v163 = *(_QWORD *)&v162->max_length;
        if ( (int)v163 >= 1 )
        {
          v164 = 0LL;
          while ( 1 )
          {
            if ( v164 >= (unsigned int)v163 )
              goto LABEL_593;
            if ( !v156 )
              goto LABEL_592;
            v165 = v162->m_Items[v164 + 1];
            gameObject = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v156,
                                    v165,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
            if ( !gameObject
              || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0LL),
                  (gameObject & 1) == 0) )
            {
              if ( !v157 )
                goto LABEL_592;
              if ( EventServantPointRankMaster__IsEnableEvent(v157, v165, 0LL) )
              {
                v168 = *(_OWORD *)&v329->fields.revision;
                *(_OWORD *)&v337.fields.currentCryptoKey = *(_OWORD *)&v329->fields.seriazlier;
                *(_OWORD *)&v337.fields.fakeValue = v168;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v335 = v337;
                v169 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v335, 0LL);
                v170 = UserServantEntity__getSvtId((UserServantEntity_o *)v329, 0LL);
                gameObject = (__int64)v326;
                if ( !v326 )
                  goto LABEL_592;
                if ( UserEventServantPointMaster__TryGetEntity(v326, &entity, v169, v165, v170, 0LL) )
                {
                  gameObject = (__int64)entity;
                  if ( !entity )
                    goto LABEL_592;
                  BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(entity, 0LL);
                }
                else
                {
                  BuddyPoint = 0;
                }
                v172 = UserServantEntity__getSvtId((UserServantEntity_o *)v329, 0LL);
                v173 = EventServantPointRankMaster__GetEnableEntity(v157, v165, BuddyPoint, v172, 0LL);
                v176 = v173 ? v173->fields.svtPointRank : 0;
                v177 = (EventMargeItemUpValInfo_o *)sub_B0D974(EventMargeItemUpValInfo_TypeInfo, v174, v175);
                EventMargeItemUpValInfo___ctor_26624100(v177, v165, 0LL);
                if ( !v177 )
                  goto LABEL_592;
                EventMargeItemUpValInfo__SetServantPointInfo(v177, BuddyPoint, v176, 0, 0LL);
                if ( !v160 )
                  goto LABEL_592;
                System_Collections_Generic_List_XWeaponTrail_Element___Insert(
                  (System_Collections_Generic_List_XWeaponTrail_Element__o *)v160,
                  0,
                  (XWeaponTrail_Element_o *)v177,
                  (const MethodInfo_2FC68FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
              }
              v178 = (EventPersonalMargeUpValInfo_o *)sub_B0D974(EventPersonalMargeUpValInfo_TypeInfo, v166, v167);
              EventPersonalMargeUpValInfo___ctor(v178, v165, servantEntity, 0LL);
              gameObject = (__int64)eventUpVallInfo;
              if ( !eventUpVallInfo )
                goto LABEL_592;
              gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
              if ( !v178 )
                goto LABEL_592;
              EventPersonalMargeUpValInfo__Add(v178, (EventDropItemUpValInfo_array *)gameObject, 0LL);
              gameObject = EventPersonalMargeUpValInfo__IsEmpty(v178, 0LL);
              if ( (gameObject & 1) == 0 )
              {
                gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v178, 0LL);
                if ( !gameObject )
                  goto LABEL_592;
                v179 = *(_QWORD *)(gameObject + 24);
                v180 = gameObject;
                if ( (int)v179 >= 1 )
                  break;
              }
            }
LABEL_279:
            LODWORD(v163) = v162->max_length;
            if ( (__int64)++v164 >= (int)v163 )
              goto LABEL_280;
          }
          v181 = 0LL;
          while ( v181 < (unsigned int)v179 )
          {
            if ( !v160 )
              goto LABEL_592;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v160,
              *(EventMissionProgressRequest_Argument_ProgressData_o **)(v180 + 32 + 8 * v181),
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
            LODWORD(v179) = *(_DWORD *)(v180 + 24);
            if ( (__int64)++v181 >= (int)v179 )
              goto LABEL_279;
          }
LABEL_593:
          v298 = sub_B0D9A8(gameObject);
          sub_B0D948(v298, 0LL);
        }
LABEL_280:
        if ( !v160 )
          goto LABEL_592;
        v132 = EventUpVal_21266016;
        v324 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v160,
                                                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
        this = v316;
        v7 = v332;
        v59 = codeIdsb;
        equipTarget1 = v323;
        svtId = value;
        FrameType = v304;
        v149 = v314;
      }
      else
      {
        v324 = 0LL;
        v132 = 0;
      }
      codeIdsa = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)v329, 0LL);
      QuestRestriction = UserServantEntity__getQuestRestriction(
                           (UserServantEntity_o *)v329,
                           v7->fields.questRestrictionInfo,
                           0,
                           0LL);
      v303 = UserServantEntity__getUniqueSvtRestriction(
               (UserServantEntity_o *)v329,
               v7->fields.questRestrictionInfo,
               0LL);
      v182 = UserServantEntity__IsUniqueIndividualityRestriction(
               (UserServantEntity_o *)v329,
               v7->fields.questRestrictionInfo,
               0LL);
      IsDataLost = 0;
      IsRestrictionServantIndividuality = 0;
      IsUniqueIndividualityRestriction = v182;
      TimesToRestart = 0;
      cardParams = 0LL;
    }
    gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !gameObject )
      goto LABEL_592;
    v330 = IsRestrictionServantIndividuality;
    gameObject = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                   (ServantLimitImageMaster_o *)gameObject,
                   svtId,
                   limitCount,
                   0LL);
    if ( !this->fields.servantNarrowTexture )
      goto LABEL_592;
    UINarrowFigureTexture__SetCharacter(this->fields.servantNarrowTexture, svtId, gameObject, 0LL, 0LL);
    servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.servantClassIcon;
      if ( !gameObject )
        goto LABEL_592;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_592;
      if ( IsDataLost )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (__int64)this->fields.servantClassIcon;
        if ( !gameObject )
          goto LABEL_592;
        ServantClassIconComponent__SetImage((ServantClassIconComponent_o *)gameObject, classId, FrameType, 0LL);
      }
    }
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
    {
      v185 = this->fields.levelLabel;
      gameObject = (__int64)System_Int32__ToString((int32_t)v343 + 4, 0LL);
      if ( !v185 )
        goto LABEL_592;
      UILabel__set_text(v185, (System_String_o *)gameObject, 0LL);
    }
    raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.raritySprite;
      if ( !gameObject )
        goto LABEL_592;
      v187 = v59;
      v188 = IsDataLost;
      v189 = v132;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_592;
      v190 = FrameType;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v191 = HIDWORD(v343[0]);
      if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      v192 = v149;
      Icon_21504332 = Rarity__getIcon_21504332(v149, exceedCount, v191, 0LL);
      if ( exceedCount < 1 )
      {
        v195 = 0;
      }
      else
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        gameObject = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantExceedMaster___);
        if ( !gameObject )
          goto LABEL_592;
        RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)gameObject, v192, exceedCount, 0, 0LL);
        gameObject = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
        if ( !gameObject )
          goto LABEL_592;
        v195 = ServantLvDetailMaster__GetRarityIcon(
                 (ServantLvDetailMaster_o *)gameObject,
                 v192,
                 SHIDWORD(v343[0]),
                 RarityIcon,
                 0LL);
      }
      v196 = this->fields.raritySprite;
      if ( v195 >= 3 )
      {
        if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v196, Icon_21504332, 0LL);
      }
      else
      {
        if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetCommon(v196, 0LL);
        gameObject = (__int64)this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_592;
        UISprite__set_spriteName((UISprite_o *)gameObject, Icon_21504332, 0LL);
      }
      gameObject = (__int64)this->fields.raritySprite;
      FrameType = v190;
      if ( !gameObject )
        goto LABEL_592;
      v132 = v189;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
        gameObject,
        *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
      gameObject = (__int64)this->fields.raritySprite;
      v197 = exceedCount >= 1
           ? this->fields.baseRarityPosition.fields.x + 1.0
           : this->fields.baseRarityPosition.fields.x;
      if ( !gameObject )
        goto LABEL_592;
      y = this->fields.baseRarityPosition.fields.y;
      z = this->fields.baseRarityPosition.fields.z;
      IsDataLost = v188;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_592;
      v354.fields.x = v197;
      v354.fields.y = y;
      v354.fields.z = z;
      v59 = v187;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v354, 0LL);
      equipTarget1 = v323;
    }
    skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.skillListTreasureDevice;
      if ( !gameObject )
        goto LABEL_592;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_592;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v201 = this->fields.skillListTreasureDevice;
      v202 = skillInfoList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (__int64)LocalizationManager__GetLevelList_32900984(v202, 0LL);
      if ( !v201 )
        goto LABEL_592;
      SkillListTreasureDeviceComponent__Set(
        v201,
        (System_String_o *)gameObject,
        lv,
        strengthStatus,
        treasureDeviceNum,
        0,
        0LL);
      switchSkillUIList = this->fields.switchSkillUIList;
      if ( switchSkillUIList )
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)switchSkillUIList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInfoUiWidget,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
    }
    appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
    {
      if ( v339 && *(_QWORD *)&v339->max_length )
      {
        gameObject = (__int64)this->fields.appendSkillList;
        if ( !gameObject )
          goto LABEL_592;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_592;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v205 = this->fields.appendSkillList;
        v206 = v339;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (__int64)LocalizationManager__GetLevelList_32900984(v206, 0LL);
        if ( !v205 )
          goto LABEL_592;
        AppendSkillListComponent__Set(v205, (System_String_o *)gameObject, 0LL);
        v207 = this->fields.switchSkillUIList;
        if ( v207 )
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v207,
            (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.appendSkillInfoUiWidget,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
      }
      else
      {
        gameObject = (__int64)this->fields.appendSkillList;
        if ( !gameObject )
          goto LABEL_592;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_592;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
    }
    switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
    {
      v209 = this->fields.switchSkillUIList;
      if ( v209 )
      {
        v210 = this->fields.switchSkillInfo;
        gameObject = (__int64)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v209,
                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
        if ( !v210 )
          goto LABEL_592;
        SwitchUIWidgetComponent__Set(v210, (UIWidget_array *)gameObject, 0LL);
      }
    }
    svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.svtCommandCardList;
      if ( !gameObject )
        goto LABEL_592;
      if ( v332->fields.isFriendInfo )
        ServantCommandCardListComponent__Set_27048524(
          (ServantCommandCardListComponent_o *)gameObject,
          svtId,
          cardParams,
          codeIdsa,
          2,
          0,
          0LL);
      else
        ServantCommandCardListComponent__Set_27048784(
          (ServantCommandCardListComponent_o *)gameObject,
          svtId,
          codeIdsa,
          2,
          0,
          0LL);
    }
    attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(attackLabel, 0LL, 0LL) )
    {
      if ( adjustAtk <= 0 )
        *(UnityEngine_Color_o *)&v213 = UnityEngine_Color__get_white(0LL);
      else
        *(UnityEngine_Color_o *)&v213 = UnityEngine_Color__get_yellow(0LL);
      gameObject = (__int64)this->fields.attackLabel;
      if ( !gameObject )
        goto LABEL_592;
      UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)&v213, 0LL);
      v217 = this->fields.attackLabel;
      gameObject = (__int64)System_Int32__ToString_38473032((int32_t)v343, (System_String_o *)StringLiteral_345/*"#,0"*/, 0LL);
      if ( !v217 )
        goto LABEL_592;
      UILabel__set_text(v217, (System_String_o *)gameObject, 0LL);
    }
    hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
    {
      if ( adjustHp <= 0 )
        *(UnityEngine_Color_o *)&v219 = UnityEngine_Color__get_white(0LL);
      else
        *(UnityEngine_Color_o *)&v219 = UnityEngine_Color__get_yellow(0LL);
      gameObject = (__int64)this->fields.hpLabel;
      if ( !gameObject )
        goto LABEL_592;
      UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)&v219, 0LL);
      v223 = this->fields.hpLabel;
      gameObject = (__int64)System_Int32__ToString_38473032((int32_t)&v342, (System_String_o *)StringLiteral_345/*"#,0"*/, 0LL);
      if ( !v223 )
        goto LABEL_592;
      UILabel__set_text(v223, (System_String_o *)gameObject, 0LL);
    }
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      v225 = this->fields.baseSprite;
      baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFormationBase(v225, FrameType, baseDefaultUIAtlas, 0, 0LL);
    }
    base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
    {
      v228 = this->fields.base2Sprite;
      base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFormationFrameForSupportSelect(v228, FrameType, base2DefaultUIAtlas, 0, 0LL);
    }
    gameObject = (__int64)this->fields.backClassIcon;
    if ( !gameObject
      || (gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0 )
    {
LABEL_592:
      sub_B0D97C(gameObject);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    if ( v330 || QuestRestriction )
    {
      sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      v7 = v332;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.sortieMaskSprite;
        if ( !gameObject )
          goto LABEL_592;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_592;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v232 = LocalizationManager__Get((System_String_o *)StringLiteral_10387/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
      goto LABEL_430;
    }
    v237 = IsDataLost;
    v7 = v332;
    if ( v332->fields.isFriendInfo || !ServantEntity__checkIsHeroineSvt(servantEntity, 0LL) )
      goto LABEL_445;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_28088484(126, 0LL) )
    {
      v238 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v238, 0LL, 0LL) )
        goto LABEL_465;
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_592;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_592;
      v240 = 1;
    }
    else
    {
LABEL_445:
      if ( IsUniqueIndividualityRestriction || v303 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v241 = LocalizationManager__Get((System_String_o *)StringLiteral_6410/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0LL);
        SupportSelectItemDraw__SetWarningMessage(this, v241, 1, v242);
LABEL_466:
        friendPointBonus = (UnityEngine_Object_o *)this->fields.friendPointBonus;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(friendPointBonus, 0LL, 0LL) )
        {
          friendPointBonusBase = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(friendPointBonusBase, 0LL, 0LL) )
          {
            gameObject = (__int64)this->fields.friendPointBonusBase;
            if ( !gameObject )
              goto LABEL_592;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          }
        }
        eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        gameObject = UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL);
        v251 = v132 != 0;
        LODWORD(UserServantLeaderEntity) = 1;
        v333 = v251;
        if ( eventFriendPoints && (gameObject & 1) != 0 )
        {
          LODWORD(v252) = eventFriendPoints->max_length;
          v253 = v59;
          if ( (int)v252 >= 1 )
          {
            v254 = 0;
            v255 = 0;
            v256 = 0;
            while ( v254 < (unsigned int)v252 )
            {
              v257 = &eventFriendPoints->obj.klass + (int)v254;
              v260 = v257[4];
              v259 = (__int64 *)(v257 + 4);
              v258 = v260;
              if ( !v260 )
                goto LABEL_592;
              gameObject = System_Array__IndexOf_int_(
                             *(System_Int32_array **)&v258->_1.byval_arg.bits,
                             value,
                             (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___);
              v252 = *(_QWORD *)&eventFriendPoints->max_length;
              if ( v254 >= (unsigned int)v252 )
                break;
              v261 = *v259;
              if ( !*v259 )
                goto LABEL_592;
              v262 = *(_QWORD *)(v261 + 40);
              if ( v262 )
                v263 = *(_DWORD *)(v262 + 24) == 0;
              else
                v263 = 1;
              if ( (v263 || (int)gameObject >= 0) && v255 < *(_DWORD *)(v261 + 48) )
              {
                v256 = *(_DWORD *)(v261 + 16);
                v255 = *(_DWORD *)(v261 + 48);
              }
              if ( (int)++v254 >= (int)v252 )
                goto LABEL_496;
            }
            goto LABEL_593;
          }
          v256 = 0;
          v255 = 0;
LABEL_496:
          if ( v255 >= 1 )
          {
            v264 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                                     System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                                     v249,
                                                                                     v250);
            v265 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v264;
            if ( v324 )
              System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
                v264,
                v324,
                (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___67879744);
            else
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v264,
                (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
            v268 = (EventMargeItemUpValInfo_o *)sub_B0D974(EventMargeItemUpValInfo_TypeInfo, v266, v267);
            EventMargeItemUpValInfo___ctor_26624008(v268, v256, v255, 0LL);
            if ( !v265 )
              goto LABEL_592;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v265,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v268,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
            v324 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v265,
                                                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
          }
          v59 = v253;
          equipTarget1 = v323;
          LODWORD(UserServantLeaderEntity) = 1;
        }
        if ( v59 )
          goto LABEL_504;
        goto LABEL_138;
      }
      if ( v237 )
      {
        v236 = 1;
        v235 = this;
        v234 = 0;
        v233 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_431;
      }
      if ( TimesToRestart >= 1 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v243 = LocalizationManager__Get((System_String_o *)StringLiteral_11664/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
        LODWORD(v337.fields.currentCryptoKey) = TimesToRestart;
        v244 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v337);
        v232 = System_String__Format(v243, v244, 0LL);
LABEL_430:
        v233 = v232;
        v234 = 1;
        v235 = this;
        v236 = 0;
LABEL_431:
        SupportSelectItemDraw__SetMaskMessage(v235, v233, v234, v236, v230);
        goto LABEL_466;
      }
      v245 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v245, 0LL, 0LL) )
      {
LABEL_465:
        SupportSelectItemDraw__ClearMessage(this, v239);
        goto LABEL_466;
      }
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_592;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_592;
      v240 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v240, 0LL);
    goto LABEL_465;
  }
  LODWORD(UserServantLeaderEntity) = 1;
LABEL_48:
  gameObject = (__int64)this->fields.backClassIcon;
  if ( !gameObject )
    goto LABEL_592;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_592;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  backClassIcon = this->fields.backClassIcon;
  gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
  if ( (BYTE3(SupportSelectItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
    gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
  }
  v70 = **(_QWORD **)(gameObject + 184);
  if ( !v70 )
    goto LABEL_592;
  if ( *(_DWORD *)(v70 + 24) <= (unsigned int)classPos )
    goto LABEL_593;
  if ( !backClassIcon )
    goto LABEL_592;
  UISprite__set_spriteName(backClassIcon, *(System_String_o **)(v70 + 8LL * classPos + 32), 0LL);
  v71 = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL) )
  {
    v72 = this->fields.baseSprite;
    v73 = this->fields.baseDefaultUIAtlas;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetFormationBase(v72, 9, v73, 0, 0LL);
  }
  v74 = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v74, 0LL, 0LL) )
  {
    v75 = this->fields.base2Sprite;
    v76 = this->fields.base2DefaultUIAtlas;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetFormationFrameForSupportSelect(v75, 9, v76, 0, 0LL);
  }
  v77 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v77, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.servantClassIcon;
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  v78 = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v78, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.levelLabel;
    if ( !gameObject )
      goto LABEL_592;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v79 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v79, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  v80 = (UnityEngine_Object_o *)this->fields.attackLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v80, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.attackLabel;
    if ( !gameObject )
      goto LABEL_592;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v81 = (UnityEngine_Object_o *)this->fields.hpLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v81, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.hpLabel;
    if ( !gameObject )
      goto LABEL_592;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v82 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v82, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.sortieMaskSprite;
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  SupportSelectItemDraw__ClearMessage(this, v83);
  v84 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v84, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.skillListTreasureDevice;
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  v85 = (UnityEngine_Object_o *)this->fields.appendSkillList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v85, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.appendSkillList;
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  v86 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v86, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_592;
    ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)gameObject, 0LL);
  }
  v87 = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v87, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.friendPointBonusBase;
    if ( !gameObject )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  v324 = 0LL;
  v333 = 0;
  if ( v59 )
  {
LABEL_504:
    gameObject = (__int64)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v269 = v59;
    equipSprite = (UISprite_o *)this->fields.equipSprite;
    v271 = *(_QWORD *)&v59->m_Items[13];
    v272 = *(_QWORD *)&v269->m_Items[15];
    v273 = v269;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v350.fields.currentCryptoKey = v271;
    *(_QWORD *)&v350.fields.fakeValue = v272;
    v274 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v350, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipFace(equipSprite, v274, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      v277 = *(_QWORD *)&v273->m_Items[17];
      v276 = *(_QWORD *)&v273->m_Items[19];
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v351.fields.currentCryptoKey = v277;
      *(_QWORD *)&v351.fields.fakeValue = v276;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v351, 0LL);
      if ( !this->fields.equipLimitCountSprite )
        goto LABEL_592;
      v278 = gameObject;
      gameObject = (__int64)UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                              0LL);
      if ( v278 < 4 )
        goto LABEL_523;
      if ( !v321 )
        goto LABEL_592;
      v94 = SLODWORD(v321->fields.targetId) < v278;
      goto LABEL_527;
    }
    goto LABEL_532;
  }
LABEL_138:
  gameObject = (__int64)this->fields.noneEquipSprite;
  if ( !gameObject )
    goto LABEL_592;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_592;
  if ( equipTarget1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v88 = (UISprite_o *)this->fields.equipSprite;
    v90 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v89 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v347.fields.currentCryptoKey = v90;
    *(_QWORD *)&v347.fields.fakeValue = v89;
    v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v347, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipFace(v88, v91, 0LL);
    v92 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v92, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.equipLimitCountSprite;
      if ( !gameObject )
        goto LABEL_592;
      v93 = equipTarget1->fields.limitCount;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( v93 < 4 )
      {
LABEL_523:
        v99 = 0;
        if ( !gameObject )
          goto LABEL_592;
LABEL_531:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v99, 0LL);
        goto LABEL_532;
      }
      if ( !v321 )
        goto LABEL_592;
      v94 = SLODWORD(v321->fields.targetId) < v93;
LABEL_527:
      v99 = !v94;
      if ( !gameObject )
        goto LABEL_592;
      goto LABEL_531;
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (__int64)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    v98 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v98, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.equipLimitCountSprite;
      if ( !gameObject )
        goto LABEL_592;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_592;
      v99 = 0;
      goto LABEL_531;
    }
  }
LABEL_532:
  v279 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = UnityEngine_Object__op_Inequality(v279, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    if ( v7->fields.isFriendInfo )
    {
      if ( (_DWORD)UserServantLeaderEntity )
      {
        v280 = v327;
        if ( !v327 )
          goto LABEL_592;
        v281 = v327->fields.servantLeaderInfo;
        if ( v281 )
        {
          v283 = *(_QWORD *)&v281->fields.svtId.fields.currentCryptoKey;
          v282 = *(_QWORD *)&v281->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v352.fields.currentCryptoKey = v283;
          *(_QWORD *)&v352.fields.fakeValue = v282;
          gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v352, 0LL);
          if ( !v327->fields.servantLeaderInfo )
            goto LABEL_592;
          v284 = gameObject;
          v285 = ServantLeaderInfo__getRarity(v327->fields.servantLeaderInfo, 0LL);
LABEL_559:
          v291 = v285;
          goto LABEL_562;
        }
        goto LABEL_561;
      }
    }
    else if ( (_DWORD)UserServantLeaderEntity )
    {
      v280 = v327;
      if ( !v327 )
        goto LABEL_592;
      userServantEntity = v327->fields.userServantEntity;
      if ( userServantEntity )
      {
        v290 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v289 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v353.fields.currentCryptoKey = v290;
        *(_QWORD *)&v353.fields.fakeValue = v289;
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v353, 0LL);
        if ( !v327->fields.userServantEntity )
          goto LABEL_592;
        v284 = gameObject;
        v285 = UserServantEntity__getRarity(v327->fields.userServantEntity, 0LL);
        goto LABEL_559;
      }
LABEL_561:
      v291 = -1;
      v284 = -1;
LABEL_562:
      if ( eventUpVallInfo )
        equipSvtId = eventUpVallInfo->fields.equipSvtId;
      else
        equipSvtId = 0;
      gameObject = (__int64)this->fields.eventUpValIcon;
      if ( !gameObject )
        goto LABEL_592;
      EventUpValIconComponent__Set(
        (EventUpValIconComponent_o *)gameObject,
        (EventMargeItemUpValInfo_array *)v324,
        v284,
        v291,
        equipSvtId,
        0LL);
      bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.bounusIcon;
        if ( !gameObject )
          goto LABEL_592;
        v287 = 0;
        goto LABEL_572;
      }
      goto LABEL_573;
    }
    v280 = v327;
    goto LABEL_561;
  }
  v286 = (UnityEngine_Object_o *)this->fields.bounusIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v280 = v327;
  if ( UnityEngine_Object__op_Inequality(v286, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.bounusIcon;
    if ( !gameObject )
      goto LABEL_592;
    v287 = v333;
LABEL_572:
    ShiningIconComponent__Set_32504684((ShiningIconComponent_o *)gameObject, v287, 0LL);
  }
LABEL_573:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_592;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  }
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
    return;
  gameObject = (__int64)this->fields.pushSprite;
  if ( !gameObject )
    goto LABEL_592;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_592;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  pushUserServantId = v7->fields.pushUserServantId;
  if ( !pushUserServantId )
    return;
  if ( !v280 )
    goto LABEL_594;
  if ( pushUserServantId != v280->fields.userSvtId )
    return;
  v296 = (UnityEngine_Component_o *)this->fields.pushSprite;
  if ( !v296 || (v296 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v296, 0LL)) == 0LL )
LABEL_594:
    sub_B0D97C(v296);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v296, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetMaskMessage(
        SupportSelectItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        bool isDataLost,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x23
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v16; // x22
  UIWidget_o *v17; // x21
  struct SupportSelectItemDraw_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  float v22; // s0
  float v23; // s8
  UnityEngine_Transform_o *transform; // x20
  float restrictionMaskMessageWidth; // s0
  float v26; // s1
  float v27; // s0
  float v28; // s2
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4217090 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, message);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&SupportSelectItemDraw_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_19549/*"img_frames_mask05"*/, v11);
    sub_B0D8A4(&StringLiteral_17938/*"datalost_party_edit"*/, v12);
    sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    byte_4217090 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_47;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_47;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    v16 = this->fields.restrictionMaskSprite;
    if ( isDataLost )
    {
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetPartyOrganizationImage(v16, (System_String_o *)StringLiteral_17938/*"datalost_party_edit"*/, 0LL);
      v17 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)SupportSelectItemDraw_TypeInfo;
      if ( (BYTE3(SupportSelectItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      }
      if ( !v17 )
        goto LABEL_47;
      UIWidget__set_width(v17, SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_WIDTH, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_47;
      UIWidget__set_height(
        (UIWidget_o *)gameObject,
        SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT,
        0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_47;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_47;
      static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
      x = static_fields->DATA_LOST_MASK_POSITION.fields.x;
      y = static_fields->DATA_LOST_MASK_POSITION.fields.y;
      z = static_fields->DATA_LOST_MASK_POSITION.fields.z;
    }
    else
    {
      if ( !v16 )
        goto LABEL_47;
      UISprite__set_atlas(this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_47;
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_19549/*"img_frames_mask05"*/, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_47;
      UIWidget__set_width((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultWidth, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_47;
      UIWidget__set_height((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultHeight, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_47;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_47;
      x = this->fields.maskSpriteDefaultPosition.fields.x;
      y = this->fields.maskSpriteDefaultPosition.fields.y;
      z = this->fields.maskSpriteDefaultPosition.fields.z;
    }
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, *(UnityEngine_Vector3_o *)&x, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_47;
    if ( isScale )
    {
      LODWORD(v22) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_47;
      v23 = v22;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      transform = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v23 > restrictionMaskMessageWidth )
      {
        v26 = 1.0;
        v27 = restrictionMaskMessageWidth / v23;
        v28 = 1.0;
        if ( !gameObject )
          goto LABEL_47;
        goto LABEL_37;
      }
    }
    else
    {
      transform = UnityEngine_Component__get_transform(gameObject, 0LL);
    }
    *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_47;
LABEL_37:
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v27, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          return;
        }
      }
    }
LABEL_47:
    sub_B0D97C(gameObject);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetWarningMessage(
        SupportSelectItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x22
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_Vector2_o printedSize; // kr00_8
  UnityEngine_Transform_o *v12; // x21
  float restrictionWarningMessageWidth; // s0
  float v14; // s1
  float v15; // s0
  float v16; // s2
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4217091 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, message);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_4217091 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_29;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_29;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__SetFast((FlashingIconComponent_o *)gameObject, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
          if ( gameObject )
          {
            printedSize = UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
            gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
            if ( gameObject )
            {
              gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
              v12 = (UnityEngine_Transform_o *)gameObject;
              if ( isScale
                && (restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth,
                    printedSize.fields.x > restrictionWarningMessageWidth) )
              {
                v14 = 1.0;
                v15 = restrictionWarningMessageWidth / printedSize.fields.x;
                v16 = 1.0;
                if ( !gameObject )
                  goto LABEL_29;
              }
              else
              {
                *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_one(0LL);
                if ( !v12 )
                  goto LABEL_29;
              }
              UnityEngine_Transform__set_localScale(v12, *(UnityEngine_Vector3_o *)&v15, 0LL);
              gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
              if ( gameObject )
              {
                gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)gameObject,
                                                          0LL);
                if ( gameObject )
                {
                  v17.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
                  v17.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
                  v17.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v17, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_29:
    sub_B0D97C(gameObject);
  }
}