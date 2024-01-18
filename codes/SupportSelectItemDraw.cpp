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
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x19
  __int64 v21; // x0
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x1
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  SupportSelectItemDraw_c *v86; // x8
  struct SupportSelectItemDraw_StaticFields *v87; // x8
  __int64 v88; // x0
  __int64 v89; // x0

  if ( (byte_418AEB2 & 1) == 0 )
  {
    sub_B2C35C(&string___TypeInfo, v1);
    sub_B2C35C(&SupportSelectItemDraw_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_19294/*"icon_class1002"*/, v3);
    sub_B2C35C(&StringLiteral_19292/*"icon_class007"*/, v4);
    sub_B2C35C(&StringLiteral_19291/*"icon_class006"*/, v5);
    sub_B2C35C(&StringLiteral_19289/*"icon_class004"*/, v6);
    sub_B2C35C(&StringLiteral_19286/*"icon_class001"*/, v7);
    sub_B2C35C(&StringLiteral_19293/*"icon_class1001"*/, v8);
    sub_B2C35C(&StringLiteral_19287/*"icon_class002"*/, v9);
    sub_B2C35C(&StringLiteral_19290/*"icon_class005"*/, v10);
    sub_B2C35C(&StringLiteral_19288/*"icon_class003"*/, v11);
    byte_418AEB2 = 1;
  }
  v12 = sub_B2C374(string___TypeInfo, 9LL);
  if ( !v12 )
    sub_B2C434(0LL, v13);
  v20 = (System_Int32_array **)v12;
  v21 = StringLiteral_19293/*"icon_class1001"*/;
  if ( StringLiteral_19293/*"icon_class1001"*/ )
  {
    v21 = sub_B2C41C(StringLiteral_19293/*"icon_class1001"*/, *(_QWORD *)&(*v20)->m_Items[9]);
    if ( !v21 )
      goto LABEL_51;
    v22 = (System_Int32_array **)StringLiteral_19293/*"icon_class1001"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( !*((_DWORD *)v20 + 6) )
    goto LABEL_50;
  v20[4] = (System_Int32_array *)v22;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 4), v22, v14, v15, v16, v17, v18, v19);
  v21 = StringLiteral_19286/*"icon_class001"*/;
  if ( StringLiteral_19286/*"icon_class001"*/ )
  {
    v21 = sub_B2C41C(StringLiteral_19286/*"icon_class001"*/, *(_QWORD *)&(*v20)->m_Items[9]);
    if ( !v21 )
      goto LABEL_51;
    v29 = (System_Int32_array **)StringLiteral_19286/*"icon_class001"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( *((_DWORD *)v20 + 6) <= 1u )
    goto LABEL_50;
  v20[5] = (System_Int32_array *)v29;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 5), v29, v23, v24, v25, v26, v27, v28);
  v21 = StringLiteral_19287/*"icon_class002"*/;
  if ( StringLiteral_19287/*"icon_class002"*/ )
  {
    v21 = sub_B2C41C(StringLiteral_19287/*"icon_class002"*/, *(_QWORD *)&(*v20)->m_Items[9]);
    if ( !v21 )
      goto LABEL_51;
    v36 = (System_Int32_array **)StringLiteral_19287/*"icon_class002"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( *((_DWORD *)v20 + 6) <= 2u )
    goto LABEL_50;
  v20[6] = (System_Int32_array *)v36;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 6), v36, v30, v31, v32, v33, v34, v35);
  v21 = StringLiteral_19288/*"icon_class003"*/;
  if ( StringLiteral_19288/*"icon_class003"*/ )
  {
    v21 = sub_B2C41C(StringLiteral_19288/*"icon_class003"*/, *(_QWORD *)&(*v20)->m_Items[9]);
    if ( !v21 )
      goto LABEL_51;
    v43 = (System_Int32_array **)StringLiteral_19288/*"icon_class003"*/;
  }
  else
  {
    v43 = 0LL;
  }
  if ( *((_DWORD *)v20 + 6) <= 3u )
    goto LABEL_50;
  v20[7] = (System_Int32_array *)v43;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 7), v43, v37, v38, v39, v40, v41, v42);
  v21 = StringLiteral_19289/*"icon_class004"*/;
  if ( StringLiteral_19289/*"icon_class004"*/ )
  {
    v21 = sub_B2C41C(StringLiteral_19289/*"icon_class004"*/, *(_QWORD *)&(*v20)->m_Items[9]);
    if ( !v21 )
      goto LABEL_51;
    v50 = (System_Int32_array **)StringLiteral_19289/*"icon_class004"*/;
  }
  else
  {
    v50 = 0LL;
  }
  if ( *((_DWORD *)v20 + 6) <= 4u )
    goto LABEL_50;
  v20[8] = (System_Int32_array *)v50;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 8), v50, v44, v45, v46, v47, v48, v49);
  v21 = StringLiteral_19290/*"icon_class005"*/;
  if ( StringLiteral_19290/*"icon_class005"*/ )
  {
    v21 = sub_B2C41C(StringLiteral_19290/*"icon_class005"*/, *(_QWORD *)&(*v20)->m_Items[9]);
    if ( !v21 )
      goto LABEL_51;
    v57 = (System_Int32_array **)StringLiteral_19290/*"icon_class005"*/;
  }
  else
  {
    v57 = 0LL;
  }
  if ( *((_DWORD *)v20 + 6) <= 5u )
    goto LABEL_50;
  v20[9] = (System_Int32_array *)v57;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 9), v57, v51, v52, v53, v54, v55, v56);
  v21 = StringLiteral_19291/*"icon_class006"*/;
  if ( StringLiteral_19291/*"icon_class006"*/ )
  {
    v21 = sub_B2C41C(StringLiteral_19291/*"icon_class006"*/, *(_QWORD *)&(*v20)->m_Items[9]);
    if ( !v21 )
      goto LABEL_51;
    v64 = (System_Int32_array **)StringLiteral_19291/*"icon_class006"*/;
  }
  else
  {
    v64 = 0LL;
  }
  if ( *((_DWORD *)v20 + 6) <= 6u )
    goto LABEL_50;
  v20[10] = (System_Int32_array *)v64;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 10), v64, v58, v59, v60, v61, v62, v63);
  v21 = StringLiteral_19292/*"icon_class007"*/;
  if ( StringLiteral_19292/*"icon_class007"*/ )
  {
    v21 = sub_B2C41C(StringLiteral_19292/*"icon_class007"*/, *(_QWORD *)&(*v20)->m_Items[9]);
    if ( !v21 )
      goto LABEL_51;
    v71 = (System_Int32_array **)StringLiteral_19292/*"icon_class007"*/;
  }
  else
  {
    v71 = 0LL;
  }
  if ( *((_DWORD *)v20 + 6) <= 7u )
    goto LABEL_50;
  v20[11] = (System_Int32_array *)v71;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 11), v71, v65, v66, v67, v68, v69, v70);
  v21 = StringLiteral_19294/*"icon_class1002"*/;
  if ( StringLiteral_19294/*"icon_class1002"*/ )
  {
    v21 = sub_B2C41C(StringLiteral_19294/*"icon_class1002"*/, *(_QWORD *)&(*v20)->m_Items[9]);
    if ( v21 )
    {
      v78 = (System_Int32_array **)StringLiteral_19294/*"icon_class1002"*/;
      goto LABEL_48;
    }
LABEL_51:
    v89 = sub_B2C454(v21);
    sub_B2C400(v89, 0LL);
  }
  v78 = 0LL;
