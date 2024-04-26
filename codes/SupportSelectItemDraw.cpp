void __fastcall SupportSelectItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Int32_array **v9; // x19
  __int64 v10; // x0
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  SupportSelectItemDraw_c *v75; // x8
  struct SupportSelectItemDraw_StaticFields *v76; // x8
  __int64 v77; // x0
  __int64 v78; // x0

  if ( (byte_435484C & 1) == 0 )
  {
    sub_B70694(&string___TypeInfo);
    sub_B70694(&SupportSelectItemDraw_TypeInfo);
    sub_B70694(&StringLiteral_19596/*"icon_class1002"*/);
    sub_B70694(&StringLiteral_19594/*"icon_class007"*/);
    sub_B70694(&StringLiteral_19593/*"icon_class006"*/);
    sub_B70694(&StringLiteral_19591/*"icon_class004"*/);
    sub_B70694(&StringLiteral_19588/*"icon_class001"*/);
    sub_B70694(&StringLiteral_19595/*"icon_class1001"*/);
    sub_B70694(&StringLiteral_19589/*"icon_class002"*/);
    sub_B70694(&StringLiteral_19592/*"icon_class005"*/);
    sub_B70694(&StringLiteral_19590/*"icon_class003"*/);
    byte_435484C = 1;
  }
  v1 = sub_B706AC(string___TypeInfo, 9LL);
  if ( !v1 )
    sub_B7076C(0LL, v2);
  v9 = (System_Int32_array **)v1;
  v10 = StringLiteral_19595/*"icon_class1001"*/;
  if ( StringLiteral_19595/*"icon_class1001"*/ )
  {
    v10 = sub_B70754(StringLiteral_19595/*"icon_class1001"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v10 )
      goto LABEL_51;
    v11 = (System_Int32_array **)StringLiteral_19595/*"icon_class1001"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !*((_DWORD *)v9 + 6) )
    goto LABEL_50;
  v9[4] = (System_Int32_array *)v11;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 4), v11, v3, v4, v5, v6, v7, v8);
  v10 = StringLiteral_19588/*"icon_class001"*/;
  if ( StringLiteral_19588/*"icon_class001"*/ )
  {
    v10 = sub_B70754(StringLiteral_19588/*"icon_class001"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v10 )
      goto LABEL_51;
    v18 = (System_Int32_array **)StringLiteral_19588/*"icon_class001"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( *((_DWORD *)v9 + 6) <= 1u )
    goto LABEL_50;
  v9[5] = (System_Int32_array *)v18;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 5), v18, v12, v13, v14, v15, v16, v17);
  v10 = StringLiteral_19589/*"icon_class002"*/;
  if ( StringLiteral_19589/*"icon_class002"*/ )
  {
    v10 = sub_B70754(StringLiteral_19589/*"icon_class002"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v10 )
      goto LABEL_51;
    v25 = (System_Int32_array **)StringLiteral_19589/*"icon_class002"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( *((_DWORD *)v9 + 6) <= 2u )
    goto LABEL_50;
  v9[6] = (System_Int32_array *)v25;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 6), v25, v19, v20, v21, v22, v23, v24);
  v10 = StringLiteral_19590/*"icon_class003"*/;
  if ( StringLiteral_19590/*"icon_class003"*/ )
  {
    v10 = sub_B70754(StringLiteral_19590/*"icon_class003"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v10 )
      goto LABEL_51;
    v32 = (System_Int32_array **)StringLiteral_19590/*"icon_class003"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( *((_DWORD *)v9 + 6) <= 3u )
    goto LABEL_50;
  v9[7] = (System_Int32_array *)v32;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 7), v32, v26, v27, v28, v29, v30, v31);
  v10 = StringLiteral_19591/*"icon_class004"*/;
  if ( StringLiteral_19591/*"icon_class004"*/ )
  {
    v10 = sub_B70754(StringLiteral_19591/*"icon_class004"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v10 )
      goto LABEL_51;
    v39 = (System_Int32_array **)StringLiteral_19591/*"icon_class004"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( *((_DWORD *)v9 + 6) <= 4u )
    goto LABEL_50;
  v9[8] = (System_Int32_array *)v39;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 8), v39, v33, v34, v35, v36, v37, v38);
  v10 = StringLiteral_19592/*"icon_class005"*/;
  if ( StringLiteral_19592/*"icon_class005"*/ )
  {
    v10 = sub_B70754(StringLiteral_19592/*"icon_class005"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v10 )
      goto LABEL_51;
    v46 = (System_Int32_array **)StringLiteral_19592/*"icon_class005"*/;
  }
  else
  {
    v46 = 0LL;
  }
  if ( *((_DWORD *)v9 + 6) <= 5u )
    goto LABEL_50;
  v9[9] = (System_Int32_array *)v46;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 9), v46, v40, v41, v42, v43, v44, v45);
  v10 = StringLiteral_19593/*"icon_class006"*/;
  if ( StringLiteral_19593/*"icon_class006"*/ )
  {
    v10 = sub_B70754(StringLiteral_19593/*"icon_class006"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v10 )
      goto LABEL_51;
    v53 = (System_Int32_array **)StringLiteral_19593/*"icon_class006"*/;
  }
  else
  {
    v53 = 0LL;
  }
  if ( *((_DWORD *)v9 + 6) <= 6u )
    goto LABEL_50;
  v9[10] = (System_Int32_array *)v53;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 10), v53, v47, v48, v49, v50, v51, v52);
  v10 = StringLiteral_19594/*"icon_class007"*/;
  if ( StringLiteral_19594/*"icon_class007"*/ )
  {
    v10 = sub_B70754(StringLiteral_19594/*"icon_class007"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v10 )
      goto LABEL_51;
    v60 = (System_Int32_array **)StringLiteral_19594/*"icon_class007"*/;
  }
  else
  {
    v60 = 0LL;
  }
  if ( *((_DWORD *)v9 + 6) <= 7u )
    goto LABEL_50;
  v9[11] = (System_Int32_array *)v60;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 11), v60, v54, v55, v56, v57, v58, v59);
  v10 = StringLiteral_19596/*"icon_class1002"*/;
  if ( StringLiteral_19596/*"icon_class1002"*/ )
  {
    v10 = sub_B70754(StringLiteral_19596/*"icon_class1002"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( v10 )
    {
      v67 = (System_Int32_array **)StringLiteral_19596/*"icon_class1002"*/;
      goto LABEL_48;
    }
LABEL_51:
    v78 = sub_B7078C(v10);
    sub_B70738(v78, 0LL);
  }
  v67 = 0LL;
LABEL_48:
  if ( *((_DWORD *)v9 + 6) <= 8u )
  {
LABEL_50:
    v77 = sub_B70798(v10);
    sub_B70738(v77, 0LL);
  }
  v9[12] = (System_Int32_array *)v67;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 12), v67, v61, v62, v63, v64, v65, v66);
  static_fields = (BattleServantConfConponent_o *)SupportSelectItemDraw_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v9;
  sub_B70630(static_fields, v9, v69, v70, v71, v72, v73, v74);
  v75 = SupportSelectItemDraw_TypeInfo;
  SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_WIDTH = 156;
  v75->static_fields->DATA_LOST_MASK_HEIGHT = 258;
  v76 = v75->static_fields;
  *(_QWORD *)&v76->DATA_LOST_MASK_POSITION.fields.x = 0x43410000BF800000LL;
  v76->DATA_LOST_MASK_POSITION.fields.z = 0.0;
}


void __fastcall SupportSelectItemDraw___ctor(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SupportSelectItemDraw__ActivateEquipOnly(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v11; // x8
  unsigned __int64 v12; // x10
  System_Collections_IEnumerator_c **v13; // x11
  __int64 v14; // x0
  UnityEngine_Component_o *v15; // x0
  __int64 v16; // x1
  UnityEngine_Component_o *v17; // x21
  __int64 v18; // x9
  __int64 v19; // x1
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Component_o *equipRootObj; // x0
  UnityEngine_Object_o *v22; // x23
  UnityEngine_GameObject_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x19
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0

  if ( (byte_435484B & 1) == 0 )
  {
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&UnityEngine_Transform_TypeInfo);
    byte_435484B = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B7076C(0LL, v4);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_B7076C(0LL, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      v13 = (System_Collections_IEnumerator_c **)&v11->_1.interfaceOffsets->offset;
      while ( *(v13 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        v13 += 2;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v14 = (__int64)&v11->vtable[*(_DWORD *)v13 + 1].method;
    }
    else
    {
LABEL_16:
      v14 = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v15 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(
                                       Enumerator,
                                       *(_QWORD *)(v14 + 8));
    v17 = v15;
    if ( !v15 )
      goto LABEL_38;
    v18 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v15->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (UnityEngine_Transform_c *)v15->klass->_2.typeHierarchy[v18 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B70A60(v15);
LABEL_38:
      sub_B7076C(v15, v16);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    equipRootObj = (UnityEngine_Component_o *)this->fields.equipRootObj;
    if ( !equipRootObj )
      sub_B7076C(0LL, v19);
    v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(equipRootObj, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(gameObject, v22, 0LL) )
    {
      v23 = UnityEngine_Component__get_gameObject(v17, 0LL);
      if ( !v23 )
        sub_B7076C(0LL, v24);
      UnityEngine_GameObject__SetActive(v23, 0, 0LL);
    }
  }
  v25 = sub_B70754(Enumerator, System_IDisposable_TypeInfo);
  if ( v25 )
  {
    v26 = *(_QWORD *)v25;
    v27 = v25;
    if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
    {
      v28 = 0LL;
      v29 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
          goto LABEL_33;
      }
      v30 = v26 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_33:
      v30 = sub_B08590(v25, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  }
}


void __fastcall SupportSelectItemDraw__Awake(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v4; // x1
  void *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UISprite_o *v14; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *baseSprite; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct UISprite_o *v23; // x8
  struct UIAtlas_o *v24; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct UISprite_o *v32; // x8
  struct UIAtlas_o *v33; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4354843 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_B70694(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354843 = 1;
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
    v14 = this->fields.restrictionMaskSprite;
    this->fields.restrictionWarningCenter.fields.x = localPosition.fields.x;
    this->fields.restrictionWarningCenter.fields.z = localPosition.fields.z;
    this->fields.restrictionWarningCenter.fields.y = localPosition.fields.y + -55.0;
    if ( !v14 )
      goto LABEL_42;
    mAtlas = v14->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.maskSpriteDefaultAtlas,
      (System_Int32_array **)mAtlas,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
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
    v23 = this->fields.baseSprite;
    if ( !v23 )
      goto LABEL_42;
    v24 = v23->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = v24;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.baseDefaultUIAtlas,
      (System_Int32_array **)v24,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
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
    v32 = this->fields.base2Sprite;
    if ( v32 )
    {
      v33 = v32->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v33;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.base2DefaultUIAtlas,
        (System_Int32_array **)v33,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      goto LABEL_41;
    }
LABEL_42:
    sub_B7076C(transform, v4);
  }
LABEL_41:
  SupportSelectItemDraw__SetActiveDragSwapGuide(this, 0, (const MethodInfo *)v26);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v34;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.switchSkillUIList,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
}


void __fastcall SupportSelectItemDraw__ClearItem(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *sortieMaskSprite; // x20

  if ( (byte_4354844 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354844 = 1;
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
    sub_B7076C(gameObject, v4);
  }
LABEL_21:
  SupportSelectItemDraw__ClearMessage(this, v4);
}


void __fastcall SupportSelectItemDraw__ClearMessage(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4354846 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4354846 = 1;
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
    sub_B7076C(gameObject, v4);
  }
}


void __fastcall SupportSelectItemDraw__SetActiveDragSwapGuide(
        SupportSelectItemDraw_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragSwapGuideObj; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4354849 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354849 = 1;
  }
  dragSwapGuideObj = (UnityEngine_Object_o *)this->fields.dragSwapGuideObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(dragSwapGuideObj, 0LL, 0LL) )
  {
    v7 = this->fields.dragSwapGuideObj;
    if ( !v7 )
      sub_B7076C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, flag, 0LL);
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
  __int64 v6; // x1
  struct UIWidget_o *v7; // x0

  v3 = *(long double *)&alpha;
  if ( (byte_435484A & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435484A = 1;
  }
  equipRootObj = (UnityEngine_Object_o *)this->fields.equipRootObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equipRootObj, 0LL, 0LL) )
  {
    v7 = this->fields.equipRootObj;
    if ( !v7 )
      sub_B7076C(0LL, v6);
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, long double))v7->klass->vtable._8_set_alpha.method)(
      v7,
      v7->klass->vtable._9_CalculateFinalAlpha.methodPtr,
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
  __int64 gameObject; // x0
  const MethodInfo *v10; // x1
  UnityEngine_Object_o *skillInfoUiWidget; // x20
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x20
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x24
  struct EquipTargetInfo_o *equipTarget1; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x21
  __int64 v16; // x20
  __int64 v17; // x23
  System_Int32_array *v18; // x23
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  UserServantEntity_o *v20; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x21
  __int64 v22; // x20
  __int64 v23; // x23
  int32_t svtId; // w19
  struct ServantLeaderInfo_o *servantLeaderInfo; // x28
  int32_t atk; // w8
  int hp; // w8
  UISprite_o *backClassIcon; // x21
  __int64 v29; // x8
  UnityEngine_Object_o *v30; // x20
  UISprite_o *v31; // x20
  UIAtlas_o *v32; // x21
  UnityEngine_Object_o *v33; // x20
  UISprite_o *v34; // x20
  UIAtlas_o *v35; // x21
  UnityEngine_Object_o *v36; // x20
  UnityEngine_Object_o *v37; // x20
  UnityEngine_Object_o *v38; // x20
  UnityEngine_Object_o *v39; // x20
  UnityEngine_Object_o *v40; // x20
  UnityEngine_Object_o *v41; // x20
  UnityEngine_Object_o *v42; // x20
  UnityEngine_Object_o *v43; // x20
  UnityEngine_Object_o *v44; // x20
  UnityEngine_Object_o *v45; // x20
  UISprite_o *v46; // x21
  __int64 v47; // x20
  __int64 v48; // x23
  int32_t v49; // w20
  UnityEngine_Object_o *v50; // x20
  int v51; // w19
  bool v52; // cc
  UserServantEntity_o *v53; // x21
  int v54; // w8
  int v55; // w8
  UnityEngine_Object_o *v56; // x20
  int32_t Rarity; // w19
  int32_t FrameType; // w22
  int32_t CardImageLimitCount; // w21
  struct EventUpValSetupInfo_o *eventSetupInfo; // x2
  struct System_Int32_array *eventIdList; // x8
  bool EventUpVal_28896892; // w24
  WarQuestSelectionMaster_o *v63; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // x23
  struct EventUpValSetupInfo_o *v65; // x8
  struct System_Int32_array *v66; // x19
  __int64 v67; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v68; // x24
  unsigned __int64 v69; // x26
  int32_t v70; // w27
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventSvtPoint; // w20
  __int64 v73; // x21
  __int64 v74; // x24
  int32_t v75; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w25
  EventMargeItemUpValInfo_o *v78; // x21
  EventPersonalMargeUpValInfo_o *v79; // x25
  __int64 v80; // x8
  __int64 v81; // x25
  unsigned __int64 v82; // x20
  int v83; // w24
  WarBoardUiData_SaveData_array *v84; // x0
  System_Collections_Generic_IEnumerable_T__o *v85; // x21
  _BOOL4 UniqueSvtRestriction; // w25
  _BOOL4 IsRestrictionServantIndividuality; // w20
  int v88; // w20
  int32_t v89; // w21
  int v90; // w25
  int32_t v91; // w24
  System_Int32_array *v92; // x19
  QuestRestrictionInfo_o *v93; // x22
  __int64 v94; // x20
  __int64 v95; // x23
  int32_t v96; // w0
  int32_t v97; // w20
  int32_t v98; // w23
  bool IsDataLost; // w26
  int32_t v100; // w21
  int32_t v101; // w0
  int v102; // w8
  UserServantEntity_o *v103; // x20
  __int128 v104; // q1
  int64_t v105; // x20
  bool EventUpVal_21626808; // w19
  DataMasterBase_WarMaster__WarEntity__int__o *v107; // x28
  EventServantPointRankMaster_o *v108; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v109; // x21
  struct EventUpValSetupInfo_o *v110; // x8
  struct System_Int32_array *v111; // x23
  __int64 v112; // x8
  unsigned __int64 v113; // x26
  int32_t v114; // w27
  __int128 v115; // q0
  int64_t v116; // x20
  int32_t v117; // w4
  int32_t BuddyPoint; // w25
  int32_t v119; // w0
  EventServantPointRankEntity_o *v120; // x0
  int32_t v121; // w24
  EventMargeItemUpValInfo_o *v122; // x20
  EventPersonalMargeUpValInfo_o *v123; // x25
  __int64 v124; // x8
  __int64 v125; // x25
  unsigned __int64 v126; // x20
  _BOOL4 v127; // w0
  UnityEngine_Object_o *servantClassIcon; // x20
  UnityEngine_Object_o *levelLabel; // x20
  UILabel_o *v130; // x20
  UnityEngine_Object_o *raritySprite; // x20
  System_Int32_array *v132; // x28
  bool v133; // w23
  int v134; // w26
  int32_t v135; // w24
  int32_t v136; // w20
  int32_t v137; // w22
  System_String_o *Icon_22290192; // x21
  int32_t RarityIcon; // w20
  int32_t v140; // w8
  UISprite_o *v141; // x22
  float v142; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *skillListTreasureDevice; // x20
  SkillListTreasureDeviceComponent_o *v146; // x20
  SkillInfo_array *v147; // x21
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x0
  UnityEngine_Object_o *appendSkillList; // x20
  AppendSkillListComponent_o *v150; // x20
  SkillInfo_array *v151; // x21
  struct System_Collections_Generic_List_UIWidget__o *v152; // x0
  UnityEngine_Object_o *switchSkillInfo; // x20
  struct System_Collections_Generic_List_UIWidget__o *v154; // x0
  SwitchUIWidgetComponent_o *v155; // x20
  UnityEngine_Object_o *svtCommandCardList; // x20
  UnityEngine_Object_o *attackLabel; // x20
  int v158; // s0
  UILabel_o *v162; // x20
  UnityEngine_Object_o *hpLabel; // x20
  int v164; // s0
  UILabel_o *v168; // x20
  UnityEngine_Object_o *baseSprite; // x20
  UISprite_o *v170; // x21
  UIAtlas_o *baseDefaultUIAtlas; // x20
  UnityEngine_Object_o *base2Sprite; // x20
  UISprite_o *v173; // x21
  UIAtlas_o *base2DefaultUIAtlas; // x20
  const MethodInfo *v175; // x4
  UnityEngine_Object_o *sortieMaskSprite; // x20
  System_String_o *v177; // x0
  System_String_o *v178; // x1
  bool v179; // w2
  SupportSelectItemDraw_o *v180; // x0
  bool v181; // w3
  bool v182; // w19
  UnityEngine_Object_o *v183; // x20
  bool v184; // w1
  System_String_o *v185; // x0
  const MethodInfo *v186; // x3
  System_String_o *v187; // x20
  __int64 v188; // x2
  Il2CppObject *v189; // x0
  UnityEngine_Object_o *v190; // x20
  UnityEngine_Object_o *friendPointBonus; // x20
  UnityEngine_Object_o *friendPointBonusBase; // x20
  UnityEngine_Object_o *eventUpValIcon; // x20
  bool v194; // w8
  __int64 v195; // x8
  System_Int32_array *v196; // x28
  unsigned int v197; // w19
  int32_t v198; // w23
  int32_t v199; // w21
  Il2CppClass **v200; // x24
  Il2CppClass *v201; // x8
  __int64 *v202; // x24
  Il2CppClass *v203; // t1
  __int64 v204; // x9
  __int64 v205; // x10
  _BOOL4 v206; // w10
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v207; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v208; // x24
  EventMargeItemUpValInfo_o *v209; // x20
  System_Int32_array *v210; // x9
  UISprite_o *equipSprite; // x21
  __int64 v212; // x23
  __int64 v213; // x20
  System_Int32_array *v214; // x28
  int32_t v215; // w20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  __int64 v217; // x20
  __int64 v218; // x21
  int v219; // w20
  UnityEngine_Object_o *v220; // x20
  UserServantLeaderEntity_o *v221; // x19
  struct ServantLeaderInfo_o *v222; // x8
  __int64 v223; // x20
  __int64 v224; // x21
  int32_t v225; // w21
  int32_t v226; // w0
  UnityEngine_Object_o *v227; // x20
  bool v228; // w1
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v230; // x20
  __int64 v231; // x21
  int32_t v232; // w3
  int32_t equipSvtId; // w4
  UnityEngine_Object_o *bounusIcon; // x20
  UnityEngine_Object_o *baseButton; // x20
  UnityEngine_Object_o *pushSprite; // x20
  UnityEngine_Component_o *v237; // x0
  __int64 v238; // x1
  int64_t pushUserServantId; // x8
  __int64 v240; // x0
  int32_t TimesToRestart; // [xsp+8h] [xbp-1A8h]
  int32_t classId; // [xsp+Ch] [xbp-1A4h]
  System_Int32_array *cardParams; // [xsp+10h] [xbp-1A0h]
  _BOOL4 IsUniqueIndividualityRestriction; // [xsp+18h] [xbp-198h]
  _BOOL4 v245; // [xsp+1Ch] [xbp-194h]
  int32_t v246; // [xsp+1Ch] [xbp-194h]
  System_Int32_array *codeIds; // [xsp+20h] [xbp-190h]
  System_Int32_array *codeIdsa; // [xsp+20h] [xbp-190h]
  System_Int32_array *codeIdsb; // [xsp+20h] [xbp-190h]
  int32_t treasureDeviceNum; // [xsp+28h] [xbp-188h]
  int32_t strengthStatus; // [xsp+2Ch] [xbp-184h]
  int32_t lv; // [xsp+30h] [xbp-180h]
  int adjustAtk; // [xsp+34h] [xbp-17Ch]
  int adjustHp; // [xsp+38h] [xbp-178h]
  int32_t v255; // [xsp+3Ch] [xbp-174h]
  int32_t v256; // [xsp+3Ch] [xbp-174h]
  SupportSelectItemDraw_o *v257; // [xsp+40h] [xbp-170h]
  SupportSelectItemDraw_o *v258; // [xsp+40h] [xbp-170h]
  bool v259; // [xsp+48h] [xbp-168h]
  _BOOL4 QuestRestriction; // [xsp+48h] [xbp-168h]
  int32_t limitCount; // [xsp+50h] [xbp-160h]
  int exceedCount; // [xsp+54h] [xbp-15Ch]
  WarEntity_o *v263; // [xsp+58h] [xbp-158h]
  struct EquipTargetInfo_o *v265; // [xsp+68h] [xbp-148h]
  System_Collections_Generic_IEnumerable_T__o *v266; // [xsp+70h] [xbp-140h]
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // [xsp+70h] [xbp-140h]
  UserEventServantPointMaster_o *v268; // [xsp+70h] [xbp-140h]
  UserServantLeaderEntity_o *v269; // [xsp+78h] [xbp-138h]
  EventServantPointRankMaster_o *v270; // [xsp+80h] [xbp-130h]
  EventServantPointRankMaster_o *v271; // [xsp+80h] [xbp-130h]
  _BOOL4 v272; // [xsp+80h] [xbp-130h]
  ServantEntity_o *servantEntity; // [xsp+88h] [xbp-128h]
  SupportServantData_o *v274; // [xsp+90h] [xbp-120h]
  bool v275; // [xsp+90h] [xbp-120h]
  int32_t value; // [xsp+9Ch] [xbp-114h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v277; // [xsp+A0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v278; // [xsp+C0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v279; // [xsp+E0h] [xbp-D0h] BYREF
  UserEventServantPointEntity_o *entity; // [xsp+108h] [xbp-A8h] BYREF
  SkillInfo_array *v281; // [xsp+110h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+118h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+120h] [xbp-90h] BYREF
  int v284; // [xsp+12Ch] [xbp-84h] BYREF
  __int64 v285[2]; // [xsp+130h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+148h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v287; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v288; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v289; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v290; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v291; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v292; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v293; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v294; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v295; // 0:x0.16
  UnityEngine_Vector3_o v296; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4354845 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_IndexOf_int___);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_B70694(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B70694(&EventMargeItemUpValInfo_TypeInfo);
    sub_B70694(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&long___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___69159720);
    sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&Rarity_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B70694(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B70694(&SupportSelectItemDraw_TypeInfo);
    sub_B70694(&TutorialFlag_TypeInfo);
    sub_B70694(&StringLiteral_11791/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_B70694(&StringLiteral_10490/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_B70694(&StringLiteral_6485/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/);
    sub_B70694(&StringLiteral_350/*"#,0"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4354845 = 1;
  }
  eventUpVallInfo = 0LL;
  v285[0] = 0LL;
  v284 = 0;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  entity = 0LL;
  v281 = 0LL;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_592;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (__int64)this->fields.switchSkillUIList;
  if ( !gameObject )
    goto LABEL_592;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)gameObject,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
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
  if ( !supportServantData )
    goto LABEL_592;
  UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(supportServantData, classPos, 0LL);
  eventUpVallInfo = 0LL;
  gameObject = SupportServantData__getEquip(supportServantData, classPos, 0LL);
  v269 = UserServantLeaderEntity;
  if ( !gameObject )
  {
    v18 = 0LL;
    goto LABEL_38;
  }
  if ( !supportServantData->fields.isFriendInfo )
  {
    gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_592;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)gameObject, (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    gameObject = SupportServantData__getEquip(supportServantData, classPos, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_592;
    v20 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
            MasterData_WarQuestSelectionMaster,
            gameObject,
            (const MethodInfo_21C0668 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !v20 )
      goto LABEL_592;
    v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject;
    v23 = *(_QWORD *)&v20->fields.svtId.fields.currentCryptoKey;
    v22 = *(_QWORD *)&v20->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v288.fields.currentCryptoKey = v23;
    *(_QWORD *)&v288.fields.fakeValue = v22;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v288, 0LL);
    if ( !v21 )
      goto LABEL_592;
    gameObject = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v21,
                            gameObject,
                            (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    v18 = (System_Int32_array *)v20;
LABEL_38:
    equipTarget1 = 0LL;
    v263 = (WarEntity_o *)gameObject;
    if ( !UserServantLeaderEntity )
      goto LABEL_48;
    goto LABEL_39;
  }
  if ( !UserServantLeaderEntity )
    goto LABEL_592;
  equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
  gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_592;
  gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !equipTarget1 )
    goto LABEL_592;
  v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject;
  v17 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v287.fields.currentCryptoKey = v17;
  *(_QWORD *)&v287.fields.fakeValue = v16;
  gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v287, 0LL);
  if ( !v15 )
    goto LABEL_592;
  v263 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
           v15,
           gameObject,
           (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v18 = 0LL;
LABEL_39:
  if ( UserServantLeaderEntity->fields.userSvtId )
  {
    svtId = UserServantLeaderEntity->fields.svtId;
    gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                            svtId,
                            (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !gameObject )
      goto LABEL_592;
    servantEntity = (ServantEntity_o *)gameObject;
    v274 = supportServantData;
    v265 = equipTarget1;
    value = svtId;
    classId = *(_DWORD *)(gameObject + 80);
    if ( supportServantData->fields.isFriendInfo )
    {
      servantLeaderInfo = UserServantLeaderEntity->fields.servantLeaderInfo;
      v257 = this;
      if ( !servantLeaderInfo )
        goto LABEL_592;
      ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(servantLeaderInfo, 0LL);
      HIDWORD(v285[0]) = servantLeaderInfo->fields.lv;
      atk = servantLeaderInfo->fields.atk;
      LODWORD(v285[0]) = atk;
      if ( v265 )
      {
        LODWORD(v285[0]) = v265->fields.atk + atk;
        adjustAtk = servantLeaderInfo->fields.adjustAtk;
        hp = v265->fields.hp + servantLeaderInfo->fields.hp;
      }
      else
      {
        adjustAtk = servantLeaderInfo->fields.adjustAtk;
        hp = servantLeaderInfo->fields.hp;
      }
      v284 = hp;
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
      ServantLeaderInfo__GetAppendPassiveSkillInfo_28911308(servantLeaderInfo, &v281, 0, 0LL);
      eventSetupInfo = supportServantData->fields.eventSetupInfo;
      v255 = Rarity;
      limitCount = CardImageLimitCount;
      if ( !eventSetupInfo )
        goto LABEL_212;
      eventIdList = eventSetupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_592;
      if ( *(_QWORD *)&eventIdList->max_length )
      {
        codeIds = v18;
        EventUpVal_28896892 = ServantLeaderInfo__getEventUpVal_28896892(
                                servantLeaderInfo,
                                &eventUpVallInfo,
                                eventSetupInfo,
                                0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventDetailMaster___);
        v63 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
        v64 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v64,
          (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
        v65 = supportServantData->fields.eventSetupInfo;
        if ( !v65 )
          goto LABEL_592;
        v66 = v65->fields.eventIdList;
        v270 = (EventServantPointRankMaster_o *)v63;
        v259 = EventUpVal_28896892;
        if ( !v66 )
          goto LABEL_592;
        v67 = *(_QWORD *)&v66->max_length;
        v68 = Master_WarQuestSelectionMaster;
        if ( (int)v67 >= 1 )
        {
          v69 = 0LL;
          while ( 1 )
          {
            if ( v69 >= (unsigned int)v67 )
              goto LABEL_593;
            v70 = v66->m_Items[v69 + 1];
            questRestrictionInfo = v274->fields.questRestrictionInfo;
            if ( !questRestrictionInfo || questRestrictionInfo->fields.eventId == v70 )
            {
              if ( !v68 )
                goto LABEL_592;
              gameObject = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v68,
                                      v70,
                                      (const MethodInfo_21C0440 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
              if ( !gameObject
                || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0LL),
                    (gameObject & 1) == 0) )
              {
                if ( !v270 )
                  goto LABEL_592;
                if ( EventServantPointRankMaster__IsEnableEvent(v270, v70, 0LL) )
                {
                  eventSvtPoint = servantLeaderInfo->fields.eventSvtPoint;
                  v74 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                  v73 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v290.fields.currentCryptoKey = v74;
                  *(_QWORD *)&v290.fields.fakeValue = v73;
                  v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v290, 0LL);
                  EnableEntity = EventServantPointRankMaster__GetEnableEntity(v270, v70, eventSvtPoint, v75, 0LL);
                  if ( EnableEntity )
                    svtPointRank = EnableEntity->fields.svtPointRank;
                  else
                    svtPointRank = 0;
                  v68 = Master_WarQuestSelectionMaster;
                  v78 = (EventMargeItemUpValInfo_o *)sub_B70764(EventMargeItemUpValInfo_TypeInfo);
                  EventMargeItemUpValInfo___ctor_27374932(v78, v70, 0LL);
                  if ( !v78 )
                    goto LABEL_592;
                  EventMargeItemUpValInfo__SetServantPointInfo(
                    v78,
                    servantLeaderInfo->fields.eventSvtPoint,
                    svtPointRank,
                    1,
                    0LL);
                  if ( !v64 )
                    goto LABEL_592;
                  System_Collections_Generic_List_XWeaponTrail_Element___Insert(
                    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v64,
                    0,
                    (XWeaponTrail_Element_o *)v78,
                    (const MethodInfo_302689C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                }
                v79 = (EventPersonalMargeUpValInfo_o *)sub_B70764(EventPersonalMargeUpValInfo_TypeInfo);
                EventPersonalMargeUpValInfo___ctor(v79, v70, servantEntity, 0LL);
                gameObject = (__int64)eventUpVallInfo;
                if ( !eventUpVallInfo )
                  goto LABEL_592;
                gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
                if ( !v79 )
                  goto LABEL_592;
                EventPersonalMargeUpValInfo__Add(v79, (EventDropItemUpValInfo_array *)gameObject, 0LL);
                gameObject = EventPersonalMargeUpValInfo__IsEmpty(v79, 0LL);
                if ( (gameObject & 1) == 0 )
                {
                  gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v79, 0LL);
                  if ( !gameObject )
                    goto LABEL_592;
                  v80 = *(_QWORD *)(gameObject + 24);
                  v81 = gameObject;
                  if ( (int)v80 >= 1 )
                    break;
                }
              }
            }
LABEL_209:
            LODWORD(v67) = v66->max_length;
            if ( (__int64)++v69 >= (int)v67 )
              goto LABEL_210;
          }
          v82 = 0LL;
          while ( v82 < (unsigned int)v80 )
          {
            if ( !v64 )
              goto LABEL_592;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v64,
              *(EventMissionProgressRequest_Argument_ProgressData_o **)(v81 + 32 + 8 * v82),
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
            LODWORD(v80) = *(_DWORD *)(v81 + 24);
            if ( (__int64)++v82 >= (int)v80 )
              goto LABEL_209;
          }
          goto LABEL_593;
        }
LABEL_210:
        if ( !v64 )
          goto LABEL_592;
        v83 = v259;
        v84 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v64,
                (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
        supportServantData = v274;
        v18 = codeIds;
        v85 = (System_Collections_Generic_IEnumerable_T__o *)v84;
      }
      else
      {
LABEL_212:
        v85 = 0LL;
        v83 = 0;
      }
      codeIdsa = ServantLeaderInfo__getCommandCodeIdList(servantLeaderInfo, 0LL);
      cardParams = servantLeaderInfo->fields.commandCardParam;
      QuestRestriction = ServantLeaderInfo__getQuestRestriction(
                           servantLeaderInfo,
                           supportServantData->fields.questRestrictionInfo,
                           0LL);
      UniqueSvtRestriction = ServantLeaderInfo__getUniqueSvtRestriction(
                               servantLeaderInfo,
                               supportServantData->fields.questRestrictionInfo,
                               0LL);
      v266 = v85;
      IsUniqueIndividualityRestriction = ServantLeaderInfo__IsUniqueIndividualityRestriction(
                                           servantLeaderInfo,
                                           supportServantData->fields.questRestrictionInfo,
                                           0LL);
      v245 = UniqueSvtRestriction;
      if ( ServantLeaderInfo__IsSlotRestriction(servantLeaderInfo, supportServantData->fields.questRestrictionInfo, 0LL) )
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
        gameObject = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_592;
        v88 = *(_DWORD *)(gameObject + 48);
        gameObject = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_592;
        if ( v88 < 1 )
          goto LABEL_228;
        if ( !supportServantData->fields.questRestrictionInfo )
          goto LABEL_592;
        v89 = *(_DWORD *)(gameObject + 52);
        if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_34234816(
               supportServantData->fields.questRestrictionInfo,
               v89,
               0LL) )
        {
          v90 = v83;
          v91 = FrameType;
          v92 = v18;
          v93 = supportServantData->fields.questRestrictionInfo;
          v95 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
          v94 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v291.fields.currentCryptoKey = v95;
          *(_QWORD *)&v291.fields.fakeValue = v94;
          v96 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v291, 0LL);
          v97 = servantLeaderInfo->fields.limitCount;
          v98 = v96;
          gameObject = ServantLeaderInfo__getDispLimitCount(servantLeaderInfo, 0LL);
          if ( !v93 )
            goto LABEL_592;
          IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                v93,
                                                v98,
                                                v97,
                                                gameObject,
                                                v89,
                                                1,
                                                0LL);
          v18 = v92;
          FrameType = v91;
          v83 = v90;
        }
        else
        {
LABEL_228:
          IsRestrictionServantIndividuality = 0;
        }
      }
      IsDataLost = ServantLeaderInfo__IsDataLost(servantLeaderInfo, v274->fields.questRestrictionInfo, 0LL);
      TimesToRestart = ServantLeaderInfo__GetTimesToRestart(servantLeaderInfo, v274->fields.questRestrictionInfo, 0LL);
      this = v257;
      equipTarget1 = v265;
      svtId = value;
      v100 = v255;
    }
    else
    {
      gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_592;
      gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !gameObject )
        goto LABEL_592;
      gameObject = (__int64)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                              (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)gameObject,
                              UserServantLeaderEntity->fields.userSvtId,
                              (const MethodInfo_21C0668 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !gameObject )
        goto LABEL_592;
      v53 = (UserServantEntity_o *)gameObject;
      HIDWORD(v285[0]) = *(_DWORD *)(gameObject + 256);
      v54 = *(_DWORD *)(gameObject + 264);
      LODWORD(v285[0]) = v54;
      if ( v18 )
      {
        LODWORD(v285[0]) = v18->m_Items[59] + v54;
        adjustAtk = *(_DWORD *)(gameObject + 272);
        v55 = v18->m_Items[60] + *(_DWORD *)(gameObject + 268);
      }
      else
      {
        adjustAtk = *(_DWORD *)(gameObject + 272);
        v55 = *(_DWORD *)(gameObject + 268);
      }
      v284 = v55;
      adjustHp = *(_DWORD *)(gameObject + 276);
      v101 = UserServantEntity__getRarity((UserServantEntity_o *)gameObject, 0LL);
      v102 = v53->fields.exceedCount;
      v103 = v53;
      v100 = v101;
      exceedCount = v102;
      FrameType = UserServantEntity__getFrameType(v103, 0LL);
      limitCount = UserServantEntity__getCardImageLimitCount(v103, 0, 0LL);
      UserServantEntity__getSkillInfo(v103, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
      gameObject = UserServantEntity__getTreasureDeviceInfo(v103, &tdInfo, -1, -1, 0, 0LL);
      if ( !tdInfo )
        goto LABEL_592;
      lv = tdInfo->fields.lv;
      v271 = (EventServantPointRankMaster_o *)v103;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      strengthStatus = tdInfo->fields.strengthStatus;
      UserServantEntity__GetAppendPassiveSkillInfo_21653696(v103, &v281, 0LL);
      if ( supportServantData->fields.eventSetupInfo )
      {
        if ( v18 )
        {
          v104 = *(_OWORD *)&v18->m_Items[1];
          *(_OWORD *)&v279.fields.currentCryptoKey = *(_OWORD *)&v18->bounds;
          *(_OWORD *)&v279.fields.fakeValue = v104;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v278 = v279;
          v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v278, 0LL);
        }
        else
        {
          v105 = -1LL;
        }
        gameObject = sub_B706AC(long___TypeInfo, 1LL);
        if ( !gameObject )
          goto LABEL_592;
        if ( !*(_DWORD *)(gameObject + 24) )
          goto LABEL_593;
        *(_QWORD *)(gameObject + 32) = v105;
        v258 = this;
        EventUpVal_21626808 = UserServantEntity__getEventUpVal_21626808(
                                (UserServantEntity_o *)v271,
                                &eventUpVallInfo,
                                supportServantData->fields.eventSetupInfo,
                                (System_Int64_array *)gameObject,
                                0LL,
                                0LL);
        gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_592;
        v256 = v100;
        v246 = FrameType;
        v107 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)gameObject,
                                                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        codeIdsb = v18;
        v108 = (EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
        v268 = (UserEventServantPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
        v109 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v109,
          (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
        v110 = supportServantData->fields.eventSetupInfo;
        if ( !v110 )
          goto LABEL_592;
        v111 = v110->fields.eventIdList;
        if ( !v111 )
          goto LABEL_592;
        v112 = *(_QWORD *)&v111->max_length;
        if ( (int)v112 >= 1 )
        {
          v113 = 0LL;
          while ( 1 )
          {
            if ( v113 >= (unsigned int)v112 )
              goto LABEL_593;
            if ( !v107 )
              goto LABEL_592;
            v114 = v111->m_Items[v113 + 1];
            gameObject = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v107,
                                    v114,
                                    (const MethodInfo_21C0440 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
            if ( !gameObject
              || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0LL),
                  (gameObject & 1) == 0) )
            {
              if ( !v108 )
                goto LABEL_592;
              if ( EventServantPointRankMaster__IsEnableEvent(v108, v114, 0LL) )
              {
                v115 = *(_OWORD *)&v271->fields.revision;
                *(_OWORD *)&v279.fields.currentCryptoKey = *(_OWORD *)&v271->fields.seriazlier;
                *(_OWORD *)&v279.fields.fakeValue = v115;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v277 = v279;
                v116 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v277, 0LL);
                v117 = UserServantEntity__getSvtId((UserServantEntity_o *)v271, 0LL);
                gameObject = (__int64)v268;
                if ( !v268 )
                  goto LABEL_592;
                if ( UserEventServantPointMaster__TryGetEntity(v268, &entity, v116, v114, v117, 0LL) )
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
                v119 = UserServantEntity__getSvtId((UserServantEntity_o *)v271, 0LL);
                v120 = EventServantPointRankMaster__GetEnableEntity(v108, v114, BuddyPoint, v119, 0LL);
                v121 = v120 ? v120->fields.svtPointRank : 0;
                v122 = (EventMargeItemUpValInfo_o *)sub_B70764(EventMargeItemUpValInfo_TypeInfo);
                EventMargeItemUpValInfo___ctor_27374932(v122, v114, 0LL);
                if ( !v122 )
                  goto LABEL_592;
                EventMargeItemUpValInfo__SetServantPointInfo(v122, BuddyPoint, v121, 0, 0LL);
                if ( !v109 )
                  goto LABEL_592;
                System_Collections_Generic_List_XWeaponTrail_Element___Insert(
                  (System_Collections_Generic_List_XWeaponTrail_Element__o *)v109,
                  0,
                  (XWeaponTrail_Element_o *)v122,
                  (const MethodInfo_302689C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
              }
              v123 = (EventPersonalMargeUpValInfo_o *)sub_B70764(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v123, v114, servantEntity, 0LL);
              gameObject = (__int64)eventUpVallInfo;
              if ( !eventUpVallInfo )
                goto LABEL_592;
              gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
              if ( !v123 )
                goto LABEL_592;
              EventPersonalMargeUpValInfo__Add(v123, (EventDropItemUpValInfo_array *)gameObject, 0LL);
              gameObject = EventPersonalMargeUpValInfo__IsEmpty(v123, 0LL);
              if ( (gameObject & 1) == 0 )
              {
                gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v123, 0LL);
                if ( !gameObject )
                  goto LABEL_592;
                v124 = *(_QWORD *)(gameObject + 24);
                v125 = gameObject;
                if ( (int)v124 >= 1 )
                  break;
              }
            }
LABEL_279:
            LODWORD(v112) = v111->max_length;
            if ( (__int64)++v113 >= (int)v112 )
              goto LABEL_280;
          }
          v126 = 0LL;
          while ( v126 < (unsigned int)v124 )
          {
            if ( !v109 )
              goto LABEL_592;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v109,
              *(EventMissionProgressRequest_Argument_ProgressData_o **)(v125 + 32 + 8 * v126),
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
            LODWORD(v124) = *(_DWORD *)(v125 + 24);
            if ( (__int64)++v126 >= (int)v124 )
              goto LABEL_279;
          }
LABEL_593:
          v240 = sub_B70798(gameObject);
          sub_B70738(v240, 0LL);
        }
LABEL_280:
        if ( !v109 )
          goto LABEL_592;
        v83 = EventUpVal_21626808;
        v266 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v109,
                                                                (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
        this = v258;
        supportServantData = v274;
        v18 = codeIdsb;
        equipTarget1 = v265;
        svtId = value;
        FrameType = v246;
        v100 = v256;
      }
      else
      {
        v266 = 0LL;
        v83 = 0;
      }
      codeIdsa = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)v271, 0LL);
      QuestRestriction = UserServantEntity__getQuestRestriction(
                           (UserServantEntity_o *)v271,
                           supportServantData->fields.questRestrictionInfo,
                           2,
                           0LL);
      v245 = UserServantEntity__getUniqueSvtRestriction(
               (UserServantEntity_o *)v271,
               supportServantData->fields.questRestrictionInfo,
               0LL);
      v127 = UserServantEntity__IsUniqueIndividualityRestriction(
               (UserServantEntity_o *)v271,
               supportServantData->fields.questRestrictionInfo,
               0LL);
      IsDataLost = 0;
      IsRestrictionServantIndividuality = 0;
      IsUniqueIndividualityRestriction = v127;
      TimesToRestart = 0;
      cardParams = 0LL;
    }
    gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !gameObject )
      goto LABEL_592;
    v272 = IsRestrictionServantIndividuality;
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
      v130 = this->fields.levelLabel;
      gameObject = (__int64)System_Int32__ToString((int32_t)v285 + 4, 0LL);
      if ( !v130 )
        goto LABEL_592;
      UILabel__set_text(v130, (System_String_o *)gameObject, 0LL);
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
      v132 = v18;
      v133 = IsDataLost;
      v134 = v83;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_592;
      v135 = FrameType;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v136 = HIDWORD(v285[0]);
      if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      v137 = v100;
      Icon_22290192 = Rarity__getIcon_22290192(v100, exceedCount, v136, 0LL);
      if ( exceedCount < 1 )
      {
        v140 = 0;
      }
      else
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        gameObject = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantExceedMaster___);
        if ( !gameObject )
          goto LABEL_592;
        RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)gameObject, v137, exceedCount, 0, 0LL);
        gameObject = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
        if ( !gameObject )
          goto LABEL_592;
        v140 = ServantLvDetailMaster__GetRarityIcon(
                 (ServantLvDetailMaster_o *)gameObject,
                 v137,
                 SHIDWORD(v285[0]),
                 RarityIcon,
                 0LL);
      }
      v141 = this->fields.raritySprite;
      if ( v140 >= 3 )
      {
        if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v141, Icon_22290192, 0LL);
      }
      else
      {
        if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetCommon(v141, 0LL);
        gameObject = (__int64)this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_592;
        UISprite__set_spriteName((UISprite_o *)gameObject, Icon_22290192, 0LL);
      }
      gameObject = (__int64)this->fields.raritySprite;
      FrameType = v135;
      if ( !gameObject )
        goto LABEL_592;
      v83 = v134;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
        gameObject,
        *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
      gameObject = (__int64)this->fields.raritySprite;
      v142 = exceedCount >= 1
           ? this->fields.baseRarityPosition.fields.x + 1.0
           : this->fields.baseRarityPosition.fields.x;
      if ( !gameObject )
        goto LABEL_592;
      y = this->fields.baseRarityPosition.fields.y;
      z = this->fields.baseRarityPosition.fields.z;
      IsDataLost = v133;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_592;
      v296.fields.x = v142;
      v296.fields.y = y;
      v296.fields.z = z;
      v18 = v132;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v296, 0LL);
      equipTarget1 = v265;
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
      v146 = this->fields.skillListTreasureDevice;
      v147 = skillInfoList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (__int64)LocalizationManager__GetLevelList_34058160(v147, 0LL);
      if ( !v146 )
        goto LABEL_592;
      SkillListTreasureDeviceComponent__Set(
        v146,
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
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UIWidget__Add__);
    }
    appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
    {
      if ( v281 && *(_QWORD *)&v281->max_length )
      {
        gameObject = (__int64)this->fields.appendSkillList;
        if ( !gameObject )
          goto LABEL_592;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_592;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v150 = this->fields.appendSkillList;
        v151 = v281;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (__int64)LocalizationManager__GetLevelList_34058160(v151, 0LL);
        if ( !v150 )
          goto LABEL_592;
        AppendSkillListComponent__Set(v150, (System_String_o *)gameObject, 0LL);
        v152 = this->fields.switchSkillUIList;
        if ( v152 )
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v152,
            (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.appendSkillInfoUiWidget,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
      v154 = this->fields.switchSkillUIList;
      if ( v154 )
      {
        v155 = this->fields.switchSkillInfo;
        gameObject = (__int64)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v154,
                                (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
        if ( !v155 )
          goto LABEL_592;
        SwitchUIWidgetComponent__Set(v155, (UIWidget_array *)gameObject, 0LL);
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
      if ( v274->fields.isFriendInfo )
        ServantCommandCardListComponent__Set_27464268(
          (ServantCommandCardListComponent_o *)gameObject,
          svtId,
          cardParams,
          codeIdsa,
          2,
          0,
          0LL);
      else
        ServantCommandCardListComponent__Set_27464528(
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
        *(UnityEngine_Color_o *)&v158 = UnityEngine_Color__get_white(0LL);
      else
        *(UnityEngine_Color_o *)&v158 = UnityEngine_Color__get_yellow(0LL);
      gameObject = (__int64)this->fields.attackLabel;
      if ( !gameObject )
        goto LABEL_592;
      UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)&v158, 0LL);
      v162 = this->fields.attackLabel;
      gameObject = (__int64)System_Int32__ToString_39283984((int32_t)v285, (System_String_o *)StringLiteral_350/*"#,0"*/, 0LL);
      if ( !v162 )
        goto LABEL_592;
      UILabel__set_text(v162, (System_String_o *)gameObject, 0LL);
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
        *(UnityEngine_Color_o *)&v164 = UnityEngine_Color__get_white(0LL);
      else
        *(UnityEngine_Color_o *)&v164 = UnityEngine_Color__get_yellow(0LL);
      gameObject = (__int64)this->fields.hpLabel;
      if ( !gameObject )
        goto LABEL_592;
      UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)&v164, 0LL);
      v168 = this->fields.hpLabel;
      gameObject = (__int64)System_Int32__ToString_39283984((int32_t)&v284, (System_String_o *)StringLiteral_350/*"#,0"*/, 0LL);
      if ( !v168 )
        goto LABEL_592;
      UILabel__set_text(v168, (System_String_o *)gameObject, 0LL);
    }
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      v170 = this->fields.baseSprite;
      baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFormationBase(v170, FrameType, baseDefaultUIAtlas, 0, 0LL);
    }
    base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
    {
      v173 = this->fields.base2Sprite;
      base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFormationFrameForSupportSelect(v173, FrameType, base2DefaultUIAtlas, 0, 0LL);
    }
    gameObject = (__int64)this->fields.backClassIcon;
    if ( !gameObject
      || (gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0 )
    {
LABEL_592:
      sub_B7076C(gameObject, v10);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    if ( v272 || QuestRestriction )
    {
      sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      supportServantData = v274;
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
      v177 = LocalizationManager__Get((System_String_o *)StringLiteral_10490/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
      goto LABEL_430;
    }
    v182 = IsDataLost;
    supportServantData = v274;
    if ( v274->fields.isFriendInfo || !ServantEntity__checkIsHeroineSvt(servantEntity, 0LL) )
      goto LABEL_445;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_29045252(126, 0LL) )
    {
      v183 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v183, 0LL, 0LL) )
        goto LABEL_465;
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_592;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_592;
      v184 = 1;
    }
    else
    {
LABEL_445:
      if ( IsUniqueIndividualityRestriction || v245 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v185 = LocalizationManager__Get((System_String_o *)StringLiteral_6485/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0LL);
        SupportSelectItemDraw__SetWarningMessage(this, v185, 1, v186);
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
        v194 = v83 != 0;
        LODWORD(UserServantLeaderEntity) = 1;
        v275 = v194;
        if ( eventFriendPoints && (gameObject & 1) != 0 )
        {
          LODWORD(v195) = eventFriendPoints->max_length;
          v196 = v18;
          if ( (int)v195 >= 1 )
          {
            v197 = 0;
            v198 = 0;
            v199 = 0;
            while ( v197 < (unsigned int)v195 )
            {
              v200 = &eventFriendPoints->obj.klass + (int)v197;
              v203 = v200[4];
              v202 = (__int64 *)(v200 + 4);
              v201 = v203;
              if ( !v203 )
                goto LABEL_592;
              gameObject = System_Array__IndexOf_int_(
                             *(System_Int32_array **)&v201->_1.byval_arg.bits,
                             value,
                             (const MethodInfo_1FCBFE4 *)Method_System_Array_IndexOf_int___);
              v195 = *(_QWORD *)&eventFriendPoints->max_length;
              if ( v197 >= (unsigned int)v195 )
                break;
              v204 = *v202;
              if ( !*v202 )
                goto LABEL_592;
              v205 = *(_QWORD *)(v204 + 40);
              if ( v205 )
                v206 = *(_DWORD *)(v205 + 24) == 0;
              else
                v206 = 1;
              if ( (v206 || (int)gameObject >= 0) && v198 < *(_DWORD *)(v204 + 48) )
              {
                v199 = *(_DWORD *)(v204 + 16);
                v198 = *(_DWORD *)(v204 + 48);
              }
              if ( (int)++v197 >= (int)v195 )
                goto LABEL_496;
            }
            goto LABEL_593;
          }
          v199 = 0;
          v198 = 0;
LABEL_496:
          if ( v198 >= 1 )
          {
            v207 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
            v208 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v207;
            if ( v266 )
              System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
                v207,
                v266,
                (const MethodInfo_3024BBC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___69159720);
            else
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v207,
                (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
            v209 = (EventMargeItemUpValInfo_o *)sub_B70764(EventMargeItemUpValInfo_TypeInfo);
            EventMargeItemUpValInfo___ctor_27374840(v209, v199, v198, 0LL);
            if ( !v208 )
              goto LABEL_592;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v208,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v209,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
            v266 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v208,
                                                                    (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
          }
          v18 = v196;
          equipTarget1 = v265;
          LODWORD(UserServantLeaderEntity) = 1;
        }
        if ( v18 )
          goto LABEL_504;
        goto LABEL_138;
      }
      if ( v182 )
      {
        v181 = 1;
        v180 = this;
        v179 = 0;
        v178 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_431;
      }
      if ( TimesToRestart >= 1 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v187 = LocalizationManager__Get((System_String_o *)StringLiteral_11791/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
        LODWORD(v279.fields.currentCryptoKey) = TimesToRestart;
        v189 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v279, v188);
        v177 = System_String__Format(v187, v189, 0LL);
LABEL_430:
        v178 = v177;
        v179 = 1;
        v180 = this;
        v181 = 0;
LABEL_431:
        SupportSelectItemDraw__SetMaskMessage(v180, v178, v179, v181, v175);
        goto LABEL_466;
      }
      v190 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v190, 0LL, 0LL) )
      {
LABEL_465:
        SupportSelectItemDraw__ClearMessage(this, v10);
        goto LABEL_466;
      }
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_592;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_592;
      v184 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v184, 0LL);
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
  v29 = **(_QWORD **)(gameObject + 184);
  if ( !v29 )
    goto LABEL_592;
  if ( *(_DWORD *)(v29 + 24) <= (unsigned int)classPos )
    goto LABEL_593;
  if ( !backClassIcon )
    goto LABEL_592;
  UISprite__set_spriteName(backClassIcon, *(System_String_o **)(v29 + 8LL * classPos + 32), 0LL);
  v30 = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
  {
    v31 = this->fields.baseSprite;
    v32 = this->fields.baseDefaultUIAtlas;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetFormationBase(v31, 9, v32, 0, 0LL);
  }
  v33 = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
  {
    v34 = this->fields.base2Sprite;
    v35 = this->fields.base2DefaultUIAtlas;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetFormationFrameForSupportSelect(v34, 9, v35, 0, 0LL);
  }
  v36 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.servantClassIcon;
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  v37 = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v37, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.levelLabel;
    if ( !gameObject )
      goto LABEL_592;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v38 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v38, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  v39 = (UnityEngine_Object_o *)this->fields.attackLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.attackLabel;
    if ( !gameObject )
      goto LABEL_592;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v40 = (UnityEngine_Object_o *)this->fields.hpLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v40, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.hpLabel;
    if ( !gameObject )
      goto LABEL_592;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v41 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v41, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.sortieMaskSprite;
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  SupportSelectItemDraw__ClearMessage(this, v10);
  v42 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.skillListTreasureDevice;
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  v43 = (UnityEngine_Object_o *)this->fields.appendSkillList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v43, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.appendSkillList;
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  v44 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v44, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_592;
    ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)gameObject, 0LL);
  }
  v45 = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.friendPointBonusBase;
    if ( !gameObject )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  v266 = 0LL;
  v275 = 0;
  if ( v18 )
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
    v210 = v18;
    equipSprite = (UISprite_o *)this->fields.equipSprite;
    v212 = *(_QWORD *)&v18->m_Items[13];
    v213 = *(_QWORD *)&v210->m_Items[15];
    v214 = v210;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v292.fields.currentCryptoKey = v212;
    *(_QWORD *)&v292.fields.fakeValue = v213;
    v215 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v292, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipFace(equipSprite, v215, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      v218 = *(_QWORD *)&v214->m_Items[17];
      v217 = *(_QWORD *)&v214->m_Items[19];
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v293.fields.currentCryptoKey = v218;
      *(_QWORD *)&v293.fields.fakeValue = v217;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v293, 0LL);
      if ( !this->fields.equipLimitCountSprite )
        goto LABEL_592;
      v219 = gameObject;
      gameObject = (__int64)UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                              0LL);
      if ( v219 < 4 )
        goto LABEL_523;
      if ( !v263 )
        goto LABEL_592;
      v52 = SLODWORD(v263->fields.targetId) < v219;
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
    v46 = (UISprite_o *)this->fields.equipSprite;
    v48 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v47 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v289.fields.currentCryptoKey = v48;
    *(_QWORD *)&v289.fields.fakeValue = v47;
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v289, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipFace(v46, v49, 0LL);
    v50 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v50, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.equipLimitCountSprite;
      if ( !gameObject )
        goto LABEL_592;
      v51 = equipTarget1->fields.limitCount;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( v51 < 4 )
      {
LABEL_523:
        v10 = 0LL;
        if ( !gameObject )
          goto LABEL_592;
LABEL_531:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (bool)v10, 0LL);
        goto LABEL_532;
      }
      if ( !v263 )
        goto LABEL_592;
      v52 = SLODWORD(v263->fields.targetId) < v51;
