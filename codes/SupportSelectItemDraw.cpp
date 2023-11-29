void __fastcall SupportSelectItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x19
  __int64 v21; // x0
  System_Int32_array **v22; // x1
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  SupportSelectItemDraw_c *v70; // x8
  struct SupportSelectItemDraw_StaticFields *v71; // x8

  if ( (byte_40FD52E & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, v1);
    sub_B16FFC(&SupportSelectItemDraw_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_19220, v4);
    sub_B16FFC(&StringLiteral_19218, v5);
    sub_B16FFC(&StringLiteral_19217, v6);
    sub_B16FFC(&StringLiteral_19215, v7);
    sub_B16FFC(&StringLiteral_19212, v8);
    sub_B16FFC(&StringLiteral_19219, v9);
    sub_B16FFC(&StringLiteral_19213, v10);
    sub_B16FFC(&StringLiteral_19216, v11);
    sub_B16FFC(&StringLiteral_19214, v12);
    byte_40FD52E = 1;
  }
  v13 = sub_B17014(string___TypeInfo, 9LL, v2);
  if ( !v13 )
    sub_B170D4();
  v20 = (System_Int32_array **)v13;
  v21 = StringLiteral_19219;
  if ( StringLiteral_19219 )
  {
    v21 = sub_B170BC(StringLiteral_19219, *(_QWORD *)&(*v20)->m_Items[9]);
    if ( !v21 )
      goto LABEL_51;
    v22 = (System_Int32_array **)StringLiteral_19219;
  }
  else
  {
    v22 = 0LL;
  }
  if ( !*((_DWORD *)v20 + 6) )
    goto LABEL_50;
  v20[4] = (System_Int32_array *)v22;
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 4), v22, v14, v15, v16, v17, v18, v19);
  v21 = StringLiteral_19212;
  if ( StringLiteral_19212 )
  {
    v21 = sub_B170BC(StringLiteral_19212, *(_QWORD *)&(*v20)->m_Items[9]);
    if ( !v21 )
      goto LABEL_51;
    v22 = (System_Int32_array **)StringLiteral_19212;
  }
  else
  {
    v22 = 0LL;
  }
  if ( *((_DWORD *)v20 + 6) <= 1u )
    goto LABEL_50;
  v20[5] = (System_Int32_array *)v22;
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 5), v22, v14, v23, v24, v25, v26, v27);
  v21 = StringLiteral_19213;
  if ( StringLiteral_19213 )
  {
    v21 = sub_B170BC(StringLiteral_19213, *(_QWORD *)&(*v20)->m_Items[9]);
    if ( !v21 )
      goto LABEL_51;
    v22 = (System_Int32_array **)StringLiteral_19213;
  }
  else
  {
    v22 = 0LL;
  }
  if ( *((_DWORD *)v20 + 6) <= 2u )
    goto LABEL_50;
  v20[6] = (System_Int32_array *)v22;
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 6), v22, v14, v28, v29, v30, v31, v32);
  v21 = StringLiteral_19214;
  if ( StringLiteral_19214 )
  {
    v21 = sub_B170BC(StringLiteral_19214, *(_QWORD *)&(*v20)->m_Items[9]);
    if ( !v21 )
      goto LABEL_51;
    v22 = (System_Int32_array **)StringLiteral_19214;
  }
  else
  {
    v22 = 0LL;
  }
  if ( *((_DWORD *)v20 + 6) <= 3u )
    goto LABEL_50;
  v20[7] = (System_Int32_array *)v22;
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 7), v22, v14, v33, v34, v35, v36, v37);
  v21 = StringLiteral_19215;
  if ( StringLiteral_19215 )
  {
    v21 = sub_B170BC(StringLiteral_19215, *(_QWORD *)&(*v20)->m_Items[9]);
    if ( !v21 )
      goto LABEL_51;
    v22 = (System_Int32_array **)StringLiteral_19215;
  }
  else
  {
    v22 = 0LL;
  }
  if ( *((_DWORD *)v20 + 6) <= 4u )
    goto LABEL_50;
  v20[8] = (System_Int32_array *)v22;
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 8), v22, v14, v38, v39, v40, v41, v42);
  v21 = StringLiteral_19216;
  if ( StringLiteral_19216 )
  {
    v21 = sub_B170BC(StringLiteral_19216, *(_QWORD *)&(*v20)->m_Items[9]);
    if ( !v21 )
      goto LABEL_51;
    v22 = (System_Int32_array **)StringLiteral_19216;
  }
  else
  {
    v22 = 0LL;
  }
  if ( *((_DWORD *)v20 + 6) <= 5u )
    goto LABEL_50;
  v20[9] = (System_Int32_array *)v22;
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 9), v22, v14, v43, v44, v45, v46, v47);
  v21 = StringLiteral_19217;
  if ( StringLiteral_19217 )
  {
    v21 = sub_B170BC(StringLiteral_19217, *(_QWORD *)&(*v20)->m_Items[9]);
    if ( !v21 )
      goto LABEL_51;
    v22 = (System_Int32_array **)StringLiteral_19217;
  }
  else
  {
    v22 = 0LL;
  }
  if ( *((_DWORD *)v20 + 6) <= 6u )
    goto LABEL_50;
  v20[10] = (System_Int32_array *)v22;
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 10), v22, v14, v48, v49, v50, v51, v52);
  v21 = StringLiteral_19218;
  if ( StringLiteral_19218 )
  {
    v21 = sub_B170BC(StringLiteral_19218, *(_QWORD *)&(*v20)->m_Items[9]);
    if ( !v21 )
      goto LABEL_51;
    v22 = (System_Int32_array **)StringLiteral_19218;
  }
  else
  {
    v22 = 0LL;
  }
  if ( *((_DWORD *)v20 + 6) <= 7u )
    goto LABEL_50;
  v20[11] = (System_Int32_array *)v22;
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 11), v22, v14, v53, v54, v55, v56, v57);
  v21 = StringLiteral_19220;
  if ( StringLiteral_19220 )
  {
    v21 = sub_B170BC(StringLiteral_19220, *(_QWORD *)&(*v20)->m_Items[9]);
    if ( v21 )
    {
      v22 = (System_Int32_array **)StringLiteral_19220;
      goto LABEL_48;
    }
LABEL_51:
    sub_B170F4(v21);
    sub_B170A0();
  }
  v22 = 0LL;
LABEL_48:
  if ( *((_DWORD *)v20 + 6) <= 8u )
  {
LABEL_50:
    sub_B17100(v21, v22, v14);
    sub_B170A0();
  }
  v20[12] = (System_Int32_array *)v22;
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 12), v22, v14, v58, v59, v60, v61, v62);
  static_fields = (BattleServantConfConponent_o *)SupportSelectItemDraw_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v20;
  sub_B16F98(static_fields, v20, v64, v65, v66, v67, v68, v69);
  v70 = SupportSelectItemDraw_TypeInfo;
  SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_WIDTH = 156;
  v70->static_fields->DATA_LOST_MASK_HEIGHT = 258;
  v71 = v70->static_fields;
  *(_QWORD *)&v71->DATA_LOST_MASK_POSITION.fields.x = 0x43410000BF800000LL;
  v71->DATA_LOST_MASK_POSITION.fields.z = 0.0;
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

  if ( (byte_40FD52D & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, method);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Transform_TypeInfo, v5);
    byte_40FD52D = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B170D4();
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_B170D4();
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
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v15 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
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
      sub_B173C8(v16);
LABEL_38:
      sub_B170D4();
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
    equipRootObj = (UnityEngine_Component_o *)this->fields.equipRootObj;
    if ( !equipRootObj )
      sub_B170D4();
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
        sub_B170D4();
      UnityEngine_GameObject__SetActive(v22, 0, 0LL);
    }
  }
  v23 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
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
      v28 = sub_AAFEF8(v23, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
  }
}


void __fastcall SupportSelectItemDraw__Awake(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Component_o *v6; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UIWidget_o *restrictionWarningMessageLabel; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Transform_o *v11; // x0
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  UIWidget_o *restrictionMaskMessageText; // x0
  UnityEngine_Component_o *v14; // x0
  UnityEngine_Transform_o *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UISprite_o *v22; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v24; // x0
  UnityEngine_Transform_o *v25; // x0
  UnityEngine_Object_o *baseSprite; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct UISprite_o *v33; // x8
  struct UIAtlas_o *v34; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct UISprite_o *v42; // x8
  struct UIAtlas_o *v43; // x1
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x20
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FD525 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FD525 = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.raritySprite;
    if ( !v6 )
      goto LABEL_42;
    transform = UnityEngine_Component__get_transform(v6, 0LL);
    if ( !transform )
      goto LABEL_42;
    this->fields.baseRarityPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    restrictionWarningMessageLabel = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
    if ( !restrictionWarningMessageLabel )
      goto LABEL_42;
    this->fields.restrictionWarningMessageWidth = restrictionWarningMessageLabel->fields.mWidth;
    UIWidget__set_width(restrictionWarningMessageLabel, 1000, 0LL);
    v10 = this->fields.restrictionWarningBase;
    if ( !v10 )
      goto LABEL_42;
    v11 = UnityEngine_GameObject__get_transform(v10, 0LL);
    if ( !v11 )
      goto LABEL_42;
    this->fields.restrictionWarningCenter = UnityEngine_Transform__get_localPosition(v11, 0LL);
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !restrictionMaskMessageText )
      goto LABEL_42;
    this->fields.restrictionMaskMessageWidth = restrictionMaskMessageText->fields.mWidth;
    UIWidget__set_width(restrictionMaskMessageText, 1000, 0LL);
    v14 = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !v14 )
      goto LABEL_42;
    v15 = UnityEngine_Component__get_transform(v14, 0LL);
    if ( !v15 )
      goto LABEL_42;
    localPosition = UnityEngine_Transform__get_localPosition(v15, 0LL);
    v22 = this->fields.restrictionMaskSprite;
    this->fields.restrictionWarningCenter.fields.x = localPosition.fields.x;
    this->fields.restrictionWarningCenter.fields.z = localPosition.fields.z;
    this->fields.restrictionWarningCenter.fields.y = localPosition.fields.y + -55.0;
    if ( !v22 )
      goto LABEL_42;
    mAtlas = v22->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.maskSpriteDefaultAtlas,
      (System_Int32_array **)mAtlas,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v24 = this->fields.restrictionMaskSprite;
    if ( !v24 )
      goto LABEL_42;
    this->fields.maskSpriteDefaultWidth = v24->fields.mWidth;
    this->fields.maskSpriteDefaultHeight = v24->fields.mHeight;
    v25 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v24, 0LL);
    if ( !v25 )
      goto LABEL_42;
    this->fields.maskSpriteDefaultPosition = UnityEngine_Transform__get_localPosition(v25, 0LL);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    v33 = this->fields.baseSprite;
    if ( !v33 )
      goto LABEL_42;
    v34 = v33->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = v34;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.baseDefaultUIAtlas,
      (System_Int32_array **)v34,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
  {
    v42 = this->fields.base2Sprite;
    if ( v42 )
    {
      v43 = v42->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v43;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.base2DefaultUIAtlas,
        (System_Int32_array **)v43,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      goto LABEL_41;
    }
LABEL_42:
    sub_B170D4();
  }
