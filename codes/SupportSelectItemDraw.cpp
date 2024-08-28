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
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x19
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w1
  int32_t v42; // w2
  int32_t v43; // w3
  struct SupportSelectItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4A1C48A & 1) == 0 )
  {
    sub_1B715CC(&string___TypeInfo, v1);
    sub_1B715CC(&SupportSelectItemDraw_TypeInfo, v2);
    sub_1B715CC(&StringLiteral_20052/*"icon_class1002"*/, v3);
    sub_1B715CC(&StringLiteral_20050/*"icon_class007"*/, v4);
    sub_1B715CC(&StringLiteral_20049/*"icon_class006"*/, v5);
    sub_1B715CC(&StringLiteral_20047/*"icon_class004"*/, v6);
    sub_1B715CC(&StringLiteral_20044/*"icon_class001"*/, v7);
    sub_1B715CC(&StringLiteral_20051/*"icon_class1001"*/, v8);
    sub_1B715CC(&StringLiteral_20045/*"icon_class002"*/, v9);
    sub_1B715CC(&StringLiteral_20048/*"icon_class005"*/, v10);
    sub_1B715CC(&StringLiteral_20046/*"icon_class003"*/, v11);
    byte_4A1C48A = 1;
  }
  v12 = sub_1B71674(string___TypeInfo, 9LL);
  if ( !v12 )
    sub_1B71828(0LL, v13);
  v16 = v12;
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_14;
  v17 = StringLiteral_20051/*"icon_class1001"*/;
  *(_QWORD *)(v12 + 32) = StringLiteral_20051/*"icon_class1001"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v12 + 32), v17, v14, v15);
  if ( *(_DWORD *)(v16 + 24) <= 1u )
    goto LABEL_14;
  v20 = StringLiteral_20044/*"icon_class001"*/;
  *(_QWORD *)(v16 + 40) = StringLiteral_20044/*"icon_class001"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v16 + 40), v20, v18, v19);
  if ( *(_DWORD *)(v16 + 24) <= 2u )
    goto LABEL_14;
  v23 = StringLiteral_20045/*"icon_class002"*/;
  *(_QWORD *)(v16 + 48) = StringLiteral_20045/*"icon_class002"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v16 + 48), v23, v21, v22);
  if ( *(_DWORD *)(v16 + 24) <= 3u )
    goto LABEL_14;
  v26 = StringLiteral_20046/*"icon_class003"*/;
  *(_QWORD *)(v16 + 56) = StringLiteral_20046/*"icon_class003"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v16 + 56), v26, v24, v25);
  if ( *(_DWORD *)(v16 + 24) <= 4u )
    goto LABEL_14;
  v29 = StringLiteral_20047/*"icon_class004"*/;
  *(_QWORD *)(v16 + 64) = StringLiteral_20047/*"icon_class004"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v16 + 64), v29, v27, v28);
  if ( *(_DWORD *)(v16 + 24) <= 5u )
    goto LABEL_14;
  v32 = StringLiteral_20048/*"icon_class005"*/;
  *(_QWORD *)(v16 + 72) = StringLiteral_20048/*"icon_class005"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v16 + 72), v32, v30, v31);
  if ( *(_DWORD *)(v16 + 24) <= 6u
    || (v35 = StringLiteral_20049/*"icon_class006"*/,
        *(_QWORD *)(v16 + 80) = StringLiteral_20049/*"icon_class006"*/,
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v16 + 80), v35, v33, v34),
        *(_DWORD *)(v16 + 24) <= 7u)
    || (v38 = StringLiteral_20050/*"icon_class007"*/,
        *(_QWORD *)(v16 + 88) = StringLiteral_20050/*"icon_class007"*/,
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v16 + 88), v38, v36, v37),
        *(_DWORD *)(v16 + 24) <= 8u) )
  {
LABEL_14:
    sub_1B71830(v12, v13);
  }
  v41 = StringLiteral_20052/*"icon_class1002"*/;
  *(_QWORD *)(v16 + 96) = StringLiteral_20052/*"icon_class1002"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v16 + 96), v41, v39, v40);
  SupportSelectItemDraw_TypeInfo->static_fields->backClassIconFileList = (struct System_String_array *)v16;
  sub_1B71570((ServantStatusBattleListViewItem_o *)SupportSelectItemDraw_TypeInfo->static_fields, v16, v42, v43);
  static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
  static_fields->DATA_LOST_MASK_POSITION.fields.z = 0.0;
  *(_QWORD *)&static_fields->DATA_LOST_MASK_WIDTH = 0x1020000009CLL;
  *(_QWORD *)&static_fields->DATA_LOST_MASK_POSITION.fields.x = 0x43410000BF800000LL;
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
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v14; // x8
  __int64 v15; // x9
  System_Collections_IEnumerator_c **v16; // x10
  __int64 v17; // x0
  UnityEngine_Component_o *v18; // x0
  __int64 v19; // x1
  UnityEngine_Component_o *v20; // x21
  __int64 methodPtr_low; // x9
  __int64 v22; // x1
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Component_o *equipRootObj; // x0
  UnityEngine_Object_o *v25; // x23
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x19
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0

  if ( (byte_4A1C489 & 1) == 0 )
  {
    sub_1B715CC(&System_IDisposable_TypeInfo, method);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v4);
    sub_1B715CC(&UnityEngine_Transform_TypeInfo, v5);
    byte_4A1C489 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B71828(0LL, v7);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_1B71828(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BC35AC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = (System_Collections_IEnumerator_c **)&v14->_1.interfaceOffsets->offset;
      while ( *(v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 2;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BC35AC(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v18 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
                                       Enumerator,
                                       *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v18->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v18->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B71AE8(v18);
LABEL_37:
      sub_1B71828(v18, v19);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v18, 0LL);
    equipRootObj = (UnityEngine_Component_o *)this->fields.equipRootObj;
    if ( !equipRootObj )
      sub_1B71828(0LL, v22);
    v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(equipRootObj, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, v25, 0LL) )
    {
      v26 = UnityEngine_Component__get_gameObject(v20, 0LL);
      if ( !v26 )
        sub_1B71828(0LL, v27);
      UnityEngine_GameObject__SetActive(v26, 0, 0LL);
    }
  }
  v28 = sub_1B71708(Enumerator, System_IDisposable_TypeInfo);
  if ( v28 )
  {
    v29 = *(_QWORD *)v28;
    v30 = v28;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_32;
      }
      v33 = v29 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_32:
      v33 = sub_1BC35AC(v28, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
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
  int32_t v10; // w2
  int32_t v11; // w3
  struct UISprite_o *v12; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *baseSprite; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  struct UISprite_o *v17; // x8
  struct UIAtlas_o *v18; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  const MethodInfo *v20; // x2
  int32_t v21; // w3
  struct UISprite_o *v22; // x8
  struct UIAtlas_o *v23; // x1
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A1C481 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1B715CC(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v4);
    byte_4A1C481 = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    transform = this->fields.raritySprite;
    if ( !transform )
      goto LABEL_37;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_37;
    this->fields.baseRarityPosition = UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)transform,
                                        0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    transform = this->fields.restrictionWarningMessageLabel;
    if ( !transform )
      goto LABEL_37;
    this->fields.restrictionWarningMessageWidth = *((_DWORD *)transform + 42);
    UIWidget__set_width((UIWidget_o *)transform, 1000, 0LL);
    transform = this->fields.restrictionWarningBase;
    if ( !transform )
      goto LABEL_37;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_37;
    this->fields.restrictionWarningCenter = UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)transform,
                                              0LL);
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    transform = this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_37;
    this->fields.restrictionMaskMessageWidth = *((_DWORD *)transform + 42);
    UIWidget__set_width((UIWidget_o *)transform, 1000, 0LL);
    transform = this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_37;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_37;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    v12 = this->fields.restrictionMaskSprite;
    this->fields.restrictionWarningCenter.fields.x = localPosition.fields.x;
    this->fields.restrictionWarningCenter.fields.y = localPosition.fields.y + -55.0;
    this->fields.restrictionWarningCenter.fields.z = localPosition.fields.z;
    if ( !v12 )
      goto LABEL_37;
    mAtlas = v12->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.maskSpriteDefaultAtlas, (int32_t)mAtlas, v10, v11);
    transform = this->fields.restrictionMaskSprite;
    if ( !transform )
      goto LABEL_37;
    *(_QWORD *)&this->fields.maskSpriteDefaultWidth = *((_QWORD *)transform + 21);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_37;
    this->fields.maskSpriteDefaultPosition = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)transform,
                                               0LL);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v17 = this->fields.baseSprite;
    if ( !v17 )
      goto LABEL_37;
    v18 = v17->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = v18;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.baseDefaultUIAtlas, (int32_t)v18, v15, v16);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v22 = this->fields.base2Sprite;
    if ( v22 )
    {
      v23 = v22->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v23;
      sub_1B71570(
        (ServantStatusBattleListViewItem_o *)&this->fields.base2DefaultUIAtlas,
        (int32_t)v23,
        (int32_t)v20,
        v21);
      goto LABEL_36;
    }
LABEL_37:
    sub_1B71828(transform, v6);
  }
LABEL_36:
  SupportSelectItemDraw__SetActiveDragSwapGuide(this, 0, v20);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v24;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.switchSkillUIList, (int32_t)v24, v25, v26);
}


void __fastcall SupportSelectItemDraw__ClearItem(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *sortieMaskSprite; // x20

  if ( (byte_4A1C482 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A1C482 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantNarrowTexture;
  if ( !gameObject )
    goto LABEL_20;
  UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)gameObject, 0LL);
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.sortieMaskSprite;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_1B71828(gameObject, v4);
  }
LABEL_19:
  SupportSelectItemDraw__ClearMessage(this, v4);
}


void __fastcall SupportSelectItemDraw__ClearMessage(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4A1C484 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    sub_1B715CC(&StringLiteral_1/*""*/, v3);
    byte_4A1C484 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_18;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_18:
    sub_1B71828(gameObject, v5);
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

  if ( (byte_4A1C487 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, flag);
    byte_4A1C487 = 1;
  }
  dragSwapGuideObj = (UnityEngine_Object_o *)this->fields.dragSwapGuideObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragSwapGuideObj, 0LL, 0LL) )
  {
    v7 = this->fields.dragSwapGuideObj;
    if ( !v7 )
      sub_1B71828(0LL, v6);
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
  if ( (byte_4A1C488 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A1C488 = 1;
  }
  equipRootObj = (UnityEngine_Object_o *)this->fields.equipRootObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipRootObj, 0LL, 0LL) )
  {
    v7 = this->fields.equipRootObj;
    if ( !v7 )
      sub_1B71828(0LL, v6);
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
  SupportServantData_o *v8; // x20
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
  unsigned __int64 v52; // x1
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v55; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x21
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x21
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x29
  struct EquipTargetInfo_o *equipTarget1; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v60; // x21
  __int64 v61; // x23
  __int64 v62; // x24
  Il2CppObject *v63; // x25
  Il2CppObject *MasterData_object; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v65; // x21
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v68; // w19
  struct ServantLeaderInfo_o *servantLeaderInfo; // x28
  ServantEntity_o *v70; // x25
  int32_t atk; // w8
  int hp; // w8
  char v73; // w26
  UISprite_o *backClassIcon; // x21
  __int64 v75; // x8
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v77; // x21
  UIAtlas_o *baseDefaultUIAtlas; // x22
  UnityEngine_Object_o *base2Sprite; // x21
  UISprite_o *v80; // x21
  UIAtlas_o *base2DefaultUIAtlas; // x22
  UnityEngine_Object_o *servantClassIcon; // x21
  UnityEngine_Object_o *levelLabel; // x21
  UnityEngine_Object_o *raritySprite; // x21
  UnityEngine_Object_o *attackLabel; // x21
  UnityEngine_Object_o *hpLabel; // x21
  UnityEngine_Object_o *sortieMaskSprite; // x21
  UnityEngine_Object_o *skillListTreasureDevice; // x21
  UnityEngine_Object_o *appendSkillList; // x21
  UnityEngine_Object_o *svtCommandCardList; // x21
  UnityEngine_Object_o *friendPointBonusBase; // x21
  System_Object_array *v92; // x19
  bool v93; // w22
  UserServantEntity_o *v94; // x23
  int32_t v95; // w8
  int v96; // w8
  int adjustAtk; // w9
  int32_t v98; // w0
  int32_t exceedCount; // w22
  int32_t v100; // w23
  int32_t CardImageLimitCount; // w21
  EventUpValSetupInfo_o *eventSetupInfo; // x2
  struct System_Int32_array *eventIdList; // x8
  bool EventUpVal_40281832; // w19
  Il2CppObject *Master_object; // x22
  Il2CppObject *v106; // x24
  System_Collections_Generic_List_object__o *v107; // x26
  struct EventUpValSetupInfo_o *v108; // x8
  struct System_Int32_array *v109; // x20
  __int64 v110; // x8
  unsigned __int64 v111; // x29
  int32_t v112; // w23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  Il2CppObject *v114; // x0
  int32_t eventSvtPoint; // w21
  __int64 v116; // x24
  __int64 v117; // x25
  int32_t v118; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w27
  EventMargeItemUpValInfo_o *v121; // x21
  EventPersonalMargeUpValInfo_o *v122; // x27
  int32_t v123; // w2
  int32_t v124; // w3
  __int64 v125; // x8
  __int64 v126; // x23
  unsigned __int64 v127; // x21
  struct System_Object_array *items; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  Il2CppClass **v131; // x0
  int v132; // w25
  _BOOL4 QuestRestriction; // w29
  _BOOL4 UniqueSvtRestriction; // w24
  int32_t v135; // w29
  SupportServantData_o *v136; // x21
  int v137; // w20
  QuestRestrictionInfo_o *v138; // x8
  int32_t v139; // w21
  int32_t v140; // w27
  QuestRestrictionInfo_o *v141; // x22
  __int64 v142; // x23
  __int64 v143; // x24
  int32_t v144; // w0
  int32_t v145; // w23
  int32_t v146; // w24
  _BOOL4 IsRestrictionServantIndividuality; // w0
  int v148; // w9
  int32_t v149; // w0
  Il2CppObject v150; // q1
  int64_t v151; // x21
  bool IsDataLost; // w26
  int32_t TimesToRestart; // w23
  ServantEntity_o *v154; // x25
  bool EventUpVal_39995048; // w19
  Il2CppObject *v156; // x29
  Il2CppObject *v157; // x28
  System_Collections_Generic_List_object__o *v158; // x22
  struct EventUpValSetupInfo_o *v159; // x8
  struct System_Int32_array *v160; // x20
  __int64 v161; // x8
  unsigned __int64 v162; // x21
  int32_t v163; // w23
  __int128 v164; // q0
  int64_t v165; // x24
  int32_t v166; // w4
  int32_t BuddyPoint; // w27
  int32_t v168; // w0
  EventServantPointRankEntity_o *v169; // x0
  int32_t v170; // w25
  EventMargeItemUpValInfo_o *v171; // x24
  EventPersonalMargeUpValInfo_o *v172; // x27
  int32_t v173; // w2
  int32_t v174; // w3
  __int64 v175; // x8
  __int64 v176; // x23
  unsigned __int64 v177; // x19
  struct System_Object_array *v178; // x8
  _QWORD *v179; // x9
  __int64 v180; // x10
  Il2CppClass **v181; // x0
  UnityEngine_Object_o *v182; // x21
  UnityEngine_Object_o *v183; // x21
  UILabel_o *v184; // x21
  UnityEngine_Object_o *v185; // x21
  int32_t v186; // w19
  int32_t v187; // w21
  _BOOL4 v188; // w26
  System_String_o *Icon_37499832; // x21
  int v190; // w29
  _BOOL4 v191; // w25
  int v192; // w24
  int32_t RarityIcon; // w22
  int32_t v194; // w22
  UISprite_o *v195; // x23
  float v196; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *v199; // x21
  SkillListTreasureDeviceComponent_o *v200; // x21
  SkillInfo_array *v201; // x22
  int32_t v202; // w2
  int32_t v203; // w3
  __int64 v204; // x8
  _QWORD *v205; // x9
  __int64 v206; // x10
  __int64 v207; // x8
  UnityEngine_Object_o *v208; // x21
  AppendSkillListComponent_o *v209; // x21
  SkillInfo_array *v210; // x22
  int32_t v211; // w2
  int32_t v212; // w3
  __int64 v213; // x8
  _QWORD *v214; // x9
  __int64 v215; // x10
  __int64 v216; // x8
  UnityEngine_Object_o *switchSkillInfo; // x21
  struct System_Collections_Generic_List_UIWidget__o *v218; // x0
  SwitchUIWidgetComponent_o *v219; // x21
  UnityEngine_Object_o *v220; // x21
  UnityEngine_Object_o *v221; // x21
  float v222; // s1
  float v223; // s2
  float v224; // s0
  float v225; // s3
  UILabel_o *v226; // x21
  UnityEngine_Object_o *v227; // x21
  float v228; // s1
  float v229; // s2
  float v230; // s0
  float v231; // s3
  UILabel_o *v232; // x21
  UnityEngine_Object_o *v233; // x21
  UISprite_o *v234; // x22
  UIAtlas_o *v235; // x21
  UnityEngine_Object_o *v236; // x21
  UISprite_o *v237; // x22
  UIAtlas_o *v238; // x21
  const MethodInfo *v239; // x4
  UnityEngine_Object_o *v240; // x21
  System_String_o *v241; // x0
  System_String_o *v242; // x1
  bool v243; // w2
  SupportSelectItemDraw_o *v244; // x0
  bool v245; // w3
  UnityEngine_Object_o *v246; // x21
  bool v247; // w1
  System_String_o *v248; // x0
  const MethodInfo *v249; // x3
  System_String_o *v250; // x21
  __int64 v251; // x2
  __int64 v252; // x3
  __int64 v253; // x4
  Il2CppObject *v254; // x0
  UnityEngine_Object_o *v255; // x21
  UnityEngine_Object_o *friendPointBonus; // x21
  UnityEngine_Object_o *v257; // x21
  UnityEngine_Object_o *eventUpValIcon; // x21
  int max_length; // w8
  SupportServantData_o *v260; // x25
  __int64 v261; // x19
  int32_t eventId; // w21
  int32_t value; // w23
  EventCampaignEntity_o **m_Items; // x20
  EventCampaignEntity_o *v265; // x8
  EventCampaignEntity_o *v266; // x9
  struct System_Int32_array *targetIds; // x10
  _BOOL4 v268; // w10
  System_Collections_Generic_List_object__o *v269; // x0
  System_Collections_Generic_List_object__o *v270; // x24
  UISprite_o *v271; // x21
  void *v272; // x23
  Il2CppClass *v273; // x24
  int32_t v274; // w23
  UnityEngine_Object_o *v275; // x21
  void *v276; // x21
  Il2CppClass *v277; // x23
  int v278; // w21
  EventMargeItemUpValInfo_o *v279; // x25
  int32_t v280; // w2
  int32_t v281; // w3
  struct System_Object_array *v282; // x8
  _QWORD *v283; // x9
  __int64 v284; // x10
  Il2CppClass **v285; // x0
  UISprite_o *equipSprite; // x21
  __int64 v287; // x23
  __int64 v288; // x24
  int32_t v289; // w23
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  System_Object_array *v291; // x21
  int limitCount; // w19
  UnityEngine_Object_o *v293; // x21
  UnityEngine_Object_o *v294; // x21
  struct ServantLeaderInfo_o *v295; // x8
  __int64 v296; // x21
  __int64 v297; // x22
  int32_t v298; // w21
  int32_t v299; // w0
  UnityEngine_Object_o *v300; // x21
  bool v301; // w1
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v303; // x21
  __int64 v304; // x22
  int32_t v305; // w3
  int32_t equipSvtId; // w4
  UnityEngine_Object_o *bounusIcon; // x21
  UnityEngine_Object_o *baseButton; // x21
  UnityEngine_Object_o *pushSprite; // x21
  int64_t pushUserServantId; // x8
  _BOOL4 v311; // [xsp+10h] [xbp-1B0h]
  bool v312; // [xsp+14h] [xbp-1ACh]
  int32_t v313; // [xsp+18h] [xbp-1A8h]
  _BOOL4 v314; // [xsp+18h] [xbp-1A8h]
  int32_t v315; // [xsp+18h] [xbp-1A8h]
  int32_t classId; // [xsp+1Ch] [xbp-1A4h]
  int32_t cardParams; // [xsp+20h] [xbp-1A0h]
  System_Int32_array *cardParamsa; // [xsp+20h] [xbp-1A0h]
  int32_t cardParamsb; // [xsp+20h] [xbp-1A0h]
  int32_t treasureDeviceNum; // [xsp+2Ch] [xbp-194h]
  int32_t strengthStatus; // [xsp+30h] [xbp-190h]
  int32_t v322; // [xsp+34h] [xbp-18Ch]
  int adjustHp; // [xsp+38h] [xbp-188h]
  int v324; // [xsp+3Ch] [xbp-184h]
  SupportSelectItemDraw_o *v325; // [xsp+40h] [xbp-180h]
  SupportSelectItemDraw_o *v326; // [xsp+40h] [xbp-180h]
  bool v327; // [xsp+40h] [xbp-180h]
  System_Int32_array *codeIds; // [xsp+48h] [xbp-178h]
  System_Int32_array *codeIdsa; // [xsp+48h] [xbp-178h]
  int32_t rarity; // [xsp+54h] [xbp-16Ch]
  UserServantLeaderEntity_o *v331; // [xsp+58h] [xbp-168h]
  int32_t frameType; // [xsp+64h] [xbp-15Ch]
  Il2CppObject *v333; // [xsp+68h] [xbp-158h]
  Il2CppObject *v334; // [xsp+70h] [xbp-150h]
  _BOOL4 IsUniqueIndividualityRestriction; // [xsp+78h] [xbp-148h]
  UserServantEntity_o *v336; // [xsp+78h] [xbp-148h]
  EventCampaignEntity_array *v337; // [xsp+80h] [xbp-140h]
  struct EquipTargetInfo_o *v338; // [xsp+88h] [xbp-138h]
  EventServantPointRankMaster_o *v339; // [xsp+90h] [xbp-130h]
  EventServantPointRankMaster_o *v340; // [xsp+90h] [xbp-130h]
  Il2CppObject *v341; // [xsp+90h] [xbp-130h]
  ServantEntity_o *v342; // [xsp+98h] [xbp-128h]
  SupportServantData_o *v343; // [xsp+A0h] [xbp-120h]
  int v344; // [xsp+A0h] [xbp-120h]
  SupportServantData_o *v345; // [xsp+A0h] [xbp-120h]
  int32_t svtId; // [xsp+ACh] [xbp-114h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v347; // [xsp+B0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v348; // [xsp+D0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v349; // [xsp+F0h] [xbp-D0h] BYREF
  UserEventServantPointEntity_o *entity; // [xsp+110h] [xbp-B0h] BYREF
  SkillInfo_array *v351; // [xsp+118h] [xbp-A8h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+120h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+128h] [xbp-98h] BYREF
  int v354; // [xsp+134h] [xbp-8Ch] BYREF
  int32_t lv[2]; // [xsp+138h] [xbp-88h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+148h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v357; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v358; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v359; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v360; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v361; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v362; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v363; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v364; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v365; // 0:x0.16
  UnityEngine_Vector3_o v366; // 0:s0.4,4:s1.4,8:s2.4

  v8 = supportServantData;
  if ( (byte_4A1C483 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Array_IndexOf_int___, supportServantData);
    sub_1B715CC(&AtlasManager_TypeInfo, v10);
    sub_1B715CC(&Method_DataManager_GetMasterData_EventDetailMaster___, v11);
    sub_1B715CC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v12);
    sub_1B715CC(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1B715CC(&Method_DataManager_GetMasterData_UserServantMaster___, v14);
    sub_1B715CC(&Method_DataManager_GetMaster_EventDetailMaster___, v15);
    sub_1B715CC(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v16);
    sub_1B715CC(&Method_DataManager_GetMaster_ServantExceedMaster___, v17);
    sub_1B715CC(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v18);
    sub_1B715CC(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v19);
    sub_1B715CC(&DataManager_TypeInfo, v20);
    sub_1B715CC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1B715CC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v22);
    sub_1B715CC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v23);
    sub_1B715CC(&EventMargeItemUpValInfo_TypeInfo, v24);
    sub_1B715CC(&EventPersonalMargeUpValInfo_TypeInfo, v25);
    sub_1B715CC(&int_TypeInfo, v26);
    sub_1B715CC(&long___TypeInfo, v27);
    sub_1B715CC(&Method_System_Collections_Generic_List_UIWidget__Add__, v28);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v29);
    sub_1B715CC(&Method_System_Collections_Generic_List_UIWidget__Clear__, v30);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v31);
    sub_1B715CC(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v32);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v33);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v34);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___75792208, v35);
    sub_1B715CC(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v36);
    sub_1B715CC(&LocalizationManager_TypeInfo, v37);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v38);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v40);
    sub_1B715CC(&Rarity_TypeInfo, v41);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42);
    sub_1B715CC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v43);
    sub_1B715CC(&SupportSelectItemDraw_TypeInfo, v44);
    sub_1B715CC(&TutorialFlag_TypeInfo, v45);
    sub_1B715CC(&StringLiteral_11473/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v46);
    sub_1B715CC(&StringLiteral_10245/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v47);
    sub_1B715CC(&StringLiteral_6405/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v48);
    sub_1B715CC(&StringLiteral_429/*"#,0"*/, v49);
    sub_1B715CC(&StringLiteral_1/*""*/, v50);
    byte_4A1C483 = 1;
  }
  eventUpVallInfo = 0LL;
  *(_QWORD *)lv = 0LL;
  v354 = 0;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  entity = 0LL;
  v351 = 0LL;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_544;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_544;
  size = switchSkillUIList->fields._size;
  v55 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v55;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.skillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_544;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
      0.0);
  }
  appendSkillInfoUiWidget = (UnityEngine_Object_o *)this->fields.appendSkillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)this->fields.appendSkillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
                   gameObject,
                   *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
                   0.0);
  }
  if ( !v8 )
    goto LABEL_544;
  UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(v8, classPos, 0LL);
  eventUpVallInfo = 0LL;
  gameObject = SupportServantData__getEquip(v8, classPos, 0LL);
  v337 = eventFriendPoints;
  if ( gameObject )
  {
    if ( v8->fields.isFriendInfo )
    {
      if ( !UserServantLeaderEntity )
        goto LABEL_544;
      equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !equipTarget1 )
        goto LABEL_544;
      v60 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v62 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v61 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v357.fields.currentCryptoKey = v62;
      *(_QWORD *)&v357.fields.fakeValue = v61;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v357, 0LL);
      if ( !v60 )
        goto LABEL_544;
      v63 = 0LL;
      v334 = DataMasterBase_object__object__int___GetEntity(
               v60,
               gameObject,
               (const MethodInfo_30F8760 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      goto LABEL_37;
    }
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    gameObject = SupportServantData__getEquip(v8, classPos, 0LL);
    if ( !MasterData_object )
      goto LABEL_544;
    v63 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            gameObject,
            (const MethodInfo_30F890C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !v63 )
      goto LABEL_544;
    v65 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    klass = v63[5].klass;
    monitor = v63[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v358.fields.currentCryptoKey = klass;
    *(_QWORD *)&v358.fields.fakeValue = monitor;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v358, 0LL);
    if ( !v65 )
      goto LABEL_544;
    gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v65,
                            gameObject,
                            (const MethodInfo_30F8760 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  }
  else
  {
    v63 = 0LL;
  }
  equipTarget1 = 0LL;
  v334 = (Il2CppObject *)gameObject;
  if ( !UserServantLeaderEntity )
  {
    v338 = 0LL;
    v73 = 1;
    goto LABEL_47;
  }
LABEL_37:
  v338 = equipTarget1;
  if ( !UserServantLeaderEntity->fields.userSvtId )
  {
    v73 = 0;
LABEL_47:
    gameObject = (__int64)this->fields.backClassIcon;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
    backClassIcon = this->fields.backClassIcon;
    if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
    }
    v75 = **(_QWORD **)(gameObject + 184);
    if ( !v75 )
      goto LABEL_544;
    if ( *(_DWORD *)(v75 + 24) <= (unsigned int)classPos )
      goto LABEL_545;
    if ( !backClassIcon )
      goto LABEL_544;
    UISprite__set_spriteName(backClassIcon, *(System_String_o **)(v75 + 8LL * classPos + 32), 0LL);
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      v77 = this->fields.baseSprite;
      baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationBase(v77, 9, baseDefaultUIAtlas, 0, 0LL);
    }
    base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
    {
      v80 = this->fields.base2Sprite;
      base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationFrameForSupportSelect(v80, 9, base2DefaultUIAtlas, 0, 0LL);
    }
    servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.servantClassIcon;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.levelLabel;
      if ( !gameObject )
        goto LABEL_544;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.raritySprite;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(attackLabel, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.attackLabel;
      if ( !gameObject )
        goto LABEL_544;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.hpLabel;
      if ( !gameObject )
        goto LABEL_544;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v52);
    skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.skillListTreasureDevice;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.svtCommandCardList;
      if ( !gameObject )
        goto LABEL_544;
      ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)gameObject, 0LL);
    }
    friendPointBonusBase = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(friendPointBonusBase, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.friendPointBonusBase;
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    v92 = 0LL;
    v93 = 0;
    if ( v63 )
      goto LABEL_438;
LABEL_466:
    gameObject = (__int64)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    if ( v338 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)this->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      equipSprite = (UISprite_o *)this->fields.equipSprite;
      v288 = *(_QWORD *)&v338->fields.svtId.fields.currentCryptoKey;
      v287 = *(_QWORD *)&v338->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v363.fields.currentCryptoKey = v288;
      *(_QWORD *)&v363.fields.fakeValue = v287;
      v289 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v363, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEquipFace(equipSprite, v289, 0LL);
      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_544;
        v291 = v92;
        limitCount = v338->fields.limitCount;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( limitCount >= 4 )
        {
          if ( !v334 )
            goto LABEL_544;
          v52 = SLODWORD(v334[5].monitor) >= limitCount;
        }
        else
        {
          v52 = 0LL;
        }
        if ( gameObject )
        {
          v92 = v291;
LABEL_493:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v52, 0LL);
          goto LABEL_494;
        }