LABEL_527:
      v10 = (const MethodInfo *)!v52;
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
    v56 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v56, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.equipLimitCountSprite;
      if ( !gameObject )
        goto LABEL_592;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_592;
      LOBYTE(v10) = 0;
      goto LABEL_531;
    }
  }
LABEL_532:
  v220 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = UnityEngine_Object__op_Inequality(v220, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    if ( supportServantData->fields.isFriendInfo )
    {
      if ( (_DWORD)UserServantLeaderEntity )
      {
        v221 = v269;
        if ( !v269 )
          goto LABEL_592;
        v222 = v269->fields.servantLeaderInfo;
        if ( v222 )
        {
          v224 = *(_QWORD *)&v222->fields.svtId.fields.currentCryptoKey;
          v223 = *(_QWORD *)&v222->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v294.fields.currentCryptoKey = v224;
          *(_QWORD *)&v294.fields.fakeValue = v223;
          gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v294, 0LL);
          if ( !v269->fields.servantLeaderInfo )
            goto LABEL_592;
          v225 = gameObject;
          v226 = ServantLeaderInfo__getRarity(v269->fields.servantLeaderInfo, 0LL);
LABEL_559:
          v232 = v226;
          goto LABEL_562;
        }
        goto LABEL_561;
      }
    }
    else if ( (_DWORD)UserServantLeaderEntity )
    {
      v221 = v269;
      if ( !v269 )
        goto LABEL_592;
      userServantEntity = v269->fields.userServantEntity;
      if ( userServantEntity )
      {
        v231 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v230 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v295.fields.currentCryptoKey = v231;
        *(_QWORD *)&v295.fields.fakeValue = v230;
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v295, 0LL);
        if ( !v269->fields.userServantEntity )
          goto LABEL_592;
        v225 = gameObject;
        v226 = UserServantEntity__getRarity(v269->fields.userServantEntity, 0LL);
        goto LABEL_559;
      }