LABEL_41:
  SupportSelectItemDraw__SetActiveDragSwapGuide(this, 0, (const MethodInfo *)v36);
  v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                  v44,
                                                                                                  v45,
                                                                                                  v46,
                                                                                                  v47);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v48,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v48;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.switchSkillUIList,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
}


void __fastcall SupportSelectItemDraw__ClearItem(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UINarrowFigureTexture_o *servantNarrowTexture; // x0
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Component_o *equipSprite; // x0
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Object_o *sortieMaskSprite; // x20
  const MethodInfo *v11; // x1
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0

  if ( (byte_40FD526 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD526 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  servantNarrowTexture = this->fields.servantNarrowTexture;
  if ( !servantNarrowTexture )
    goto LABEL_22;
  UINarrowFigureTexture__ReleaseCharacter(servantNarrowTexture, 0LL);
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !v6 )
      goto LABEL_22;
    v7 = UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !v7 )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(v7, 0, 0LL);
    equipSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
    if ( !equipSprite )
      goto LABEL_22;
    v9 = UnityEngine_Component__get_gameObject(equipSprite, 0LL);
    if ( !v9 )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(v9, 0, 0LL);
  }
  sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0LL, 0LL) )
  {
    v12 = (UnityEngine_Component_o *)this->fields.sortieMaskSprite;
    if ( v12 )
    {
      v13 = UnityEngine_Component__get_gameObject(v12, 0LL);
      if ( v13 )
      {
        UnityEngine_GameObject__SetActive(v13, 0, 0LL);
        goto LABEL_21;
      }
    }
LABEL_22:
    sub_B170D4();
  }
LABEL_21:
  SupportSelectItemDraw__ClearMessage(this, v11);
}