LABEL_48:
  if ( *((_DWORD *)v20 + 6) <= 8u )
  {
LABEL_50:
    v88 = sub_B2C460(v21);
    sub_B2C400(v88, 0LL);
  }
  v20[12] = (System_Int32_array *)v78;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 12), v78, v72, v73, v74, v75, v76, v77);
  static_fields = (BattleServantConfConponent_o *)SupportSelectItemDraw_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v20;
  sub_B2C2F8(static_fields, v20, v80, v81, v82, v83, v84, v85);
  v86 = SupportSelectItemDraw_TypeInfo;
  SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_WIDTH = 156;
  v86->static_fields->DATA_LOST_MASK_HEIGHT = 258;
  v87 = v86->static_fields;
  *(_QWORD *)&v87->DATA_LOST_MASK_POSITION.fields.x = 0x43410000BF800000LL;
  v87->DATA_LOST_MASK_POSITION.fields.z = 0.0;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_IEnumerator_c *v16; // x8
  unsigned __int64 v17; // x10
  System_Collections_IEnumerator_c **v18; // x11
  __int64 v19; // x0
  UnityEngine_Component_o *v20; // x0
  __int64 v21; // x1
  UnityEngine_Component_o *v22; // x21
  __int64 v23; // x9
  __int64 v24; // x1
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Component_o *equipRootObj; // x0
  UnityEngine_Object_o *v27; // x23
  UnityEngine_GameObject_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x0
  __int64 v31; // x3
  __int64 v32; // x8
  __int64 v33; // x19
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0

  if ( (byte_418AEB1 & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, method);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Transform_TypeInfo, v5);
    byte_418AEB1 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B2C434(0LL, v7);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_B2C434(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        v18 += 2;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1].method;
    }
    else
    {
LABEL_16:
      v19 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v15);
    }
    v20 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                       Enumerator,
                                       *(_QWORD *)(v19 + 8));
    v22 = v20;
    if ( !v20 )
      goto LABEL_38;
    v23 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v23
      || (UnityEngine_Transform_c *)v20->klass->_2.typeHierarchy[v23 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B2C728(v20);
LABEL_38:
      sub_B2C434(v20, v21);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v20, 0LL);
    equipRootObj = (UnityEngine_Component_o *)this->fields.equipRootObj;
    if ( !equipRootObj )
      sub_B2C434(0LL, v24);
    v27 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(equipRootObj, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(gameObject, v27, 0LL) )
    {
      v28 = UnityEngine_Component__get_gameObject(v22, 0LL);
      if ( !v28 )
        sub_B2C434(0LL, v29);
      UnityEngine_GameObject__SetActive(v28, 0, 0LL);
    }
  }
  v30 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
  if ( v30 )
  {
    v32 = *(_QWORD *)v30;
    v33 = v30;
    if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
    {
      v34 = 0LL;
      v35 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
          goto LABEL_33;
      }
      v36 = v32 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_33:
      v36 = sub_AC5258(v30, System_IDisposable_TypeInfo, 0LL, v31);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
  }
}


void __fastcall SupportSelectItemDraw__Awake(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v6; // x1
  void *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UISprite_o *v16; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *baseSprite; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UISprite_o *v25; // x8
  struct UIAtlas_o *v26; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct UISprite_o *v34; // x8
  struct UIAtlas_o *v35; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418AEA9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_418AEA9 = 1;
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
    v16 = this->fields.restrictionMaskSprite;
    this->fields.restrictionWarningCenter.fields.x = localPosition.fields.x;
    this->fields.restrictionWarningCenter.fields.z = localPosition.fields.z;
    this->fields.restrictionWarningCenter.fields.y = localPosition.fields.y + -55.0;
    if ( !v16 )
      goto LABEL_42;
    mAtlas = v16->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.maskSpriteDefaultAtlas,
      (System_Int32_array **)mAtlas,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
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
    v25 = this->fields.baseSprite;
    if ( !v25 )
      goto LABEL_42;
    v26 = v25->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = v26;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.baseDefaultUIAtlas,
      (System_Int32_array **)v26,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
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
    v34 = this->fields.base2Sprite;
    if ( v34 )
    {
      v35 = v34->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v35;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.base2DefaultUIAtlas,
        (System_Int32_array **)v35,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      goto LABEL_41;
    }
LABEL_42:
    sub_B2C434(transform, v6);
  }
LABEL_41:
  SupportSelectItemDraw__SetActiveDragSwapGuide(this, 0, (const MethodInfo *)v28);
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v36;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.switchSkillUIList,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
}