LABEL_544:
        sub_1B71828(gameObject, v52);
      }
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      v293 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v293, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_544;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_544;
        LOBYTE(v52) = 0;
        goto LABEL_493;
      }
    }
    goto LABEL_494;
  }
  v68 = UserServantLeaderEntity->fields.svtId;
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                          v68,
                          (const MethodInfo_30F8760 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_544;
  v342 = (ServantEntity_o *)gameObject;
  v333 = v63;
  svtId = v68;
  v331 = UserServantLeaderEntity;
  classId = *(_DWORD *)(gameObject + 80);
  if ( v8->fields.isFriendInfo )
  {
    servantLeaderInfo = UserServantLeaderEntity->fields.servantLeaderInfo;
    v325 = this;
    if ( !servantLeaderInfo )
      goto LABEL_544;
    ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(servantLeaderInfo, 0LL);
    v70 = v342;
    lv[1] = servantLeaderInfo->fields.lv;
    atk = servantLeaderInfo->fields.atk;
    lv[0] = atk;
    if ( equipTarget1 )
    {
      lv[0] = equipTarget1->fields.atk + atk;
      hp = equipTarget1->fields.hp + servantLeaderInfo->fields.hp;
    }
    else
    {
      hp = servantLeaderInfo->fields.hp;
    }
    adjustAtk = servantLeaderInfo->fields.adjustAtk;
    v354 = hp;
    adjustHp = servantLeaderInfo->fields.adjustHp;
    v324 = adjustAtk;
    v98 = ServantLeaderInfo__getRarity(servantLeaderInfo, 0LL);
    exceedCount = servantLeaderInfo->fields.exceedCount;
    v100 = v98;
    frameType = ServantLeaderInfo__getFrameType(servantLeaderInfo, 0LL);
    CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(servantLeaderInfo, 0LL);
    ServantLeaderInfo__getSkillInfo(servantLeaderInfo, &skillInfoList, 0LL);
    gameObject = ServantLeaderInfo__getTreasureDeviceInfo(servantLeaderInfo, &tdInfo, 0LL);
    if ( !tdInfo )
      goto LABEL_544;
    strengthStatus = tdInfo->fields.strengthStatus;
    v322 = tdInfo->fields.lv;
    treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
    ServantLeaderInfo__GetAppendPassiveSkillInfo_40293804(servantLeaderInfo, &v351, 0, 0LL);
    eventSetupInfo = v8->fields.eventSetupInfo;
    rarity = v100;
    if ( !eventSetupInfo )
      goto LABEL_171;
    eventIdList = eventSetupInfo->fields.eventIdList;
    if ( !eventIdList )
      goto LABEL_544;
    if ( *(_QWORD *)&eventIdList->max_length )
    {
      cardParams = exceedCount;
      EventUpVal_40281832 = ServantLeaderInfo__getEventUpVal_40281832(
                              servantLeaderInfo,
                              &eventUpVallInfo,
                              eventSetupInfo,
                              0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_EventDetailMaster___);
      v106 = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
      v107 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v107,
        (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      v108 = v8->fields.eventSetupInfo;
      v343 = v8;
      if ( !v108 )
        goto LABEL_544;
      v109 = v108->fields.eventIdList;
      v339 = (EventServantPointRankMaster_o *)v106;
      v313 = CardImageLimitCount;
      if ( !v109 )
        goto LABEL_544;
      v110 = *(_QWORD *)&v109->max_length;
      if ( (int)v110 >= 1 )
      {
        v111 = 0LL;
        while ( 1 )
        {
          if ( v111 >= (unsigned int)v110 )
            goto LABEL_545;
          v112 = v109->m_Items[v111 + 1];
          questRestrictionInfo = v343->fields.questRestrictionInfo;
          if ( !questRestrictionInfo || questRestrictionInfo->fields.eventId == v112 )
          {
            if ( !Master_object )
              goto LABEL_544;
            v114 = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                     v112,
                     (const MethodInfo_30F8760 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
            if ( !v114
              || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)v114, 0x800000000LL, 0LL),
                  (gameObject & 1) == 0) )
            {
              gameObject = (__int64)v339;
              if ( !v339 )
                goto LABEL_544;
              if ( EventServantPointRankMaster__IsEnableEvent(v339, v112, 0LL) )
              {
                eventSvtPoint = servantLeaderInfo->fields.eventSvtPoint;
                v117 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                v116 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v359.fields.currentCryptoKey = v117;
                *(_QWORD *)&v359.fields.fakeValue = v116;
                v118 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v359, 0LL);
                EnableEntity = EventServantPointRankMaster__GetEnableEntity(v339, v112, eventSvtPoint, v118, 0LL);
                if ( EnableEntity )
                  svtPointRank = EnableEntity->fields.svtPointRank;
                else
                  svtPointRank = 0;
                v70 = v342;
                v121 = (EventMargeItemUpValInfo_o *)sub_1B71818(EventMargeItemUpValInfo_TypeInfo);
                EventMargeItemUpValInfo___ctor_38685072(v121, v112, 0LL);
                if ( !v121 )
                  goto LABEL_544;
                EventMargeItemUpValInfo__SetServantPointInfo(
                  v121,
                  servantLeaderInfo->fields.eventSvtPoint,
                  svtPointRank,
                  1,
                  0LL);
                if ( !v107 )
                  goto LABEL_544;
                System_Collections_Generic_List_object___Insert(
                  v107,
                  0,
                  (Il2CppObject *)v121,
                  (const MethodInfo_34D1010 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
              }
              v122 = (EventPersonalMargeUpValInfo_o *)sub_1B71818(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v122, v112, v70, 0LL);
              gameObject = (__int64)eventUpVallInfo;
              if ( !eventUpVallInfo )
                goto LABEL_544;
              gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
              if ( !v122 )
                goto LABEL_544;
              EventPersonalMargeUpValInfo__Add(v122, (EventDropItemUpValInfo_array *)gameObject, 0LL);
              gameObject = EventPersonalMargeUpValInfo__IsEmpty(v122, 0LL);
              if ( (gameObject & 1) == 0 )
              {
                gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v122, 0LL);
                if ( !gameObject )
                  goto LABEL_544;
                v125 = *(_QWORD *)(gameObject + 24);
                v126 = gameObject;
                if ( (int)v125 >= 1 )
                  break;
              }
            }
          }
LABEL_168:
          LODWORD(v110) = v109->max_length;
          if ( (__int64)++v111 >= (int)v110 )
            goto LABEL_169;
        }
        v127 = 0LL;
        while ( v127 < (unsigned int)v125 )
        {
          if ( !v107 )
            goto LABEL_544;
          v52 = *(_QWORD *)(v126 + 32 + 8 * v127);
          items = v107->fields._items;
          v129 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v107->fields._version;
          if ( !items )
            goto LABEL_544;
          v130 = v107->fields._size;
          if ( (unsigned int)v130 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v107,
              (Il2CppObject *)v52,
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
          }
          else
          {
            v131 = &items->obj.klass + v130;
            v107->fields._size = v130 + 1;
            v131[4] = (Il2CppClass *)v52;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v131 + 4), v52, v123, v124);
          }
          LODWORD(v125) = *(_DWORD *)(v126 + 24);
          if ( (__int64)++v127 >= (int)v125 )
            goto LABEL_168;
        }
        goto LABEL_545;
      }