void __fastcall SupportSelectItemDraw__ClearMessage(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *restrictionMaskMessageText; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_GameObject_o *v9; // x0
  FlashingIconComponent_o *restrictionWarningIcon; // x0
  UILabel_o *restrictionWarningMessageLabel; // x0

  if ( (byte_40FD528 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40FD528 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !v5 )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject(v5, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    restrictionMaskMessageText = this->fields.restrictionMaskMessageText;
    if ( !restrictionMaskMessageText )
      goto LABEL_20;
    UILabel__set_text(restrictionMaskMessageText, (System_String_o *)StringLiteral_1, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    v9 = this->fields.restrictionWarningBase;
    if ( v9 )
    {
      UnityEngine_GameObject__SetActive(v9, 0, 0LL);
      restrictionWarningIcon = this->fields.restrictionWarningIcon;
      if ( restrictionWarningIcon )
      {
        FlashingIconComponent__Clear(restrictionWarningIcon, 0LL);
        restrictionWarningMessageLabel = this->fields.restrictionWarningMessageLabel;
        if ( restrictionWarningMessageLabel )
        {
          UILabel__set_text(restrictionWarningMessageLabel, (System_String_o *)StringLiteral_1, 0LL);
          return;
        }
      }
    }
LABEL_20:
    sub_B170D4();
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

  if ( (byte_40FD52B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, flag);
    byte_40FD52B = 1;
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
      sub_B170D4();
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
  if ( (byte_40FD52C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD52C = 1;
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
      sub_B170D4();
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
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x0
  UnityEngine_Object_o *skillInfoUiWidget; // x20
  struct UIWidget_o *v54; // x0
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x20
  struct UIWidget_o *v56; // x0
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x24
  int64_t Equip; // x0
  struct EquipTargetInfo_o *equipTarget1; // x28
  WebViewManager_o *v60; // x0
  WarQuestSelectionMaster_o *v61; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v62; // x21
  __int64 v63; // x20
  __int64 v64; // x23
  int32_t v65; // w0
  System_Int32_array *v66; // x23
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  int64_t v69; // x0
  UserServantEntity_o *v70; // x19
  WebViewManager_o *v71; // x0
  WarQuestSelectionMaster_o *v72; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v73; // x21
  __int64 v74; // x20
  __int64 v75; // x23
  int32_t v76; // w0
  int32_t svtId; // w19
  WebViewManager_o *v78; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v79; // x0
  WarEntity_o *v80; // x0
  struct ServantLeaderInfo_o *servantLeaderInfo; // x28
  int32_t atk; // w8
  int hp; // w8
  UnityEngine_Component_o *v84; // x0
  UnityEngine_GameObject_o *v85; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  UISprite_o *v88; // x21
  __int64 IsEmpty; // x0
  __int64 v90; // x8
  UnityEngine_Object_o *v91; // x20
  UISprite_o *v92; // x20
  UIAtlas_o *v93; // x21
  UnityEngine_Object_o *v94; // x20
  UISprite_o *v95; // x20
  UIAtlas_o *v96; // x21
  UnityEngine_Object_o *v97; // x20
  UnityEngine_Component_o *v98; // x0
  UnityEngine_GameObject_o *v99; // x0
  UnityEngine_Object_o *v100; // x20
  UILabel_o *v101; // x0
  UnityEngine_Object_o *v102; // x20
  UnityEngine_Component_o *v103; // x0
  UnityEngine_GameObject_o *v104; // x0
  UnityEngine_Object_o *v105; // x20
  UILabel_o *v106; // x0
  UnityEngine_Object_o *v107; // x20
  UILabel_o *v108; // x0
  UnityEngine_Object_o *v109; // x20
  const MethodInfo *v110; // x1
  UnityEngine_Component_o *v111; // x0
  UnityEngine_GameObject_o *v112; // x0
  UnityEngine_Object_o *v113; // x20
  UnityEngine_Component_o *v114; // x0
  UnityEngine_GameObject_o *v115; // x0
  UnityEngine_Object_o *v116; // x20
  UnityEngine_Component_o *v117; // x0
  UnityEngine_GameObject_o *v118; // x0
  UnityEngine_Object_o *v119; // x20
  ServantCommandCardListComponent_o *v120; // x0
  UnityEngine_Object_o *v121; // x20
  UnityEngine_GameObject_o *v122; // x0
  UnityEngine_Component_o *v123; // x0
  UnityEngine_GameObject_o *v124; // x0
  UnityEngine_Component_o *v125; // x0
  UnityEngine_GameObject_o *v126; // x0
  UISprite_o *v127; // x21
  __int64 v128; // x20
  __int64 v129; // x23
  int32_t v130; // w20
  UnityEngine_Object_o *v131; // x20
  UnityEngine_Component_o *v132; // x0
  int v133; // w19
  UnityEngine_GameObject_o *v134; // x0
  bool v135; // cc
  WebViewManager_o *v136; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v137; // x0
  UserServantEntity_o *v138; // x0
  UserServantEntity_o *v139; // x21
  int32_t v140; // w8
  int v141; // w8
  UnityEngine_Component_o *v142; // x0
  UnityEngine_GameObject_o *v143; // x0
  UnityEngine_Object_o *v144; // x20
  UnityEngine_Component_o *v145; // x0
  bool v146; // w1
  int32_t Rarity; // w19
  int32_t FrameType; // w22
  int32_t CardImageLimitCount; // w21
  EventUpValSetupInfo_o *eventSetupInfo; // x2
  struct System_Int32_array *eventIdList; // x8
  bool EventUpVal_29618592; // w24
  WarQuestSelectionMaster_o *v153; // x25
  __int64 v154; // x1
  __int64 v155; // x2
  __int64 v156; // x3
  __int64 v157; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v158; // x23
  struct EventUpValSetupInfo_o *v159; // x8
  struct System_Int32_array *v160; // x19
  __int64 v161; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v162; // x24
  unsigned __int64 v163; // x26
  int32_t v164; // w27
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventDetailEntity_o *v166; // x0
  __int64 v167; // x1
  __int64 v168; // x2
  __int64 v169; // x3
  __int64 v170; // x4
  int32_t eventSvtPoint; // w20
  __int64 v172; // x21
  __int64 v173; // x24
  int32_t v174; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  __int64 v176; // x1
  __int64 v177; // x2
  __int64 v178; // x3
  __int64 v179; // x4
  int32_t svtPointRank; // w25
  EventMargeItemUpValInfo_o *v181; // x21
  EventPersonalMargeUpValInfo_o *v182; // x25
  EventDropItemUpValInfo_array *DropItemList; // x0
  __int64 v184; // x8
  __int64 v185; // x25
  unsigned __int64 v186; // x20
  int v187; // w24
  WarBoardUiData_SaveData_array *v188; // x0
  System_Collections_Generic_IEnumerable_T__o *v189; // x21
  _BOOL4 UniqueSvtRestriction; // w25
  _BOOL4 IsRestrictionServantIndividuality; // w20
  clsQuestCheck_o *v192; // x0
  int qrs; // w20
  clsQuestCheck_o *v194; // x0
  int32_t qrs_high; // w21
  int v196; // w25
  int32_t v197; // w24
  System_Int32_array *v198; // x19
  QuestRestrictionInfo_o *v199; // x22
  __int64 v200; // x20
  __int64 v201; // x23
  int32_t v202; // w0
  int32_t v203; // w20
  int32_t v204; // w23
  int32_t DispLimitCount; // w0
  bool IsDataLost; // w26
  int32_t v207; // w21
  int32_t v208; // w0
  int v209; // w8
  UserServantEntity_o *v210; // x20
  __int64 v211; // x2
  __int128 v212; // q1
  int64_t v213; // x20
  bool EventUpVal_21447648; // w19
  WebViewManager_o *v215; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v216; // x28
  EventServantPointRankMaster_o *v217; // x22
  __int64 v218; // x1
  __int64 v219; // x2
  __int64 v220; // x3
  __int64 v221; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v222; // x21
  struct EventUpValSetupInfo_o *v223; // x8
  struct System_Int32_array *v224; // x23
  __int64 v225; // x8
  unsigned __int64 v226; // x26
  int32_t v227; // w27
  EventDetailEntity_o *v228; // x0
  __int64 v229; // x1
  __int64 v230; // x2
  __int64 v231; // x3
  __int64 v232; // x4
  __int128 v233; // q0
  int64_t v234; // x20
  int32_t v235; // w4
  int32_t BuddyPoint; // w25
  int32_t v237; // w0
  EventServantPointRankEntity_o *v238; // x0
  __int64 v239; // x1
  __int64 v240; // x2
  __int64 v241; // x3
  __int64 v242; // x4
  int32_t v243; // w24
  EventMargeItemUpValInfo_o *v244; // x20
  EventPersonalMargeUpValInfo_o *v245; // x25
  EventDropItemUpValInfo_array *v246; // x0
  __int64 v247; // x8
  __int64 v248; // x25
  unsigned __int64 v249; // x20
  _BOOL4 v250; // w0
  WebViewManager_o *v251; // x0
  ServantLimitImageMaster_o *v252; // x0
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *servantClassIcon; // x20
  UnityEngine_Component_o *v255; // x0
  UnityEngine_GameObject_o *v256; // x0
  ServantClassIconComponent_o *v257; // x0
  UnityEngine_Object_o *levelLabel; // x20
  UILabel_o *v259; // x20
  System_String_o *v260; // x0
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Component_o *v262; // x0
  System_Int32_array *v263; // x28
  bool v264; // w23
  int v265; // w26
  UnityEngine_GameObject_o *v266; // x0
  int32_t v267; // w24
  int32_t v268; // w20
  int32_t v269; // w22
  System_String_o *Icon_21544656; // x21
  ServantExceedMaster_o *v271; // x0
  int32_t RarityIcon; // w20
  ServantLvDetailMaster_o *v273; // x0
  int32_t v274; // w8
  UISprite_o *v275; // x22
  UISprite_o *v276; // x0
  struct UISprite_o *v277; // x0
  UnityEngine_Component_o *v278; // x0
  float v279; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x20
  UnityEngine_Component_o *v284; // x0
  UnityEngine_GameObject_o *v285; // x0
  SkillListTreasureDeviceComponent_o *v286; // x20
  SkillInfo_array *v287; // x21
  System_String_o *LevelList_23129292; // x0
  struct System_Collections_Generic_List_UIWidget__o *v289; // x0
  UnityEngine_Object_o *appendSkillList; // x20
  UnityEngine_Component_o *v291; // x0
  UnityEngine_GameObject_o *v292; // x0
  AppendSkillListComponent_o *v293; // x20
  SkillInfo_array *v294; // x21
  System_String_o *v295; // x0
  struct System_Collections_Generic_List_UIWidget__o *v296; // x0
  UnityEngine_Component_o *v297; // x0
  UnityEngine_GameObject_o *v298; // x0
  UnityEngine_Object_o *switchSkillInfo; // x20
  struct System_Collections_Generic_List_UIWidget__o *v300; // x0
  SwitchUIWidgetComponent_o *v301; // x20
  UIWidget_array *v302; // x0
  UnityEngine_Object_o *svtCommandCardList; // x20
  ServantCommandCardListComponent_o *v304; // x0
  UnityEngine_Object_o *attackLabel; // x20
  int v306; // s0
  UIWidget_o *v310; // x0
  UILabel_o *v311; // x20
  System_String_o *v312; // x0
  UnityEngine_Object_o *hpLabel; // x20
  int v314; // s0
  UIWidget_o *v318; // x0
  UILabel_o *v319; // x20
  System_String_o *v320; // x0
  UnityEngine_Object_o *baseSprite; // x20
  UISprite_o *v322; // x21
  UIAtlas_o *baseDefaultUIAtlas; // x20
  UnityEngine_Object_o *base2Sprite; // x20
  UISprite_o *v325; // x21
  UIAtlas_o *base2DefaultUIAtlas; // x20
  UnityEngine_Component_o *backClassIcon; // x0
  UnityEngine_GameObject_o *v328; // x0
  const MethodInfo *v329; // x4
  UnityEngine_Object_o *sortieMaskSprite; // x20
  UnityEngine_Component_o *v331; // x0
  UnityEngine_GameObject_o *v332; // x0
  System_String_o *v333; // x0
  System_String_o *v334; // x1
  bool v335; // w2
  SupportSelectItemDraw_o *v336; // x0
  bool v337; // w3
  bool v338; // w19
  UnityEngine_Object_o *v339; // x20
  const MethodInfo *v340; // x1
  UnityEngine_Component_o *v341; // x0
  UnityEngine_GameObject_o *v342; // x0
  bool v343; // w1
  System_String_o *v344; // x0
  const MethodInfo *v345; // x3
  System_String_o *v346; // x20
  Il2CppObject *v347; // x0
  UnityEngine_Object_o *v348; // x20
  UnityEngine_Component_o *v349; // x0
  UnityEngine_Object_o *friendPointBonus; // x20
  UnityEngine_Object_o *friendPointBonusBase; // x20
  UnityEngine_GameObject_o *v352; // x0
  UnityEngine_Object_o *eventUpValIcon; // x20
  __int64 v354; // x3
  __int64 v355; // x4
  bool v356; // w8
  __int64 v357; // x8
  System_Int32_array *v358; // x28
  unsigned int v359; // w19
  int32_t v360; // w23
  int32_t v361; // w21
  Il2CppClass **v362; // x24
  Il2CppClass *v363; // x8
  __int64 *v364; // x24
  Il2CppClass *v365; // t1
  __int64 v366; // x9
  __int64 v367; // x10
  _BOOL4 v368; // w10
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v369; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v370; // x24
  __int64 v371; // x1
  __int64 v372; // x2
  __int64 v373; // x3
  __int64 v374; // x4
  EventMargeItemUpValInfo_o *v375; // x20
  UnityEngine_Component_o *noneEquipSprite; // x0
  UnityEngine_GameObject_o *v377; // x0
  UnityEngine_Component_o *equipSprite; // x0
  UnityEngine_GameObject_o *v379; // x0
  System_Int32_array *v380; // x9
  UISprite_o *v381; // x21
  __int64 v382; // x23
  __int64 v383; // x20
  System_Int32_array *v384; // x28
  int32_t v385; // w20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  __int64 v387; // x20
  __int64 v388; // x21
  int32_t v389; // w0
  int v390; // w20
  UnityEngine_Object_o *v391; // x20
  UserServantLeaderEntity_o *v392; // x19
  struct ServantLeaderInfo_o *v393; // x8
  __int64 v394; // x20
  __int64 v395; // x21
  int32_t v396; // w0
  int32_t v397; // w21
  int32_t v398; // w0
  UnityEngine_Object_o *v399; // x20
  ShiningIconComponent_o *v400; // x0
  bool v401; // w1
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v403; // x20
  __int64 v404; // x21
  int32_t v405; // w0
  int32_t v406; // w3
  int32_t equipSvtId; // w4
  EventUpValIconComponent_o *v408; // x0
  UnityEngine_Object_o *bounusIcon; // x20
  UnityEngine_Object_o *baseButton; // x20
  struct UICommonButton_o *v411; // x0
  UnityEngine_Object_o *pushSprite; // x20
  UnityEngine_Component_o *v413; // x0
  UnityEngine_GameObject_o *v414; // x0
  int64_t pushUserServantId; // x8
  UnityEngine_Component_o *v416; // x0
  UnityEngine_GameObject_o *v417; // x0
  int32_t TimesToRestart; // [xsp+8h] [xbp-1A8h]
  int32_t classId; // [xsp+Ch] [xbp-1A4h]
  System_Int32_array *cardParams; // [xsp+10h] [xbp-1A0h]
  _BOOL4 IsUniqueIndividualityRestriction; // [xsp+18h] [xbp-198h]
  _BOOL4 v422; // [xsp+1Ch] [xbp-194h]
  int32_t v423; // [xsp+1Ch] [xbp-194h]
  System_Int32_array *codeIds; // [xsp+20h] [xbp-190h]
  System_Int32_array *codeIdsa; // [xsp+20h] [xbp-190h]
  System_Int32_array *codeIdsb; // [xsp+20h] [xbp-190h]
  int32_t treasureDeviceNum; // [xsp+28h] [xbp-188h]
  int32_t strengthStatus; // [xsp+2Ch] [xbp-184h]
  int32_t lv; // [xsp+30h] [xbp-180h]
  int adjustAtk; // [xsp+34h] [xbp-17Ch]
  int adjustHp; // [xsp+38h] [xbp-178h]
  int32_t v432; // [xsp+3Ch] [xbp-174h]
  int32_t v433; // [xsp+3Ch] [xbp-174h]
  SupportSelectItemDraw_o *v434; // [xsp+40h] [xbp-170h]
  SupportSelectItemDraw_o *v435; // [xsp+40h] [xbp-170h]
  bool v436; // [xsp+48h] [xbp-168h]
  _BOOL4 QuestRestriction; // [xsp+48h] [xbp-168h]
  int32_t limitCount; // [xsp+50h] [xbp-160h]
  int exceedCount; // [xsp+54h] [xbp-15Ch]
  WarEntity_o *v440; // [xsp+58h] [xbp-158h]
  struct EquipTargetInfo_o *v442; // [xsp+68h] [xbp-148h]
  System_Collections_Generic_IEnumerable_T__o *v443; // [xsp+70h] [xbp-140h]
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // [xsp+70h] [xbp-140h]
  UserEventServantPointMaster_o *v445; // [xsp+70h] [xbp-140h]
  UserServantLeaderEntity_o *v446; // [xsp+78h] [xbp-138h]
  EventServantPointRankMaster_o *v447; // [xsp+80h] [xbp-130h]
  EventServantPointRankMaster_o *v448; // [xsp+80h] [xbp-130h]
  _BOOL4 v449; // [xsp+80h] [xbp-130h]
  ServantEntity_o *servantEntity; // [xsp+88h] [xbp-128h]
  SupportServantData_o *v451; // [xsp+90h] [xbp-120h]
  bool v452; // [xsp+90h] [xbp-120h]
  int32_t value; // [xsp+9Ch] [xbp-114h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v454; // [xsp+A0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v455; // [xsp+C0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v456; // [xsp+E0h] [xbp-D0h] BYREF
  UserEventServantPointEntity_o *entity; // [xsp+108h] [xbp-A8h] BYREF
  SkillInfo_array *v458; // [xsp+110h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+118h] [xbp-98h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+120h] [xbp-90h] BYREF
  int v461; // [xsp+12Ch] [xbp-84h] BYREF
  __int64 v462[2]; // [xsp+130h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+148h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v464; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v465; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v466; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v467; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v468; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v469; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v470; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v471; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v472; // 0:x0.16
  UnityEngine_Vector3_o v473; // 0:s0.4,4:s1.4,8:s2.4

  v7 = supportServantData;
  if ( (byte_40FD527 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, supportServantData);
    sub_B16FFC(&AtlasManager_TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMaster_EventDetailMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantExceedMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v18);
    sub_B16FFC(&DataManager_TypeInfo, v19);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v21);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v22);
    sub_B16FFC(&EventMargeItemUpValInfo_TypeInfo, v23);
    sub_B16FFC(&EventPersonalMargeUpValInfo_TypeInfo, v24);
    sub_B16FFC(&int_TypeInfo, v25);
    sub_B16FFC(&long___TypeInfo, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Add__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Clear__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v30);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v31);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v32);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___66732000, v33);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v34);
    sub_B16FFC(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v35);
    sub_B16FFC(&LocalizationManager_TypeInfo, v36);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v37);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v38);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v39);
    sub_B16FFC(&Rarity_TypeInfo, v40);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v42);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v43);
    sub_B16FFC(&SupportSelectItemDraw_TypeInfo, v44);
    sub_B16FFC(&TutorialFlag_TypeInfo, v45);
    sub_B16FFC(&StringLiteral_11601, v46);
    sub_B16FFC(&StringLiteral_10330, v47);
    sub_B16FFC(&StringLiteral_6375, v48);
    sub_B16FFC(&StringLiteral_340, v49);
    sub_B16FFC(&StringLiteral_1, v50);
    byte_40FD527 = 1;
  }
  eventUpVallInfo = 0LL;
  v462[0] = 0LL;
  v461 = 0;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  entity = 0LL;
  v458 = 0LL;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_592;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_592;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)switchSkillUIList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
  {
    v54 = this->fields.skillInfoUiWidget;
    if ( !v54 )
      goto LABEL_592;
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))v54->klass->vtable._8_set_alpha.method)(
      v54,
      v54->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      0.0);
  }
  appendSkillInfoUiWidget = (UnityEngine_Object_o *)this->fields.appendSkillInfoUiWidget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0LL, 0LL) )
  {
    v56 = this->fields.appendSkillInfoUiWidget;
    if ( !v56 )
      goto LABEL_592;
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))v56->klass->vtable._8_set_alpha.method)(
      v56,
      v56->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      0.0);
  }
  if ( !v7 )
    goto LABEL_592;
  UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(v7, classPos, 0LL);
  eventUpVallInfo = 0LL;
  Equip = SupportServantData__getEquip(v7, classPos, 0LL);
  v446 = UserServantLeaderEntity;
  if ( !Equip )
  {
    v66 = 0LL;
    goto LABEL_38;
  }
  if ( !v7->fields.isFriendInfo )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_592;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    v69 = SupportServantData__getEquip(v7, classPos, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_592;
    v70 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
            MasterData_WarQuestSelectionMaster,
            v69,
            (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v71 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v71 )
      goto LABEL_592;
    v72 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)v71,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !v70 )
      goto LABEL_592;
    v73 = (DataMasterBase_WarMaster__WarEntity__int__o *)v72;
    v75 = *(_QWORD *)&v70->fields.svtId.fields.currentCryptoKey;
    v74 = *(_QWORD *)&v70->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v465.fields.currentCryptoKey = v75;
    *(_QWORD *)&v465.fields.fakeValue = v74;
    v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v465, 0LL);
    if ( !v73 )
      goto LABEL_592;
    Equip = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v73,
                       v76,
                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    v66 = (System_Int32_array *)v70;
