void __fastcall BattleViewItemlistComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_421402E & 1) == 0 )
  {
    sub_B0D8A4(&BattleViewItemlistComponent_TypeInfo, v1);
    byte_421402E = 1;
  }
  BattleViewItemlistComponent_TypeInfo->static_fields->defaultColumnMax = 8;
}


void __fastcall BattleViewItemlistComponent___ctor(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  System_Int32_array **v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_421402D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_2459/*"BATTLE_ITEMLIST_NOTGET"*/, v10);
    byte_421402D = 1;
  }
  v11 = (System_Int32_array **)StringLiteral_2459/*"BATTLE_ITEMLIST_NOTGET"*/;
  this->fields.noItemLabelKey = (struct System_String_o *)StringLiteral_2459/*"BATTLE_ITEMLIST_NOTGET"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.noItemLabelKey, v11, v2, v3, v4, v5, v6, v7);
  this->fields.colmax = 5;
  *(_QWORD *)&this->fields.width = 0x42F0000042FA0000LL;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v12,
                                                                                                  v13);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.itemObjectList = (struct System_Collections_Generic_List_GameObject__o *)v14;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.itemObjectList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall BattleViewItemlistComponent__CalcPossessionNum(
        BattleViewItemlistComponent_o *this,
        BattleDropItem_o *battleDropItem,
        int32_t eventId,
        const MethodInfo *method)
{
  BattleViewItemlistComponent_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x4
  int noItemLabelKey; // w8

  v5 = this;
  if ( (byte_4214023 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, battleDropItem);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    this = (BattleViewItemlistComponent_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4214023 = 1;
  }
  if ( !battleDropItem )
    goto LABEL_19;
  if ( !Gift__IsItem_26783148(battleDropItem->fields.type, 0LL) )
    return 0;
  this = (BattleViewItemlistComponent_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this )
    goto LABEL_19;
  v8 = *(_QWORD *)&this->fields.m_CachedPtr;
  this = (BattleViewItemlistComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_19;
  this = (BattleViewItemlistComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_19;
  this = (BattleViewItemlistComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                            battleDropItem->fields.objectId,
                                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_19;
  noItemLabelKey = (int)this->fields.noItemLabelKey;
  if ( (unsigned int)(noItemLabelKey - 3) < 2 )
    return BattleViewItemlistComponent__compareItemId(v5, v8, battleDropItem, v9);
  if ( noItemLabelKey == 22 )
  {
    this = (BattleViewItemlistComponent_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !this )
      goto LABEL_19;
    return LODWORD(this[1].fields.height);
  }
  else
  {
    if ( noItemLabelKey == 5 )
    {
      this = (BattleViewItemlistComponent_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( this )
        return LODWORD(this[1].fields.width) - v5->fields.boostEventItemManaCount;
LABEL_19:
      sub_B0D97C(this);
    }
    return BattleViewItemlistComponent__getUserItemNum(this, v8, battleDropItem, 0, v10);
  }
}


void __fastcall BattleViewItemlistComponent__ChangeLayoutScrollView(
        BattleViewItemlistComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *TitleSpr; // x0
  UnityEngine_Object_o *ScrollViewPanel; // x20
  UIPanel_o *v7; // x20
  float v8; // s4
  float v9; // s5
  float v10; // s6
  float v11; // s7
  UnityEngine_Object_o *ScrollBar; // x20
  struct UIScrollBar_o *v13; // x8
  UIWidget_o *v14; // x20
  struct UIScrollBar_o *v15; // x8
  struct UIScrollBar_o *v16; // x8
  UIWidget_o *v17; // x20
  struct UIScrollBar_o *v18; // x8
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Vector2_o v20; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_421402A & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_421402A = 1;
  }
  TitleSpr = (UnityEngine_Component_o *)this->fields.TitleSpr;
  if ( !TitleSpr )
    goto LABEL_43;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !TitleSpr )
    goto LABEL_43;
  v21.fields.y = 177.3;
  v21.fields.x = 0.0;
  v21.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v21, 0LL);
  ScrollViewPanel = (UnityEngine_Object_o *)this->fields.ScrollViewPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ScrollViewPanel, 0LL, 0LL) )
  {
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_43;
    UIPanel__Refresh((UIPanel_o *)TitleSpr, 0LL);
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_43;
    TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
    if ( !TitleSpr )
      goto LABEL_43;
    v22.fields.y = -146.29;
    v22.fields.x = 0.0;
    v22.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v22, 0LL);
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_43;
    v20.fields.x = -9.41;
    v20.fields.y = -30.504;
    UIPanel__set_clipOffset((UIPanel_o *)TitleSpr, v20, 0LL);
    v28.fields.z = 730.3;
    v28.fields.w = 114.9;
    v7 = this->fields.ScrollViewPanel;
    v28.fields.x = 0.0;
    v28.fields.y = 0.0;
    var40.methodPointer = 0LL;
    var40.invoker_method = 0LL;
    UnityEngine_Vector4___ctor(v28, v8, v9, v10, v11, &var40);
    if ( !v7 )
      goto LABEL_43;
    *(_QWORD *)&v29.fields.x = var40.methodPointer;
    *(_QWORD *)&v29.fields.z = var40.invoker_method;
    UIPanel__set_baseClipRegion(v7, v29, 0LL);
  }
  ScrollBar = (UnityEngine_Object_o *)this->fields.ScrollBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ScrollBar, 0LL, 0LL) )
  {
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollBar;
    if ( TitleSpr )
    {
      TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
      if ( TitleSpr )
      {
        v23.fields.x = 372.0;
        v23.fields.y = -179.0;
        v23.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v23, 0LL);
        v13 = this->fields.ScrollBar;
        if ( v13 )
        {
          TitleSpr = (UnityEngine_Component_o *)v13->fields.mFG;
          if ( TitleSpr )
          {
            TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0LL);
            if ( TitleSpr )
            {
              TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)TitleSpr,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
              if ( TitleSpr )
              {
                v14 = (UIWidget_o *)TitleSpr;
                UIWidget__set_width((UIWidget_o *)TitleSpr, 28, 0LL);
                UIWidget__set_height(v14, 120, 0LL);
                v15 = this->fields.ScrollBar;
                if ( v15 )
                {
                  TitleSpr = (UnityEngine_Component_o *)v15->fields.mFG;
                  if ( TitleSpr )
                  {
                    TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0LL);
                    if ( TitleSpr )
                    {
                      TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)TitleSpr,
                                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                      if ( TitleSpr )
                      {
                        v24.fields.x = 28.0;
                        v24.fields.z = 0.0;
                        v24.fields.y = 120.0;
                        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)TitleSpr, v24, 0LL);
                        v16 = this->fields.ScrollBar;
                        if ( v16 )
                        {
                          TitleSpr = (UnityEngine_Component_o *)v16->fields.mBG;
                          if ( TitleSpr )
                          {
                            TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0LL);
                            if ( TitleSpr )
                            {
                              TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)TitleSpr,
                                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                              if ( TitleSpr )
                              {
                                v17 = (UIWidget_o *)TitleSpr;
                                UIWidget__set_width((UIWidget_o *)TitleSpr, 16, 0LL);
                                UIWidget__set_height(v17, 120, 0LL);
                                v18 = this->fields.ScrollBar;
                                if ( v18 )
                                {
                                  TitleSpr = (UnityEngine_Component_o *)v18->fields.mFG;
                                  if ( TitleSpr )
                                  {
                                    TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                            TitleSpr,
                                                                            0LL);
                                    if ( TitleSpr )
                                    {
                                      TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                              (UnityEngine_GameObject_o *)TitleSpr,
                                                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                                      if ( TitleSpr )
                                      {
                                        v25.fields.x = 16.0;
                                        v25.fields.z = 0.0;
                                        v25.fields.y = 120.0;
                                        UnityEngine_BoxCollider__set_size(
                                          (UnityEngine_BoxCollider_o *)TitleSpr,
                                          v25,
                                          0LL);
                                        goto LABEL_38;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_43:
    sub_B0D97C(TitleSpr);
  }
LABEL_38:
  TitleSpr = (UnityEngine_Component_o *)this->fields.notgetLabel;
  if ( !TitleSpr )
    goto LABEL_43;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !TitleSpr )
    goto LABEL_43;
  v26.fields.y = -134.0;
  v26.fields.x = 0.0;
  v26.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v26, 0LL);
  TitleSpr = (UnityEngine_Component_o *)this->fields.rewardSpr;
  if ( !TitleSpr )
    goto LABEL_43;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !TitleSpr )
    goto LABEL_43;
  v27.fields.y = -91.0;
  v27.fields.x = 0.0;
  v27.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v27, 0LL);
}


void __fastcall BattleViewItemlistComponent__ClearObj(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *itemObjectList; // x20
  unsigned __int64 v7; // x21
  UnityEngine_Object_o *v8; // x20

  v2 = this;
  if ( (byte_4214027 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    this = (BattleViewItemlistComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4214027 = 1;
  }
  itemObjectList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->fields.itemObjectList;
  if ( !itemObjectList )
LABEL_12:
    sub_B0D97C(this);
  v7 = 0LL;
  while ( (__int64)v7 < itemObjectList->fields._size )
  {
    if ( v7 >= (unsigned int)itemObjectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v8 = (UnityEngine_Object_o *)itemObjectList->fields._items->m_Items[v7];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v8, 0LL);
    itemObjectList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->fields.itemObjectList;
    ++v7;
    if ( !itemObjectList )
      goto LABEL_12;
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    itemObjectList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
}


void __fastcall BattleViewItemlistComponent__DefaultLayoutScrollView(
        BattleViewItemlistComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *TitleSpr; // x0
  UnityEngine_Object_o *ScrollViewPanel; // x20
  UIPanel_o *v7; // x20
  float v8; // s4
  float v9; // s5
  float v10; // s6
  float v11; // s7
  UnityEngine_Object_o *ScrollBar; // x20
  struct UIScrollBar_o *v13; // x8
  UIWidget_o *v14; // x20
  struct UIScrollBar_o *v15; // x8
  struct UIScrollBar_o *v16; // x8
  UIWidget_o *v17; // x20
  struct UIScrollBar_o *v18; // x8
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Vector2_o v20; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4214029 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_4214029 = 1;
  }
  TitleSpr = (UnityEngine_Component_o *)this->fields.TitleSpr;
  if ( !TitleSpr )
    goto LABEL_43;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !TitleSpr )
    goto LABEL_43;
  v21.fields.y = 189.3;
  v21.fields.x = 0.0;
  v21.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v21, 0LL);
  ScrollViewPanel = (UnityEngine_Object_o *)this->fields.ScrollViewPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ScrollViewPanel, 0LL, 0LL) )
  {
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_43;
    UIPanel__Refresh((UIPanel_o *)TitleSpr, 0LL);
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_43;
    TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
    if ( !TitleSpr )
      goto LABEL_43;
    v22.fields.y = -88.4;
    v22.fields.x = 0.0;
    v22.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v22, 0LL);
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_43;
    v20.fields.x = -9.41;
    v20.fields.y = -62.9;
    UIPanel__set_clipOffset((UIPanel_o *)TitleSpr, v20, 0LL);
    v28.fields.z = 730.3;
    v28.fields.w = 184.9;
    v7 = this->fields.ScrollViewPanel;
    v28.fields.x = 0.0;
    v28.fields.y = 0.0;
    var40.methodPointer = 0LL;
    var40.invoker_method = 0LL;
    UnityEngine_Vector4___ctor(v28, v8, v9, v10, v11, &var40);
    if ( !v7 )
      goto LABEL_43;
    *(_QWORD *)&v29.fields.x = var40.methodPointer;
    *(_QWORD *)&v29.fields.z = var40.invoker_method;
    UIPanel__set_baseClipRegion(v7, v29, 0LL);
  }
  ScrollBar = (UnityEngine_Object_o *)this->fields.ScrollBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ScrollBar, 0LL, 0LL) )
  {
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollBar;
    if ( TitleSpr )
    {
      TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
      if ( TitleSpr )
      {
        v23.fields.x = 372.0;
        v23.fields.y = -147.0;
        v23.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v23, 0LL);
        v13 = this->fields.ScrollBar;
        if ( v13 )
        {
          TitleSpr = (UnityEngine_Component_o *)v13->fields.mFG;
          if ( TitleSpr )
          {
            TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0LL);
            if ( TitleSpr )
            {
              TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)TitleSpr,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
              if ( TitleSpr )
              {
                v14 = (UIWidget_o *)TitleSpr;
                UIWidget__set_width((UIWidget_o *)TitleSpr, 28, 0LL);
                UIWidget__set_height(v14, 180, 0LL);
                v15 = this->fields.ScrollBar;
                if ( v15 )
                {
                  TitleSpr = (UnityEngine_Component_o *)v15->fields.mFG;
                  if ( TitleSpr )
                  {
                    TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0LL);
                    if ( TitleSpr )
                    {
                      TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)TitleSpr,
                                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                      if ( TitleSpr )
                      {
                        v24.fields.x = 28.0;
                        v24.fields.z = 0.0;
                        v24.fields.y = 160.0;
                        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)TitleSpr, v24, 0LL);
                        v16 = this->fields.ScrollBar;
                        if ( v16 )
                        {
                          TitleSpr = (UnityEngine_Component_o *)v16->fields.mBG;
                          if ( TitleSpr )
                          {
                            TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0LL);
                            if ( TitleSpr )
                            {
                              TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)TitleSpr,
                                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                              if ( TitleSpr )
                              {
                                v17 = (UIWidget_o *)TitleSpr;
                                UIWidget__set_width((UIWidget_o *)TitleSpr, 16, 0LL);
                                UIWidget__set_height(v17, 180, 0LL);
                                v18 = this->fields.ScrollBar;
                                if ( v18 )
                                {
                                  TitleSpr = (UnityEngine_Component_o *)v18->fields.mFG;
                                  if ( TitleSpr )
                                  {
                                    TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                            TitleSpr,
                                                                            0LL);
                                    if ( TitleSpr )
                                    {
                                      TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                              (UnityEngine_GameObject_o *)TitleSpr,
                                                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                                      if ( TitleSpr )
                                      {
                                        v25.fields.x = 16.0;
                                        v25.fields.z = 0.0;
                                        v25.fields.y = 160.0;
                                        UnityEngine_BoxCollider__set_size(
                                          (UnityEngine_BoxCollider_o *)TitleSpr,
                                          v25,
                                          0LL);
                                        goto LABEL_38;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_43:
    sub_B0D97C(TitleSpr);
  }
LABEL_38:
  TitleSpr = (UnityEngine_Component_o *)this->fields.notgetLabel;
  if ( !TitleSpr )
    goto LABEL_43;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !TitleSpr )
    goto LABEL_43;
  v26.fields.y = -74.0;
  v26.fields.x = 0.0;
  v26.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v26, 0LL);
  TitleSpr = (UnityEngine_Component_o *)this->fields.rewardSpr;
  if ( !TitleSpr )
    goto LABEL_43;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !TitleSpr )
    goto LABEL_43;
  v27.fields.y = -31.0;
  v27.fields.x = 0.0;
  v27.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v27, 0LL);
}


void __fastcall BattleViewItemlistComponent__Reposition(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *listRoot; // x0

  if ( (byte_421402B & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIGrid___, method);
    byte_421402B = 1;
  }
  listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !listRoot
    || (listRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                listRoot,
                                                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
  {
    sub_B0D97C(listRoot);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))listRoot->klass[1]._1.castClass)(
    listRoot,
    listRoot->klass[1]._1.declaringType);
}


void __fastcall BattleViewItemlistComponent__ResetScrollBarPoisition(
        BattleViewItemlistComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *ScrollBar; // x20
  UIProgressBar_o *v4; // x0

  if ( (byte_421402C & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421402C = 1;
  }
  ScrollBar = (UnityEngine_Object_o *)this->fields.ScrollBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ScrollBar, 0LL, 0LL) )
  {
    v4 = (UIProgressBar_o *)this->fields.ScrollBar;
    if ( !v4 )
      sub_B0D97C(0LL);
    UIProgressBar__set_value(v4, 0.0, 0LL);
  }
}


void __fastcall BattleViewItemlistComponent__SetBattleDropItemComponent(
        BattleViewItemlistComponent_o *this,
        BattleDropItemComponent_o *battleDropItemComponent,
        BattleDropItem_o *dropItem,
        BattleDropItemComponent_ClickDelegate_o *callback,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( !battleDropItemComponent )
    sub_B0D97C(this);
  BattleDropItemComponent__Set(battleDropItemComponent, dropItem, 0LL);
  battleDropItemComponent->fields.callbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&battleDropItemComponent->fields.callbackFunc,
    (System_Int32_array **)callback,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void __fastcall BattleViewItemlistComponent__SetBattleDropItemComponentEx(
        BattleViewItemlistComponent_o *this,
        BattleDropItemComponent_o *battleDropItemComponent,
        BattleDropItem_o *dropItem,
        BattleDropItemComponent_ClickDelegate_o *callback,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  v9 = BattleViewItemlistComponent__CalcPossessionNum(this, dropItem, (int32_t)dropItem, (const MethodInfo *)callback);
  if ( !battleDropItemComponent )
    sub_B0D97C(v9);
  BattleDropItemComponent__Set_22175584(battleDropItemComponent, dropItem, v9, 0LL);
  battleDropItemComponent->fields.callbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&battleDropItemComponent->fields.callbackFunc,
    (System_Int32_array **)callback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleViewItemlistComponent__SwitchShowNumMode(
        BattleViewItemlistComponent_o *this,
        bool isShowPossessionNum,
        const MethodInfo *method)
{
  BattleViewItemlistComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x23
  __int64 v8; // x21
  int size; // w8

  v4 = this;
  if ( (byte_4214028 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, isShowPossessionNum);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    this = (BattleViewItemlistComponent_o *)sub_B0D8A4(
                                              &Method_System_Collections_Generic_List_GameObject__get_Item__,
                                              v6);
    byte_4214028 = 1;
  }
  itemObjectList = v4->fields.itemObjectList;
  if ( !itemObjectList )
LABEL_14:
    sub_B0D97C(this);
  v8 = 0LL;
  while ( 1 )
  {
    size = itemObjectList->fields._size;
    if ( (int)v8 >= size )
      break;
    if ( size <= (unsigned int)v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    this = (BattleViewItemlistComponent_o *)itemObjectList->fields._items->m_Items[v8];
    if ( this )
    {
      this = (BattleViewItemlistComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                (UnityEngine_GameObject_o *)this,
                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( this )
      {
        if ( isShowPossessionNum )
          BattleDropItemComponent__ShowPossessionNum((BattleDropItemComponent_o *)this, 0LL);
        else
          BattleDropItemComponent__ShowDropNum((BattleDropItemComponent_o *)this, 0LL);
        itemObjectList = v4->fields.itemObjectList;
        ++v8;
        if ( itemObjectList )
          continue;
      }
    }
    goto LABEL_14;
  }
}


int32_t __fastcall BattleViewItemlistComponent__compareItemId(
        BattleViewItemlistComponent_o *this,
        int64_t userId,
        BattleDropItem_o *battleDropItem,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  struct QuestRewardInfo_array *rewardInfos_k__BackingField; // x10
  int max_length; // w8
  __int64 v7; // x9
  QuestRewardInfo_o **m_Items; // x10
  QuestRewardInfo_o *v9; // x11
  int32_t num; // w3
  __int64 v12; // x0

  rewardInfos_k__BackingField = this->fields._rewardInfos_k__BackingField;
  if ( rewardInfos_k__BackingField && (max_length = rewardInfos_k__BackingField->max_length, max_length >= 1) )
  {
    v7 = 0LL;
    m_Items = rewardInfos_k__BackingField->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v7 >= max_length )
      {
        v12 = sub_B0D9A8(this);
        sub_B0D948(v12, 0LL);
      }
      if ( !battleDropItem || (v9 = m_Items[v7]) == 0LL )
        sub_B0D97C(this);
      if ( battleDropItem->fields.objectId == v9->fields.objectId )
        break;
      if ( (int)++v7 >= max_length )
        goto LABEL_9;
    }
    num = v9->fields.num;
  }
  else
  {
LABEL_9:
    num = 0;
  }
  return BattleViewItemlistComponent__getUserItemNum(this, userId, battleDropItem, num, v4);
}


int32_t __fastcall BattleViewItemlistComponent__getUserItemNum(
        BattleViewItemlistComponent_o *this,
        int64_t userId,
        BattleDropItem_o *battleDropItem,
        int32_t questClearItemSubtraction,
        const MethodInfo *method)
{
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4214024 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, userId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4214024 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
  entity = 0LL;
  if ( !battleDropItem || !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                (UserItemMaster_o *)Instance,
                                &entity,
                                userId,
                                battleDropItem->fields.objectId,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num - questClearItemSubtraction;
LABEL_11:
    sub_B0D97C(Instance);
  }
  return 0;
}


QuestRewardInfo_array *__fastcall BattleViewItemlistComponent__get_rewardInfos(
        BattleViewItemlistComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._rewardInfos_k__BackingField;
}


void __fastcall BattleViewItemlistComponent__setEventResultCount(
        BattleViewItemlistComponent_o *this,
        int32_t boostEventItemManaCount,
        QuestRewardInfo_array *rewardInfos,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct QuestRewardInfo_array **p_rewardInfos_k__BackingField; // x20

  this->fields._rewardInfos_k__BackingField = rewardInfos;
  p_rewardInfos_k__BackingField = &this->fields._rewardInfos_k__BackingField;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._rewardInfos_k__BackingField,
    (System_Int32_array **)rewardInfos,
    (System_String_array **)rewardInfos,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  *((_DWORD *)p_rewardInfos_k__BackingField - 3) = boostEventItemManaCount;
}


void __fastcall BattleViewItemlistComponent__setHide(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *listRoot; // x20
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4214025 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4214025 = 1;
  }
  listRoot = (UnityEngine_Object_o *)this->fields.listRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(listRoot, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B0D97C(gameObject);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleViewItemlistComponent__setListData(
        BattleViewItemlistComponent_o *this,
        BattleDropItem_array *itemlist,
        int32_t eventId,
        BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *setAction,
        BattleDropItemComponent_ClickDelegate_o *callBack,
        int32_t setColMax,
        const MethodInfo *method)
{
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
  char *itemObjectList; // x0
  Il2CppObject *current; // x25
  int32_t colmax; // w21
  float width; // s11
  float height; // s12
  BattleViewItemlistComponent_c *v27; // x0
  float v28; // s0
  float v29; // s1
  float v30; // s2
  float v31; // s10
  float v32; // s13
  float v33; // s8
  float v34; // s9
  System_Int32_array **ComponentInParent_UIScrollView; // x0
  __int64 v36; // x8
  System_Int32_array **v37; // x25
  unsigned __int64 v38; // x21
  float v39; // s10
  UnityEngine_GameObject_o *v40; // x26
  UnityEngine_Transform_o *transform; // x27
  float v42; // s0
  float v43; // s1
  float v44; // s2
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  BattleDropItemComponent_o *v51; // x27
  UnityEngine_Object_o *v52; // x21
  UILabel_o *v53; // x21
  System_String_o *v54; // x22
  char v55; // w1
  UILabel_o *notgetLabel; // x20
  System_String_o *noItemLabelKey; // x21
  __int64 v58; // x0
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+40h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4214022 & 1) == 0 )
  {
    sub_B0D8A4(&BattleViewItemlistComponent_TypeInfo, itemlist);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInParent_UIScrollView___, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v13);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, v14);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Clear__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v18);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v19);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v20);
    sub_B0D8A4(&StringLiteral_2460/*"BATTLE_ITEM_DISP_COLUMN"*/, v21);
    byte_4214022 = 1;
  }
  memset(&v63, 0, sizeof(v63));
  itemObjectList = (char *)this->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_58;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v62,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemObjectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v63 = v62;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v63,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v63.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v63,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  itemObjectList = (char *)this->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_58;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)itemObjectList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  colmax = this->fields.colmax;
  width = this->fields.width;
  height = this->fields.height;
  if ( !setColMax )
  {
    setColMax = ConstantMaster__getValue((System_String_o *)StringLiteral_2460/*"BATTLE_ITEM_DISP_COLUMN"*/, 0LL);
    if ( setColMax <= 0 )
    {
      v27 = BattleViewItemlistComponent_TypeInfo;
      if ( (BYTE3(BattleViewItemlistComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleViewItemlistComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleViewItemlistComponent_TypeInfo);
        v27 = BattleViewItemlistComponent_TypeInfo;
      }
      setColMax = v27->static_fields->defaultColumnMax;
    }
  }
  *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Vector3__get_zero(0LL);
  if ( setColMax >= 1 )
  {
    v31 = 1.0;
    v32 = (float)this->fields.colmax / (float)setColMax;
    v33 = (float)(this->fields.width - (float)(this->fields.width * v32)) * 0.5;
    width = width * v32;
    height = height * v32;
    v34 = (float)(this->fields.height - (float)(this->fields.height * v32)) * -0.5;
    if ( itemlist )
      goto LABEL_19;
LABEL_49:
    notgetLabel = this->fields.notgetLabel;
    noItemLabelKey = this->fields.noItemLabelKey;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    itemObjectList = (char *)LocalizationManager__Get(noItemLabelKey, 0LL);
    if ( notgetLabel )
    {
      UILabel__set_text(notgetLabel, (System_String_o *)itemObjectList, 0LL);
      itemObjectList = (char *)this->fields.notgetLabel;
      if ( itemObjectList )
      {
        itemObjectList = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemObjectList, 0LL);
        if ( itemObjectList )
        {
          v55 = 1;
          goto LABEL_56;
        }
      }
    }
LABEL_58:
    sub_B0D97C(itemObjectList);
  }
  v33 = v28;
  v34 = v29;
  v31 = v30;
  v32 = 1.0;
  setColMax = colmax;
  if ( !itemlist )
    goto LABEL_49;
