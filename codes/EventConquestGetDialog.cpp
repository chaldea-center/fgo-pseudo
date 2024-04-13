void __fastcall EventConquestGetDialog___ctor(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB156 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB156 = 1;
  }
  *(_QWORD *)&this->fields.ICON_SCALE_SIZE = 0xC27C00003F59999ALL;
  *(_QWORD *)&this->fields.NORMAL_FONT_SIZE = 0x180000001ELL;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventConquestGetDialog__Close(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventConquestGetDialog__Close_29812864(this, 0LL, v2);
}


void __fastcall EventConquestGetDialog__Close_29812864(
        EventConquestGetDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42EB154 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EventConquestGetDialog_EndClose__, v10, v11, v12);
    byte_42EB154 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 3;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_EventConquestGetDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall EventConquestGetDialog__EndClose(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  EventConquestGetDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall EventConquestGetDialog__EndOpen(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall EventConquestGetDialog__Init(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UILabel_o *itemGetDetailLabel; // x0
  __int64 v18; // x1
  __int64 v19; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v25; // x3
  System_Collections_IEnumerator_c *v26; // x8
  unsigned __int64 v27; // x10
  System_Collections_IEnumerator_c **v28; // x11
  __int64 v29; // x0
  UnityEngine_Component_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v34; // x0
  __int64 v35; // x3
  __int64 v36; // x8
  __int64 v37; // x20
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0

  if ( (byte_42EB151 & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Transform_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42EB151 = 1;
  }
  itemGetDetailLabel = this->fields.itemGetDetailLabel;
  this->fields.state = 0;
  if ( !itemGetDetailLabel )
    goto LABEL_39;
  UILabel__set_text(itemGetDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  itemGetDetailLabel = (UILabel_o *)this->fields.itemIconGrid;
  if ( !itemGetDetailLabel )
    goto LABEL_39;
  itemGetDetailLabel = (UILabel_o *)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)itemGetDetailLabel,
                                      0LL);
  if ( !itemGetDetailLabel )
    goto LABEL_39;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)itemGetDetailLabel, 0LL);
  if ( !Enumerator )
    sub_B5D69C(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        p_offset += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v19);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = (System_Collections_IEnumerator_c **)&v26->_1.interfaceOffsets->offset;
      while ( *(v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v27;
        v28 += 2;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v29 = (__int64)&v26->vtable[*(_DWORD *)v28 + 1].method;
    }
    else
    {
LABEL_18:
      v29 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v25);
    }
    v30 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v29)(
                                       Enumerator,
                                       *(_QWORD *)(v29 + 8));
    if ( !v30 )
      goto LABEL_38;
    v32 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v32
      || (UnityEngine_Transform_c *)v30->klass->_2.typeHierarchy[v32 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B5D990(v30);
LABEL_38:
      sub_B5D69C(v30, v31);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v30, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  }
  v34 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
  if ( v34 )
  {
    v36 = *(_QWORD *)v34;
    v37 = v34;
    if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
    {
      v38 = 0LL;
      v39 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
      {
        ++v38;
        v39 += 4;
        if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
          goto LABEL_32;
      }
      v40 = v36 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_32:
      v40 = sub_AF54C0(v34, System_IDisposable_TypeInfo, 0LL, v35);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v40)(v37, *(_QWORD *)(v40 + 8));
  }
  itemGetDetailLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !itemGetDetailLabel )