LABEL_38:
    equipTarget1 = 0LL;
    v440 = (WarEntity_o *)Equip;
    if ( !UserServantLeaderEntity )
      goto LABEL_48;
    goto LABEL_39;
  }
  if ( !UserServantLeaderEntity )
    goto LABEL_592;
  equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
  v60 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v60 )
    goto LABEL_592;
  v61 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v60,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !equipTarget1 )
    goto LABEL_592;
  v62 = (DataMasterBase_WarMaster__WarEntity__int__o *)v61;
  v64 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v63 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v464.fields.currentCryptoKey = v64;
  *(_QWORD *)&v464.fields.fakeValue = v63;
  v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v464, 0LL);
  if ( !v62 )
    goto LABEL_592;
  v440 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
           v62,
           v65,
           (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v66 = 0LL;
LABEL_39:
  if ( UserServantLeaderEntity->fields.userSvtId )
  {
    svtId = UserServantLeaderEntity->fields.svtId;
    v78 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v78 )
      goto LABEL_592;
    v79 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)v78,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !v79 )
      goto LABEL_592;
    v80 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
            v79,
            svtId,
            (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !v80 )
      goto LABEL_592;
    servantEntity = (ServantEntity_o *)v80;
    v451 = v7;
    v442 = equipTarget1;
    value = svtId;
    classId = v80->fields.startType;
    if ( v7->fields.isFriendInfo )
    {
      servantLeaderInfo = UserServantLeaderEntity->fields.servantLeaderInfo;
      v434 = this;
      if ( !servantLeaderInfo )
        goto LABEL_592;
      ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(servantLeaderInfo, 0LL);
      HIDWORD(v462[0]) = servantLeaderInfo->fields.lv;
      atk = servantLeaderInfo->fields.atk;
      LODWORD(v462[0]) = atk;
      if ( v442 )
      {
        LODWORD(v462[0]) = v442->fields.atk + atk;
        adjustAtk = servantLeaderInfo->fields.adjustAtk;
        hp = v442->fields.hp + servantLeaderInfo->fields.hp;
      }
      else
      {
        adjustAtk = servantLeaderInfo->fields.adjustAtk;
        hp = servantLeaderInfo->fields.hp;
      }
      v461 = hp;
      adjustHp = servantLeaderInfo->fields.adjustHp;
      Rarity = ServantLeaderInfo__getRarity(servantLeaderInfo, 0LL);
      exceedCount = servantLeaderInfo->fields.exceedCount;
      FrameType = ServantLeaderInfo__getFrameType(servantLeaderInfo, 0LL);
      CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(servantLeaderInfo, 0LL);
      ServantLeaderInfo__getSkillInfo(servantLeaderInfo, &skillInfoList, 0LL);
      ServantLeaderInfo__getTreasureDeviceInfo(servantLeaderInfo, &tdInfo, 0LL);
      if ( !tdInfo )
        goto LABEL_592;
      lv = tdInfo->fields.lv;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      strengthStatus = tdInfo->fields.strengthStatus;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_29632824(servantLeaderInfo, &v458, 0, 0LL);
      eventSetupInfo = v7->fields.eventSetupInfo;
      v432 = Rarity;
      limitCount = CardImageLimitCount;
      if ( !eventSetupInfo )
        goto LABEL_212;
      eventIdList = eventSetupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_592;
      if ( *(_QWORD *)&eventIdList->max_length )
      {
        codeIds = v66;
        EventUpVal_29618592 = ServantLeaderInfo__getEventUpVal_29618592(
                                servantLeaderInfo,
                                &eventUpVallInfo,
                                eventSetupInfo,
                                0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventDetailMaster___);
        v153 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
        v158 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v154, v155, v156, v157);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v158,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
        v159 = v7->fields.eventSetupInfo;
        if ( !v159 )
          goto LABEL_592;
        v160 = v159->fields.eventIdList;
        v447 = (EventServantPointRankMaster_o *)v153;
        v436 = EventUpVal_29618592;
        if ( !v160 )
          goto LABEL_592;
        v161 = *(_QWORD *)&v160->max_length;
        v162 = Master_WarQuestSelectionMaster;
        if ( (int)v161 >= 1 )
        {
          v163 = 0LL;
          while ( 1 )
          {
            if ( v163 >= (unsigned int)v161 )
              goto LABEL_593;
            v164 = v160->m_Items[v163 + 1];
            questRestrictionInfo = v451->fields.questRestrictionInfo;
            if ( !questRestrictionInfo || questRestrictionInfo->fields.eventId == v164 )
            {
              if ( !v162 )
                goto LABEL_592;
              v166 = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              v162,
                                              v164,
                                              (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
              if ( !v166 || (IsEmpty = EventDetailEntity__HasFlag(v166, 0x800000000LL, 0LL), (IsEmpty & 1) == 0) )
              {
                if ( !v447 )
                  goto LABEL_592;
                if ( EventServantPointRankMaster__IsEnableEvent(v447, v164, 0LL) )
                {
                  eventSvtPoint = servantLeaderInfo->fields.eventSvtPoint;
                  v173 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                  v172 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v467.fields.currentCryptoKey = v173;
                  *(_QWORD *)&v467.fields.fakeValue = v172;
                  v174 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v467, 0LL);
                  EnableEntity = EventServantPointRankMaster__GetEnableEntity(v447, v164, eventSvtPoint, v174, 0LL);
                  if ( EnableEntity )
                    svtPointRank = EnableEntity->fields.svtPointRank;
                  else
                    svtPointRank = 0;
                  v162 = Master_WarQuestSelectionMaster;
                  v181 = (EventMargeItemUpValInfo_o *)sub_B170CC(
                                                        EventMargeItemUpValInfo_TypeInfo,
                                                        v176,
                                                        v177,
                                                        v178,
                                                        v179);
                  EventMargeItemUpValInfo___ctor_22495068(v181, v164, 0LL);
                  if ( !v181 )
                    goto LABEL_592;
                  EventMargeItemUpValInfo__SetServantPointInfo(
                    v181,
                    servantLeaderInfo->fields.eventSvtPoint,
                    svtPointRank,
                    1,
                    0LL);
                  if ( !v158 )
                    goto LABEL_592;
                  System_Collections_Generic_List_XWeaponTrail_Element___Insert(
                    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v158,
                    0,
                    (XWeaponTrail_Element_o *)v181,
                    (const MethodInfo_2F26EEC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                }
                v182 = (EventPersonalMargeUpValInfo_o *)sub_B170CC(
                                                          EventPersonalMargeUpValInfo_TypeInfo,
                                                          v167,
                                                          v168,
                                                          v169,
                                                          v170);
                EventPersonalMargeUpValInfo___ctor(v182, v164, servantEntity, 0LL);
                if ( !eventUpVallInfo )
                  goto LABEL_592;
                DropItemList = EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
                if ( !v182 )
                  goto LABEL_592;
                EventPersonalMargeUpValInfo__Add(v182, DropItemList, 0LL);
                IsEmpty = EventPersonalMargeUpValInfo__IsEmpty(v182, 0LL);
                if ( (IsEmpty & 1) == 0 )
                {
                  IsEmpty = (__int64)EventPersonalMargeUpValInfo__GetList(v182, 0LL);
                  if ( !IsEmpty )
                    goto LABEL_592;
                  v184 = *(_QWORD *)(IsEmpty + 24);
                  v185 = IsEmpty;
                  if ( (int)v184 >= 1 )
                    break;
                }
              }
            }
LABEL_209:
            LODWORD(v161) = v160->max_length;
            if ( (__int64)++v163 >= (int)v161 )
              goto LABEL_210;
          }
          v186 = 0LL;
          while ( v186 < (unsigned int)v184 )
          {
            if ( !v158 )
              goto LABEL_592;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v158,
              *(EventMissionProgressRequest_Argument_ProgressData_o **)(v185 + 32 + 8 * v186),
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
            LODWORD(v184) = *(_DWORD *)(v185 + 24);
            if ( (__int64)++v186 >= (int)v184 )
              goto LABEL_209;
          }
          goto LABEL_593;
        }
LABEL_210:
        if ( !v158 )
          goto LABEL_592;
        v187 = v436;
        v188 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v158,
                 (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
        v7 = v451;
        v66 = codeIds;
        v189 = (System_Collections_Generic_IEnumerable_T__o *)v188;
      }
      else
      {
LABEL_212:
        v189 = 0LL;
        v187 = 0;
      }
      codeIdsa = ServantLeaderInfo__getCommandCodeIdList(servantLeaderInfo, 0LL);
      cardParams = servantLeaderInfo->fields.commandCardParam;
      QuestRestriction = ServantLeaderInfo__getQuestRestriction(servantLeaderInfo, v7->fields.questRestrictionInfo, 0LL);
      UniqueSvtRestriction = ServantLeaderInfo__getUniqueSvtRestriction(
                               servantLeaderInfo,
                               v7->fields.questRestrictionInfo,
                               0LL);
      v443 = v189;
      IsUniqueIndividualityRestriction = ServantLeaderInfo__IsUniqueIndividualityRestriction(
                                           servantLeaderInfo,
                                           v7->fields.questRestrictionInfo,
                                           0LL);
      v422 = UniqueSvtRestriction;
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
        v192 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !v192 )
          goto LABEL_592;
        qrs = (int)v192[1].fields.qrs;
        v194 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !v194 )
          goto LABEL_592;
        if ( qrs < 1 )
          goto LABEL_228;
        if ( !v7->fields.questRestrictionInfo )
          goto LABEL_592;
        qrs_high = HIDWORD(v194[1].fields.qrs);
        if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_31258540(v7->fields.questRestrictionInfo, qrs_high, 0LL) )
        {
          v196 = v187;
          v197 = FrameType;
          v198 = v66;
          v199 = v7->fields.questRestrictionInfo;
          v201 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
          v200 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v468.fields.currentCryptoKey = v201;
          *(_QWORD *)&v468.fields.fakeValue = v200;
          v202 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v468, 0LL);
          v203 = servantLeaderInfo->fields.limitCount;
          v204 = v202;
          DispLimitCount = ServantLeaderInfo__getDispLimitCount(servantLeaderInfo, 0LL);
          if ( !v199 )
            goto LABEL_592;
          IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                v199,
                                                v204,
                                                v203,
                                                DispLimitCount,
                                                qrs_high,
                                                1,
                                                0LL);
          v66 = v198;
          FrameType = v197;
          v187 = v196;
        }
        else
        {
LABEL_228:
          IsRestrictionServantIndividuality = 0;
        }
      }
      IsDataLost = ServantLeaderInfo__IsDataLost(servantLeaderInfo, v451->fields.questRestrictionInfo, 0LL);
      TimesToRestart = ServantLeaderInfo__GetTimesToRestart(servantLeaderInfo, v451->fields.questRestrictionInfo, 0LL);
      this = v434;
      equipTarget1 = v442;
      svtId = value;
      v207 = v432;
    }
    else
    {
      v136 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v136 )
        goto LABEL_592;
      v137 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                      (DataManager_o *)v136,
                                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !v137 )
        goto LABEL_592;
      v138 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               v137,
               UserServantLeaderEntity->fields.userSvtId,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !v138 )
        goto LABEL_592;
      v139 = v138;
      HIDWORD(v462[0]) = v138->fields.lv;
      v140 = v138->fields.atk;
      LODWORD(v462[0]) = v140;
      if ( v66 )
      {
        LODWORD(v462[0]) = v66->m_Items[59] + v140;
        adjustAtk = v138->fields.adjustAtk;
        v141 = v66->m_Items[60] + v138->fields.hp;
      }
      else
      {
        adjustAtk = v138->fields.adjustAtk;
        v141 = v138->fields.hp;
      }
      v461 = v141;
      adjustHp = v138->fields.adjustHp;
      v208 = UserServantEntity__getRarity(v138, 0LL);
      v209 = v139->fields.exceedCount;
      v210 = v139;
      v207 = v208;
      exceedCount = v209;
      FrameType = UserServantEntity__getFrameType(v210, 0LL);
      limitCount = UserServantEntity__getCardImageLimitCount(v210, 0, 0LL);
      UserServantEntity__getSkillInfo(v210, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
      UserServantEntity__getTreasureDeviceInfo(v210, &tdInfo, -1, -1, 0, 0LL);
      if ( !tdInfo )
        goto LABEL_592;
      lv = tdInfo->fields.lv;
      v448 = (EventServantPointRankMaster_o *)v210;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      strengthStatus = tdInfo->fields.strengthStatus;
      UserServantEntity__GetAppendPassiveSkillInfo_21474452(v210, &v458, 0LL);
      if ( v7->fields.eventSetupInfo )
      {
        if ( v66 )
        {
          v212 = *(_OWORD *)&v66->m_Items[1];
          *(_OWORD *)&v456.fields.currentCryptoKey = *(_OWORD *)&v66->bounds;
          *(_OWORD *)&v456.fields.fakeValue = v212;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v455 = v456;
          v213 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v455, 0LL);
        }
        else
        {
          v213 = -1LL;
        }
        IsEmpty = sub_B17014(long___TypeInfo, 1LL, v211);
        if ( !IsEmpty )
          goto LABEL_592;
        if ( !*(_DWORD *)(IsEmpty + 24) )
          goto LABEL_593;
        *(_QWORD *)(IsEmpty + 32) = v213;
        v435 = this;
        EventUpVal_21447648 = UserServantEntity__getEventUpVal_21447648(
                                (UserServantEntity_o *)v448,
                                &eventUpVallInfo,
                                v7->fields.eventSetupInfo,
                                (System_Int64_array *)IsEmpty,
                                0LL);
        v215 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v215 )
          goto LABEL_592;
        v433 = v207;
        v423 = FrameType;
        v216 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)v215,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        codeIdsb = v66;
        v217 = (EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
        v445 = (UserEventServantPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
        v222 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v218, v219, v220, v221);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v222,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
        v223 = v7->fields.eventSetupInfo;
        if ( !v223 )
          goto LABEL_592;
        v224 = v223->fields.eventIdList;
        if ( !v224 )
          goto LABEL_592;
        v225 = *(_QWORD *)&v224->max_length;
        if ( (int)v225 >= 1 )
        {
          v226 = 0LL;
          while ( 1 )
          {
            if ( v226 >= (unsigned int)v225 )
              goto LABEL_593;
            if ( !v216 )
              goto LABEL_592;
            v227 = v224->m_Items[v226 + 1];
            v228 = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            v216,
                                            v227,
                                            (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
            if ( !v228 || (IsEmpty = EventDetailEntity__HasFlag(v228, 0x800000000LL, 0LL), (IsEmpty & 1) == 0) )
            {
              if ( !v217 )
                goto LABEL_592;
              if ( EventServantPointRankMaster__IsEnableEvent(v217, v227, 0LL) )
              {
                v233 = *(_OWORD *)&v448->fields.revision;
                *(_OWORD *)&v456.fields.currentCryptoKey = *(_OWORD *)&v448->fields.seriazlier;
                *(_OWORD *)&v456.fields.fakeValue = v233;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v454 = v456;
                v234 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v454, 0LL);
                v235 = UserServantEntity__getSvtId((UserServantEntity_o *)v448, 0LL);
                if ( !v445 )
                  goto LABEL_592;
                if ( UserEventServantPointMaster__TryGetEntity(v445, &entity, v234, v227, v235, 0LL) )
                {
                  if ( !entity )
                    goto LABEL_592;
                  BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(entity, 0LL);
                }
                else
                {
                  BuddyPoint = 0;
                }
                v237 = UserServantEntity__getSvtId((UserServantEntity_o *)v448, 0LL);
                v238 = EventServantPointRankMaster__GetEnableEntity(v217, v227, BuddyPoint, v237, 0LL);
                v243 = v238 ? v238->fields.svtPointRank : 0;
                v244 = (EventMargeItemUpValInfo_o *)sub_B170CC(EventMargeItemUpValInfo_TypeInfo, v239, v240, v241, v242);
                EventMargeItemUpValInfo___ctor_22495068(v244, v227, 0LL);
                if ( !v244 )
                  goto LABEL_592;
                EventMargeItemUpValInfo__SetServantPointInfo(v244, BuddyPoint, v243, 0, 0LL);
                if ( !v222 )
                  goto LABEL_592;
                System_Collections_Generic_List_XWeaponTrail_Element___Insert(
                  (System_Collections_Generic_List_XWeaponTrail_Element__o *)v222,
                  0,
                  (XWeaponTrail_Element_o *)v244,
                  (const MethodInfo_2F26EEC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
              }
              v245 = (EventPersonalMargeUpValInfo_o *)sub_B170CC(
                                                        EventPersonalMargeUpValInfo_TypeInfo,
                                                        v229,
                                                        v230,
                                                        v231,
                                                        v232);
              EventPersonalMargeUpValInfo___ctor(v245, v227, servantEntity, 0LL);
              if ( !eventUpVallInfo )
                goto LABEL_592;
              v246 = EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
              if ( !v245 )
                goto LABEL_592;
              EventPersonalMargeUpValInfo__Add(v245, v246, 0LL);
              IsEmpty = EventPersonalMargeUpValInfo__IsEmpty(v245, 0LL);
              if ( (IsEmpty & 1) == 0 )
              {
                IsEmpty = (__int64)EventPersonalMargeUpValInfo__GetList(v245, 0LL);
                if ( !IsEmpty )
                  goto LABEL_592;
                v247 = *(_QWORD *)(IsEmpty + 24);
                v248 = IsEmpty;
                if ( (int)v247 >= 1 )
                  break;
              }
            }
LABEL_279:
            LODWORD(v225) = v224->max_length;
            if ( (__int64)++v226 >= (int)v225 )
              goto LABEL_280;
          }
          v249 = 0LL;
          while ( v249 < (unsigned int)v247 )
          {
            if ( !v222 )
              goto LABEL_592;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v222,
              *(EventMissionProgressRequest_Argument_ProgressData_o **)(v248 + 32 + 8 * v249),
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
            LODWORD(v247) = *(_DWORD *)(v248 + 24);
            if ( (__int64)++v249 >= (int)v247 )
              goto LABEL_279;
          }
LABEL_593:
          sub_B17100(IsEmpty, v86, v87);
          sub_B170A0();
        }
LABEL_280:
        if ( !v222 )
          goto LABEL_592;
        v187 = EventUpVal_21447648;
        v443 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v222,
                                                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
        this = v435;
        v7 = v451;
        v66 = codeIdsb;
        equipTarget1 = v442;
        svtId = value;
        FrameType = v423;
        v207 = v433;
      }
      else
      {
        v443 = 0LL;
        v187 = 0;
      }
      codeIdsa = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)v448, 0LL);
      QuestRestriction = UserServantEntity__getQuestRestriction(
                           (UserServantEntity_o *)v448,
                           v7->fields.questRestrictionInfo,
                           0,
                           0LL);
      v422 = UserServantEntity__getUniqueSvtRestriction(
               (UserServantEntity_o *)v448,
               v7->fields.questRestrictionInfo,
               0LL);
      v250 = UserServantEntity__IsUniqueIndividualityRestriction(
               (UserServantEntity_o *)v448,
               v7->fields.questRestrictionInfo,
               0LL);
      IsDataLost = 0;
      IsRestrictionServantIndividuality = 0;
      IsUniqueIndividualityRestriction = v250;
      TimesToRestart = 0;
      cardParams = 0LL;
    }
    v251 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v251 )
      goto LABEL_592;
    v252 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)v251,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !v252 )
      goto LABEL_592;
    v449 = IsRestrictionServantIndividuality;
    ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(v252, svtId, limitCount, 0LL);
    if ( !this->fields.servantNarrowTexture )
      goto LABEL_592;
    UINarrowFigureTexture__SetCharacter(this->fields.servantNarrowTexture, svtId, ServantImageLimitSealAfter, 0LL, 0LL);
    servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
    {
      v255 = (UnityEngine_Component_o *)this->fields.servantClassIcon;
      if ( !v255 )
        goto LABEL_592;
      v256 = UnityEngine_Component__get_gameObject(v255, 0LL);
      if ( !v256 )
        goto LABEL_592;
      if ( IsDataLost )
      {
        UnityEngine_GameObject__SetActive(v256, 0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(v256, 1, 0LL);
        v257 = this->fields.servantClassIcon;
        if ( !v257 )
          goto LABEL_592;
        ServantClassIconComponent__SetImage(v257, classId, FrameType, 0LL);
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
      v259 = this->fields.levelLabel;
      v260 = System_Int32__ToString((int32_t)v462 + 4, 0LL);
      if ( !v259 )
        goto LABEL_592;
      UILabel__set_text(v259, v260, 0LL);
    }
    raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
    {
      v262 = (UnityEngine_Component_o *)this->fields.raritySprite;
      if ( !v262 )
        goto LABEL_592;
      v263 = v66;
      v264 = IsDataLost;
      v265 = v187;
      v266 = UnityEngine_Component__get_gameObject(v262, 0LL);
      if ( !v266 )
        goto LABEL_592;
      v267 = FrameType;
      UnityEngine_GameObject__SetActive(v266, 1, 0LL);
      v268 = HIDWORD(v462[0]);
      if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      v269 = v207;
      Icon_21544656 = Rarity__getIcon_21544656(v207, exceedCount, v268, 0LL);
      if ( exceedCount < 1 )
      {
        v274 = 0;
      }
      else
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v271 = (ServantExceedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantExceedMaster___);
        if ( !v271 )
          goto LABEL_592;
        RarityIcon = ServantExceedMaster__GetRarityIcon(v271, v269, exceedCount, 0, 0LL);
        v273 = (ServantLvDetailMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
        if ( !v273 )
          goto LABEL_592;
        v274 = ServantLvDetailMaster__GetRarityIcon(v273, v269, SHIDWORD(v462[0]), RarityIcon, 0LL);
      }
      v275 = this->fields.raritySprite;
      if ( v274 >= 3 )
      {
        if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v275, Icon_21544656, 0LL);
      }
      else
      {
        if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetCommon(v275, 0LL);
        v276 = this->fields.raritySprite;
        if ( !v276 )
          goto LABEL_592;
        UISprite__set_spriteName(v276, Icon_21544656, 0LL);
      }
      v277 = this->fields.raritySprite;
      FrameType = v267;
      if ( !v277 )
        goto LABEL_592;
      v187 = v265;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v277->klass->vtable._33_MakePixelPerfect.method)(
        v277,
        v277->klass->vtable._34_get_minWidth.methodPtr);
      v278 = (UnityEngine_Component_o *)this->fields.raritySprite;
      v279 = exceedCount >= 1
           ? this->fields.baseRarityPosition.fields.x + 1.0
           : this->fields.baseRarityPosition.fields.x;
      if ( !v278 )
        goto LABEL_592;
      y = this->fields.baseRarityPosition.fields.y;
      z = this->fields.baseRarityPosition.fields.z;
      IsDataLost = v264;
      transform = UnityEngine_Component__get_transform(v278, 0LL);
      if ( !transform )
        goto LABEL_592;
      v473.fields.x = v279;
      v473.fields.y = y;
      v473.fields.z = z;
      v66 = v263;
      UnityEngine_Transform__set_localPosition(transform, v473, 0LL);
      equipTarget1 = v442;
    }
    skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0LL, 0LL) )
    {
      v284 = (UnityEngine_Component_o *)this->fields.skillListTreasureDevice;
      if ( !v284 )
        goto LABEL_592;
      v285 = UnityEngine_Component__get_gameObject(v284, 0LL);
      if ( !v285 )
        goto LABEL_592;
      UnityEngine_GameObject__SetActive(v285, 1, 0LL);
      v286 = this->fields.skillListTreasureDevice;
      v287 = skillInfoList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      LevelList_23129292 = LocalizationManager__GetLevelList_23129292(v287, 0LL);
      if ( !v286 )
        goto LABEL_592;
      SkillListTreasureDeviceComponent__Set(v286, LevelList_23129292, lv, strengthStatus, treasureDeviceNum, 0, 0LL);
      v289 = this->fields.switchSkillUIList;
      if ( v289 )
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v289,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInfoUiWidget,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
    }
    appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
    {
      if ( v458 && *(_QWORD *)&v458->max_length )
      {
        v291 = (UnityEngine_Component_o *)this->fields.appendSkillList;
        if ( !v291 )
          goto LABEL_592;
        v292 = UnityEngine_Component__get_gameObject(v291, 0LL);
        if ( !v292 )
          goto LABEL_592;
        UnityEngine_GameObject__SetActive(v292, 1, 0LL);
        v293 = this->fields.appendSkillList;
        v294 = v458;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v295 = LocalizationManager__GetLevelList_23129292(v294, 0LL);
        if ( !v293 )
          goto LABEL_592;
        AppendSkillListComponent__Set(v293, v295, 0LL);
        v296 = this->fields.switchSkillUIList;
        if ( v296 )
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v296,
            (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.appendSkillInfoUiWidget,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
      }
      else
      {
        v297 = (UnityEngine_Component_o *)this->fields.appendSkillList;
        if ( !v297 )
          goto LABEL_592;
        v298 = UnityEngine_Component__get_gameObject(v297, 0LL);
        if ( !v298 )
          goto LABEL_592;
        UnityEngine_GameObject__SetActive(v298, 0, 0LL);
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
      v300 = this->fields.switchSkillUIList;
      if ( v300 )
      {
        v301 = this->fields.switchSkillInfo;
        v302 = (UIWidget_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v300,
                                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
        if ( !v301 )
          goto LABEL_592;
        SwitchUIWidgetComponent__Set(v301, v302, 0LL);
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
      v304 = this->fields.svtCommandCardList;
      if ( !v304 )
        goto LABEL_592;
      if ( v451->fields.isFriendInfo )
        ServantCommandCardListComponent__Set_30472172(v304, svtId, cardParams, codeIdsa, 2, 0, 0LL);
      else
        ServantCommandCardListComponent__Set_30472432(v304, svtId, codeIdsa, 2, 0, 0LL);
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
        *(UnityEngine_Color_o *)&v306 = UnityEngine_Color__get_white(0LL);
      else
        *(UnityEngine_Color_o *)&v306 = UnityEngine_Color__get_yellow(0LL);
      v310 = (UIWidget_o *)this->fields.attackLabel;
      if ( !v310 )
        goto LABEL_592;
      UIWidget__set_color(v310, *(UnityEngine_Color_o *)&v306, 0LL);
      v311 = this->fields.attackLabel;
      v312 = System_Int32__ToString_38275808((int32_t)v462, (System_String_o *)StringLiteral_340, 0LL);
      if ( !v311 )
        goto LABEL_592;
      UILabel__set_text(v311, v312, 0LL);
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
        *(UnityEngine_Color_o *)&v314 = UnityEngine_Color__get_white(0LL);
      else
        *(UnityEngine_Color_o *)&v314 = UnityEngine_Color__get_yellow(0LL);
      v318 = (UIWidget_o *)this->fields.hpLabel;
      if ( !v318 )
        goto LABEL_592;
      UIWidget__set_color(v318, *(UnityEngine_Color_o *)&v314, 0LL);
      v319 = this->fields.hpLabel;
      v320 = System_Int32__ToString_38275808((int32_t)&v461, (System_String_o *)StringLiteral_340, 0LL);
      if ( !v319 )
        goto LABEL_592;
      UILabel__set_text(v319, v320, 0LL);
    }
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      v322 = this->fields.baseSprite;
      baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFormationBase(v322, FrameType, baseDefaultUIAtlas, 0, 0LL);
    }
    base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
    {
      v325 = this->fields.base2Sprite;
      base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFormationFrameForSupportSelect(v325, FrameType, base2DefaultUIAtlas, 0, 0LL);
    }
    backClassIcon = (UnityEngine_Component_o *)this->fields.backClassIcon;
    if ( !backClassIcon || (v328 = UnityEngine_Component__get_gameObject(backClassIcon, 0LL)) == 0LL )
LABEL_592:
      sub_B170D4();
    UnityEngine_GameObject__SetActive(v328, 0, 0LL);
    if ( v449 || QuestRestriction )
    {
      sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      v7 = v451;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0LL, 0LL) )
      {
        v331 = (UnityEngine_Component_o *)this->fields.sortieMaskSprite;
        if ( !v331 )
          goto LABEL_592;
        v332 = UnityEngine_Component__get_gameObject(v331, 0LL);
        if ( !v332 )
          goto LABEL_592;
        UnityEngine_GameObject__SetActive(v332, 0, 0LL);
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v333 = LocalizationManager__Get((System_String_o *)StringLiteral_10330, 0LL);
      goto LABEL_430;
    }
    v338 = IsDataLost;
    v7 = v451;
    if ( v451->fields.isFriendInfo || !ServantEntity__checkIsHeroineSvt(servantEntity, 0LL) )
      goto LABEL_445;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_28023340(126, 0LL) )
    {
      v339 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v339, 0LL, 0LL) )
        goto LABEL_465;
      v341 = (UnityEngine_Component_o *)this->fields.sortieMaskSprite;
      if ( !v341 )
        goto LABEL_592;
      v342 = UnityEngine_Component__get_gameObject(v341, 0LL);
      if ( !v342 )
        goto LABEL_592;
      v343 = 1;
    }
    else
    {
LABEL_445:
      if ( IsUniqueIndividualityRestriction || v422 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v344 = LocalizationManager__Get((System_String_o *)StringLiteral_6375, 0LL);
        SupportSelectItemDraw__SetWarningMessage(this, v344, 1, v345);
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
            v352 = this->fields.friendPointBonusBase;
            if ( !v352 )
              goto LABEL_592;
            UnityEngine_GameObject__SetActive(v352, 0, 0LL);
          }
        }
        eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        IsEmpty = UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL);
        v356 = v187 != 0;
        LODWORD(UserServantLeaderEntity) = 1;
        v452 = v356;
        if ( eventFriendPoints && (IsEmpty & 1) != 0 )
        {
          LODWORD(v357) = eventFriendPoints->max_length;
          v358 = v66;
          if ( (int)v357 >= 1 )
          {
            v359 = 0;
            v360 = 0;
            v361 = 0;
            while ( v359 < (unsigned int)v357 )
            {
              v362 = &eventFriendPoints->obj.klass + (int)v359;
              v365 = v362[4];
              v364 = (__int64 *)(v362 + 4);
              v363 = v365;
              if ( !v365 )
                goto LABEL_592;
              IsEmpty = System_Array__IndexOf_int_(
                          *(System_Int32_array **)&v363->_1.byval_arg.bits,
                          value,
                          (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
              v357 = *(_QWORD *)&eventFriendPoints->max_length;
              if ( v359 >= (unsigned int)v357 )
                break;
              v366 = *v364;
              if ( !*v364 )
                goto LABEL_592;
              v367 = *(_QWORD *)(v366 + 40);
              if ( v367 )
                v368 = *(_DWORD *)(v367 + 24) == 0;
              else
                v368 = 1;
              if ( (v368 || (int)IsEmpty >= 0) && v360 < *(_DWORD *)(v366 + 48) )
              {
                v361 = *(_DWORD *)(v366 + 16);
                v360 = *(_DWORD *)(v366 + 48);
              }
              if ( (int)++v359 >= (int)v357 )
                goto LABEL_496;
            }
            goto LABEL_593;
          }
          v361 = 0;
          v360 = 0;
LABEL_496:
          if ( v360 >= 1 )
          {
            v369 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                                     System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                                     v86,
                                                                                     v87,
                                                                                     v354,
                                                                                     v355);
            v370 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v369;
            if ( v443 )
              System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
                v369,
                v443,
                (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___66732000);
            else
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v369,
                (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
            v375 = (EventMargeItemUpValInfo_o *)sub_B170CC(EventMargeItemUpValInfo_TypeInfo, v371, v372, v373, v374);
            EventMargeItemUpValInfo___ctor_22494976(v375, v361, v360, 0LL);
            if ( !v370 )
              goto LABEL_592;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v370,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v375,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
            v443 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v370,
                                                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
          }
          v66 = v358;
          equipTarget1 = v442;
          LODWORD(UserServantLeaderEntity) = 1;
        }
        if ( v66 )
          goto LABEL_504;
        goto LABEL_138;
      }
      if ( v338 )
      {
        v337 = 1;
        v336 = this;
        v335 = 0;
        v334 = (System_String_o *)StringLiteral_1;
        goto LABEL_431;
      }
      if ( TimesToRestart >= 1 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v346 = LocalizationManager__Get((System_String_o *)StringLiteral_11601, 0LL);
        LODWORD(v456.fields.currentCryptoKey) = TimesToRestart;
        v347 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v456);
        v333 = System_String__Format(v346, v347, 0LL);
LABEL_430:
        v334 = v333;
        v335 = 1;
        v336 = this;
        v337 = 0;
LABEL_431:
        SupportSelectItemDraw__SetMaskMessage(v336, v334, v335, v337, v329);
        goto LABEL_466;
      }
      v348 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v348, 0LL, 0LL) )
      {
LABEL_465:
        SupportSelectItemDraw__ClearMessage(this, v340);
        goto LABEL_466;
      }
      v349 = (UnityEngine_Component_o *)this->fields.sortieMaskSprite;
      if ( !v349 )
        goto LABEL_592;
      v342 = UnityEngine_Component__get_gameObject(v349, 0LL);
      if ( !v342 )
        goto LABEL_592;
      v343 = 0;
    }
    UnityEngine_GameObject__SetActive(v342, v343, 0LL);
    goto LABEL_465;
  }
  LODWORD(UserServantLeaderEntity) = 1;
