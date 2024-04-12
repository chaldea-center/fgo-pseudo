void __fastcall BattleViewItemlistComponent___cctor(const MethodInfo *method)
{
  if ( (byte_42AFC88 & 1) == 0 )
  {
    sub_B52984(&BattleViewItemlistComponent_TypeInfo);
    byte_42AFC88 = 1;
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
  System_Int32_array **v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42AFC87 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B52984(&StringLiteral_2480/*"BATTLE_ITEMLIST_NOTGET"*/);
    byte_42AFC87 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_2480/*"BATTLE_ITEMLIST_NOTGET"*/;
  this->fields.noItemLabelKey = (struct System_String_o *)StringLiteral_2480/*"BATTLE_ITEMLIST_NOTGET"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.noItemLabelKey, v9, v2, v3, v4, v5, v6, v7);
  this->fields.colmax = 5;
  *(_QWORD *)&this->fields.width = 0x42F0000042FA0000LL;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.itemObjectList = (struct System_Collections_Generic_List_GameObject__o *)v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.itemObjectList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall BattleViewItemlistComponent__CalcPossessionNum(
        BattleViewItemlistComponent_o *this,
        BattleDropItem_o *battleDropItem,
        int32_t eventId,
        const MethodInfo *method)
{
  BattleViewItemlistComponent_o *v5; // x19
  int64_t v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x4
  int noItemLabelKey; // w8

  v5 = this;
  if ( (byte_42AFC7D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    this = (BattleViewItemlistComponent_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AFC7D = 1;
  }
  if ( !battleDropItem )
    goto LABEL_19;
  if ( !Gift__IsItem_28236268(battleDropItem->fields.type, 0LL) )
    return 0;
  this = (BattleViewItemlistComponent_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this )
    goto LABEL_19;
  v6 = *(_QWORD *)&this->fields.m_CachedPtr;
  this = (BattleViewItemlistComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_19;
  this = (BattleViewItemlistComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_19;
  this = (BattleViewItemlistComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                            battleDropItem->fields.objectId,
                                            (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_19;
  noItemLabelKey = (int)this->fields.noItemLabelKey;
  if ( (unsigned int)(noItemLabelKey - 3) < 2 )
    return BattleViewItemlistComponent__compareItemId(v5, v6, battleDropItem, v7);
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
      sub_B52A5C(this, battleDropItem);
    }
    return BattleViewItemlistComponent__getUserItemNum(this, v6, battleDropItem, 0, v8);
  }
}


void __fastcall BattleViewItemlistComponent__ChangeLayoutScrollView(
        BattleViewItemlistComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *TitleSpr; // x0
  UnityEngine_Object_o *ScrollViewPanel; // x20
  UIPanel_o *v5; // x20
  float v6; // s4
  float v7; // s5
  float v8; // s6
  float v9; // s7
  UnityEngine_Object_o *ScrollBar; // x20
  struct UIScrollBar_o *v11; // x8
  UIWidget_o *v12; // x20
  struct UIScrollBar_o *v13; // x8
  struct UIScrollBar_o *v14; // x8
  UIWidget_o *v15; // x20
  struct UIScrollBar_o *v16; // x8
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Vector2_o v18; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42AFC84 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFC84 = 1;
  }
  TitleSpr = (UnityEngine_Component_o *)this->fields.TitleSpr;
  if ( !TitleSpr )
    goto LABEL_43;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !TitleSpr )
    goto LABEL_43;
  v19.fields.y = 177.3;
  v19.fields.x = 0.0;
  v19.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v19, 0LL);
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
    v20.fields.y = -146.29;
    v20.fields.x = 0.0;
    v20.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v20, 0LL);
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_43;
    v18.fields.x = -9.41;
    v18.fields.y = -30.504;
    UIPanel__set_clipOffset((UIPanel_o *)TitleSpr, v18, 0LL);
    v26.fields.z = 730.3;
    v26.fields.w = 114.9;
    v5 = this->fields.ScrollViewPanel;
    v26.fields.x = 0.0;
    v26.fields.y = 0.0;
    var40.methodPointer = 0LL;
    var40.invoker_method = 0LL;
    UnityEngine_Vector4___ctor(v26, v6, v7, v8, v9, &var40);
    if ( !v5 )
      goto LABEL_43;
    *(_QWORD *)&v27.fields.x = var40.methodPointer;
    *(_QWORD *)&v27.fields.z = var40.invoker_method;
    UIPanel__set_baseClipRegion(v5, v27, 0LL);
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
        v21.fields.x = 372.0;
        v21.fields.y = -179.0;
        v21.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v21, 0LL);
        v11 = this->fields.ScrollBar;
        if ( v11 )
        {
          TitleSpr = (UnityEngine_Component_o *)v11->fields.mFG;
          if ( TitleSpr )
          {
            TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0LL);
            if ( TitleSpr )
            {
              TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)TitleSpr,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
              if ( TitleSpr )
              {
                v12 = (UIWidget_o *)TitleSpr;
                UIWidget__set_width((UIWidget_o *)TitleSpr, 28, 0LL);
                UIWidget__set_height(v12, 120, 0LL);
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
                                                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                      if ( TitleSpr )
                      {
                        v22.fields.x = 28.0;
                        v22.fields.z = 0.0;
                        v22.fields.y = 120.0;
                        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)TitleSpr, v22, 0LL);
                        v14 = this->fields.ScrollBar;
                        if ( v14 )
                        {
                          TitleSpr = (UnityEngine_Component_o *)v14->fields.mBG;
                          if ( TitleSpr )
                          {
                            TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0LL);
                            if ( TitleSpr )
                            {
                              TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)TitleSpr,
                                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                              if ( TitleSpr )
                              {
                                v15 = (UIWidget_o *)TitleSpr;
                                UIWidget__set_width((UIWidget_o *)TitleSpr, 16, 0LL);
                                UIWidget__set_height(v15, 120, 0LL);
                                v16 = this->fields.ScrollBar;
                                if ( v16 )
                                {
                                  TitleSpr = (UnityEngine_Component_o *)v16->fields.mFG;
                                  if ( TitleSpr )
                                  {
                                    TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                            TitleSpr,
                                                                            0LL);
                                    if ( TitleSpr )
                                    {
                                      TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                              (UnityEngine_GameObject_o *)TitleSpr,
                                                                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                                      if ( TitleSpr )
                                      {
                                        v23.fields.x = 16.0;
                                        v23.fields.z = 0.0;
                                        v23.fields.y = 120.0;
                                        UnityEngine_BoxCollider__set_size(
                                          (UnityEngine_BoxCollider_o *)TitleSpr,
                                          v23,
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
    sub_B52A5C(TitleSpr, method);
  }
LABEL_38:
  TitleSpr = (UnityEngine_Component_o *)this->fields.notgetLabel;
  if ( !TitleSpr )
    goto LABEL_43;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !TitleSpr )
    goto LABEL_43;
  v24.fields.y = -134.0;
  v24.fields.x = 0.0;
  v24.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v24, 0LL);
  TitleSpr = (UnityEngine_Component_o *)this->fields.rewardSpr;
  if ( !TitleSpr )
    goto LABEL_43;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !TitleSpr )
    goto LABEL_43;
  v25.fields.y = -91.0;
  v25.fields.x = 0.0;
  v25.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v25, 0LL);
}


void __fastcall BattleViewItemlistComponent__ClearObj(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *v2; // x19
  System_Collections_Generic_List_XWeaponTrail_Element__o *itemObjectList; // x20
  unsigned __int64 v4; // x21
  UnityEngine_Object_o *v5; // x20

  v2 = this;
  if ( (byte_42AFC81 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    this = (BattleViewItemlistComponent_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFC81 = 1;
  }
  itemObjectList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->fields.itemObjectList;
  if ( !itemObjectList )
LABEL_12:
    sub_B52A5C(this, method);
  v4 = 0LL;
  while ( (__int64)v4 < itemObjectList->fields._size )
  {
    if ( v4 >= (unsigned int)itemObjectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v5 = (UnityEngine_Object_o *)itemObjectList->fields._items->m_Items[v4];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(v5, 0LL);
    itemObjectList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->fields.itemObjectList;
    ++v4;
    if ( !itemObjectList )
      goto LABEL_12;
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    itemObjectList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_GameObject__Clear__);
}


void __fastcall BattleViewItemlistComponent__DefaultLayoutScrollView(
        BattleViewItemlistComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *TitleSpr; // x0
  UnityEngine_Object_o *ScrollViewPanel; // x20
  UIPanel_o *v5; // x20
  float v6; // s4
  float v7; // s5
  float v8; // s6
  float v9; // s7
  UnityEngine_Object_o *ScrollBar; // x20
  struct UIScrollBar_o *v11; // x8
  UIWidget_o *v12; // x20
  struct UIScrollBar_o *v13; // x8
  struct UIScrollBar_o *v14; // x8
  UIWidget_o *v15; // x20
  struct UIScrollBar_o *v16; // x8
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Vector2_o v18; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42AFC83 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFC83 = 1;
  }
  TitleSpr = (UnityEngine_Component_o *)this->fields.TitleSpr;
  if ( !TitleSpr )
    goto LABEL_43;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !TitleSpr )
    goto LABEL_43;
  v19.fields.y = 189.3;
  v19.fields.x = 0.0;
  v19.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v19, 0LL);
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
    v20.fields.y = -88.4;
    v20.fields.x = 0.0;
    v20.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v20, 0LL);
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_43;
    v18.fields.x = -9.41;
    v18.fields.y = -62.9;
    UIPanel__set_clipOffset((UIPanel_o *)TitleSpr, v18, 0LL);
    v26.fields.z = 730.3;
    v26.fields.w = 184.9;
    v5 = this->fields.ScrollViewPanel;
    v26.fields.x = 0.0;
    v26.fields.y = 0.0;
    var40.methodPointer = 0LL;
    var40.invoker_method = 0LL;
    UnityEngine_Vector4___ctor(v26, v6, v7, v8, v9, &var40);
    if ( !v5 )
      goto LABEL_43;
    *(_QWORD *)&v27.fields.x = var40.methodPointer;
    *(_QWORD *)&v27.fields.z = var40.invoker_method;
    UIPanel__set_baseClipRegion(v5, v27, 0LL);
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
        v21.fields.x = 372.0;
        v21.fields.y = -147.0;
        v21.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v21, 0LL);
        v11 = this->fields.ScrollBar;
        if ( v11 )
        {
          TitleSpr = (UnityEngine_Component_o *)v11->fields.mFG;
          if ( TitleSpr )
          {
            TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0LL);
            if ( TitleSpr )
            {
              TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)TitleSpr,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
              if ( TitleSpr )
              {
                v12 = (UIWidget_o *)TitleSpr;
                UIWidget__set_width((UIWidget_o *)TitleSpr, 28, 0LL);
                UIWidget__set_height(v12, 180, 0LL);
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
                                                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                      if ( TitleSpr )
                      {
                        v22.fields.x = 28.0;
                        v22.fields.z = 0.0;
                        v22.fields.y = 160.0;
                        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)TitleSpr, v22, 0LL);
                        v14 = this->fields.ScrollBar;
                        if ( v14 )
                        {
                          TitleSpr = (UnityEngine_Component_o *)v14->fields.mBG;
                          if ( TitleSpr )
                          {
                            TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0LL);
                            if ( TitleSpr )
                            {
                              TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)TitleSpr,
                                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                              if ( TitleSpr )
                              {
                                v15 = (UIWidget_o *)TitleSpr;
                                UIWidget__set_width((UIWidget_o *)TitleSpr, 16, 0LL);
                                UIWidget__set_height(v15, 180, 0LL);
                                v16 = this->fields.ScrollBar;
                                if ( v16 )
                                {
                                  TitleSpr = (UnityEngine_Component_o *)v16->fields.mFG;
                                  if ( TitleSpr )
                                  {
                                    TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                            TitleSpr,
                                                                            0LL);
                                    if ( TitleSpr )
                                    {
                                      TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                              (UnityEngine_GameObject_o *)TitleSpr,
                                                                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                                      if ( TitleSpr )
                                      {
                                        v23.fields.x = 16.0;
                                        v23.fields.z = 0.0;
                                        v23.fields.y = 160.0;
                                        UnityEngine_BoxCollider__set_size(
                                          (UnityEngine_BoxCollider_o *)TitleSpr,
                                          v23,
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
    sub_B52A5C(TitleSpr, method);
  }
LABEL_38:
  TitleSpr = (UnityEngine_Component_o *)this->fields.notgetLabel;
  if ( !TitleSpr )
    goto LABEL_43;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !TitleSpr )
    goto LABEL_43;
  v24.fields.y = -74.0;
  v24.fields.x = 0.0;
  v24.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v24, 0LL);
  TitleSpr = (UnityEngine_Component_o *)this->fields.rewardSpr;
  if ( !TitleSpr )
    goto LABEL_43;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !TitleSpr )
    goto LABEL_43;
  v25.fields.y = -31.0;
  v25.fields.x = 0.0;
  v25.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v25, 0LL);
}


void __fastcall BattleViewItemlistComponent__Reposition(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *listRoot; // x0

  if ( (byte_42AFC85 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    byte_42AFC85 = 1;
  }
  listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !listRoot
    || (listRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                listRoot,
                                                (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
  {
    sub_B52A5C(listRoot, method);
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
  __int64 v4; // x1
  UIProgressBar_o *v5; // x0

  if ( (byte_42AFC86 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFC86 = 1;
  }
  ScrollBar = (UnityEngine_Object_o *)this->fields.ScrollBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ScrollBar, 0LL, 0LL) )
  {
    v5 = (UIProgressBar_o *)this->fields.ScrollBar;
    if ( !v5 )
      sub_B52A5C(0LL, v4);
    UIProgressBar__set_value(v5, 0.0, 0LL);
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
    sub_B52A5C(this, 0LL);
  BattleDropItemComponent__Set(battleDropItemComponent, dropItem, 0LL);
  battleDropItemComponent->fields.callbackFunc = callback;
  sub_B52920(
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
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  v9 = BattleViewItemlistComponent__CalcPossessionNum(this, dropItem, (int32_t)dropItem, (const MethodInfo *)callback);
  if ( !battleDropItemComponent )
    sub_B52A5C(v9, v10);
  BattleDropItemComponent__Set_22990832(battleDropItemComponent, dropItem, v9, 0LL);
  battleDropItemComponent->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&battleDropItemComponent->fields.callbackFunc,
    (System_Int32_array **)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleViewItemlistComponent__SwitchShowNumMode(
        BattleViewItemlistComponent_o *this,
        bool isShowPossessionNum,
        const MethodInfo *method)
{
  BattleViewItemlistComponent_o *v4; // x20
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x23
  __int64 v6; // x21
  int size; // w8

  v4 = this;
  if ( (byte_42AFC82 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (BattleViewItemlistComponent_o *)sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_42AFC82 = 1;
  }
  itemObjectList = v4->fields.itemObjectList;
  if ( !itemObjectList )
LABEL_14:
    sub_B52A5C(this, isShowPossessionNum);
  v6 = 0LL;
  while ( 1 )
  {
    size = itemObjectList->fields._size;
    if ( (int)v6 >= size )
      break;
    if ( size <= (unsigned int)v6 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    this = (BattleViewItemlistComponent_o *)itemObjectList->fields._items->m_Items[v6];
    if ( this )
    {
      this = (BattleViewItemlistComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                (UnityEngine_GameObject_o *)this,
                                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( this )
      {
        if ( isShowPossessionNum )
          BattleDropItemComponent__ShowPossessionNum((BattleDropItemComponent_o *)this, 0LL);
        else
          BattleDropItemComponent__ShowDropNum((BattleDropItemComponent_o *)this, 0LL);
        itemObjectList = v4->fields.itemObjectList;
        ++v6;
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
        v12 = sub_B52A88(this);
        sub_B52A28(v12, 0LL);
      }
      if ( !battleDropItem || (v9 = m_Items[v7]) == 0LL )
        sub_B52A5C(this, userId);
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
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42AFC7E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AFC7E = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    sub_B52A5C(Instance, v9);
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
  sub_B52920(
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
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_42AFC7F & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFC7F = 1;
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
      sub_B52A5C(gameObject, v4);
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
  char *itemObjectList; // x0
  Il2CppObject *current; // x25
  int32_t colmax; // w21
  float width; // s11
  float height; // s12
  BattleViewItemlistComponent_c *v15; // x0
  float v16; // s0
  float v17; // s1
  float v18; // s2
  float v19; // s10
  float v20; // s13
  float v21; // s8
  float v22; // s9
  System_Int32_array **ComponentInParent_UIScrollView; // x0
  __int64 v24; // x8
  System_Int32_array **v25; // x25
  unsigned __int64 v26; // x21
  float v27; // s10
  UnityEngine_GameObject_o *v28; // x26
  UnityEngine_Transform_o *transform; // x27
  float v30; // s0
  float v31; // s1
  float v32; // s2
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  BattleDropItemComponent_o *v39; // x27
  UnityEngine_Object_o *v40; // x21
  UILabel_o *v41; // x21
  System_String_o *v42; // x22
  char v43; // w1
  UILabel_o *notgetLabel; // x20
  System_String_o *noItemLabelKey; // x21
  __int64 v46; // x0
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+40h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AFC7C & 1) == 0 )
  {
    sub_B52984(&BattleViewItemlistComponent_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponentInParent_UIScrollView___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_2481/*"BATTLE_ITEM_DISP_COLUMN"*/);
    byte_42AFC7C = 1;
  }
  memset(&v51, 0, sizeof(v51));
  itemObjectList = (char *)this->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_58;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v50,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemObjectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v51 = v50;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v51,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v51.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v51,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  itemObjectList = (char *)this->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_58;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)itemObjectList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_GameObject__Clear__);
  colmax = this->fields.colmax;
  width = this->fields.width;
  height = this->fields.height;
  if ( !setColMax )
  {
    setColMax = ConstantMaster__getValue((System_String_o *)StringLiteral_2481/*"BATTLE_ITEM_DISP_COLUMN"*/, 0LL);
    if ( setColMax <= 0 )
    {
      v15 = BattleViewItemlistComponent_TypeInfo;
      if ( (BYTE3(BattleViewItemlistComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleViewItemlistComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleViewItemlistComponent_TypeInfo);
        v15 = BattleViewItemlistComponent_TypeInfo;
      }
      setColMax = v15->static_fields->defaultColumnMax;
    }
  }
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_zero(0LL);
  if ( setColMax >= 1 )
  {
    v19 = 1.0;
    v20 = (float)this->fields.colmax / (float)setColMax;
    v21 = (float)(this->fields.width - (float)(this->fields.width * v20)) * 0.5;
    width = width * v20;
    height = height * v20;
    v22 = (float)(this->fields.height - (float)(this->fields.height * v20)) * -0.5;
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
          v43 = 1;
          goto LABEL_56;
        }
      }
    }