LABEL_169:
      if ( !v107 )
        goto LABEL_544;
      v132 = EventUpVal_40281832;
      v8 = v343;
      v68 = svtId;
      exceedCount = cardParams;
      CardImageLimitCount = v313;
      v340 = (EventServantPointRankMaster_o *)System_Collections_Generic_List_object___ToArray(
                                                v107,
                                                (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    }
    else
    {
LABEL_171:
      v340 = 0LL;
      v132 = 0;
    }
    codeIds = ServantLeaderInfo__getCommandCodeIdList(servantLeaderInfo, 0LL);
    cardParamsa = servantLeaderInfo->fields.commandCardParam;
    QuestRestriction = ServantLeaderInfo__getQuestRestriction(servantLeaderInfo, v8->fields.questRestrictionInfo, 0LL);
    UniqueSvtRestriction = ServantLeaderInfo__getUniqueSvtRestriction(
                             servantLeaderInfo,
                             v8->fields.questRestrictionInfo,
                             0LL);
    IsUniqueIndividualityRestriction = ServantLeaderInfo__IsUniqueIndividualityRestriction(
                                         servantLeaderInfo,
                                         v8->fields.questRestrictionInfo,
                                         0LL);
    if ( ServantLeaderInfo__IsSlotRestriction(servantLeaderInfo, v8->fields.questRestrictionInfo, 0LL) )
    {
      v344 = 1;
LABEL_195:
      IsDataLost = ServantLeaderInfo__IsDataLost(servantLeaderInfo, v8->fields.questRestrictionInfo, 0LL);
      this = v325;
      TimesToRestart = ServantLeaderInfo__GetTimesToRestart(servantLeaderInfo, v8->fields.questRestrictionInfo, 0LL);
      goto LABEL_242;
    }
    v314 = QuestRestriction;
    v135 = CardImageLimitCount;
    v136 = v8;
    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_370B628 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    v137 = *(_DWORD *)(gameObject + 48);
    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_370B628 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    if ( v137 < 1 )
    {
      v344 = 0;
      v8 = v136;
    }
    else
    {
      v138 = v136->fields.questRestrictionInfo;
      if ( !v138 )
        goto LABEL_544;
      v8 = v136;
      v139 = *(_DWORD *)(gameObject + 52);
      if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_40241296(v138, v139, 0LL) )
      {
        v311 = UniqueSvtRestriction;
        v140 = exceedCount;
        v141 = v8->fields.questRestrictionInfo;
        v143 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        v142 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v360.fields.currentCryptoKey = v143;
        *(_QWORD *)&v360.fields.fakeValue = v142;
        v144 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v360, 0LL);
        v145 = servantLeaderInfo->fields.limitCount;
        v146 = v144;
        gameObject = ServantLeaderInfo__getDispLimitCount(servantLeaderInfo, 0LL);
        if ( !v141 )
          goto LABEL_544;
        IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                              v141,
                                              v146,
                                              v145,
                                              gameObject,
                                              v139,
                                              1,
                                              0LL);
        v68 = svtId;
        UniqueSvtRestriction = v311;
        exceedCount = v140;
        v344 = IsRestrictionServantIndividuality;
        goto LABEL_194;
      }
      v344 = 0;
    }
    v68 = svtId;