LABEL_48:
  v84 = (UnityEngine_Component_o *)this->fields.backClassIcon;
  if ( !v84 )
    goto LABEL_592;
  v85 = UnityEngine_Component__get_gameObject(v84, 0LL);
  if ( !v85 )
    goto LABEL_592;
  UnityEngine_GameObject__SetActive(v85, 1, 0LL);
  v88 = this->fields.backClassIcon;
  IsEmpty = (__int64)SupportSelectItemDraw_TypeInfo;
  if ( (BYTE3(SupportSelectItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
    IsEmpty = (__int64)SupportSelectItemDraw_TypeInfo;
  }
  v90 = **(_QWORD **)(IsEmpty + 184);
  if ( !v90 )
    goto LABEL_592;
  if ( *(_DWORD *)(v90 + 24) <= (unsigned int)classPos )
    goto LABEL_593;
  if ( !v88 )
    goto LABEL_592;
  UISprite__set_spriteName(v88, *(System_String_o **)(v90 + 8LL * classPos + 32), 0LL);
  v91 = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v91, 0LL, 0LL) )
  {
    v92 = this->fields.baseSprite;
    v93 = this->fields.baseDefaultUIAtlas;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetFormationBase(v92, 9, v93, 0, 0LL);
  }
  v94 = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v94, 0LL, 0LL) )
  {
    v95 = this->fields.base2Sprite;
    v96 = this->fields.base2DefaultUIAtlas;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetFormationFrameForSupportSelect(v95, 9, v96, 0, 0LL);
  }
  v97 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v97, 0LL, 0LL) )
  {
    v98 = (UnityEngine_Component_o *)this->fields.servantClassIcon;
    if ( !v98 )
      goto LABEL_592;
    v99 = UnityEngine_Component__get_gameObject(v98, 0LL);
    if ( !v99 )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive(v99, 0, 0LL);
  }
  v100 = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v100, 0LL, 0LL) )
  {
    v101 = this->fields.levelLabel;
    if ( !v101 )
      goto LABEL_592;
    UILabel__set_text(v101, (System_String_o *)StringLiteral_1, 0LL);
  }
  v102 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v102, 0LL, 0LL) )
  {
    v103 = (UnityEngine_Component_o *)this->fields.raritySprite;
    if ( !v103 )
      goto LABEL_592;
    v104 = UnityEngine_Component__get_gameObject(v103, 0LL);
    if ( !v104 )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive(v104, 0, 0LL);
  }
  v105 = (UnityEngine_Object_o *)this->fields.attackLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v105, 0LL, 0LL) )
  {
    v106 = this->fields.attackLabel;
    if ( !v106 )
      goto LABEL_592;
    UILabel__set_text(v106, (System_String_o *)StringLiteral_1, 0LL);
  }
  v107 = (UnityEngine_Object_o *)this->fields.hpLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v107, 0LL, 0LL) )
  {
    v108 = this->fields.hpLabel;
    if ( !v108 )
      goto LABEL_592;
    UILabel__set_text(v108, (System_String_o *)StringLiteral_1, 0LL);
  }
  v109 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v109, 0LL, 0LL) )
  {
    v111 = (UnityEngine_Component_o *)this->fields.sortieMaskSprite;
    if ( !v111 )
      goto LABEL_592;
    v112 = UnityEngine_Component__get_gameObject(v111, 0LL);
    if ( !v112 )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive(v112, 0, 0LL);
  }
  SupportSelectItemDraw__ClearMessage(this, v110);
  v113 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v113, 0LL, 0LL) )
  {
    v114 = (UnityEngine_Component_o *)this->fields.skillListTreasureDevice;
    if ( !v114 )
      goto LABEL_592;
    v115 = UnityEngine_Component__get_gameObject(v114, 0LL);
    if ( !v115 )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive(v115, 0, 0LL);
  }
  v116 = (UnityEngine_Object_o *)this->fields.appendSkillList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v116, 0LL, 0LL) )
  {
    v117 = (UnityEngine_Component_o *)this->fields.appendSkillList;
    if ( !v117 )
      goto LABEL_592;
    v118 = UnityEngine_Component__get_gameObject(v117, 0LL);
    if ( !v118 )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive(v118, 0, 0LL);
  }
  v119 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v119, 0LL, 0LL) )
  {
    v120 = this->fields.svtCommandCardList;
    if ( !v120 )
      goto LABEL_592;
    ServantCommandCardListComponent__Clear(v120, 0LL);
  }
  v121 = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v121, 0LL, 0LL) )
  {
    v122 = this->fields.friendPointBonusBase;
    if ( !v122 )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive(v122, 0, 0LL);
  }
  v443 = 0LL;
  v452 = 0;
  if ( v66 )
  {
LABEL_504:
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !noneEquipSprite )
      goto LABEL_592;
    v377 = UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
    if ( !v377 )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive(v377, 0, 0LL);
    equipSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
    if ( !equipSprite )
      goto LABEL_592;
    v379 = UnityEngine_Component__get_gameObject(equipSprite, 0LL);
    if ( !v379 )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive(v379, 1, 0LL);
    v380 = v66;
    v381 = (UISprite_o *)this->fields.equipSprite;
    v382 = *(_QWORD *)&v66->m_Items[13];
    v383 = *(_QWORD *)&v380->m_Items[15];
    v384 = v380;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v469.fields.currentCryptoKey = v382;
    *(_QWORD *)&v469.fields.fakeValue = v383;
    v385 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v469, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipFace(v381, v385, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      v388 = *(_QWORD *)&v384->m_Items[17];
      v387 = *(_QWORD *)&v384->m_Items[19];
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v470.fields.currentCryptoKey = v388;
      *(_QWORD *)&v470.fields.fakeValue = v387;
      v389 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v470, 0LL);
      if ( !this->fields.equipLimitCountSprite )
        goto LABEL_592;
      v390 = v389;
      v134 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.equipLimitCountSprite, 0LL);
      if ( v390 < 4 )
        goto LABEL_523;
      if ( !v440 )
        goto LABEL_592;
      v135 = SLODWORD(v440->fields.targetId) < v390;
      goto LABEL_527;
    }
    goto LABEL_532;
  }