void __fastcall SupportSelectItemDraw__ClearItem(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *sortieMaskSprite; // x20

  if ( (byte_418AEAA & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418AEAA = 1;
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
    sub_B2C434(gameObject, v4);
  }
LABEL_21:
  SupportSelectItemDraw__ClearMessage(this, v4);
}


void __fastcall SupportSelectItemDraw__ClearMessage(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_418AEAC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_418AEAC = 1;
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
    sub_B2C434(gameObject, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetActiveDragSwapGuide(
        SupportSelectItemDraw_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragSwapGuideObj; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_418AEAF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, flag);
    byte_418AEAF = 1;
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
      sub_B2C434(0LL, v6);
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
  if ( (byte_418AEB0 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418AEB0 = 1;
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
      sub_B2C434(0LL, v6);
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
  const MethodInfo *v52; // x1
  UnityEngine_Object_o *skillInfoUiWidget; // x20
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x20
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x24
  struct EquipTargetInfo_o *equipTarget1; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v57; // x21
  __int64 v58; // x20
  __int64 v59; // x23
  System_Int32_array *v60; // x23
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  UserServantEntity_o *v62; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v63; // x21
  __int64 v64; // x20
  __int64 v65; // x23
  int32_t svtId; // w19
  struct ServantLeaderInfo_o *servantLeaderInfo; // x28
  int32_t atk; // w8
  int hp; // w8
  UISprite_o *backClassIcon; // x21
  __int64 v71; // x8
  UnityEngine_Object_o *v72; // x20
  UISprite_o *v73; // x20
  UIAtlas_o *v74; // x21
  UnityEngine_Object_o *v75; // x20
  UISprite_o *v76; // x20
  UIAtlas_o *v77; // x21
  UnityEngine_Object_o *v78; // x20
  UnityEngine_Object_o *v79; // x20
  UnityEngine_Object_o *v80; // x20
  UnityEngine_Object_o *v81; // x20
  UnityEngine_Object_o *v82; // x20
  UnityEngine_Object_o *v83; // x20
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
  int32_t Rarity; // w19
  int32_t FrameType; // w22
  int32_t CardImageLimitCount; // w21
  EventUpValSetupInfo_o *eventSetupInfo; // x2
  struct System_Int32_array *eventIdList; // x8
  bool EventUpVal_29337748; // w24
  WarQuestSelectionMaster_o *v105; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v106; // x23
  struct EventUpValSetupInfo_o *v107; // x8
  struct System_Int32_array *v108; // x19
  __int64 v109; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v110; // x24
  unsigned __int64 v111; // x26
  int32_t v112; // w27
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventSvtPoint; // w20
  __int64 v115; // x21
  __int64 v116; // x24
  int32_t v117; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w25
  EventMargeItemUpValInfo_o *v120; // x21
  EventPersonalMargeUpValInfo_o *v121; // x25
  __int64 v122; // x8
  __int64 v123; // x25
  unsigned __int64 v124; // x20
  int v125; // w24
  WarBoardUiData_SaveData_array *v126; // x0
  System_Collections_Generic_IEnumerable_T__o *v127; // x21
  _BOOL4 UniqueSvtRestriction; // w25
  _BOOL4 IsRestrictionServantIndividuality; // w20
  int v130; // w20
  int32_t v131; // w21
  int v132; // w25
  int32_t v133; // w24
  System_Int32_array *v134; // x19
  QuestRestrictionInfo_o *v135; // x22
  __int64 v136; // x20
  __int64 v137; // x23
  int32_t v138; // w0
  int32_t v139; // w20
  int32_t v140; // w23
  bool IsDataLost; // w26
  int32_t v142; // w21
  int32_t v143; // w0
  int v144; // w8
  UserServantEntity_o *v145; // x20
  __int128 v146; // q1
  int64_t v147; // x20
  bool EventUpVal_21654264; // w19
  DataMasterBase_WarMaster__WarEntity__int__o *v149; // x28
  EventServantPointRankMaster_o *v150; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v151; // x21
  struct EventUpValSetupInfo_o *v152; // x8
  struct System_Int32_array *v153; // x23
  __int64 v154; // x8
  unsigned __int64 v155; // x26
  int32_t v156; // w27
  __int128 v157; // q0
  int64_t v158; // x20
  int32_t v159; // w4
  int32_t BuddyPoint; // w25
  int32_t v161; // w0
  EventServantPointRankEntity_o *v162; // x0
  int32_t v163; // w24
  EventMargeItemUpValInfo_o *v164; // x20
  EventPersonalMargeUpValInfo_o *v165; // x25
  __int64 v166; // x8
  __int64 v167; // x25
  unsigned __int64 v168; // x20
  _BOOL4 v169; // w0
  UnityEngine_Object_o *servantClassIcon; // x20
  UnityEngine_Object_o *levelLabel; // x20
  UILabel_o *v172; // x20
  UnityEngine_Object_o *raritySprite; // x20
  System_Int32_array *v174; // x28
  bool v175; // w23
  int v176; // w26
  int32_t v177; // w24
  int32_t v178; // w20
  int32_t v179; // w22
  System_String_o *Icon_21889892; // x21
  int32_t RarityIcon; // w20
  int32_t v182; // w8
  UISprite_o *v183; // x22
  float v184; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *skillListTreasureDevice; // x20
  SkillListTreasureDeviceComponent_o *v188; // x20
  SkillInfo_array *v189; // x21
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x0
  UnityEngine_Object_o *appendSkillList; // x20
  AppendSkillListComponent_o *v192; // x20
  SkillInfo_array *v193; // x21
  struct System_Collections_Generic_List_UIWidget__o *v194; // x0
  UnityEngine_Object_o *switchSkillInfo; // x20
  struct System_Collections_Generic_List_UIWidget__o *v196; // x0
  SwitchUIWidgetComponent_o *v197; // x20
  UnityEngine_Object_o *svtCommandCardList; // x20
  UnityEngine_Object_o *attackLabel; // x20
  int v200; // s0
  UILabel_o *v204; // x20
  UnityEngine_Object_o *hpLabel; // x20
  int v206; // s0
  UILabel_o *v210; // x20
  UnityEngine_Object_o *baseSprite; // x20
  UISprite_o *v212; // x21
  UIAtlas_o *baseDefaultUIAtlas; // x20
  UnityEngine_Object_o *base2Sprite; // x20
  UISprite_o *v215; // x21
  UIAtlas_o *base2DefaultUIAtlas; // x20
  const MethodInfo *v217; // x4
  UnityEngine_Object_o *sortieMaskSprite; // x20
  System_String_o *v219; // x0
  System_String_o *v220; // x1
  bool v221; // w2
  SupportSelectItemDraw_o *v222; // x0
  bool v223; // w3
  bool v224; // w19
  UnityEngine_Object_o *v225; // x20
  bool v226; // w1
  System_String_o *v227; // x0
  const MethodInfo *v228; // x3
  System_String_o *v229; // x20
  Il2CppObject *v230; // x0
  UnityEngine_Object_o *v231; // x20
  UnityEngine_Object_o *friendPointBonus; // x20
  UnityEngine_Object_o *friendPointBonusBase; // x20
  UnityEngine_Object_o *eventUpValIcon; // x20
  bool v235; // w8
  __int64 v236; // x8
  System_Int32_array *v237; // x28
  unsigned int v238; // w19
  int32_t v239; // w23
  int32_t v240; // w21
  Il2CppClass **v241; // x24
  Il2CppClass *v242; // x8
  __int64 *v243; // x24
  Il2CppClass *v244; // t1
  __int64 v245; // x9
  __int64 v246; // x10
  _BOOL4 v247; // w10
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v248; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v249; // x24
  EventMargeItemUpValInfo_o *v250; // x20
  System_Int32_array *v251; // x9
  UISprite_o *equipSprite; // x21
  __int64 v253; // x23
  __int64 v254; // x20
  System_Int32_array *v255; // x28
  int32_t v256; // w20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  __int64 v258; // x20
  __int64 v259; // x21
  int v260; // w20
  UnityEngine_Object_o *v261; // x20
  UserServantLeaderEntity_o *v262; // x19
  struct ServantLeaderInfo_o *v263; // x8
  __int64 v264; // x20
  __int64 v265; // x21
  int32_t v266; // w21
  int32_t v267; // w0
  UnityEngine_Object_o *v268; // x20
  bool v269; // w1
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v271; // x20
  __int64 v272; // x21
  int32_t v273; // w3
  int32_t equipSvtId; // w4
  UnityEngine_Object_o *bounusIcon; // x20
  UnityEngine_Object_o *baseButton; // x20
  UnityEngine_Object_o *pushSprite; // x20
  UnityEngine_Component_o *v278; // x0
  __int64 v279; // x1
  int64_t pushUserServantId; // x8
  __int64 v281; // x0
  int32_t TimesToRestart; // [xsp+8h] [xbp-1A8h]
  int32_t classId; // [xsp+Ch] [xbp-1A4h]
  System_Int32_array *cardParams; // [xsp+10h] [xbp-1A0h]
  _BOOL4 IsUniqueIndividualityRestriction; // [xsp+18h] [xbp-198h]
  _BOOL4 v286; // [xsp+1Ch] [xbp-194h]
  int32_t v287; // [xsp+1Ch] [xbp-194h]
  System_Int32_array *codeIds; // [xsp+20h] [xbp-190h]
  System_Int32_array *codeIdsa; // [xsp+20h] [xbp-190h]
  System_Int32_array *codeIdsb; // [xsp+20h] [xbp-190h]
  int32_t treasureDeviceNum; // [xsp+28h] [xbp-188h]
  int32_t strengthStatus; // [xsp+2Ch] [xbp-184h]
  int32_t lv; // [xsp+30h] [xbp-180h]
  int adjustAtk; // [xsp+34h] [xbp-17Ch]
  int adjustHp; // [xsp+38h] [xbp-178h]
  int32_t v296; // [xsp+3Ch] [xbp-174h]
  int32_t v297; // [xsp+3Ch] [xbp-174h]
  SupportSelectItemDraw_o *v298; // [xsp+40h] [xbp-170h]
  SupportSelectItemDraw_o *v299; // [xsp+40h] [xbp-170h]
  bool v300; // [xsp+48h] [xbp-168h]
  _BOOL4 QuestRestriction; // [xsp+48h] [xbp-168h]
  int32_t limitCount; // [xsp+50h] [xbp-160h]
  int exceedCount; // [xsp+54h] [xbp-15Ch]
  WarEntity_o *v304; // [xsp+58h] [xbp-158h]
  struct EquipTargetInfo_o *v306; // [xsp+68h] [xbp-148h]
  System_Collections_Generic_IEnumerable_T__o *v307; // [xsp+70h] [xbp-140h]
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // [xsp+70h] [xbp-140h]
  UserEventServantPointMaster_o *v309; // [xsp+70h] [xbp-140h]
  UserServantLeaderEntity_o *v310; // [xsp+78h] [xbp-138h]
  EventServantPointRankMaster_o *v311; // [xsp+80h] [xbp-130h]
  EventServantPointRankMaster_o *v312; // [xsp+80h] [xbp-130h]
  _BOOL4 v313; // [xsp+80h] [xbp-130h]
  ServantEntity_o *servantEntity; // [xsp+88h] [xbp-128h]
  SupportServantData_o *v315; // [xsp+90h] [xbp-120h]
  bool v316; // [xsp+90h] [xbp-120h]
  int32_t value; // [xsp+9Ch] [xbp-114h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v318; // [xsp+A0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v319; // [xsp+C0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v320; // [xsp+E0h] [xbp-D0h] BYREF
  UserEventServantPointEntity_o *entity; // [xsp+108h] [xbp-A8h] BYREF
  SkillInfo_array *v322; // [xsp+110h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+118h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+120h] [xbp-90h] BYREF
  int v325; // [xsp+12Ch] [xbp-84h] BYREF
  __int64 v326[2]; // [xsp+130h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+148h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v328; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v329; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v330; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v331; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v332; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v333; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v334; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v335; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v336; // 0:x0.16
  UnityEngine_Vector3_o v337; // 0:s0.4,4:s1.4,8:s2.4

  v7 = supportServantData;
  if ( (byte_418AEAB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, supportServantData);
    sub_B2C35C(&AtlasManager_TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMaster_EventDetailMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantExceedMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v18);
    sub_B2C35C(&DataManager_TypeInfo, v19);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v21);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v22);
    sub_B2C35C(&EventMargeItemUpValInfo_TypeInfo, v23);
    sub_B2C35C(&EventPersonalMargeUpValInfo_TypeInfo, v24);
    sub_B2C35C(&int_TypeInfo, v25);
    sub_B2C35C(&long___TypeInfo, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__Add__, v28);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__Clear__, v29);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v30);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v31);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v32);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___67306184, v33);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v34);
    sub_B2C35C(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v35);
    sub_B2C35C(&LocalizationManager_TypeInfo, v36);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v37);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v38);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v39);
    sub_B2C35C(&Rarity_TypeInfo, v40);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v42);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v43);
    sub_B2C35C(&SupportSelectItemDraw_TypeInfo, v44);
    sub_B2C35C(&TutorialFlag_TypeInfo, v45);
    sub_B2C35C(&StringLiteral_11637/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v46);
    sub_B2C35C(&StringLiteral_10363/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v47);
    sub_B2C35C(&StringLiteral_6393/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v48);
    sub_B2C35C(&StringLiteral_340/*"#,0"*/, v49);
    sub_B2C35C(&StringLiteral_1/*""*/, v50);
    byte_418AEAB = 1;
  }
  eventUpVallInfo = 0LL;
  v326[0] = 0LL;
  v325 = 0;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  entity = 0LL;
  v322 = 0LL;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_592;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (__int64)this->fields.switchSkillUIList;
  if ( !gameObject )
    goto LABEL_592;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)gameObject,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
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
  v310 = UserServantLeaderEntity;
  if ( !gameObject )
  {
    v60 = 0LL;
    goto LABEL_38;
  }
  if ( !v7->fields.isFriendInfo )
  {
    gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_592;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)gameObject, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    gameObject = SupportServantData__getEquip(v7, classPos, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_592;
    v62 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
            MasterData_WarQuestSelectionMaster,
            gameObject,
            (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !v62 )
      goto LABEL_592;
    v63 = (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject;
    v65 = *(_QWORD *)&v62->fields.svtId.fields.currentCryptoKey;
    v64 = *(_QWORD *)&v62->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v329.fields.currentCryptoKey = v65;
    *(_QWORD *)&v329.fields.fakeValue = v64;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v329, 0LL);
    if ( !v63 )
      goto LABEL_592;
    gameObject = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v63,
                            gameObject,
                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    v60 = (System_Int32_array *)v62;
LABEL_38:
    equipTarget1 = 0LL;
    v304 = (WarEntity_o *)gameObject;
    if ( !UserServantLeaderEntity )
      goto LABEL_48;
    goto LABEL_39;
  }
  if ( !UserServantLeaderEntity )
    goto LABEL_592;
  equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
  gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_592;
  gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !equipTarget1 )
    goto LABEL_592;
  v57 = (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject;
  v59 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v58 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v328.fields.currentCryptoKey = v59;
  *(_QWORD *)&v328.fields.fakeValue = v58;
  gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v328, 0LL);
  if ( !v57 )
    goto LABEL_592;
  v304 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
           v57,
           gameObject,
           (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v60 = 0LL;
LABEL_39:
  if ( UserServantLeaderEntity->fields.userSvtId )
  {
    svtId = UserServantLeaderEntity->fields.svtId;
    gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                            svtId,
                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !gameObject )
      goto LABEL_592;
    servantEntity = (ServantEntity_o *)gameObject;
    v315 = v7;
    v306 = equipTarget1;
    value = svtId;
    classId = *(_DWORD *)(gameObject + 80);
    if ( v7->fields.isFriendInfo )
    {
      servantLeaderInfo = UserServantLeaderEntity->fields.servantLeaderInfo;
      v298 = this;
      if ( !servantLeaderInfo )
        goto LABEL_592;
      ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(servantLeaderInfo, 0LL);
      HIDWORD(v326[0]) = servantLeaderInfo->fields.lv;
      atk = servantLeaderInfo->fields.atk;
      LODWORD(v326[0]) = atk;
      if ( v306 )
      {
        LODWORD(v326[0]) = v306->fields.atk + atk;
        adjustAtk = servantLeaderInfo->fields.adjustAtk;
        hp = v306->fields.hp + servantLeaderInfo->fields.hp;
      }
      else
      {
        adjustAtk = servantLeaderInfo->fields.adjustAtk;
        hp = servantLeaderInfo->fields.hp;
      }
      v325 = hp;
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
      ServantLeaderInfo__GetAppendPassiveSkillInfo_29351980(servantLeaderInfo, &v322, 0, 0LL);
      eventSetupInfo = v7->fields.eventSetupInfo;
      v296 = Rarity;
      limitCount = CardImageLimitCount;
      if ( !eventSetupInfo )
        goto LABEL_212;
      eventIdList = eventSetupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_592;
      if ( *(_QWORD *)&eventIdList->max_length )
      {
        codeIds = v60;
        EventUpVal_29337748 = ServantLeaderInfo__getEventUpVal_29337748(
                                servantLeaderInfo,
                                &eventUpVallInfo,
                                eventSetupInfo,
                                0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventDetailMaster___);
        v105 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
        v106 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v106,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
        v107 = v7->fields.eventSetupInfo;
        if ( !v107 )
          goto LABEL_592;
        v108 = v107->fields.eventIdList;
        v311 = (EventServantPointRankMaster_o *)v105;
        v300 = EventUpVal_29337748;
        if ( !v108 )
          goto LABEL_592;
        v109 = *(_QWORD *)&v108->max_length;
        v110 = Master_WarQuestSelectionMaster;
        if ( (int)v109 >= 1 )
        {
          v111 = 0LL;
          while ( 1 )
          {
            if ( v111 >= (unsigned int)v109 )
              goto LABEL_593;
            v112 = v108->m_Items[v111 + 1];
            questRestrictionInfo = v315->fields.questRestrictionInfo;
            if ( !questRestrictionInfo || questRestrictionInfo->fields.eventId == v112 )
            {
              if ( !v110 )
                goto LABEL_592;
              gameObject = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v110,
                                      v112,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
              if ( !gameObject
                || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0LL),
                    (gameObject & 1) == 0) )
              {
                if ( !v311 )
                  goto LABEL_592;
                if ( EventServantPointRankMaster__IsEnableEvent(v311, v112, 0LL) )
                {
                  eventSvtPoint = servantLeaderInfo->fields.eventSvtPoint;
                  v116 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                  v115 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v331.fields.currentCryptoKey = v116;
                  *(_QWORD *)&v331.fields.fakeValue = v115;
                  v117 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v331, 0LL);
                  EnableEntity = EventServantPointRankMaster__GetEnableEntity(v311, v112, eventSvtPoint, v117, 0LL);
                  if ( EnableEntity )
                    svtPointRank = EnableEntity->fields.svtPointRank;
                  else
                    svtPointRank = 0;
                  v110 = Master_WarQuestSelectionMaster;
                  v120 = (EventMargeItemUpValInfo_o *)sub_B2C42C(EventMargeItemUpValInfo_TypeInfo);
                  EventMargeItemUpValInfo___ctor_27173872(v120, v112, 0LL);
                  if ( !v120 )
                    goto LABEL_592;
                  EventMargeItemUpValInfo__SetServantPointInfo(
                    v120,
                    servantLeaderInfo->fields.eventSvtPoint,
                    svtPointRank,
                    1,
                    0LL);
                  if ( !v106 )
                    goto LABEL_592;
                  System_Collections_Generic_List_XWeaponTrail_Element___Insert(
                    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v106,
                    0,
                    (XWeaponTrail_Element_o *)v120,
                    (const MethodInfo_2EF5674 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                }
                v121 = (EventPersonalMargeUpValInfo_o *)sub_B2C42C(EventPersonalMargeUpValInfo_TypeInfo);
                EventPersonalMargeUpValInfo___ctor(v121, v112, servantEntity, 0LL);
                gameObject = (__int64)eventUpVallInfo;
                if ( !eventUpVallInfo )
                  goto LABEL_592;
                gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
                if ( !v121 )
                  goto LABEL_592;
                EventPersonalMargeUpValInfo__Add(v121, (EventDropItemUpValInfo_array *)gameObject, 0LL);
                gameObject = EventPersonalMargeUpValInfo__IsEmpty(v121, 0LL);
                if ( (gameObject & 1) == 0 )
                {
                  gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v121, 0LL);
                  if ( !gameObject )
                    goto LABEL_592;
                  v122 = *(_QWORD *)(gameObject + 24);
                  v123 = gameObject;
                  if ( (int)v122 >= 1 )
                    break;
                }
              }
            }
LABEL_209:
            LODWORD(v109) = v108->max_length;
            if ( (__int64)++v111 >= (int)v109 )
              goto LABEL_210;
          }
          v124 = 0LL;
          while ( v124 < (unsigned int)v122 )
          {
            if ( !v106 )
              goto LABEL_592;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v106,
              *(EventMissionProgressRequest_Argument_ProgressData_o **)(v123 + 32 + 8 * v124),
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
            LODWORD(v122) = *(_DWORD *)(v123 + 24);
            if ( (__int64)++v124 >= (int)v122 )
              goto LABEL_209;
          }
          goto LABEL_593;
        }
LABEL_210:
        if ( !v106 )
          goto LABEL_592;
        v125 = v300;
        v126 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v106,
                 (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
        v7 = v315;
        v60 = codeIds;
        v127 = (System_Collections_Generic_IEnumerable_T__o *)v126;
      }
      else
      {
LABEL_212:
        v127 = 0LL;
        v125 = 0;
      }
      codeIdsa = ServantLeaderInfo__getCommandCodeIdList(servantLeaderInfo, 0LL);
      cardParams = servantLeaderInfo->fields.commandCardParam;
      QuestRestriction = ServantLeaderInfo__getQuestRestriction(servantLeaderInfo, v7->fields.questRestrictionInfo, 0LL);
      UniqueSvtRestriction = ServantLeaderInfo__getUniqueSvtRestriction(
                               servantLeaderInfo,
                               v7->fields.questRestrictionInfo,
                               0LL);
      v307 = v127;
      IsUniqueIndividualityRestriction = ServantLeaderInfo__IsUniqueIndividualityRestriction(
                                           servantLeaderInfo,
                                           v7->fields.questRestrictionInfo,
                                           0LL);
      v286 = UniqueSvtRestriction;
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
        gameObject = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_592;
        v130 = *(_DWORD *)(gameObject + 48);
        gameObject = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_592;
        if ( v130 < 1 )
          goto LABEL_228;
        if ( !v7->fields.questRestrictionInfo )
          goto LABEL_592;
        v131 = *(_DWORD *)(gameObject + 52);
        if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(v7->fields.questRestrictionInfo, v131, 0LL) )
        {
          v132 = v125;
          v133 = FrameType;
          v134 = v60;
          v135 = v7->fields.questRestrictionInfo;
          v137 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
          v136 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v332.fields.currentCryptoKey = v137;
          *(_QWORD *)&v332.fields.fakeValue = v136;
          v138 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v332, 0LL);
          v139 = servantLeaderInfo->fields.limitCount;
          v140 = v138;
          gameObject = ServantLeaderInfo__getDispLimitCount(servantLeaderInfo, 0LL);
          if ( !v135 )
            goto LABEL_592;
          IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                v135,
                                                v140,
                                                v139,
                                                gameObject,
                                                v131,
                                                1,
                                                0LL);
          v60 = v134;
          FrameType = v133;
          v125 = v132;
        }
        else
        {
LABEL_228:
          IsRestrictionServantIndividuality = 0;
        }
      }
      IsDataLost = ServantLeaderInfo__IsDataLost(servantLeaderInfo, v315->fields.questRestrictionInfo, 0LL);
      TimesToRestart = ServantLeaderInfo__GetTimesToRestart(servantLeaderInfo, v315->fields.questRestrictionInfo, 0LL);
      this = v298;
      equipTarget1 = v306;
      svtId = value;
      v142 = v296;
    }
    else
    {
      gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_592;
      gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !gameObject )
        goto LABEL_592;
      gameObject = (__int64)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                              (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)gameObject,
                              UserServantLeaderEntity->fields.userSvtId,
                              (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !gameObject )
        goto LABEL_592;
      v95 = (UserServantEntity_o *)gameObject;
      HIDWORD(v326[0]) = *(_DWORD *)(gameObject + 256);
      v96 = *(_DWORD *)(gameObject + 264);
      LODWORD(v326[0]) = v96;
      if ( v60 )
      {
        LODWORD(v326[0]) = v60->m_Items[59] + v96;
        adjustAtk = *(_DWORD *)(gameObject + 272);
        v97 = v60->m_Items[60] + *(_DWORD *)(gameObject + 268);
      }
      else
      {
        adjustAtk = *(_DWORD *)(gameObject + 272);
        v97 = *(_DWORD *)(gameObject + 268);
      }
      v325 = v97;
      adjustHp = *(_DWORD *)(gameObject + 276);
      v143 = UserServantEntity__getRarity((UserServantEntity_o *)gameObject, 0LL);
      v144 = v95->fields.exceedCount;
      v145 = v95;
      v142 = v143;
      exceedCount = v144;
      FrameType = UserServantEntity__getFrameType(v145, 0LL);
      limitCount = UserServantEntity__getCardImageLimitCount(v145, 0, 0LL);
      UserServantEntity__getSkillInfo(v145, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
      gameObject = UserServantEntity__getTreasureDeviceInfo(v145, &tdInfo, -1, -1, 0, 0LL);
      if ( !tdInfo )
        goto LABEL_592;
      lv = tdInfo->fields.lv;
      v312 = (EventServantPointRankMaster_o *)v145;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      strengthStatus = tdInfo->fields.strengthStatus;
      UserServantEntity__GetAppendPassiveSkillInfo_21681068(v145, &v322, 0LL);
      if ( v7->fields.eventSetupInfo )
      {
        if ( v60 )
        {
          v146 = *(_OWORD *)&v60->m_Items[1];
          *(_OWORD *)&v320.fields.currentCryptoKey = *(_OWORD *)&v60->bounds;
          *(_OWORD *)&v320.fields.fakeValue = v146;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v319 = v320;
          v147 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v319, 0LL);
        }
        else
        {
          v147 = -1LL;
        }
        gameObject = sub_B2C374(long___TypeInfo, 1LL);
        if ( !gameObject )
          goto LABEL_592;
        if ( !*(_DWORD *)(gameObject + 24) )
          goto LABEL_593;
        *(_QWORD *)(gameObject + 32) = v147;
        v299 = this;
        EventUpVal_21654264 = UserServantEntity__getEventUpVal_21654264(
                                (UserServantEntity_o *)v312,
                                &eventUpVallInfo,
                                v7->fields.eventSetupInfo,
                                (System_Int64_array *)gameObject,
                                0LL);
        gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_592;
        v297 = v142;
        v287 = FrameType;
        v149 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)gameObject,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        codeIdsb = v60;
        v150 = (EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
        v309 = (UserEventServantPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
        v151 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v151,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
        v152 = v7->fields.eventSetupInfo;
        if ( !v152 )
          goto LABEL_592;
        v153 = v152->fields.eventIdList;
        if ( !v153 )
          goto LABEL_592;
        v154 = *(_QWORD *)&v153->max_length;
        if ( (int)v154 >= 1 )
        {
          v155 = 0LL;
          while ( 1 )
          {
            if ( v155 >= (unsigned int)v154 )
              goto LABEL_593;
            if ( !v149 )
              goto LABEL_592;
            v156 = v153->m_Items[v155 + 1];
            gameObject = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v149,
                                    v156,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
            if ( !gameObject
              || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0LL),
                  (gameObject & 1) == 0) )
            {
              if ( !v150 )
                goto LABEL_592;
              if ( EventServantPointRankMaster__IsEnableEvent(v150, v156, 0LL) )
              {
                v157 = *(_OWORD *)&v312->fields.revision;
                *(_OWORD *)&v320.fields.currentCryptoKey = *(_OWORD *)&v312->fields.seriazlier;
                *(_OWORD *)&v320.fields.fakeValue = v157;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v318 = v320;
                v158 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v318, 0LL);
                v159 = UserServantEntity__getSvtId((UserServantEntity_o *)v312, 0LL);
                gameObject = (__int64)v309;
                if ( !v309 )
                  goto LABEL_592;
                if ( UserEventServantPointMaster__TryGetEntity(v309, &entity, v158, v156, v159, 0LL) )
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
                v161 = UserServantEntity__getSvtId((UserServantEntity_o *)v312, 0LL);
                v162 = EventServantPointRankMaster__GetEnableEntity(v150, v156, BuddyPoint, v161, 0LL);
                v163 = v162 ? v162->fields.svtPointRank : 0;
                v164 = (EventMargeItemUpValInfo_o *)sub_B2C42C(EventMargeItemUpValInfo_TypeInfo);
                EventMargeItemUpValInfo___ctor_27173872(v164, v156, 0LL);
                if ( !v164 )
                  goto LABEL_592;
                EventMargeItemUpValInfo__SetServantPointInfo(v164, BuddyPoint, v163, 0, 0LL);
                if ( !v151 )
                  goto LABEL_592;
                System_Collections_Generic_List_XWeaponTrail_Element___Insert(
                  (System_Collections_Generic_List_XWeaponTrail_Element__o *)v151,
                  0,
                  (XWeaponTrail_Element_o *)v164,
                  (const MethodInfo_2EF5674 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
              }
              v165 = (EventPersonalMargeUpValInfo_o *)sub_B2C42C(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v165, v156, servantEntity, 0LL);
              gameObject = (__int64)eventUpVallInfo;
              if ( !eventUpVallInfo )
                goto LABEL_592;
              gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
              if ( !v165 )
                goto LABEL_592;
              EventPersonalMargeUpValInfo__Add(v165, (EventDropItemUpValInfo_array *)gameObject, 0LL);
              gameObject = EventPersonalMargeUpValInfo__IsEmpty(v165, 0LL);
              if ( (gameObject & 1) == 0 )
              {
                gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v165, 0LL);
                if ( !gameObject )
                  goto LABEL_592;
                v166 = *(_QWORD *)(gameObject + 24);
                v167 = gameObject;
                if ( (int)v166 >= 1 )
                  break;
              }
            }
LABEL_279:
            LODWORD(v154) = v153->max_length;
            if ( (__int64)++v155 >= (int)v154 )
              goto LABEL_280;
          }
          v168 = 0LL;
          while ( v168 < (unsigned int)v166 )
          {
            if ( !v151 )
              goto LABEL_592;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v151,
              *(EventMissionProgressRequest_Argument_ProgressData_o **)(v167 + 32 + 8 * v168),
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
            LODWORD(v166) = *(_DWORD *)(v167 + 24);
            if ( (__int64)++v168 >= (int)v166 )
              goto LABEL_279;
          }
LABEL_593:
          v281 = sub_B2C460(gameObject);
          sub_B2C400(v281, 0LL);
        }