LABEL_194:
    CardImageLimitCount = v135;
    QuestRestriction = v314;
    goto LABEL_195;
  }
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataMasterBase_object__object__long___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                          UserServantLeaderEntity->fields.userSvtId,
                          (const MethodInfo_30F890C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !gameObject )
    goto LABEL_544;
  v94 = (UserServantEntity_o *)gameObject;
  lv[1] = *(_DWORD *)(gameObject + 256);
  v95 = *(_DWORD *)(gameObject + 264);
  lv[0] = v95;
  if ( v63 )
  {
    lv[0] = LODWORD(v63[16].monitor) + v95;
    v96 = HIDWORD(v63[16].monitor) + *(_DWORD *)(gameObject + 268);
  }
  else
  {
    v96 = *(_DWORD *)(gameObject + 268);
  }
  v148 = *(_DWORD *)(gameObject + 272);
  v354 = v96;
  adjustHp = *(_DWORD *)(gameObject + 276);
  v324 = v148;
  v149 = UserServantEntity__getRarity((UserServantEntity_o *)gameObject, 0LL);
  exceedCount = v94->fields.exceedCount;
  rarity = v149;
  frameType = UserServantEntity__getFrameType(v94, 0LL);
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(v94, 0, 0LL);
  UserServantEntity__getSkillInfo(v94, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
  gameObject = UserServantEntity__getTreasureDeviceInfo(v94, &tdInfo, -1, -1, 0, 0LL);
  if ( !tdInfo )
    goto LABEL_544;
  strengthStatus = tdInfo->fields.strengthStatus;
  v322 = tdInfo->fields.lv;
  treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
  v336 = v94;
  UserServantEntity__GetAppendPassiveSkillInfo_40020168(v94, &v351, 0LL);
  if ( v8->fields.eventSetupInfo )
  {
    v315 = CardImageLimitCount;
    if ( v63 )
    {
      v150 = v63[2];
      *(Il2CppObject *)&v349.fields.currentCryptoKey = v63[1];
      *(Il2CppObject *)&v349.fields.fakeValue = v150;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v348 = v349;
      v151 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46311792(&v348, 0LL);
    }
    else
    {
      v151 = -1LL;
    }
    v154 = v342;
    gameObject = sub_1B71674(long___TypeInfo, 1LL);
    if ( !gameObject )
      goto LABEL_544;
    if ( !*(_DWORD *)(gameObject + 24) )
      goto LABEL_545;
    *(_QWORD *)(gameObject + 32) = v151;
    EventUpVal_39995048 = UserServantEntity__getEventUpVal_39995048(
                            v94,
                            &eventUpVallInfo,
                            v8->fields.eventSetupInfo,
                            (System_Int64_array *)gameObject,
                            0LL,
                            0LL);
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    cardParamsb = exceedCount;
    v326 = this;
    v156 = DataManager__GetMasterData_object_(
             (DataManager_o *)gameObject,
             (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v157 = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    v341 = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
    v158 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v158,
      (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    v159 = v8->fields.eventSetupInfo;
    v345 = v8;
    if ( !v159 )
      goto LABEL_544;
    v160 = v159->fields.eventIdList;
    v312 = EventUpVal_39995048;
    if ( !v160 )
      goto LABEL_544;
    v161 = *(_QWORD *)&v160->max_length;
    if ( (int)v161 >= 1 )
    {
      v162 = 0LL;
      codeIdsa = (System_Int32_array *)&v94->fields.userId;
      while ( 1 )
      {
        if ( v162 >= (unsigned int)v161 )
          goto LABEL_545;
        if ( !v156 )
          goto LABEL_544;
        v163 = v160->m_Items[v162 + 1];
        gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v156,
                                v163,
                                (const MethodInfo_30F8760 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( !gameObject
          || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0LL),
              (gameObject & 1) == 0) )
        {
          if ( !v157 )
            goto LABEL_544;
          if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)v157, v163, 0LL) )
          {
            v164 = *(_OWORD *)&codeIdsa->bounds;
            *(Il2CppObject *)&v349.fields.currentCryptoKey = codeIdsa->obj;
            *(_OWORD *)&v349.fields.fakeValue = v164;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v347 = v349;
            v165 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46311792(&v347, 0LL);
            v166 = UserServantEntity__getSvtId(v336, 0LL);
            gameObject = (__int64)v341;
            if ( !v341 )
              goto LABEL_544;
            if ( UserEventServantPointMaster__TryGetEntity(
                   (UserEventServantPointMaster_o *)v341,
                   &entity,
                   v165,
                   v163,
                   v166,
                   0LL) )
            {
              gameObject = (__int64)entity;
              if ( !entity )
                goto LABEL_544;
              BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(entity, 0LL);
            }
            else
            {
              BuddyPoint = 0;
            }
            v168 = UserServantEntity__getSvtId(v336, 0LL);
            v169 = EventServantPointRankMaster__GetEnableEntity(
                     (EventServantPointRankMaster_o *)v157,
                     v163,
                     BuddyPoint,
                     v168,
                     0LL);
            v170 = v169 ? v169->fields.svtPointRank : 0;
            v171 = (EventMargeItemUpValInfo_o *)sub_1B71818(EventMargeItemUpValInfo_TypeInfo);
            EventMargeItemUpValInfo___ctor_38685072(v171, v163, 0LL);
            if ( !v171 )
              goto LABEL_544;
            EventMargeItemUpValInfo__SetServantPointInfo(v171, BuddyPoint, v170, 0, 0LL);
            if ( !v158 )
              goto LABEL_544;
            System_Collections_Generic_List_object___Insert(
              v158,
              0,
              (Il2CppObject *)v171,
              (const MethodInfo_34D1010 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
            v154 = v342;
          }
          v172 = (EventPersonalMargeUpValInfo_o *)sub_1B71818(EventPersonalMargeUpValInfo_TypeInfo);
          EventPersonalMargeUpValInfo___ctor(v172, v163, v154, 0LL);
          gameObject = (__int64)eventUpVallInfo;
          if ( !eventUpVallInfo )
            goto LABEL_544;
          gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
          if ( !v172 )
            goto LABEL_544;
          EventPersonalMargeUpValInfo__Add(v172, (EventDropItemUpValInfo_array *)gameObject, 0LL);
          gameObject = EventPersonalMargeUpValInfo__IsEmpty(v172, 0LL);
          if ( (gameObject & 1) == 0 )
          {
            gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v172, 0LL);
            if ( !gameObject )
              goto LABEL_544;
            v175 = *(_QWORD *)(gameObject + 24);
            v176 = gameObject;
            if ( (int)v175 >= 1 )
              break;
          }
        }
LABEL_238:
        LODWORD(v161) = v160->max_length;
        if ( (__int64)++v162 >= (int)v161 )
          goto LABEL_239;
      }
      v177 = 0LL;
      while ( v177 < (unsigned int)v175 )
      {
        if ( !v158 )
          goto LABEL_544;
        v52 = *(_QWORD *)(v176 + 32 + 8 * v177);
        v178 = v158->fields._items;
        v179 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
        ++v158->fields._version;
        if ( !v178 )
          goto LABEL_544;
        v180 = v158->fields._size;
        if ( (unsigned int)v180 >= v178->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v158,
            (Il2CppObject *)v52,
            *(const MethodInfo_34D0260 **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
        }
        else
        {
          v181 = &v178->obj.klass + v180;
          v158->fields._size = v180 + 1;
          v181[4] = (Il2CppClass *)v52;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v181 + 4), v52, v173, v174);
        }
        LODWORD(v175) = *(_DWORD *)(v176 + 24);
        if ( (__int64)++v177 >= (int)v175 )
          goto LABEL_238;
      }
LABEL_545:
      sub_1B71830(gameObject, v52);
    }
LABEL_239:
    if ( !v158 )
      goto LABEL_544;
    v132 = v312;
    v340 = (EventServantPointRankMaster_o *)System_Collections_Generic_List_object___ToArray(
                                              v158,
                                              (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    this = v326;
    v8 = v345;
    v68 = svtId;
    exceedCount = cardParamsb;
    CardImageLimitCount = v315;
  }
  else
  {
    v340 = 0LL;
    v132 = 0;
  }
  codeIds = UserServantEntity__getCommandCodeIdList(v336, 0LL);
  QuestRestriction = UserServantEntity__getQuestRestriction(v336, v8->fields.questRestrictionInfo, 2, 0LL);
  UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(v336, v8->fields.questRestrictionInfo, 0LL);
  TimesToRestart = 0;
  IsDataLost = 0;
  IsUniqueIndividualityRestriction = UserServantEntity__IsUniqueIndividualityRestriction(
                                       v336,
                                       v8->fields.questRestrictionInfo,
                                       0LL);
  v344 = 0;
  cardParamsa = 0LL;
LABEL_242:
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                 (ServantLimitImageMaster_o *)gameObject,
                 v68,
                 CardImageLimitCount,
                 0LL);
  if ( !this->fields.servantNarrowTexture )
    goto LABEL_544;
  UINarrowFigureTexture__SetCharacter(this->fields.servantNarrowTexture, v68, gameObject, 0LL, 0LL);
  v182 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v92 = (System_Object_array *)v340;
  if ( UnityEngine_Object__op_Inequality(v182, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.servantClassIcon;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    if ( IsDataLost )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.servantClassIcon;
      if ( !gameObject )
        goto LABEL_544;
      ServantClassIconComponent__SetImage((ServantClassIconComponent_o *)gameObject, classId, frameType, 0LL);
    }
  }
  v183 = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v183, 0LL, 0LL) )
  {
    v184 = this->fields.levelLabel;
    gameObject = (__int64)System_Int32__ToString((int32_t)&lv[1], 0LL);
    if ( !v184 )
      goto LABEL_544;
    UILabel__set_text(v184, (System_String_o *)gameObject, 0LL);
  }
  v185 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v185, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    v327 = IsDataLost;
    v186 = TimesToRestart;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v187 = lv[1];
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    v188 = QuestRestriction;
    Icon_37499832 = Rarity__getIcon_37499832(rarity, exceedCount, v187, 0LL);
    v190 = v132;
    if ( exceedCount < 1 )
    {
      v191 = UniqueSvtRestriction;
      v192 = exceedCount;
      v194 = 0;
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v191 = UniqueSvtRestriction;
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !gameObject )
        goto LABEL_544;
      v192 = exceedCount;
      RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)gameObject, rarity, exceedCount, 0, 0LL);
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !gameObject )
        goto LABEL_544;
      v194 = ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)gameObject, rarity, lv[1], RarityIcon, 0LL);
    }
    v195 = this->fields.raritySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( v194 >= 3 )
    {
      AtlasManager__SetEventSprite(v195, Icon_37499832, 0LL);
    }
    else
    {
      AtlasManager__SetCommon(v195, 0LL);
      gameObject = (__int64)this->fields.raritySprite;
      if ( !gameObject )
        goto LABEL_544;
      UISprite__set_spriteName((UISprite_o *)gameObject, Icon_37499832, 0LL);
    }
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_544;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
    gameObject = (__int64)this->fields.raritySprite;
    v196 = v192 >= 1 ? this->fields.baseRarityPosition.fields.x + 1.0 : this->fields.baseRarityPosition.fields.x;
    if ( !gameObject )
      goto LABEL_544;
    y = this->fields.baseRarityPosition.fields.y;
    z = this->fields.baseRarityPosition.fields.z;
    gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    v366.fields.x = v196;
    v366.fields.y = y;
    v366.fields.z = z;
    UniqueSvtRestriction = v191;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v366, 0LL);
    v132 = v190;
    QuestRestriction = v188;
    TimesToRestart = v186;
    v92 = (System_Object_array *)v340;
    IsDataLost = v327;
  }
  v199 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v199, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.skillListTreasureDevice;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v200 = this->fields.skillListTreasureDevice;
    v201 = skillInfoList;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__GetLevelList_38193752(v201, 0LL);
    if ( !v200 )
      goto LABEL_544;
    SkillListTreasureDeviceComponent__Set(
      v200,
      (System_String_o *)gameObject,
      v322,
      strengthStatus,
      treasureDeviceNum,
      0,
      0LL);
    gameObject = (__int64)this->fields.switchSkillUIList;
    if ( gameObject )
    {
      v52 = (unsigned __int64)this->fields.skillInfoUiWidget;
      v204 = *(_QWORD *)(gameObject + 16);
      v205 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++*(_DWORD *)(gameObject + 28);
      if ( !v204 )
        goto LABEL_544;
      v206 = *(int *)(gameObject + 24);
      if ( (unsigned int)v206 >= *(_DWORD *)(v204 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v52,
          *(const MethodInfo_34D0260 **)(*(_QWORD *)(v205[4] + 192LL) + 112LL));
      }
      else
      {
        v207 = v204 + 8 * v206;
        *(_DWORD *)(gameObject + 24) = v206 + 1;
        *(_QWORD *)(v207 + 32) = v52;
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v207 + 32), v52, v202, v203);
      }
    }
  }
  v208 = (UnityEngine_Object_o *)this->fields.appendSkillList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v208, 0LL, 0LL) )
  {
    if ( v351 && *(_QWORD *)&v351->max_length )
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v209 = this->fields.appendSkillList;
      v210 = v351;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__GetLevelList_38193752(v210, 0LL);
      if ( !v209 )
        goto LABEL_544;
      AppendSkillListComponent__Set(v209, (System_String_o *)gameObject, 0LL);
      gameObject = (__int64)this->fields.switchSkillUIList;
      if ( gameObject )
      {
        v52 = (unsigned __int64)this->fields.appendSkillInfoUiWidget;
        v213 = *(_QWORD *)(gameObject + 16);
        v214 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++*(_DWORD *)(gameObject + 28);
        if ( !v213 )
          goto LABEL_544;
        v215 = *(int *)(gameObject + 24);
        if ( (unsigned int)v215 >= *(_DWORD *)(v213 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            (Il2CppObject *)v52,
            *(const MethodInfo_34D0260 **)(*(_QWORD *)(v214[4] + 192LL) + 112LL));
        }
        else
        {
          v216 = v213 + 8 * v215;
          *(_DWORD *)(gameObject + 24) = v215 + 1;
          *(_QWORD *)(v216 + 32) = v52;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v216 + 32), v52, v211, v212);
        }
      }
    }
    else
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
  }
  switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
  {
    v218 = this->fields.switchSkillUIList;
    if ( v218 )
    {
      v219 = this->fields.switchSkillInfo;
      gameObject = (__int64)System_Collections_Generic_List_object___ToArray(
                              (System_Collections_Generic_List_object__o *)v218,
                              (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( !v219 )
        goto LABEL_544;
      SwitchUIWidgetComponent__Set(v219, (UIWidget_array *)gameObject, 0LL);
    }
  }
  v220 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v220, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_544;
    if ( v8->fields.isFriendInfo )
      ServantCommandCardListComponent__Set_38008100(
        (ServantCommandCardListComponent_o *)gameObject,
        svtId,
        cardParamsa,
        codeIds,
        2,
        0,
        0LL);
    else
      ServantCommandCardListComponent__Set_38008344(
        (ServantCommandCardListComponent_o *)gameObject,
        svtId,
        codeIds,
        2,
        0,
        0LL);
  }
  v221 = (UnityEngine_Object_o *)this->fields.attackLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v221, 0LL, 0LL) )
  {
    v222 = 0.92157;
    gameObject = (__int64)this->fields.attackLabel;
    if ( v324 <= 0 )
      v223 = 1.0;
    else
      v223 = 0.015686;
    if ( v324 <= 0 )
      v222 = 1.0;
    if ( !gameObject )
      goto LABEL_544;
    v224 = 1.0;
    v225 = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v222 - 1), 0LL);
    v226 = this->fields.attackLabel;
    gameObject = (__int64)System_Int32__ToString_62310784((int32_t)lv, (System_String_o *)StringLiteral_429/*"#,0"*/, 0LL);
    if ( !v226 )
      goto LABEL_544;
    UILabel__set_text(v226, (System_String_o *)gameObject, 0LL);
  }
  v227 = (UnityEngine_Object_o *)this->fields.hpLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v227, 0LL, 0LL) )
  {
    v228 = 0.92157;
    gameObject = (__int64)this->fields.hpLabel;
    if ( adjustHp <= 0 )
      v229 = 1.0;
    else
      v229 = 0.015686;
    if ( adjustHp <= 0 )
      v228 = 1.0;
    if ( !gameObject )
      goto LABEL_544;
    v230 = 1.0;
    v231 = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v228 - 1), 0LL);
    v232 = this->fields.hpLabel;
    gameObject = (__int64)System_Int32__ToString_62310784((int32_t)&v354, (System_String_o *)StringLiteral_429/*"#,0"*/, 0LL);
    if ( !v232 )
      goto LABEL_544;
    UILabel__set_text(v232, (System_String_o *)gameObject, 0LL);
  }
  v233 = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v233, 0LL, 0LL) )
  {
    v234 = this->fields.baseSprite;
    v235 = this->fields.baseDefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationBase(v234, frameType, v235, 0, 0LL);
  }
  v236 = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v236, 0LL, 0LL) )
  {
    v237 = this->fields.base2Sprite;
    v238 = this->fields.base2DefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationFrameForSupportSelect(v237, frameType, v238, 0, 0LL);
  }
  gameObject = (__int64)this->fields.backClassIcon;
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_544;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  if ( ((v344 | QuestRestriction) & 1) != 0 )
  {
    v240 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    UserServantLeaderEntity = v331;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v240, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v241 = LocalizationManager__Get((System_String_o *)StringLiteral_10245/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    goto LABEL_375;
  }
  UserServantLeaderEntity = v331;
  if ( !v8->fields.isFriendInfo && ServantEntity__checkIsHeroineSvt(v342, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_37486428(126, 0LL) )
    {
      v246 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v246, 0LL, 0LL) )
        goto LABEL_406;
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      v247 = 1;
LABEL_405:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v247, 0LL);
LABEL_406:
      SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v52);
      goto LABEL_407;
    }
  }
  if ( !IsUniqueIndividualityRestriction && !UniqueSvtRestriction )
  {
    if ( IsDataLost )
    {
      v245 = 1;
      v244 = this;
      v243 = 0;
      v242 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_376;
    }
    if ( TimesToRestart >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v250 = LocalizationManager__Get((System_String_o *)StringLiteral_11473/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
      LODWORD(v349.fields.currentCryptoKey) = TimesToRestart;
      v254 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v349, v251, v252, v253);
      v241 = System_String__Format(v250, v254, 0LL);
LABEL_375:
      v242 = v241;
      v243 = 1;
      v244 = this;
      v245 = 0;
LABEL_376:
      SupportSelectItemDraw__SetMaskMessage(v244, v242, v243, v245, v239);
      goto LABEL_407;
    }
    v255 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v255, 0LL, 0LL) )
      goto LABEL_406;
    gameObject = (__int64)this->fields.sortieMaskSprite;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    v247 = 0;
    goto LABEL_405;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v248 = LocalizationManager__Get((System_String_o *)StringLiteral_6405/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0LL);
  SupportSelectItemDraw__SetWarningMessage(this, v248, 1, v249);