LABEL_19:
  itemObjectList = (char *)this->fields.listRoot;
  if ( !itemObjectList )
    goto LABEL_58;
  ComponentInParent_UIScrollView = (System_Int32_array **)UnityEngine_Component__GetComponentInParent_UIScrollView_(
                                                            (UnityEngine_Component_o *)itemObjectList,
                                                            (const MethodInfo_170E904 *)Method_UnityEngine_Component_GetComponentInParent_UIScrollView___);
  v36 = *(_QWORD *)&itemlist->max_length;
  if ( (int)v36 >= 1 )
  {
    v37 = ComponentInParent_UIScrollView;
    v38 = 0LL;
    v39 = 0.0 - v31;
    do
    {
      if ( v38 >= (unsigned int)v36 )
      {
LABEL_59:
        v58 = sub_B0D9A8(ComponentInParent_UIScrollView);
        sub_B0D948(v58, 0LL);
      }
      itemObjectList = (char *)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 this->fields.prefabResultItem,
                                 this->fields.listRoot,
                                 0LL,
                                 0LL);
      if ( !itemObjectList )
        goto LABEL_58;
      v40 = (UnityEngine_GameObject_o *)itemObjectList;
      itemObjectList = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)itemObjectList, 0LL);
      if ( !itemObjectList )
        goto LABEL_58;
      v64.fields.x = (float)(width * (float)((int)v38 + -setColMax * ((int)v38 / setColMax))) - v33;
      v64.fields.y = (float)-(float)(height * (float)((int)v38 / setColMax)) - v34;
      v64.fields.z = v39;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)itemObjectList, v64, 0LL);
      transform = UnityEngine_GameObject__get_transform(v40, 0LL);
      *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Vector3__get_one(0LL);
      if ( !transform )
        goto LABEL_58;
      v65.fields.x = v32 * v42;
      v65.fields.y = v32 * v43;
      v65.fields.z = v32 * v44;
      UnityEngine_Transform__set_localScale(transform, v65, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v40, 0LL, 0LL) )
      {
        itemObjectList = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   v40,
                                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
        if ( !itemObjectList )
          goto LABEL_58;
        *((_QWORD *)itemObjectList + 3) = v37;
        sub_B0D840((BattleServantConfConponent_o *)(itemObjectList + 24), v37, v45, v46, v47, v48, v49, v50);
        ComponentInParent_UIScrollView = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v40,
                                                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
        if ( v38 >= itemlist->max_length )
          goto LABEL_59;
        v51 = (BattleDropItemComponent_o *)ComponentInParent_UIScrollView;
        itemObjectList = (char *)setAction;
        if ( !setAction )
          goto LABEL_58;
        BattleViewItemlistComponent_BattleDropItemComponentSetAction__Invoke(
          setAction,
          v51,
          itemlist->m_Items[v38],
          callBack,
          eventId,
          0LL);
        if ( !v51 )
          goto LABEL_58;
        BattleDropItemComponent__Show(v51, 0LL);
      }
      itemObjectList = (char *)this->fields.itemObjectList;
      if ( !itemObjectList )
        goto LABEL_58;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemObjectList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
      LODWORD(v36) = itemlist->max_length;
      ++v38;
    }
    while ( (__int64)v38 < (int)v36 );
  }
  v52 = (UnityEngine_Object_o *)this->fields.notgetLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v52, 0LL, 0LL) )
  {
    v53 = this->fields.notgetLabel;
    v54 = this->fields.noItemLabelKey;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    itemObjectList = (char *)LocalizationManager__Get(v54, 0LL);
    if ( v53 )
    {
      UILabel__set_text(v53, (System_String_o *)itemObjectList, 0LL);
      itemObjectList = (char *)this->fields.notgetLabel;
      if ( itemObjectList )
      {
        itemObjectList = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemObjectList, 0LL);
        if ( itemObjectList )
        {
          v55 = itemlist->max_length == 0;
LABEL_56:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemObjectList, v55, 0LL);
          return;
        }
      }
    }
    goto LABEL_58;
  }
}