LABEL_561:
      v232 = -1;
      v225 = -1;
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
        (EventMargeItemUpValInfo_array *)v266,
        v225,
        v232,
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
        v228 = 0;
        goto LABEL_572;
      }
      goto LABEL_573;
    }
    v221 = v269;
    goto LABEL_561;
  }
  v227 = (UnityEngine_Object_o *)this->fields.bounusIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v221 = v269;
  if ( UnityEngine_Object__op_Inequality(v227, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.bounusIcon;
    if ( !gameObject )
      goto LABEL_592;
    v228 = v275;
LABEL_572:
    ShiningIconComponent__Set_33848384((ShiningIconComponent_o *)gameObject, v228, 0LL);
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
  pushUserServantId = supportServantData->fields.pushUserServantId;
  if ( !pushUserServantId )
    return;
  if ( !v221 )
    goto LABEL_594;
  if ( pushUserServantId != v221->fields.userSvtId )
    return;
  v237 = (UnityEngine_Component_o *)this->fields.pushSprite;
  if ( !v237 || (v237 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v237, 0LL)) == 0LL )
LABEL_594:
    sub_B7076C(v237, v238);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v237, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetMaskMessage(
        SupportSelectItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        bool isDataLost,
        const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x23
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v12; // x22
  UIWidget_o *v13; // x21
  struct SupportSelectItemDraw_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  float v18; // s0
  float v19; // s8
  UnityEngine_Transform_o *transform; // x20
  float restrictionMaskMessageWidth; // s0
  float v22; // s1
  float v23; // s0
  float v24; // s2
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4354847 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SupportSelectItemDraw_TypeInfo);
    sub_B70694(&StringLiteral_19791/*"img_frames_mask05"*/);
    sub_B70694(&StringLiteral_18148/*"datalost_party_edit"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4354847 = 1;
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
    v12 = this->fields.restrictionMaskSprite;
    if ( isDataLost )
    {
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetPartyOrganizationImage(v12, (System_String_o *)StringLiteral_18148/*"datalost_party_edit"*/, 0LL);
      v13 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)SupportSelectItemDraw_TypeInfo;
      if ( (BYTE3(SupportSelectItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      }
      if ( !v13 )
        goto LABEL_47;
      UIWidget__set_width(v13, SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_WIDTH, 0LL);
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
      if ( !v12 )
        goto LABEL_47;
      UISprite__set_atlas(this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_47;
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_19791/*"img_frames_mask05"*/, 0LL);
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
      LODWORD(v18) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_47;
      v19 = v18;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      transform = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v19 > restrictionMaskMessageWidth )
      {
        v22 = 1.0;
        v23 = restrictionMaskMessageWidth / v19;
        v24 = 1.0;
        if ( !gameObject )
          goto LABEL_47;
        goto LABEL_37;
      }
    }
    else
    {
      transform = UnityEngine_Component__get_transform(gameObject, 0LL);
    }
    *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_47;
LABEL_37:
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v23, 0LL);
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
    sub_B7076C(gameObject, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetWarningMessage(
        SupportSelectItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_Vector2_o printedSize; // kr00_8
  UnityEngine_Transform_o *v12; // x21
  float restrictionWarningMessageWidth; // s0
  float v14; // s1
  float v15; // s0
  float v16; // s2
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4354848 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4354848 = 1;
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
    sub_B7076C(gameObject, v8);
  }
}