LABEL_407:
  friendPointBonus = (UnityEngine_Object_o *)this->fields.friendPointBonus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendPointBonus, 0LL, 0LL) )
  {
    v257 = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v257, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.friendPointBonusBase;
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
  }
  eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL);
  v73 = 0;
  v93 = v132 != 0;
  if ( !v337 )
    goto LABEL_465;
  v63 = v333;
  if ( (gameObject & 1) == 0 )
    goto LABEL_437;
  max_length = v337->max_length;
  if ( max_length < 1 )
  {
LABEL_436:
    v73 = 0;
LABEL_437:
    if ( v63 )
      goto LABEL_438;
    goto LABEL_466;
  }
  v260 = v8;
  v261 = 0LL;
  eventId = 0;
  value = 0;
  m_Items = v337->m_Items;
  do
  {
    if ( (unsigned int)v261 >= max_length )
      goto LABEL_545;
    v265 = m_Items[v261];
    if ( !v265 )
      goto LABEL_544;
    gameObject = System_Array__IndexOf_int_(
                   v265->fields.targetIds,
                   svtId,
                   (const MethodInfo_2F55B10 *)Method_System_Array_IndexOf_int___);
    max_length = v337->max_length;
    if ( (unsigned int)v261 >= max_length )
      goto LABEL_545;
    v266 = m_Items[v261];
    if ( !v266 )
      goto LABEL_544;
    targetIds = v266->fields.targetIds;
    if ( targetIds )
      v268 = targetIds->max_length == 0;
    else
      v268 = 1;
    if ( (v268 || (int)gameObject >= 0) && value < v266->fields.value )
    {
      eventId = v266->fields.eventId;
      value = v266->fields.value;
    }
    ++v261;
  }
  while ( (int)v261 < max_length );
  v8 = v260;
  if ( value < 1 )
  {
    v63 = v333;
    v92 = (System_Object_array *)v340;
    goto LABEL_436;
  }
  v269 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  v270 = v269;
  if ( v340 )
    System_Collections_Generic_List_object____ctor_55376724(
      v269,
      (System_Collections_Generic_IEnumerable_T__o *)v340,
      (const MethodInfo_34CFB54 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___75792208);
  else
    System_Collections_Generic_List_object____ctor(
      v269,
      (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v279 = (EventMargeItemUpValInfo_o *)sub_1B71818(EventMargeItemUpValInfo_TypeInfo);
  EventMargeItemUpValInfo___ctor_38684992(v279, eventId, value, 0LL);
  if ( !v270 )
    goto LABEL_544;
  v282 = v270->fields._items;
  v283 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
  ++v270->fields._version;
  if ( !v282 )
    goto LABEL_544;
  v284 = v270->fields._size;
  if ( (unsigned int)v284 >= v282->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v270,
      (Il2CppObject *)v279,
      *(const MethodInfo_34D0260 **)(*(_QWORD *)(v283[4] + 192LL) + 112LL));
  }
  else
  {
    v285 = &v282->obj.klass + v284;
    v270->fields._size = v284 + 1;
    v285[4] = (Il2CppClass *)v279;
    sub_1B71570((ServantStatusBattleListViewItem_o *)(v285 + 4), (int32_t)v279, v280, v281);
  }
  v92 = System_Collections_Generic_List_object___ToArray(
          v270,
          (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
  v73 = 0;
LABEL_465:
  v63 = v333;
  if ( !v333 )
    goto LABEL_466;
LABEL_438:
  gameObject = (__int64)this->fields.noneEquipSprite;
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_544;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.equipSprite;
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_544;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v271 = (UISprite_o *)this->fields.equipSprite;
  v273 = v63[5].klass;
  v272 = v63[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v361.fields.currentCryptoKey = v273;
  *(_QWORD *)&v361.fields.fakeValue = v272;
  v274 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v361, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEquipFace(v271, v274, 0LL);
  v275 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v275, 0LL, 0LL) )
  {
    v277 = v63[6].klass;
    v276 = v63[6].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v362.fields.currentCryptoKey = v277;
    *(_QWORD *)&v362.fields.fakeValue = v276;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v362, 0LL);
    if ( this->fields.equipLimitCountSprite )
    {
      v278 = gameObject;
      gameObject = (__int64)UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                              0LL);
      if ( v278 >= 4 )
      {
        if ( !v334 )
          goto LABEL_544;
        v52 = SLODWORD(v334[5].monitor) >= v278;
      }
      else
      {
        v52 = 0LL;
      }
      if ( gameObject )
        goto LABEL_493;
    }
    goto LABEL_544;
  }
LABEL_494:
  v294 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v294, 0LL, 0LL) )
  {
    if ( v8->fields.isFriendInfo )
    {
      if ( (v73 & 1) == 0 )
      {
        v295 = UserServantLeaderEntity->fields.servantLeaderInfo;
        if ( v295 )
        {
          v297 = *(_QWORD *)&v295->fields.svtId.fields.currentCryptoKey;
          v296 = *(_QWORD *)&v295->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v364.fields.currentCryptoKey = v297;
          *(_QWORD *)&v364.fields.fakeValue = v296;
          gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v364, 0LL);
          if ( !UserServantLeaderEntity->fields.servantLeaderInfo )
            goto LABEL_544;
          v298 = gameObject;
          v299 = ServantLeaderInfo__getRarity(UserServantLeaderEntity->fields.servantLeaderInfo, 0LL);
LABEL_515:
          v305 = v299;
          goto LABEL_517;
        }
      }
    }
    else if ( (v73 & 1) == 0 )
    {
      userServantEntity = UserServantLeaderEntity->fields.userServantEntity;
      if ( userServantEntity )
      {
        v304 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v303 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v365.fields.currentCryptoKey = v304;
        *(_QWORD *)&v365.fields.fakeValue = v303;
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v365, 0LL);
        if ( !UserServantLeaderEntity->fields.userServantEntity )
          goto LABEL_544;
        v298 = gameObject;
        v299 = UserServantEntity__getRarity(UserServantLeaderEntity->fields.userServantEntity, 0LL);
        goto LABEL_515;
      }
    }
    v305 = -1;
    v298 = -1;