void __fastcall BattleViewItemlistComponent__setListDataCustomColumn(
        BattleViewItemlistComponent_o *this,
        BattleDropItem_array *itemlist,
        BattleDropItemComponent_ClickDelegate_o *callBack,
        int32_t setColMax,
        const MethodInfo *method)
{
  __int64 v9; // x1
  BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *v10; // x23
  const MethodInfo *v11; // x6

  if ( (byte_4214020 & 1) == 0 )
  {
    sub_B0D8A4(&BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo, itemlist);
    sub_B0D8A4(&Method_BattleViewItemlistComponent_SetBattleDropItemComponent__, v9);
    byte_4214020 = 1;
  }
  v10 = (BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *)sub_B0D974(
                                                                            BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo,
                                                                            itemlist,
                                                                            callBack);
  BattleViewItemlistComponent_BattleDropItemComponentSetAction___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleViewItemlistComponent_SetBattleDropItemComponent__,
    0LL);
  BattleViewItemlistComponent__setListData(this, itemlist, -1, v10, callBack, setColMax, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleViewItemlistComponent__setListDataCustomColumn_23830428(
        BattleViewItemlistComponent_o *this,
        BattleDropItem_array *itemlist,
        int32_t eventId,
        BattleDropItemComponent_ClickDelegate_o *callBack,
        int32_t setColMax,
        const MethodInfo *method)
{
  __int64 v11; // x1
  BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *v12; // x24
  const MethodInfo *v13; // x6

  if ( (byte_4214021 & 1) == 0 )
  {
    sub_B0D8A4(&BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo, itemlist);
    sub_B0D8A4(&Method_BattleViewItemlistComponent_SetBattleDropItemComponentEx__, v11);
    byte_4214021 = 1;
  }
  v12 = (BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *)sub_B0D974(
                                                                            BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo,
                                                                            itemlist,
                                                                            *(_QWORD *)&eventId);
  BattleViewItemlistComponent_BattleDropItemComponentSetAction___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleViewItemlistComponent_SetBattleDropItemComponentEx__,
    0LL);
  BattleViewItemlistComponent__setListData(this, itemlist, eventId, v12, callBack, setColMax, v13);
}