LABEL_138:
  v123 = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
  if ( !v123 )
    goto LABEL_592;
  v124 = UnityEngine_Component__get_gameObject(v123, 0LL);
  if ( !v124 )
    goto LABEL_592;
  if ( equipTarget1 )
  {
    UnityEngine_GameObject__SetActive(v124, 0, 0LL);
    v125 = (UnityEngine_Component_o *)this->fields.equipSprite;
    if ( !v125 )
      goto LABEL_592;
    v126 = UnityEngine_Component__get_gameObject(v125, 0LL);
    if ( !v126 )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive(v126, 1, 0LL);
    v127 = (UISprite_o *)this->fields.equipSprite;
    v129 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v128 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v466.fields.currentCryptoKey = v129;
    *(_QWORD *)&v466.fields.fakeValue = v128;
    v130 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v466, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipFace(v127, v130, 0LL);
    v131 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v131, 0LL, 0LL) )
    {
      v132 = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
      if ( !v132 )
        goto LABEL_592;
      v133 = equipTarget1->fields.limitCount;
      v134 = UnityEngine_Component__get_gameObject(v132, 0LL);
      if ( v133 < 4 )
      {
LABEL_523:
        v146 = 0;
        if ( !v134 )
          goto LABEL_592;
LABEL_531:
        UnityEngine_GameObject__SetActive(v134, v146, 0LL);
        goto LABEL_532;
      }
      if ( !v440 )
        goto LABEL_592;
      v135 = SLODWORD(v440->fields.targetId) < v133;
LABEL_527:
      v146 = !v135;
      if ( !v134 )
        goto LABEL_592;
      goto LABEL_531;
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive(v124, 1, 0LL);
    v142 = (UnityEngine_Component_o *)this->fields.equipSprite;
    if ( !v142 )
      goto LABEL_592;
    v143 = UnityEngine_Component__get_gameObject(v142, 0LL);
    if ( !v143 )
      goto LABEL_592;
    UnityEngine_GameObject__SetActive(v143, 0, 0LL);
    v144 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v144, 0LL, 0LL) )
    {
      v145 = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
      if ( !v145 )
        goto LABEL_592;
      v134 = UnityEngine_Component__get_gameObject(v145, 0LL);
      if ( !v134 )
        goto LABEL_592;
      v146 = 0;
      goto LABEL_531;
    }
  }