LABEL_280:
        if ( !v151 )
          goto LABEL_592;
        v125 = EventUpVal_21654264;
        v307 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v151,
                                                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
        this = v299;
        v7 = v315;
        v60 = codeIdsb;
        equipTarget1 = v306;
        svtId = value;
        FrameType = v287;
        v142 = v297;
      }
      else
      {
        v307 = 0LL;
        v125 = 0;
      }
      codeIdsa = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)v312, 0LL);
      QuestRestriction = UserServantEntity__getQuestRestriction(
                           (UserServantEntity_o *)v312,
                           v7->fields.questRestrictionInfo,
                           0,
                           0LL);
      v286 = UserServantEntity__getUniqueSvtRestriction(
               (UserServantEntity_o *)v312,
               v7->fields.questRestrictionInfo,
               0LL);
      v169 = UserServantEntity__IsUniqueIndividualityRestriction(
               (UserServantEntity_o *)v312,
               v7->fields.questRestrictionInfo,
               0LL);
      IsDataLost = 0;
      IsRestrictionServantIndividuality = 0;
      IsUniqueIndividualityRestriction = v169;
      TimesToRestart = 0;
      cardParams = 0LL;
    }
    gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !gameObject )
      goto LABEL_592;
    v313 = IsRestrictionServantIndividuality;
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
      v172 = this->fields.levelLabel;
      gameObject = (__int64)System_Int32__ToString((int32_t)v326 + 4, 0LL);
      if ( !v172 )
        goto LABEL_592;
      UILabel__set_text(v172, (System_String_o *)gameObject, 0LL);
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
      v174 = v60;
      v175 = IsDataLost;
      v176 = v125;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_592;
      v177 = FrameType;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v178 = HIDWORD(v326[0]);
      if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      v179 = v142;
      Icon_21889892 = Rarity__getIcon_21889892(v142, exceedCount, v178, 0LL);
      if ( exceedCount < 1 )
      {
        v182 = 0;
      }
      else
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        gameObject = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantExceedMaster___);
        if ( !gameObject )
          goto LABEL_592;
        RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)gameObject, v179, exceedCount, 0, 0LL);
        gameObject = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
        if ( !gameObject )
          goto LABEL_592;
        v182 = ServantLvDetailMaster__GetRarityIcon(
                 (ServantLvDetailMaster_o *)gameObject,
                 v179,
                 SHIDWORD(v326[0]),
                 RarityIcon,
                 0LL);
      }
      v183 = this->fields.raritySprite;
      if ( v182 >= 3 )
      {
        if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v183, Icon_21889892, 0LL);
      }
      else
      {
        if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetCommon(v183, 0LL);
        gameObject = (__int64)this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_592;
        UISprite__set_spriteName((UISprite_o *)gameObject, Icon_21889892, 0LL);
      }
      gameObject = (__int64)this->fields.raritySprite;
      FrameType = v177;
      if ( !gameObject )
        goto LABEL_592;
      v125 = v176;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
        gameObject,
        *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
      gameObject = (__int64)this->fields.raritySprite;
      v184 = exceedCount >= 1
           ? this->fields.baseRarityPosition.fields.x + 1.0
           : this->fields.baseRarityPosition.fields.x;
      if ( !gameObject )
        goto LABEL_592;
      y = this->fields.baseRarityPosition.fields.y;
      z = this->fields.baseRarityPosition.fields.z;
      IsDataLost = v175;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_592;
      v337.fields.x = v184;
      v337.fields.y = y;
      v337.fields.z = z;
      v60 = v174;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v337, 0LL);
      equipTarget1 = v306;
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
      v188 = this->fields.skillListTreasureDevice;
      v189 = skillInfoList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (__int64)LocalizationManager__GetLevelList_33989780(v189, 0LL);
      if ( !v188 )
        goto LABEL_592;
      SkillListTreasureDeviceComponent__Set(
        v188,
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
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
    }
    appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
    {
      if ( v322 && *(_QWORD *)&v322->max_length )
      {
        gameObject = (__int64)this->fields.appendSkillList;
        if ( !gameObject )
          goto LABEL_592;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_592;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v192 = this->fields.appendSkillList;
        v193 = v322;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (__int64)LocalizationManager__GetLevelList_33989780(v193, 0LL);
        if ( !v192 )
          goto LABEL_592;
        AppendSkillListComponent__Set(v192, (System_String_o *)gameObject, 0LL);
        v194 = this->fields.switchSkillUIList;
        if ( v194 )
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v194,
            (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.appendSkillInfoUiWidget,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
      v196 = this->fields.switchSkillUIList;
      if ( v196 )
      {
        v197 = this->fields.switchSkillInfo;
        gameObject = (__int64)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v196,
                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
        if ( !v197 )
          goto LABEL_592;
        SwitchUIWidgetComponent__Set(v197, (UIWidget_array *)gameObject, 0LL);
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
      if ( v315->fields.isFriendInfo )
        ServantCommandCardListComponent__Set_29228872(
          (ServantCommandCardListComponent_o *)gameObject,
          svtId,
          cardParams,
          codeIdsa,
          2,
          0,
          0LL);
      else
        ServantCommandCardListComponent__Set_29229132(
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
        *(UnityEngine_Color_o *)&v200 = UnityEngine_Color__get_white(0LL);
      else
        *(UnityEngine_Color_o *)&v200 = UnityEngine_Color__get_yellow(0LL);
      gameObject = (__int64)this->fields.attackLabel;
      if ( !gameObject )
        goto LABEL_592;
      UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)&v200, 0LL);
      v204 = this->fields.attackLabel;
      gameObject = (__int64)System_Int32__ToString_38381416((int32_t)v326, (System_String_o *)StringLiteral_340/*"#,0"*/, 0LL);
      if ( !v204 )
        goto LABEL_592;
      UILabel__set_text(v204, (System_String_o *)gameObject, 0LL);
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
        *(UnityEngine_Color_o *)&v206 = UnityEngine_Color__get_white(0LL);
      else
        *(UnityEngine_Color_o *)&v206 = UnityEngine_Color__get_yellow(0LL);
      gameObject = (__int64)this->fields.hpLabel;
      if ( !gameObject )
        goto LABEL_592;
      UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)&v206, 0LL);
      v210 = this->fields.hpLabel;
      gameObject = (__int64)System_Int32__ToString_38381416((int32_t)&v325, (System_String_o *)StringLiteral_340/*"#,0"*/, 0LL);
      if ( !v210 )
        goto LABEL_592;
      UILabel__set_text(v210, (System_String_o *)gameObject, 0LL);
    }
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      v212 = this->fields.baseSprite;
      baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFormationBase(v212, FrameType, baseDefaultUIAtlas, 0, 0LL);
    }
    base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
    {
      v215 = this->fields.base2Sprite;
      base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFormationFrameForSupportSelect(v215, FrameType, base2DefaultUIAtlas, 0, 0LL);
    }
    gameObject = (__int64)this->fields.backClassIcon;
    if ( !gameObject
      || (gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0 )
    {
LABEL_592:
      sub_B2C434(gameObject, v52);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    if ( v313 || QuestRestriction )
    {
      sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      v7 = v315;
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
      v219 = LocalizationManager__Get((System_String_o *)StringLiteral_10363/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
      goto LABEL_430;
    }
    v224 = IsDataLost;
    v7 = v315;
    if ( v315->fields.isFriendInfo || !ServantEntity__checkIsHeroineSvt(servantEntity, 0LL) )
      goto LABEL_445;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_28617756(126, 0LL) )
    {
      v225 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v225, 0LL, 0LL) )
        goto LABEL_465;
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_592;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_592;
      v226 = 1;
    }
    else
    {
LABEL_445:
      if ( IsUniqueIndividualityRestriction || v286 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v227 = LocalizationManager__Get((System_String_o *)StringLiteral_6393/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0LL);
        SupportSelectItemDraw__SetWarningMessage(this, v227, 1, v228);
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
        v235 = v125 != 0;
        LODWORD(UserServantLeaderEntity) = 1;
        v316 = v235;
        if ( eventFriendPoints && (gameObject & 1) != 0 )
        {
          LODWORD(v236) = eventFriendPoints->max_length;
          v237 = v60;
          if ( (int)v236 >= 1 )
          {
            v238 = 0;
            v239 = 0;
            v240 = 0;
            while ( v238 < (unsigned int)v236 )
            {
              v241 = &eventFriendPoints->obj.klass + (int)v238;
              v244 = v241[4];
              v243 = (__int64 *)(v241 + 4);
              v242 = v244;
              if ( !v244 )
                goto LABEL_592;
              gameObject = System_Array__IndexOf_int_(
                             *(System_Int32_array **)&v242->_1.byval_arg.bits,
                             value,
                             (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
              v236 = *(_QWORD *)&eventFriendPoints->max_length;
              if ( v238 >= (unsigned int)v236 )
                break;
              v245 = *v243;
              if ( !*v243 )
                goto LABEL_592;
              v246 = *(_QWORD *)(v245 + 40);
              if ( v246 )
                v247 = *(_DWORD *)(v246 + 24) == 0;
              else
                v247 = 1;
              if ( (v247 || (int)gameObject >= 0) && v239 < *(_DWORD *)(v245 + 48) )
              {
                v240 = *(_DWORD *)(v245 + 16);
                v239 = *(_DWORD *)(v245 + 48);
              }
              if ( (int)++v238 >= (int)v236 )
                goto LABEL_496;
            }
            goto LABEL_593;
          }
          v240 = 0;
          v239 = 0;
LABEL_496:
          if ( v239 >= 1 )
          {
            v248 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
            v249 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v248;
            if ( v307 )
              System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
                v248,
                v307,
                (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___67306184);
            else
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v248,
                (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
            v250 = (EventMargeItemUpValInfo_o *)sub_B2C42C(EventMargeItemUpValInfo_TypeInfo);
            EventMargeItemUpValInfo___ctor_27173780(v250, v240, v239, 0LL);
            if ( !v249 )
              goto LABEL_592;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v249,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v250,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
            v307 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v249,
                                                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
          }
          v60 = v237;
          equipTarget1 = v306;
          LODWORD(UserServantLeaderEntity) = 1;
        }
        if ( v60 )
          goto LABEL_504;
        goto LABEL_138;
      }
      if ( v224 )
      {
        v223 = 1;
        v222 = this;
        v221 = 0;
        v220 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_431;
      }
      if ( TimesToRestart >= 1 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v229 = LocalizationManager__Get((System_String_o *)StringLiteral_11637/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
        LODWORD(v320.fields.currentCryptoKey) = TimesToRestart;
        v230 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v320);
        v219 = System_String__Format(v229, v230, 0LL);
LABEL_430:
        v220 = v219;
        v221 = 1;
        v222 = this;
        v223 = 0;
LABEL_431:
        SupportSelectItemDraw__SetMaskMessage(v222, v220, v221, v223, v217);
        goto LABEL_466;
      }
      v231 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v231, 0LL, 0LL) )
      {
LABEL_465:
        SupportSelectItemDraw__ClearMessage(this, v52);
        goto LABEL_466;
      }
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_592;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_592;
      v226 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v226, 0LL);
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
  v71 = **(_QWORD **)(gameObject + 184);
  if ( !v71 )
    goto LABEL_592;
  if ( *(_DWORD *)(v71 + 24) <= (unsigned int)classPos )
    goto LABEL_593;
  if ( !backClassIcon )
    goto LABEL_592;
  UISprite__set_spriteName(backClassIcon, *(System_String_o **)(v71 + 8LL * classPos + 32), 0LL);
  v72 = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v72, 0LL, 0LL) )
  {
    v73 = this->fields.baseSprite;
    v74 = this->fields.baseDefaultUIAtlas;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetFormationBase(v73, 9, v74, 0, 0LL);
  }
  v75 = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v75, 0LL, 0LL) )
  {
    v76 = this->fields.base2Sprite;
    v77 = this->fields.base2DefaultUIAtlas;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetFormationFrameForSupportSelect(v76, 9, v77, 0, 0LL);
  }
  v78 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v78, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.servantClassIcon;
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  v79 = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v79, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.levelLabel;
    if ( !gameObject )
      goto LABEL_592;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v80 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v80, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  v81 = (UnityEngine_Object_o *)this->fields.attackLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v81, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.attackLabel;
    if ( !gameObject )
      goto LABEL_592;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v82 = (UnityEngine_Object_o *)this->fields.hpLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v82, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.hpLabel;
    if ( !gameObject )
      goto LABEL_592;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v83 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v83, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.sortieMaskSprite;
    if ( !gameObject )
      goto LABEL_592;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  SupportSelectItemDraw__ClearMessage(this, v52);
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
  v307 = 0LL;
  v316 = 0;
  if ( v60 )
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
    v251 = v60;
    equipSprite = (UISprite_o *)this->fields.equipSprite;
    v253 = *(_QWORD *)&v60->m_Items[13];
    v254 = *(_QWORD *)&v251->m_Items[15];
    v255 = v251;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v333.fields.currentCryptoKey = v253;
    *(_QWORD *)&v333.fields.fakeValue = v254;
    v256 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v333, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipFace(equipSprite, v256, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      v259 = *(_QWORD *)&v255->m_Items[17];
      v258 = *(_QWORD *)&v255->m_Items[19];
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v334.fields.currentCryptoKey = v259;
      *(_QWORD *)&v334.fields.fakeValue = v258;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v334, 0LL);
      if ( !this->fields.equipLimitCountSprite )
        goto LABEL_592;
      v260 = gameObject;
      gameObject = (__int64)UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                              0LL);
      if ( v260 < 4 )
        goto LABEL_523;
      if ( !v304 )
        goto LABEL_592;
      v94 = SLODWORD(v304->fields.targetId) < v260;
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
    *(_QWORD *)&v330.fields.currentCryptoKey = v90;
    *(_QWORD *)&v330.fields.fakeValue = v89;
    v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v330, 0LL);
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
        v52 = 0LL;
        if ( !gameObject )
          goto LABEL_592;