LABEL_58:
    sub_B52A5C(itemObjectList, itemlist);
  }
  v21 = v16;
  v22 = v17;
  v19 = v18;
  v20 = 1.0;
  setColMax = colmax;
  if ( !itemlist )
    goto LABEL_49;
LABEL_19:
  itemObjectList = (char *)this->fields.listRoot;
  if ( !itemObjectList )
    goto LABEL_58;
  ComponentInParent_UIScrollView = (System_Int32_array **)UnityEngine_Component__GetComponentInParent_UIScrollView_(
                                                            (UnityEngine_Component_o *)itemObjectList,
                                                            (const MethodInfo_1A49438 *)Method_UnityEngine_Component_GetComponentInParent_UIScrollView___);
  v24 = *(_QWORD *)&itemlist->max_length;
  if ( (int)v24 >= 1 )
  {
    v25 = ComponentInParent_UIScrollView;
    v26 = 0LL;
    v27 = 0.0 - v19;
    do
    {
      if ( v26 >= (unsigned int)v24 )
      {
LABEL_59:
        v46 = sub_B52A88(ComponentInParent_UIScrollView);
        sub_B52A28(v46, 0LL);
      }
      itemObjectList = (char *)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 this->fields.prefabResultItem,
                                 this->fields.listRoot,
                                 0LL,
                                 0LL);
      if ( !itemObjectList )
        goto LABEL_58;
      v28 = (UnityEngine_GameObject_o *)itemObjectList;
      itemObjectList = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)itemObjectList, 0LL);
      if ( !itemObjectList )
        goto LABEL_58;
      v52.fields.x = (float)(width * (float)((int)v26 + -setColMax * ((int)v26 / setColMax))) - v21;
      v52.fields.y = (float)-(float)(height * (float)((int)v26 / setColMax)) - v22;
      v52.fields.z = v27;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)itemObjectList, v52, 0LL);
      transform = UnityEngine_GameObject__get_transform(v28, 0LL);
      *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_one(0LL);
      if ( !transform )
        goto LABEL_58;
      v53.fields.x = v20 * v30;
      v53.fields.y = v20 * v31;
      v53.fields.z = v20 * v32;
      UnityEngine_Transform__set_localScale(transform, v53, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0LL, 0LL) )
      {
        itemObjectList = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   v28,
                                   (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
        if ( !itemObjectList )
          goto LABEL_58;
        *((_QWORD *)itemObjectList + 3) = v25;
        sub_B52920((BattleServantConfConponent_o *)(itemObjectList + 24), v25, v33, v34, v35, v36, v37, v38);
        ComponentInParent_UIScrollView = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v28,
                                                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
        if ( v26 >= itemlist->max_length )
          goto LABEL_59;
        v39 = (BattleDropItemComponent_o *)ComponentInParent_UIScrollView;
        itemObjectList = (char *)setAction;
        if ( !setAction )
          goto LABEL_58;
        BattleViewItemlistComponent_BattleDropItemComponentSetAction__Invoke(
          setAction,
          v39,
          itemlist->m_Items[v26],
          callBack,
          eventId,
          0LL);
        if ( !v39 )
          goto LABEL_58;
        BattleDropItemComponent__Show(v39, 0LL);
      }
      itemObjectList = (char *)this->fields.itemObjectList;
      if ( !itemObjectList )
        goto LABEL_58;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemObjectList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
      LODWORD(v24) = itemlist->max_length;
      ++v26;
    }
    while ( (__int64)v26 < (int)v24 );
  }
  v40 = (UnityEngine_Object_o *)this->fields.notgetLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v40, 0LL, 0LL) )
  {
    v41 = this->fields.notgetLabel;
    v42 = this->fields.noItemLabelKey;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    itemObjectList = (char *)LocalizationManager__Get(v42, 0LL);
    if ( v41 )
    {
      UILabel__set_text(v41, (System_String_o *)itemObjectList, 0LL);
      itemObjectList = (char *)this->fields.notgetLabel;
      if ( itemObjectList )
      {
        itemObjectList = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemObjectList, 0LL);
        if ( itemObjectList )
        {
          v43 = itemlist->max_length == 0;
LABEL_56:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemObjectList, v43, 0LL);
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
  BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *v9; // x23
  const MethodInfo *v10; // x6

  if ( (byte_42AFC7A & 1) == 0 )
  {
    sub_B52984(&BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo);
    sub_B52984(&Method_BattleViewItemlistComponent_SetBattleDropItemComponent__);
    byte_42AFC7A = 1;
  }
  v9 = (BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *)sub_B52A54(BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo);
  BattleViewItemlistComponent_BattleDropItemComponentSetAction___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleViewItemlistComponent_SetBattleDropItemComponent__,
    0LL);
  BattleViewItemlistComponent__setListData(this, itemlist, -1, v9, callBack, setColMax, v10);
}