LABEL_532:
  v391 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v391, 0LL, 0LL) )
  {
    if ( v7->fields.isFriendInfo )
    {
      if ( (_DWORD)UserServantLeaderEntity )
      {
        v392 = v446;
        if ( !v446 )
          goto LABEL_592;
        v393 = v446->fields.servantLeaderInfo;
        if ( v393 )
        {
          v395 = *(_QWORD *)&v393->fields.svtId.fields.currentCryptoKey;
          v394 = *(_QWORD *)&v393->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v471.fields.currentCryptoKey = v395;
          *(_QWORD *)&v471.fields.fakeValue = v394;
          v396 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v471, 0LL);
          if ( !v446->fields.servantLeaderInfo )
            goto LABEL_592;
          v397 = v396;
          v398 = ServantLeaderInfo__getRarity(v446->fields.servantLeaderInfo, 0LL);
LABEL_559:
          v406 = v398;
          goto LABEL_562;
        }
        goto LABEL_561;
      }
    }
    else if ( (_DWORD)UserServantLeaderEntity )
    {
      v392 = v446;
      if ( !v446 )
        goto LABEL_592;
      userServantEntity = v446->fields.userServantEntity;
      if ( userServantEntity )
      {
        v404 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v403 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v472.fields.currentCryptoKey = v404;
        *(_QWORD *)&v472.fields.fakeValue = v403;
        v405 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v472, 0LL);
        if ( !v446->fields.userServantEntity )
          goto LABEL_592;
        v397 = v405;
        v398 = UserServantEntity__getRarity(v446->fields.userServantEntity, 0LL);
        goto LABEL_559;
      }