LABEL_39:
    sub_B5D69C(itemGetDetailLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemGetDetailLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventConquestGetDialog__OnClickClose(EventConquestGetDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  EventConquestGetDialog_ClickDelegate_o *closeFunc; // x0

  if ( (byte_42EB155 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB155 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_B5D69C(0LL, v5);
    EventConquestGetDialog_ClickDelegate__Invoke(closeFunc, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventConquestGetDialog__Open(
        EventConquestGetDialog_o *this,
        GiftEntity_array *rewards,
        System_String_o *title,
        System_String_o *detail,
        EventConquestGetDialog_ClickDelegate_o *closeCb,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_o *v10; // x22
  GiftEntity_array *v11; // x26
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  void *Instance; // x0
  int64_t UserId; // x1
  int max_length; // w24
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  UserGameEntity_o *v47; // x25
  __int64 v48; // x22
  struct UIGrid_o **p_itemIconGrid; // x28
  int32_t *v50; // x21
  int v51; // w8
  int32_t qp; // w26
  BalanceConfig_c *v53; // x0
  struct UnityEngine_GameObject_o *itemIcon; // x27
  int32_t UserItemMax; // w24
  UnityEngine_GameObject_o *v56; // x27
  UnityEngine_Component_o *v57; // x8
  struct UIGrid_o **v58; // x20
  UnityEngine_Transform_o *v59; // x28
  UnityEngine_Transform_o *transform; // x28
  int v61; // s0
  int32_t v64; // w28
  ItemIconComponent_o *v65; // x27
  const MethodInfo *v66; // x4
  int32_t v67; // w21
  int v68; // w22
  uint16_t Chars; // w0
  int32_t NORMAL_FONT_SIZE; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  int v72; // s0
  System_Action_o *v73; // x20
  __int64 v74; // x0
  System_String_o *v75; // [xsp+0h] [xbp-80h]
  System_String_o *v76; // [xsp+8h] [xbp-78h]
  UserItemMaster_o *v77; // [xsp+10h] [xbp-70h]
  GiftEntity_o **m_Items; // [xsp+18h] [xbp-68h]
  GiftEntity_array *v79; // [xsp+20h] [xbp-60h]
  int v80; // [xsp+2Ch] [xbp-54h]
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4

  v10 = title;
  v11 = rewards;
  if ( (byte_42EB152 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)rewards, (_DWORD)title, detail);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v22, v23, v24);
    sub_B5D5C4(&Method_EventConquestGetDialog_EndOpen__, v25, v26, v27);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___, v28, v29, v30);
    sub_B5D5C4(&NetworkManager_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v34, v35, v36);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v40, v41, v42);
    byte_42EB152 = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCb,
    (System_String_array **)title,
    (System_String_array **)detail,
    (System_Boolean_array **)closeCb,
    (System_Int32_array **)method,
    v6,
    v7);
  if ( !v11 )
    goto LABEL_83;
  max_length = v11->max_length;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  v76 = detail;
  v77 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
  Instance = UserGameMaster__getSelfUserGame(0LL);
  if ( max_length <= 0 )
  {
    p_itemIconGrid = &this->fields.itemIconGrid;
    goto LABEL_52;
  }
  v47 = (UserGameEntity_o *)Instance;
  v75 = v10;
  v48 = 0LL;
  p_itemIconGrid = &this->fields.itemIconGrid;
  m_Items = v11->m_Items;
  v79 = v11;
  v80 = max_length;
  do
  {
    if ( (unsigned int)v48 >= v11->max_length )
    {
      v74 = sub_B5D6C8(Instance);
      sub_B5D668(v74, 0LL);
    }
    v50 = (int32_t *)m_Items[v48];
    if ( !v50 )
      goto LABEL_83;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_83;
    Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 v50[6],
                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_83;
    v51 = *((_DWORD *)Instance + 12);
    if ( v51 <= 4 )
    {
      if ( v51 == 1 )
      {
        if ( !v47 )
          goto LABEL_83;
        qp = v47->fields.qp;
        goto LABEL_34;
      }
      if ( v51 == 2 )
      {
        if ( !v47 )
          goto LABEL_83;
        qp = v47->fields.stone;
        goto LABEL_34;
      }
    }
    else
    {
      switch ( v51 )
      {
        case 5:
          if ( !v47 )
            goto LABEL_83;
          qp = v47->fields.mana;
          goto LABEL_34;
        case 13:
          if ( !v47 )
            goto LABEL_83;
          qp = UserGameEntity__GetFriendPoint(v47, 0LL);
          goto LABEL_34;
        case 22:
          if ( !v47 )
            goto LABEL_83;
          qp = v47->fields.rarePri;
          goto LABEL_34;
      }
    }
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    Instance = v77;
    if ( !v77 )
      goto LABEL_83;
    Instance = UserItemMaster__GetEntityDefinitely(v77, UserId, v50[6], 0LL);
    if ( !Instance )
      goto LABEL_83;
    qp = *((_DWORD *)Instance + 7);
LABEL_34:
    v53 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v53 = BalanceConfig_TypeInfo;
    }
    itemIcon = this->fields.itemIcon;
    UserItemMax = v53->static_fields->UserItemMax;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                 (UnityEngine_UI_Dropdown_DropdownItem_o *)itemIcon,
                 (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_83;
    v56 = (UnityEngine_GameObject_o *)Instance;
    Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
    v57 = (UnityEngine_Component_o *)*p_itemIconGrid;
    if ( !*p_itemIconGrid )
      goto LABEL_83;
    v58 = p_itemIconGrid;
    v59 = (UnityEngine_Transform_o *)Instance;
    Instance = UnityEngine_Component__get_transform(v57, 0LL);
    if ( !v59 )
      goto LABEL_83;
    UnityEngine_Transform__set_parent(v59, (UnityEngine_Transform_o *)Instance, 0LL);
    transform = UnityEngine_GameObject__get_transform(v56, 0LL);
    *(UnityEngine_Vector3_o *)&v61 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform )
      goto LABEL_83;
    UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v61, 0LL);
    Instance = UnityEngine_GameObject__get_transform(v56, 0LL);
    if ( !Instance )
      goto LABEL_83;
    v81.fields.x = this->fields.ICON_SCALE_SIZE;
    v81.fields.y = v81.fields.x;
    v81.fields.z = v81.fields.x;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v81, 0LL);
    Instance = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                 v56,
                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventConquestGetIconComponent___);
    v64 = v50[7] < 0 ? -1 : v50[7];
    if ( !Instance )
      goto LABEL_83;
    v65 = (ItemIconComponent_o *)Instance;
    ItemIconComponent__SetGift((ItemIconComponent_o *)Instance, v50[5], v50[6], v64, 0, 0LL);
    ItemIconComponent__setTypeSpritePositionY(v65, this->fields.TYPE_SPRITE_POS_Y, 0LL);
    EventConquestGetIconComponent__setPossessionCounterLabel(
      (EventConquestGetIconComponent_o *)v65,
      qp,
      v64,
      qp >= UserItemMax,
      v66);
    max_length = v80;
    v11 = v79;
    ++v48;
    p_itemIconGrid = v58;
  }
  while ( (int)v48 < v80 );
  v10 = v75;