LABEL_531:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (bool)v52, 0LL);
        goto LABEL_532;
      }
      if ( !v304 )
        goto LABEL_592;
      v94 = SLODWORD(v304->fields.targetId) < v93;
LABEL_527:
      v52 = (const MethodInfo *)!v94;
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
      LOBYTE(v52) = 0;
      goto LABEL_531;
    }
  }
LABEL_532:
  v261 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = UnityEngine_Object__op_Inequality(v261, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    if ( v7->fields.isFriendInfo )
    {
      if ( (_DWORD)UserServantLeaderEntity )
      {
        v262 = v310;
        if ( !v310 )
          goto LABEL_592;
        v263 = v310->fields.servantLeaderInfo;
        if ( v263 )
        {
          v265 = *(_QWORD *)&v263->fields.svtId.fields.currentCryptoKey;
          v264 = *(_QWORD *)&v263->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v335.fields.currentCryptoKey = v265;
          *(_QWORD *)&v335.fields.fakeValue = v264;
          gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v335, 0LL);
          if ( !v310->fields.servantLeaderInfo )
            goto LABEL_592;
          v266 = gameObject;
          v267 = ServantLeaderInfo__getRarity(v310->fields.servantLeaderInfo, 0LL);
LABEL_559:
          v273 = v267;
          goto LABEL_562;
        }
        goto LABEL_561;
      }
    }
    else if ( (_DWORD)UserServantLeaderEntity )
    {
      v262 = v310;
      if ( !v310 )
        goto LABEL_592;
      userServantEntity = v310->fields.userServantEntity;
      if ( userServantEntity )
      {
        v272 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v271 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v336.fields.currentCryptoKey = v272;
        *(_QWORD *)&v336.fields.fakeValue = v271;
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v336, 0LL);
        if ( !v310->fields.userServantEntity )
          goto LABEL_592;
        v266 = gameObject;
        v267 = UserServantEntity__getRarity(v310->fields.userServantEntity, 0LL);
        goto LABEL_559;
      }