LABEL_561:
      v406 = -1;
      v397 = -1;
LABEL_562:
      if ( eventUpVallInfo )
        equipSvtId = eventUpVallInfo->fields.equipSvtId;
      else
        equipSvtId = 0;
      v408 = this->fields.eventUpValIcon;
      if ( !v408 )
        goto LABEL_592;
      EventUpValIconComponent__Set(v408, (EventMargeItemUpValInfo_array *)v443, v397, v406, equipSvtId, 0LL);
      bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
      {
        v400 = this->fields.bounusIcon;
        if ( !v400 )
          goto LABEL_592;
        v401 = 0;
        goto LABEL_572;
      }
      goto LABEL_573;
    }
    v392 = v446;
    goto LABEL_561;
  }
  v399 = (UnityEngine_Object_o *)this->fields.bounusIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v392 = v446;
  if ( UnityEngine_Object__op_Inequality(v399, 0LL, 0LL) )
  {
    v400 = this->fields.bounusIcon;
    if ( !v400 )
      goto LABEL_592;
    v401 = v452;
LABEL_572:
    ShiningIconComponent__Set_33652660(v400, v401, 0LL);
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
    v411 = this->fields.baseButton;
    if ( !v411 )
      goto LABEL_592;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v411->klass->vtable._14_SetState.method)(
      v411,
      0LL,
      1LL,
      v411->klass->vtable._15_OnPress.methodPtr);
  }
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
    return;
  v413 = (UnityEngine_Component_o *)this->fields.pushSprite;
  if ( !v413 )
    goto LABEL_592;
  v414 = UnityEngine_Component__get_gameObject(v413, 0LL);
  if ( !v414 )
    goto LABEL_592;
  UnityEngine_GameObject__SetActive(v414, 0, 0LL);
  pushUserServantId = v7->fields.pushUserServantId;
  if ( !pushUserServantId )
    return;
  if ( !v392 )
    goto LABEL_594;
  if ( pushUserServantId != v392->fields.userSvtId )
    return;
  v416 = (UnityEngine_Component_o *)this->fields.pushSprite;
  if ( !v416 || (v417 = UnityEngine_Component__get_gameObject(v416, 0LL)) == 0LL )
LABEL_594:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(v417, 1, 0LL);
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
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *restrictionMaskMessageText; // x0
  UISprite_o *v18; // x22
  UIWidget_o *v19; // x21
  UIWidget_o *v20; // x0
  UnityEngine_Component_o *v21; // x0
  UnityEngine_Transform_o *transform; // x0
  struct SupportSelectItemDraw_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UISprite_o *v27; // x0
  UIWidget_o *v28; // x0
  UIWidget_o *v29; // x0
  UnityEngine_Component_o *v30; // x0
  UILabel_o *v31; // x0
  float v32; // s0
  UnityEngine_Component_o *v33; // x0
  float v34; // s8
  UnityEngine_Transform_o *v35; // x0
  UnityEngine_Transform_o *v36; // x20
  float restrictionMaskMessageWidth; // s0
  float v38; // s1
  float v39; // s0
  float v40; // s2
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_GameObject_o *v42; // x0
  FlashingIconComponent_o *restrictionWarningIcon; // x0
  UILabel_o *restrictionWarningMessageLabel; // x0

  if ( (byte_40FD529 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, message);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&SupportSelectItemDraw_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_19413, v11);
    sub_B16FFC(&StringLiteral_17814, v12);
    sub_B16FFC(&StringLiteral_1, v13);
    byte_40FD529 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    v15 = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !v15 )
      goto LABEL_47;
    gameObject = UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( !gameObject )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    restrictionMaskMessageText = this->fields.restrictionMaskMessageText;
    if ( !restrictionMaskMessageText )
      goto LABEL_47;
    UILabel__set_text(restrictionMaskMessageText, message, 0LL);
    v18 = this->fields.restrictionMaskSprite;
    if ( isDataLost )
    {
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetPartyOrganizationImage(v18, (System_String_o *)StringLiteral_17814, 0LL);
      v19 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      if ( (BYTE3(SupportSelectItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      }
      if ( !v19 )
        goto LABEL_47;
      UIWidget__set_width(v19, SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_WIDTH, 0LL);
      v20 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      if ( !v20 )
        goto LABEL_47;
      UIWidget__set_height(v20, SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT, 0LL);
      v21 = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !v21 )
        goto LABEL_47;
      transform = UnityEngine_Component__get_transform(v21, 0LL);
      if ( !transform )
        goto LABEL_47;
      static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
      x = static_fields->DATA_LOST_MASK_POSITION.fields.x;
      y = static_fields->DATA_LOST_MASK_POSITION.fields.y;
      z = static_fields->DATA_LOST_MASK_POSITION.fields.z;
    }
    else
    {
      if ( !v18 )
        goto LABEL_47;
      UISprite__set_atlas(this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      v27 = this->fields.restrictionMaskSprite;
      if ( !v27 )
        goto LABEL_47;
      UISprite__set_spriteName(v27, (System_String_o *)StringLiteral_19413, 0LL);
      v28 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      if ( !v28 )
        goto LABEL_47;
      UIWidget__set_width(v28, this->fields.maskSpriteDefaultWidth, 0LL);
      v29 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      if ( !v29 )
        goto LABEL_47;
      UIWidget__set_height(v29, this->fields.maskSpriteDefaultHeight, 0LL);
      v30 = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !v30 )
        goto LABEL_47;
      transform = UnityEngine_Component__get_transform(v30, 0LL);
      if ( !transform )
        goto LABEL_47;
      x = this->fields.maskSpriteDefaultPosition.fields.x;
      y = this->fields.maskSpriteDefaultPosition.fields.y;
      z = this->fields.maskSpriteDefaultPosition.fields.z;
    }
    UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&x, 0LL);
    v31 = this->fields.restrictionMaskMessageText;
    if ( !v31 )
      goto LABEL_47;
    if ( isScale )
    {
      LODWORD(v32) = *(_QWORD *)&UILabel__get_printedSize(v31, 0LL);
      v33 = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !v33 )
        goto LABEL_47;
      v34 = v32;
      v35 = UnityEngine_Component__get_transform(v33, 0LL);
      v36 = v35;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v34 > restrictionMaskMessageWidth )
      {
        v38 = 1.0;
        v39 = restrictionMaskMessageWidth / v34;
        v40 = 1.0;
        if ( !v35 )
          goto LABEL_47;
        goto LABEL_37;
      }
    }
    else
    {
      v36 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v31, 0LL);
    }
    *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Vector3__get_one(0LL);
    if ( !v36 )
      goto LABEL_47;
LABEL_37:
    UnityEngine_Transform__set_localScale(v36, *(UnityEngine_Vector3_o *)&v39, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    v42 = this->fields.restrictionWarningBase;
    if ( v42 )
    {
      UnityEngine_GameObject__SetActive(v42, 0, 0LL);
      restrictionWarningIcon = this->fields.restrictionWarningIcon;
      if ( restrictionWarningIcon )
      {
        FlashingIconComponent__Clear(restrictionWarningIcon, 0LL);
        restrictionWarningMessageLabel = this->fields.restrictionWarningMessageLabel;
        if ( restrictionWarningMessageLabel )
        {
          UILabel__set_text(restrictionWarningMessageLabel, (System_String_o *)StringLiteral_1, 0LL);
          return;
        }
      }
    }
LABEL_47:
    sub_B170D4();
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
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *restrictionMaskMessageText; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_GameObject_o *v13; // x0
  FlashingIconComponent_o *restrictionWarningIcon; // x0
  UILabel_o *restrictionWarningMessageLabel; // x0
  UILabel_o *v16; // x0
  UnityEngine_Vector2_o printedSize; // kr00_8
  UnityEngine_Component_o *v18; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v20; // x21
  float restrictionWarningMessageWidth; // s0
  float v22; // s1
  float v23; // s0
  float v24; // s2
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Transform_o *v26; // x0
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FD52A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, message);
    sub_B16FFC(&StringLiteral_1, v7);
    byte_40FD52A = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !v9 )
      goto LABEL_29;
    gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
    if ( !gameObject )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    restrictionMaskMessageText = this->fields.restrictionMaskMessageText;
    if ( !restrictionMaskMessageText )
      goto LABEL_29;
    UILabel__set_text(restrictionMaskMessageText, (System_String_o *)StringLiteral_1, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    v13 = this->fields.restrictionWarningBase;
    if ( v13 )
    {
      UnityEngine_GameObject__SetActive(v13, 1, 0LL);
      restrictionWarningIcon = this->fields.restrictionWarningIcon;
      if ( restrictionWarningIcon )
      {
        FlashingIconComponent__SetFast(restrictionWarningIcon, 0LL);
        restrictionWarningMessageLabel = this->fields.restrictionWarningMessageLabel;
        if ( restrictionWarningMessageLabel )
        {
          UILabel__set_text(restrictionWarningMessageLabel, message, 0LL);
          v16 = this->fields.restrictionWarningMessageLabel;
          if ( v16 )
          {
            printedSize = UILabel__get_printedSize(v16, 0LL);
            v18 = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
            if ( v18 )
            {
              transform = UnityEngine_Component__get_transform(v18, 0LL);
              v20 = transform;
              if ( isScale
                && (restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth,
                    printedSize.fields.x > restrictionWarningMessageWidth) )
              {
                v22 = 1.0;
                v23 = restrictionWarningMessageWidth / printedSize.fields.x;
                v24 = 1.0;
                if ( !transform )
                  goto LABEL_29;
              }
              else
              {
                *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_one(0LL);
                if ( !v20 )
                  goto LABEL_29;
              }
              UnityEngine_Transform__set_localScale(v20, *(UnityEngine_Vector3_o *)&v23, 0LL);
              v25 = this->fields.restrictionWarningBase;
              if ( v25 )
              {
                v26 = UnityEngine_GameObject__get_transform(v25, 0LL);
                if ( v26 )
                {
                  v27.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
                  v27.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
                  v27.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
                  UnityEngine_Transform__set_localPosition(v26, v27, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_29:
    sub_B170D4();
  }
}