LABEL_517:
    if ( eventUpVallInfo )
      equipSvtId = eventUpVallInfo->fields.equipSvtId;
    else
      equipSvtId = 0;
    gameObject = (__int64)this->fields.eventUpValIcon;
    if ( !gameObject )
      goto LABEL_544;
    EventUpValIconComponent__Set(
      (EventUpValIconComponent_o *)gameObject,
      (EventMargeItemUpValInfo_array *)v92,
      v298,
      v305,
      equipSvtId,
      0LL);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.bounusIcon;
      if ( !gameObject )
        goto LABEL_544;
      v301 = 0;
      goto LABEL_526;
    }
    goto LABEL_527;
  }
  v300 = (UnityEngine_Object_o *)this->fields.bounusIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v300, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.bounusIcon;
    if ( !gameObject )
      goto LABEL_544;
    v301 = v93;
LABEL_526:
    ShiningIconComponent__Set_38029736((ShiningIconComponent_o *)gameObject, v301, 0LL);
  }
LABEL_527:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_544;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  }
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.pushSprite;
    if ( gameObject )
    {
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        pushUserServantId = v8->fields.pushUserServantId;
        if ( !pushUserServantId )
          return;
        if ( UserServantLeaderEntity )
        {
          if ( pushUserServantId != UserServantLeaderEntity->fields.userSvtId )
            return;
          gameObject = (__int64)this->fields.pushSprite;
          if ( gameObject )
          {
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_544;
  }
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
  struct SupportSelectItemDraw_StaticFields *static_fields; // x9
  float *p_z; // x8
  float *p_y; // x10
  struct UnityEngine_Vector3_o *p_DATA_LOST_MASK_POSITION; // x9
  float v23; // s0
  float v24; // s8
  UnityEngine_Transform_o *v25; // x20
  float restrictionMaskMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v30; // x8
  struct UnityEngine_Vector3_StaticFields *v31; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A1C485 & 1) == 0 )
  {
    sub_1B715CC(&AtlasManager_TypeInfo, message);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v9);
    sub_1B715CC(&SupportSelectItemDraw_TypeInfo, v10);
    sub_1B715CC(&StringLiteral_20258/*"img_frames_mask05"*/, v11);
    sub_1B715CC(&StringLiteral_18425/*"datalost_party_edit"*/, v12);
    sub_1B715CC(&StringLiteral_1/*""*/, v13);
    byte_4A1C485 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_48;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_48;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    v17 = this->fields.restrictionMaskSprite;
    if ( isDataLost )
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(v17, (System_String_o *)StringLiteral_18425/*"datalost_party_edit"*/, 0LL);
      v18 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)SupportSelectItemDraw_TypeInfo;
      if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      if ( !v18 )
        goto LABEL_48;
      UIWidget__set_width(v18, SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_WIDTH, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      UIWidget__set_height(
        (UIWidget_o *)gameObject,
        SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT,
        0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_48;
      static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
      p_z = &static_fields->DATA_LOST_MASK_POSITION.fields.z;
      p_y = &static_fields->DATA_LOST_MASK_POSITION.fields.y;
      p_DATA_LOST_MASK_POSITION = &static_fields->DATA_LOST_MASK_POSITION;
    }
    else
    {
      if ( !v17 )
        goto LABEL_48;
      UISprite__set_atlas(this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20258/*"img_frames_mask05"*/, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      UIWidget__set_width((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultWidth, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      UIWidget__set_height((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultHeight, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_48;
      p_z = &this->fields.maskSpriteDefaultPosition.fields.z;
      p_DATA_LOST_MASK_POSITION = &this->fields.maskSpriteDefaultPosition;
      p_y = &this->fields.maskSpriteDefaultPosition.fields.y;
    }
    v33.fields.z = *p_z;
    v33.fields.y = *p_y;
    v33.fields.x = p_DATA_LOST_MASK_POSITION->fields.x;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v33, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_48;
    if ( isScale )
    {
      LODWORD(v23) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_48;
      v24 = v23;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v25 = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v24 <= restrictionMaskMessageWidth )
      {
        if ( !byte_4A1A756 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v15);
          byte_4A1A756 = 1;
        }
        v31 = UnityEngine_Vector3_TypeInfo->static_fields;
        x = v31->oneVector.fields.x;
        y = v31->oneVector.fields.y;
        z = v31->oneVector.fields.z;
      }
      else
      {
        x = restrictionMaskMessageWidth / v24;
        z = 1.0;
        y = 1.0;
      }
      if ( !v25 )
        goto LABEL_48;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v25 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4A1A756 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v15);
        byte_4A1A756 = 1;
      }
      if ( !v25 )
        goto LABEL_48;
      v30 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v30->oneVector.fields.y;
      z = v30->oneVector.fields.z;
      x = v30->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v25, *(UnityEngine_Vector3_o *)&x, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_48:
    sub_1B71828(gameObject, v15);
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
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v18; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A1C486 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, message);
    sub_1B715CC(&StringLiteral_1/*""*/, v7);
    byte_4A1C486 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_33;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_33;
    FlashingIconComponent__SetFast((FlashingIconComponent_o *)gameObject, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_33;
    printedSize = UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_33;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
    v13 = (UnityEngine_Transform_o *)gameObject;
    if ( isScale )
    {
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_4A1A756 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v9);
          byte_4A1A756 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        x = static_fields->oneVector.fields.x;
        y = static_fields->oneVector.fields.y;
        z = static_fields->oneVector.fields.z;
      }
      else
      {
        x = restrictionWarningMessageWidth / printedSize.fields.x;
        z = 1.0;
        y = 1.0;
      }
      if ( !v13 )
        goto LABEL_33;
    }
    else
    {
      if ( !byte_4A1A756 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v9);
        byte_4A1A756 = 1;
      }
      if ( !v13 )
        goto LABEL_33;
      v18 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v18->oneVector.fields.y;
      z = v18->oneVector.fields.z;
      x = v18->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v13, *(UnityEngine_Vector3_o *)&x, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( gameObject )
      {
        v20.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v20.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v20.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v20, 0LL);
        return;
      }
    }
LABEL_33:
    sub_1B71828(gameObject, v9);
  }
}