LABEL_561:
      v273 = -1;
      v266 = -1;
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
        (EventMargeItemUpValInfo_array *)v307,
        v266,
        v273,
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
        v269 = 0;
        goto LABEL_572;
      }
      goto LABEL_573;
    }
    v262 = v310;
    goto LABEL_561;
  }
  v268 = (UnityEngine_Object_o *)this->fields.bounusIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v262 = v310;
  if ( UnityEngine_Object__op_Inequality(v268, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.bounusIcon;
    if ( !gameObject )
      goto LABEL_592;
    v269 = v316;
LABEL_572:
    ShiningIconComponent__Set_32979912((ShiningIconComponent_o *)gameObject, v269, 0LL);
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
  if ( !v262 )
    goto LABEL_594;
  if ( pushUserServantId != v262->fields.userSvtId )
    return;
  v278 = (UnityEngine_Component_o *)this->fields.pushSprite;
  if ( !v278 || (v278 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v278, 0LL)) == 0LL )
LABEL_594:
    sub_B2C434(v278, v279);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v278, 1, 0LL);
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
  __int64 v15; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v17; // x22
  UIWidget_o *v18; // x21
  struct SupportSelectItemDraw_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  float v23; // s0
  float v24; // s8
  UnityEngine_Transform_o *transform; // x20
  float restrictionMaskMessageWidth; // s0
  float v27; // s1
  float v28; // s0
  float v29; // s2
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_418AEAD & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, message);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&SupportSelectItemDraw_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_19487/*"img_frames_mask05"*/, v11);
    sub_B2C35C(&StringLiteral_17882/*"datalost_party_edit"*/, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    byte_418AEAD = 1;
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
    v17 = this->fields.restrictionMaskSprite;
    if ( isDataLost )
    {
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetPartyOrganizationImage(v17, (System_String_o *)StringLiteral_17882/*"datalost_party_edit"*/, 0LL);
      v18 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)SupportSelectItemDraw_TypeInfo;
      if ( (BYTE3(SupportSelectItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      }
      if ( !v18 )
        goto LABEL_47;
      UIWidget__set_width(v18, SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_WIDTH, 0LL);
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
      if ( !v17 )
        goto LABEL_47;
      UISprite__set_atlas(this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_47;
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_19487/*"img_frames_mask05"*/, 0LL);
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
      LODWORD(v23) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_47;
      v24 = v23;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      transform = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v24 > restrictionMaskMessageWidth )
      {
        v27 = 1.0;
        v28 = restrictionMaskMessageWidth / v24;
        v29 = 1.0;
        if ( !gameObject )
          goto LABEL_47;
        goto LABEL_37;
      }
    }
    else
    {
      transform = UnityEngine_Component__get_transform(gameObject, 0LL);
    }
    *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_47;
LABEL_37:
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v28, 0LL);
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
    sub_B2C434(gameObject, v15);
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
  __int64 v9; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_Vector2_o printedSize; // kr00_8
  UnityEngine_Transform_o *v13; // x21
  float restrictionWarningMessageWidth; // s0
  float v15; // s1
  float v16; // s0
  float v17; // s2
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418AEAE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, message);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_418AEAE = 1;
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
              v13 = (UnityEngine_Transform_o *)gameObject;
              if ( isScale
                && (restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth,
                    printedSize.fields.x > restrictionWarningMessageWidth) )
              {
                v15 = 1.0;
                v16 = restrictionWarningMessageWidth / printedSize.fields.x;
                v17 = 1.0;
                if ( !gameObject )
                  goto LABEL_29;
              }
              else
              {
                *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_one(0LL);
                if ( !v13 )
                  goto LABEL_29;
              }
              UnityEngine_Transform__set_localScale(v13, *(UnityEngine_Vector3_o *)&v16, 0LL);
              gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
              if ( gameObject )
              {
                gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)gameObject,
                                                          0LL);
                if ( gameObject )
                {
                  v18.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
                  v18.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
                  v18.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v18, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_29:
    sub_B2C434(gameObject, v9);
  }
}