LABEL_52:
  Instance = *p_itemIconGrid;
  if ( !*p_itemIconGrid )
    goto LABEL_83;
  UIGrid__set_repositionNow((UIGrid_o *)Instance, 1, 0LL);
  Instance = this->fields.titleLabel;
  if ( !Instance )
    goto LABEL_83;
  UILabel__set_text((UILabel_o *)Instance, v10, 0LL);
  Instance = this->fields.itemGetDetailLabel;
  if ( !Instance )
    goto LABEL_83;
  UILabel__set_text((UILabel_o *)Instance, v76, 0LL);
  if ( !v76 )
    goto LABEL_83;
  if ( v76->fields.m_stringLength < 1 )
  {
    v68 = 0;
  }
  else
  {
    v67 = 0;
    v68 = 0;
    do
    {
      Chars = System_String__get_Chars(v76, v67++, 0LL);
      if ( Chars == 10 )
        ++v68;
    }
    while ( v67 < v76->fields.m_stringLength );
  }
  Instance = this->fields.itemGetDetailLabel;
  if ( v68 < 5 )
  {
    if ( Instance )
    {
      NORMAL_FONT_SIZE = this->fields.NORMAL_FONT_SIZE;
      goto LABEL_68;
    }
LABEL_83:
    sub_B5D69C(Instance, UserId);
  }
  if ( !Instance )
    goto LABEL_83;
  NORMAL_FONT_SIZE = this->fields.SMALL_FONT_SIZE;
LABEL_68:
  UILabel__set_fontSize((UILabel_o *)Instance, NORMAL_FONT_SIZE, 0LL);
  switch ( max_length )
  {
    case 3:
      Instance = this->fields.itemGetDetailLabel;
      if ( !Instance )
        goto LABEL_83;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( v68 < 5 )
      {
        v72 = -1037303808;
        goto LABEL_80;
      }
      goto LABEL_79;
    case 2:
      Instance = this->fields.itemGetDetailLabel;
      if ( !Instance )
        goto LABEL_83;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( v68 < 4 )
      {
        v72 = -1037565952;
        goto LABEL_80;
      }
LABEL_79:
      v72 = -1038352384;
      goto LABEL_80;
    case 1:
      Instance = this->fields.itemGetDetailLabel;
      if ( !Instance )
        goto LABEL_83;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      v72 = -1038090240;
LABEL_80:
      GameObjectExtensions__SetLocalPositionY(gameObject, *(float *)&v72, 0LL);
      break;
  }
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v73 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v73, (Il2CppObject *)this, Method_EventConquestGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v73, 0, 0LL);
}


void __fastcall EventConquestGetDialog__Open_29812652(
        EventConquestGetDialog_o *this,
        EventRewardSetEntity_o *reward,
        System_String_o *detail,
        EventConquestGetDialog_ClickDelegate_o *closeCb,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  System_Action_o *v15; // x20

  if ( (byte_42EB153 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)reward, (_DWORD)detail, closeCb);
    sub_B5D5C4(&Method_EventConquestGetDialog_EndOpen__, v10, v11, v12);
    byte_42EB153 = 1;
  }
  this->fields.closeFunc = closeCb;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCb,
    (System_String_array **)detail,
    (System_String_array **)closeCb,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v14);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_EventConquestGetDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventConquestGetDialog_ClickDelegate___ctor(
        EventConquestGetDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall EventConquestGetDialog_ClickDelegate__BeginInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B5D568(this, &v5, callback, object);
}


void __fastcall EventConquestGetDialog_ClickDelegate__EndInvoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


void __fastcall EventConquestGetDialog_ClickDelegate__Invoke(
        EventConquestGetDialog_ClickDelegate_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8
  __int64 v5; // x23
  EventConquestGetDialog_ClickDelegate_o **v6; // x24
  __int64 v7; // x25
  unsigned int v8; // w22
  __int64 class_0; // x0
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD); // x0
  EventConquestGetDialog_ClickDelegate_o *v18; // x8
  __int64 *v19; // x20
  __int64 v20; // x21
  void (__fastcall *v21)(__int64); // x22
  char v22; // w22
  char v23; // w0
  __int64 v24; // x3
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  EventConquestGetDialog_ClickDelegate_o *v30; // [xsp+8h] [xbp-38h] BYREF

  v30 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v30;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (EventConquestGetDialog_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v18->fields.extra_arg, method, v2);
      if ( (sub_B5D5F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B5D5EC(v20);
      v23 = sub_B5D9F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AF54C0(v19, v26, v27, v24);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B5D674(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AF54C0(v19, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v14)(v19, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v21)(v19, v20);
    goto LABEL_36;
  }
}