void __fastcall BattleViewItemlistComponent__setShow(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *listRoot; // x20
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4214026 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4214026 = 1;
  }
  listRoot = (UnityEngine_Object_o *)this->fields.listRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(listRoot, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B0D97C(gameObject);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
}


void __fastcall BattleViewItemlistComponent__set_rewardInfos(
        BattleViewItemlistComponent_o *this,
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._rewardInfos_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._rewardInfos_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleViewItemlistComponent_BattleDropItemComponentSetAction___ctor(
        BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *this,
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
  sub_B0D840(p_method, object);
}


System_IAsyncResult_o *__fastcall BattleViewItemlistComponent_BattleDropItemComponentSetAction__BeginInvoke(
        BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *this,
        BattleDropItemComponent_o *battleDropItemComponent,
        BattleDropItem_o *dropItem,
        BattleDropItemComponent_ClickDelegate_o *callback,
        int32_t eventId,
        System_AsyncCallback_o *a6,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v15[5]; // [xsp+8h] [xbp-68h] BYREF
  int32_t v16; // [xsp+3Ch] [xbp-34h] BYREF

  v16 = eventId;
  if ( (byte_4211F0B & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, battleDropItemComponent);
    byte_4211F0B = 1;
  }
  v15[4] = 0LL;
  v15[0] = (__int64)battleDropItemComponent;
  v15[1] = (__int64)dropItem;
  v15[2] = (__int64)callback;
  v15[3] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  return (System_IAsyncResult_o *)sub_B0D848(this, v15, a6, object);
}


void __fastcall BattleViewItemlistComponent_BattleDropItemComponentSetAction__EndInvoke(
        BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


void __fastcall BattleViewItemlistComponent_BattleDropItemComponentSetAction__Invoke(
        BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *this,
        BattleDropItemComponent_o *battleDropItemComponent,
        BattleDropItem_o *dropItem,
        BattleDropItemComponent_ClickDelegate_o *callback,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v6; // x8
  __int64 v11; // x27
  BattleViewItemlistComponent_BattleDropItemComponentSetAction_o **v12; // x28
  __int64 i; // x22
  unsigned int v14; // w25
  __int64 class_0; // x0
  BattleDropItemComponent_c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  unsigned int v21; // w26
  __int64 v22; // x0
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  _DWORD *v25; // x11
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x0
  void (__fastcall **v29)(BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, _QWORD); // x0
  __int64 v30; // x0
  void (__fastcall **v31)(__int64 *, BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, _QWORD); // x0
  BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *v32; // x8
  __int64 v33; // x24
  __int64 *v34; // x25
  void (__fastcall *v35)(BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, __int64); // x26
  char v36; // w0
  int v37; // w8
  char v38; // w26
  char v39; // w0
  __int64 v40; // x8
  __int64 v41; // x1
  __int64 v42; // x2
  unsigned __int64 v43; // x10
  _DWORD *v44; // x11
  char v45; // w25
  char v46; // w0
  BattleDropItemComponent_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *v53; // [xsp+8h] [xbp-58h] BYREF

  v53 = this;
  v6 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v6 )
  {
    v12 = &v53;
    v11 = 1LL;
    goto LABEL_5;
  }
  v11 = *(_QWORD *)(v6 + 24);
  if ( v11 )
  {
    v12 = (BattleViewItemlistComponent_BattleDropItemComponentSetAction_o **)(v6 + 32);
LABEL_5:
    for ( i = 0LL; i != v11; ++i )
    {
      v32 = v12[i];
      v34 = *(__int64 **)&v32->fields.method;
      v33 = *(_QWORD *)&v32->fields.extra_arg;
      v35 = *(void (__fastcall **)(BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, __int64))&v32->fields.method_ptr;
      if ( *(__int16 *)(v33 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v32->fields.extra_arg, battleDropItemComponent, dropItem, callback);
      v36 = sub_B0D8D4(v33);
      v37 = *(unsigned __int8 *)(v33 + 74);
      if ( (v36 & 1) != 0 )
      {
        if ( v37 == 4 )
          goto LABEL_58;
      }
      else
      {
        if ( v37 != 4 )
        {
          if ( *(__int16 *)(v33 + 72) != -1 && this->fields.m_target )
          {
            v45 = sub_B0D8CC(v33);
            v46 = sub_B0DCD0(v33);
            if ( (v45 & 1) != 0 )
            {
              if ( (v46 & 1) != 0 )
              {
                klass = battleDropItemComponent->klass;
                v48 = *(_QWORD *)(v33 + 24);
                v49 = *(unsigned __int16 *)(v33 + 72);
                if ( *(_WORD *)&battleDropItemComponent->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&battleDropItemComponent->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v28 = sub_AA67A0(battleDropItemComponent, v48, v49);
                }
                v20 = *(_QWORD *)(v28 + 8);
              }
              else
              {
                v20 = *((_QWORD *)&battleDropItemComponent->klass->vtable._1_Finalize.methodPtr
                      + 2 * *(unsigned __int16 *)(v33 + 72));
              }
              v29 = (void (__fastcall **)(BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, _QWORD))sub_B0D954(v20, v33);
              (*v29)(battleDropItemComponent, dropItem, callback, (unsigned int)eventId, v29);
            }
            else
            {
              v14 = *(unsigned __int16 *)(v33 + 72);
              if ( (v46 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v33);
                v16 = battleDropItemComponent->klass;
                if ( *(_WORD *)&battleDropItemComponent->klass->_2.bitflags1 )
                {
                  v17 = 0LL;
                  v18 = &v16->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v18 - 1) != class_0 )
                  {
                    ++v17;
                    v18 += 4;
                    if ( v17 >= *(unsigned __int16 *)&battleDropItemComponent->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v19 = (__int64)(&v16->vtable._0_Equals.method + 2 * (int)(*v18 + v14));
                }
                else
                {
LABEL_11:
                  v19 = sub_AA67A0(battleDropItemComponent, class_0, v14);
                }
                (*(void (__fastcall **)(BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, _QWORD))v19)(
                  battleDropItemComponent,
                  dropItem,
                  callback,
                  (unsigned int)eventId,
                  *(_QWORD *)(v19 + 8));
              }
              else
              {
                (*((void (__fastcall **)(BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, _QWORD))&battleDropItemComponent->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v33 + 72)))(
                  battleDropItemComponent,
                  dropItem,
                  callback,
                  (unsigned int)eventId,
                  *((_QWORD *)&battleDropItemComponent->klass->vtable._1_Finalize.methodPtr
                  + 2 * *(unsigned __int16 *)(v33 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v35(battleDropItemComponent, dropItem, callback, (unsigned int)eventId, v33);
          continue;
        }
        if ( !v34 )
          goto LABEL_58;
        if ( *(__int16 *)(v33 + 72) != -1 && (*(_BYTE *)(*v34 + 277) & 1) == 0 && this->fields.m_target )
        {
          v38 = sub_B0D8CC(v33);
          v39 = sub_B0DCD0(v33);
          if ( (v38 & 1) != 0 )
          {
            if ( (v39 & 1) != 0 )
            {
              v40 = *v34;
              v41 = *(_QWORD *)(v33 + 24);
              v42 = *(unsigned __int16 *)(v33 + 72);
              if ( *(_WORD *)(*v34 + 298) )
              {
                v43 = 0LL;
                v44 = (_DWORD *)(*(_QWORD *)(v40 + 176) + 8LL);
                while ( *((_QWORD *)v44 - 1) != v41 )
                {
                  ++v43;
                  v44 += 4;
                  if ( v43 >= *(unsigned __int16 *)(*v34 + 298) )
                    goto LABEL_48;
                }
                v30 = v40 + 16LL * (*v44 + (int)v42) + 312;
              }
              else
              {
LABEL_48:
                v30 = sub_AA67A0(v34, v41, v42);
              }
              v27 = *(_QWORD *)(v30 + 8);
            }
            else
            {
              v27 = *(_QWORD *)(*v34 + 16LL * *(unsigned __int16 *)(v33 + 72) + 320);
            }
            v31 = (void (__fastcall **)(__int64 *, BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, _QWORD))sub_B0D954(v27, v33);
            (*v31)(v34, battleDropItemComponent, dropItem, callback, (unsigned int)eventId, v31);
          }
          else
          {
            v21 = *(unsigned __int16 *)(v33 + 72);
            if ( (v39 & 1) != 0 )
            {
              v22 = j_il2cpp_method_get_class_0(v33);
              v23 = *v34;
              if ( *(_WORD *)(*v34 + 298) )
              {
                v24 = 0LL;
                v25 = (_DWORD *)(*(_QWORD *)(v23 + 176) + 8LL);
                while ( *((_QWORD *)v25 - 1) != v22 )
                {
                  ++v24;
                  v25 += 4;
                  if ( v24 >= *(unsigned __int16 *)(*v34 + 298) )
                    goto LABEL_19;
                }
                v26 = v23 + 16LL * (int)(*v25 + v21) + 312;
              }
              else
              {
LABEL_19:
                v26 = sub_AA67A0(v34, v22, v21);
              }
              (*(void (__fastcall **)(__int64 *, BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, _QWORD))v26)(
                v34,
                battleDropItemComponent,
                dropItem,
                callback,
                (unsigned int)eventId,
                *(_QWORD *)(v26 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, _QWORD))(*v34 + 16LL * *(unsigned __int16 *)(v33 + 72) + 312))(
                v34,
                battleDropItemComponent,
                dropItem,
                callback,
                (unsigned int)eventId,
                *(_QWORD *)(*v34 + 16LL * *(unsigned __int16 *)(v33 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, __int64))v35)(
        v34,
        battleDropItemComponent,
        dropItem,
        callback,
        (unsigned int)eventId,
        v33);
    }
  }
}