void __fastcall BattleViewItemlistComponent__setListDataCustomColumn_24784268(
        BattleViewItemlistComponent_o *this,
        BattleDropItem_array *itemlist,
        int32_t eventId,
        BattleDropItemComponent_ClickDelegate_o *callBack,
        int32_t setColMax,
        const MethodInfo *method)
{
  BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *v11; // x24
  const MethodInfo *v12; // x6

  if ( (byte_42AFC7B & 1) == 0 )
  {
    sub_B52984(&BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo);
    sub_B52984(&Method_BattleViewItemlistComponent_SetBattleDropItemComponentEx__);
    byte_42AFC7B = 1;
  }
  v11 = (BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *)sub_B52A54(BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo);
  BattleViewItemlistComponent_BattleDropItemComponentSetAction___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleViewItemlistComponent_SetBattleDropItemComponentEx__,
    0LL);
  BattleViewItemlistComponent__setListData(this, itemlist, eventId, v11, callBack, setColMax, v12);
}


void __fastcall BattleViewItemlistComponent__setShow(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *listRoot; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_42AFC80 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFC80 = 1;
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
      sub_B52A5C(gameObject, v4);
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
  sub_B52920(
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
  sub_B52920(p_method);
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
  if ( (byte_42AD877 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    byte_42AD877 = 1;
  }
  v15[4] = 0LL;
  v15[0] = (__int64)battleDropItemComponent;
  v15[1] = (__int64)dropItem;
  v15[2] = (__int64)callback;
  v15[3] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  return (System_IAsyncResult_o *)sub_B52928(this, v15, a6, object);
}


void __fastcall BattleViewItemlistComponent_BattleDropItemComponentSetAction__EndInvoke(
        BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
  __int64 v16; // x3
  BattleDropItemComponent_c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  __int64 v21; // x0
  unsigned int v22; // w26
  __int64 v23; // x0
  __int64 v24; // x3
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  _DWORD *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x0
  void (__fastcall **v31)(BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, _QWORD); // x0
  __int64 v32; // x0
  void (__fastcall **v33)(__int64 *, BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, _QWORD); // x0
  BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *v34; // x8
  __int64 v35; // x24
  __int64 *v36; // x25
  void (__fastcall *v37)(BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, __int64); // x26
  char v38; // w0
  int v39; // w8
  char v40; // w26
  char v41; // w0
  __int64 v42; // x3
  __int64 v43; // x8
  __int64 v44; // x1
  __int64 v45; // x2
  unsigned __int64 v46; // x10
  _DWORD *v47; // x11
  char v48; // w25
  char v49; // w0
  __int64 v50; // x3
  BattleDropItemComponent_c *klass; // x8
  __int64 v52; // x1
  __int64 v53; // x2
  unsigned __int64 v54; // x10
  int32_t *p_offset; // x11
  BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *v57; // [xsp+8h] [xbp-58h] BYREF

  v57 = this;
  v6 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v6 )
  {
    v12 = &v57;
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
      v34 = v12[i];
      v36 = *(__int64 **)&v34->fields.method;
      v35 = *(_QWORD *)&v34->fields.extra_arg;
      v37 = *(void (__fastcall **)(BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, __int64))&v34->fields.method_ptr;
      if ( *(__int16 *)(v35 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v34->fields.extra_arg, battleDropItemComponent, dropItem, callback);
      v38 = sub_B529B4(v35);
      v39 = *(unsigned __int8 *)(v35 + 74);
      if ( (v38 & 1) != 0 )
      {
        if ( v39 == 4 )
          goto LABEL_58;
      }
      else
      {
        if ( v39 != 4 )
        {
          if ( *(__int16 *)(v35 + 72) != -1 && this->fields.m_target )
          {
            v48 = sub_B529AC(v35);
            v49 = sub_B52DB0(v35);
            if ( (v48 & 1) != 0 )
            {
              if ( (v49 & 1) != 0 )
              {
                klass = battleDropItemComponent->klass;
                v52 = *(_QWORD *)(v35 + 24);
                v53 = *(unsigned __int16 *)(v35 + 72);
                if ( *(_WORD *)&battleDropItemComponent->klass->_2.bitflags1 )
                {
                  v54 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v52 )
                  {
                    ++v54;
                    p_offset += 4;
                    if ( v54 >= *(unsigned __int16 *)&battleDropItemComponent->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v53);
                }
                else
                {
LABEL_57:
                  v30 = sub_AEB880(battleDropItemComponent, v52, v53, v50);
                }
                v21 = *(_QWORD *)(v30 + 8);
              }
              else
              {
                v21 = *((_QWORD *)&battleDropItemComponent->klass->vtable._1_Finalize.methodPtr
                      + 2 * *(unsigned __int16 *)(v35 + 72));
              }
              v31 = (void (__fastcall **)(BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, _QWORD))sub_B52A34(v21, v35);
              (*v31)(battleDropItemComponent, dropItem, callback, (unsigned int)eventId, v31);
            }
            else
            {
              v14 = *(unsigned __int16 *)(v35 + 72);
              if ( (v49 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v35);
                v17 = battleDropItemComponent->klass;
                if ( *(_WORD *)&battleDropItemComponent->klass->_2.bitflags1 )
                {
                  v18 = 0LL;
                  v19 = &v17->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v19 - 1) != class_0 )
                  {
                    ++v18;
                    v19 += 4;
                    if ( v18 >= *(unsigned __int16 *)&battleDropItemComponent->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v20 = (__int64)(&v17->vtable._0_Equals.method + 2 * (int)(*v19 + v14));
                }
                else
                {
LABEL_11:
                  v20 = sub_AEB880(battleDropItemComponent, class_0, v14, v16);
                }
                (*(void (__fastcall **)(BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, _QWORD))v20)(
                  battleDropItemComponent,
                  dropItem,
                  callback,
                  (unsigned int)eventId,
                  *(_QWORD *)(v20 + 8));
              }
              else
              {
                (*((void (__fastcall **)(BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, _QWORD))&battleDropItemComponent->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v35 + 72)))(
                  battleDropItemComponent,
                  dropItem,
                  callback,
                  (unsigned int)eventId,
                  *((_QWORD *)&battleDropItemComponent->klass->vtable._1_Finalize.methodPtr
                  + 2 * *(unsigned __int16 *)(v35 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v37(battleDropItemComponent, dropItem, callback, (unsigned int)eventId, v35);
          continue;
        }
        if ( !v36 )
          goto LABEL_58;
        if ( *(__int16 *)(v35 + 72) != -1 && (*(_BYTE *)(*v36 + 277) & 1) == 0 && this->fields.m_target )
        {
          v40 = sub_B529AC(v35);
          v41 = sub_B52DB0(v35);
          if ( (v40 & 1) != 0 )
          {
            if ( (v41 & 1) != 0 )
            {
              v43 = *v36;
              v44 = *(_QWORD *)(v35 + 24);
              v45 = *(unsigned __int16 *)(v35 + 72);
              if ( *(_WORD *)(*v36 + 298) )
              {
                v46 = 0LL;
                v47 = (_DWORD *)(*(_QWORD *)(v43 + 176) + 8LL);
                while ( *((_QWORD *)v47 - 1) != v44 )
                {
                  ++v46;
                  v47 += 4;
                  if ( v46 >= *(unsigned __int16 *)(*v36 + 298) )
                    goto LABEL_48;
                }
                v32 = v43 + 16LL * (*v47 + (int)v45) + 312;
              }
              else
              {
LABEL_48:
                v32 = sub_AEB880(v36, v44, v45, v42);
              }
              v29 = *(_QWORD *)(v32 + 8);
            }
            else
            {
              v29 = *(_QWORD *)(*v36 + 16LL * *(unsigned __int16 *)(v35 + 72) + 320);
            }
            v33 = (void (__fastcall **)(__int64 *, BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, _QWORD))sub_B52A34(v29, v35);
            (*v33)(v36, battleDropItemComponent, dropItem, callback, (unsigned int)eventId, v33);
          }
          else
          {
            v22 = *(unsigned __int16 *)(v35 + 72);
            if ( (v41 & 1) != 0 )
            {
              v23 = j_il2cpp_method_get_class_0(v35);
              v25 = *v36;
              if ( *(_WORD *)(*v36 + 298) )
              {
                v26 = 0LL;
                v27 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
                while ( *((_QWORD *)v27 - 1) != v23 )
                {
                  ++v26;
                  v27 += 4;
                  if ( v26 >= *(unsigned __int16 *)(*v36 + 298) )
                    goto LABEL_19;
                }
                v28 = v25 + 16LL * (int)(*v27 + v22) + 312;
              }
              else
              {
LABEL_19:
                v28 = sub_AEB880(v36, v23, v22, v24);
              }
              (*(void (__fastcall **)(__int64 *, BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, _QWORD))v28)(
                v36,
                battleDropItemComponent,
                dropItem,
                callback,
                (unsigned int)eventId,
                *(_QWORD *)(v28 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, _QWORD))(*v36 + 16LL * *(unsigned __int16 *)(v35 + 72) + 312))(
                v36,
                battleDropItemComponent,
                dropItem,
                callback,
                (unsigned int)eventId,
                *(_QWORD *)(*v36 + 16LL * *(unsigned __int16 *)(v35 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, __int64))v37)(
        v36,
        battleDropItemComponent,
        dropItem,
        callback,
        (unsigned int)eventId,
        v35);
    }
  }
}