void __fastcall BattleViewItemlistComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B19441 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleViewItemlistComponent_TypeInfo, v1, v2);
    byte_4B19441 = 1;
  }
  BattleViewItemlistComponent_TypeInfo->static_fields->defaultColumnMax = 8;
}


void __fastcall BattleViewItemlistComponent___ctor(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B19440 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_2934/*"BATTLE_ITEMLIST_NOTGET"*/, v11, v12);
    byte_4B19440 = 1;
  }
  v13 = StringLiteral_2934/*"BATTLE_ITEMLIST_NOTGET"*/;
  this->fields.noItemLabelKey = (struct System_String_o *)StringLiteral_2934/*"BATTLE_ITEMLIST_NOTGET"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.noItemLabelKey, v13, v2, v3, v4, v5, v6, v7);
  this->fields.colmax = 5;
  *(_QWORD *)&this->fields.width = 0x42F0000042FA0000LL;
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v14,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.itemObjectList = (struct System_Collections_Generic_List_GameObject__o *)v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.itemObjectList, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleViewItemlistComponent__CalcPossessionNum(
        BattleViewItemlistComponent_o *this,
        BattleDropItem_o *battleDropItem,
        int32_t eventId,
        const MethodInfo *method)
{
  BattleViewItemlistComponent_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t v10; // x21
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4
  int notgetLabel; // w8

  v5 = this;
  if ( (byte_4B19436 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, battleDropItem, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6, v7);
    this = (BattleViewItemlistComponent_o *)sub_1BCA7E0(
                                              &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                              v8,
                                              v9);
    byte_4B19436 = 1;
  }
  if ( !battleDropItem )
    goto LABEL_19;
  if ( !Gift__IsItem_38401476(battleDropItem->fields.type, 0LL) )
    return 0;
  this = (BattleViewItemlistComponent_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this )
    goto LABEL_19;
  v10 = *(_QWORD *)&this->fields.m_CachedPtr;
  this = (BattleViewItemlistComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_19;
  this = (BattleViewItemlistComponent_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_19;
  this = (BattleViewItemlistComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            battleDropItem->fields.objectId,
                                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_19;
  notgetLabel = (int)this->fields.notgetLabel;
  if ( (unsigned int)(notgetLabel - 3) < 2 )
    return BattleViewItemlistComponent__compareItemId(v5, v10, battleDropItem, v11);
  if ( notgetLabel == 22 )
  {
    this = (BattleViewItemlistComponent_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !this )
      goto LABEL_19;
    return HIDWORD(this[1].fields.noItemLabelKey);
  }
  else
  {
    if ( notgetLabel == 5 )
    {
      this = (BattleViewItemlistComponent_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( this )
        return LODWORD(this[1].fields.noItemLabelKey) - v5->fields.boostEventItemManaCount;
LABEL_19:
      sub_1BCAA3C(this, battleDropItem);
    }
    return BattleViewItemlistComponent__getUserItemNum(this, v10, battleDropItem, 0, v12);
  }
}


void __fastcall BattleViewItemlistComponent__ChangeLayoutScrollView(
        BattleViewItemlistComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Component_o *TitleSpr; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *ScrollViewPanel; // x20
  UnityEngine_Object_o *ScrollBar; // x20
  struct UIScrollBar_o *v12; // x8
  UIWidget_o *v13; // x20
  struct UIScrollBar_o *v14; // x8
  struct UIScrollBar_o *v15; // x8
  UIWidget_o *v16; // x20
  struct UIScrollBar_o *v17; // x8
  UnityEngine_Vector2_o v18; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1943D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B1943D = 1;
  }
  TitleSpr = (UnityEngine_Component_o *)this->fields.TitleSpr;
  if ( !TitleSpr )
    goto LABEL_41;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !TitleSpr )
    goto LABEL_41;
  v19.fields.y = 177.3;
  v19.fields.x = 0.0;
  v19.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v19, 0LL);
  ScrollViewPanel = (UnityEngine_Object_o *)this->fields.ScrollViewPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(ScrollViewPanel, 0LL, 0LL) )
  {
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_41;
    UIPanel__Refresh((UIPanel_o *)TitleSpr, 0LL);
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_41;
    TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
    if ( !TitleSpr )
      goto LABEL_41;
    v20.fields.y = -146.29;
    v20.fields.x = 0.0;
    v20.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v20, 0LL);
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_41;
    v18.fields.x = -9.41;
    v18.fields.y = -30.504;
    UIPanel__set_clipOffset((UIPanel_o *)TitleSpr, v18, 0LL);
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_41;
    v26.fields.z = 730.3;
    v26.fields.w = 114.9;
    v26.fields.x = 0.0;
    v26.fields.y = 0.0;
    UIPanel__set_baseClipRegion((UIPanel_o *)TitleSpr, v26, 0LL);
  }
  ScrollBar = (UnityEngine_Object_o *)this->fields.ScrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(ScrollBar, 0LL, 0LL) )
  {
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollBar;
    if ( TitleSpr )
    {
      TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
      if ( TitleSpr )
      {
        v21.fields.z = 0.0;
        v21.fields.x = 372.0;
        v21.fields.y = -179.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v21, 0LL);
        v12 = this->fields.ScrollBar;
        if ( v12 )
        {
          TitleSpr = (UnityEngine_Component_o *)v12->fields.mFG;
          if ( TitleSpr )
          {
            TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0LL);
            if ( TitleSpr )
            {
              TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)TitleSpr,
                                                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
              if ( TitleSpr )
              {
                v13 = (UIWidget_o *)TitleSpr;
                UIWidget__set_width((UIWidget_o *)TitleSpr, 28, 0LL);
                UIWidget__set_height(v13, 120, 0LL);
                v14 = this->fields.ScrollBar;
                if ( v14 )
                {
                  TitleSpr = (UnityEngine_Component_o *)v14->fields.mFG;
                  if ( TitleSpr )
                  {
                    TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0LL);
                    if ( TitleSpr )
                    {
                      TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              (UnityEngine_GameObject_o *)TitleSpr,
                                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                      if ( TitleSpr )
                      {
                        v22.fields.x = 28.0;
                        v22.fields.z = 0.0;
                        v22.fields.y = 120.0;
                        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)TitleSpr, v22, 0LL);
                        v15 = this->fields.ScrollBar;
                        if ( v15 )
                        {
                          TitleSpr = (UnityEngine_Component_o *)v15->fields.mBG;
                          if ( TitleSpr )
                          {
                            TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0LL);
                            if ( TitleSpr )
                            {
                              TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      (UnityEngine_GameObject_o *)TitleSpr,
                                                                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                              if ( TitleSpr )
                              {
                                v16 = (UIWidget_o *)TitleSpr;
                                UIWidget__set_width((UIWidget_o *)TitleSpr, 16, 0LL);
                                UIWidget__set_height(v16, 120, 0LL);
                                v17 = this->fields.ScrollBar;
                                if ( v17 )
                                {
                                  TitleSpr = (UnityEngine_Component_o *)v17->fields.mFG;
                                  if ( TitleSpr )
                                  {
                                    TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                            TitleSpr,
                                                                            0LL);
                                    if ( TitleSpr )
                                    {
                                      TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              (UnityEngine_GameObject_o *)TitleSpr,
                                                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                                      if ( TitleSpr )
                                      {
                                        v23.fields.x = 16.0;
                                        v23.fields.z = 0.0;
                                        v23.fields.y = 120.0;
                                        UnityEngine_BoxCollider__set_size(
                                          (UnityEngine_BoxCollider_o *)TitleSpr,
                                          v23,
                                          0LL);
                                        goto LABEL_36;
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
LABEL_41:
    sub_1BCAA3C(TitleSpr, method);
  }
LABEL_36:
  TitleSpr = (UnityEngine_Component_o *)this->fields.notgetLabel;
  if ( !TitleSpr )
    goto LABEL_41;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !TitleSpr )
    goto LABEL_41;
  v24.fields.x = 0.0;
  v24.fields.z = 0.0;
  v24.fields.y = -134.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v24, 0LL);
  TitleSpr = (UnityEngine_Component_o *)this->fields.rewardSpr;
  if ( !TitleSpr )
    goto LABEL_41;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !TitleSpr )
    goto LABEL_41;
  v25.fields.x = 0.0;
  v25.fields.z = 0.0;
  v25.fields.y = -91.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v25, 0LL);
}


void __fastcall BattleViewItemlistComponent__ClearObj(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x0
  int32_t v11; // w20
  int32_t size; // w2
  __int64 v13; // x1
  Il2CppObject *Item; // x21
  int v15; // w8

  if ( (byte_4B1943A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B1943A = 1;
  }
  itemObjectList = this->fields.itemObjectList;
  if ( !itemObjectList )
LABEL_9:
    sub_1BCAA3C(itemObjectList, method);
  v11 = 0;
  while ( 1 )
  {
    size = itemObjectList->fields._size;
    if ( v11 >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)itemObjectList,
             v11,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)Item, 0LL);
    itemObjectList = this->fields.itemObjectList;
    ++v11;
    if ( !itemObjectList )
      goto LABEL_9;
  }
  v15 = itemObjectList->fields._version + 1;
  itemObjectList->fields._size = 0;
  itemObjectList->fields._version = v15;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)itemObjectList->fields._items, 0, size, 0LL);
}


void __fastcall BattleViewItemlistComponent__DefaultLayoutScrollView(
        BattleViewItemlistComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Component_o *TitleSpr; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *ScrollViewPanel; // x20
  UnityEngine_Object_o *ScrollBar; // x20
  struct UIScrollBar_o *v12; // x8
  UIWidget_o *v13; // x20
  struct UIScrollBar_o *v14; // x8
  struct UIScrollBar_o *v15; // x8
  UIWidget_o *v16; // x20
  struct UIScrollBar_o *v17; // x8
  UnityEngine_Vector2_o v18; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1943C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B1943C = 1;
  }
  TitleSpr = (UnityEngine_Component_o *)this->fields.TitleSpr;
  if ( !TitleSpr )
    goto LABEL_41;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !TitleSpr )
    goto LABEL_41;
  v19.fields.y = 189.3;
  v19.fields.x = 0.0;
  v19.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v19, 0LL);
  ScrollViewPanel = (UnityEngine_Object_o *)this->fields.ScrollViewPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(ScrollViewPanel, 0LL, 0LL) )
  {
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_41;
    UIPanel__Refresh((UIPanel_o *)TitleSpr, 0LL);
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_41;
    TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
    if ( !TitleSpr )
      goto LABEL_41;
    v20.fields.y = -88.4;
    v20.fields.x = 0.0;
    v20.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v20, 0LL);
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_41;
    v18.fields.x = -9.41;
    v18.fields.y = -62.9;
    UIPanel__set_clipOffset((UIPanel_o *)TitleSpr, v18, 0LL);
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_41;
    v26.fields.z = 730.3;
    v26.fields.w = 184.9;
    v26.fields.x = 0.0;
    v26.fields.y = 0.0;
    UIPanel__set_baseClipRegion((UIPanel_o *)TitleSpr, v26, 0LL);
  }
  ScrollBar = (UnityEngine_Object_o *)this->fields.ScrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(ScrollBar, 0LL, 0LL) )
  {
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollBar;
    if ( TitleSpr )
    {
      TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
      if ( TitleSpr )
      {
        v21.fields.z = 0.0;
        v21.fields.x = 372.0;
        v21.fields.y = -147.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v21, 0LL);
        v12 = this->fields.ScrollBar;
        if ( v12 )
        {
          TitleSpr = (UnityEngine_Component_o *)v12->fields.mFG;
          if ( TitleSpr )
          {
            TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0LL);
            if ( TitleSpr )
            {
              TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)TitleSpr,
                                                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
              if ( TitleSpr )
              {
                v13 = (UIWidget_o *)TitleSpr;
                UIWidget__set_width((UIWidget_o *)TitleSpr, 28, 0LL);
                UIWidget__set_height(v13, 180, 0LL);
                v14 = this->fields.ScrollBar;
                if ( v14 )
                {
                  TitleSpr = (UnityEngine_Component_o *)v14->fields.mFG;
                  if ( TitleSpr )
                  {
                    TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0LL);
                    if ( TitleSpr )
                    {
                      TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              (UnityEngine_GameObject_o *)TitleSpr,
                                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                      if ( TitleSpr )
                      {
                        v22.fields.x = 28.0;
                        v22.fields.z = 0.0;
                        v22.fields.y = 160.0;
                        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)TitleSpr, v22, 0LL);
                        v15 = this->fields.ScrollBar;
                        if ( v15 )
                        {
                          TitleSpr = (UnityEngine_Component_o *)v15->fields.mBG;
                          if ( TitleSpr )
                          {
                            TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0LL);
                            if ( TitleSpr )
                            {
                              TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      (UnityEngine_GameObject_o *)TitleSpr,
                                                                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                              if ( TitleSpr )
                              {
                                v16 = (UIWidget_o *)TitleSpr;
                                UIWidget__set_width((UIWidget_o *)TitleSpr, 16, 0LL);
                                UIWidget__set_height(v16, 180, 0LL);
                                v17 = this->fields.ScrollBar;
                                if ( v17 )
                                {
                                  TitleSpr = (UnityEngine_Component_o *)v17->fields.mFG;
                                  if ( TitleSpr )
                                  {
                                    TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                            TitleSpr,
                                                                            0LL);
                                    if ( TitleSpr )
                                    {
                                      TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              (UnityEngine_GameObject_o *)TitleSpr,
                                                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                                      if ( TitleSpr )
                                      {
                                        v23.fields.x = 16.0;
                                        v23.fields.z = 0.0;
                                        v23.fields.y = 160.0;
                                        UnityEngine_BoxCollider__set_size(
                                          (UnityEngine_BoxCollider_o *)TitleSpr,
                                          v23,
                                          0LL);
                                        goto LABEL_36;
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
LABEL_41:
    sub_1BCAA3C(TitleSpr, method);
  }
LABEL_36:
  TitleSpr = (UnityEngine_Component_o *)this->fields.notgetLabel;
  if ( !TitleSpr )
    goto LABEL_41;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !TitleSpr )
    goto LABEL_41;
  v24.fields.x = 0.0;
  v24.fields.z = 0.0;
  v24.fields.y = -74.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v24, 0LL);
  TitleSpr = (UnityEngine_Component_o *)this->fields.rewardSpr;
  if ( !TitleSpr )
    goto LABEL_41;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !TitleSpr )
    goto LABEL_41;
  v25.fields.x = 0.0;
  v25.fields.y = -31.0;
  v25.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v25, 0LL);
}


void __fastcall BattleViewItemlistComponent__Reposition(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *listRoot; // x0

  if ( (byte_4B1943E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIGrid___, method, v2);
    byte_4B1943E = 1;
  }
  listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !listRoot
    || (listRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                listRoot,
                                                (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
  {
    sub_1BCAA3C(listRoot, method);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))listRoot->klass[1]._1.castClass)(
    listRoot,
    listRoot->klass[1]._1.declaringType);
}


void __fastcall BattleViewItemlistComponent__ResetScrollBarPoisition(
        BattleViewItemlistComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *ScrollBar; // x20
  __int64 v5; // x1
  UIProgressBar_o *v6; // x0

  if ( (byte_4B1943F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1943F = 1;
  }
  ScrollBar = (UnityEngine_Object_o *)this->fields.ScrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(ScrollBar, 0LL, 0LL) )
  {
    v6 = (UIProgressBar_o *)this->fields.ScrollBar;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    UIProgressBar__set_value(v6, 0.0, 0LL);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( !battleDropItemComponent )
    sub_1BCAA3C(this, 0LL);
  BattleDropItemComponent__Set(battleDropItemComponent, dropItem, 0LL);
  battleDropItemComponent->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&battleDropItemComponent->fields.callbackFunc,
    (int64_t)callback,
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  v9 = BattleViewItemlistComponent__CalcPossessionNum(this, dropItem, (int32_t)dropItem, (const MethodInfo *)callback);
  if ( !battleDropItemComponent )
    sub_1BCAA3C(v9, v10);
  BattleDropItemComponent__Set_43441192(battleDropItemComponent, dropItem, v9, 0LL);
  battleDropItemComponent->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&battleDropItemComponent->fields.callbackFunc,
    (int64_t)callback,
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *itemObjectList; // x0
  int32_t v10; // w21

  if ( (byte_4B1943B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, isShowPossessionNum, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7, v8);
    byte_4B1943B = 1;
  }
  itemObjectList = (System_Collections_Generic_List_object__o *)this->fields.itemObjectList;
  if ( !itemObjectList )
LABEL_12:
    sub_1BCAA3C(itemObjectList, isShowPossessionNum);
  v10 = 0;
  while ( v10 < itemObjectList->fields._size )
  {
    itemObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    itemObjectList,
                                                                    v10,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( itemObjectList )
    {
      itemObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      (UnityEngine_GameObject_o *)itemObjectList,
                                                                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( itemObjectList )
      {
        if ( isShowPossessionNum )
          BattleDropItemComponent__ShowPossessionNum((BattleDropItemComponent_o *)itemObjectList, 0LL);
        else
          BattleDropItemComponent__ShowDropNum((BattleDropItemComponent_o *)itemObjectList, 0LL);
        itemObjectList = (System_Collections_Generic_List_object__o *)this->fields.itemObjectList;
        ++v10;
        if ( itemObjectList )
          continue;
      }
    }
    goto LABEL_12;
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

  rewardInfos_k__BackingField = this->fields._rewardInfos_k__BackingField;
  if ( rewardInfos_k__BackingField && (max_length = rewardInfos_k__BackingField->max_length, max_length >= 1) )
  {
    v7 = 0LL;
    m_Items = rewardInfos_k__BackingField->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v7 >= max_length )
        sub_1BCAA44(this, userId);
      if ( !battleDropItem || (v9 = m_Items[v7]) == 0LL )
        sub_1BCAA3C(this, userId);
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
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19437 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, userId, battleDropItem);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B19437 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  entity = 0LL;
  if ( !battleDropItem || !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)UserItemMaster__TryGetEntity(
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
    sub_1BCAA3C(Instance, v11);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct QuestRewardInfo_array **p_rewardInfos_k__BackingField; // x20

  this->fields._rewardInfos_k__BackingField = rewardInfos;
  p_rewardInfos_k__BackingField = &this->fields._rewardInfos_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._rewardInfos_k__BackingField,
    (int64_t)rewardInfos,
    (int64_t)rewardInfos,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  *((_DWORD *)p_rewardInfos_k__BackingField - 3) = boostEventItemManaCount;
}


void __fastcall BattleViewItemlistComponent__setHide(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *listRoot; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4B19438 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19438 = 1;
  }
  listRoot = (UnityEngine_Object_o *)this->fields.listRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(listRoot, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1BCAA3C(gameObject, v5);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 itemObjectList; // x0
  __int64 v36; // x1
  Il2CppObject *current; // x25
  struct System_Collections_Generic_List_GameObject__o *v38; // x8
  __int64 size; // x2
  int v40; // w9
  int32_t colmax; // w23
  float height; // s8
  BattleViewItemlistComponent_c *v43; // x0
  float v44; // s4
  float32x2_t v45; // d9
  float z; // s10
  __int64 v47; // x8
  unsigned __int64 v48; // d0
  int64_t v49; // x26
  unsigned __int64 v50; // x21
  UnityEngine_GameObject_o *v51; // x27
  int32x2_t v52; // d0
  unsigned __int64 v53; // d0 OVERLAPPED
  int v54; // s1
  float v55; // s2
  __int64 v56; // x2
  UnityEngine_Transform_o *v57; // x28
  struct UnityEngine_Vector3_StaticFields *v58; // x8
  __int64 v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  BattleDropItemComponent_o *v72; // x28
  __int64 v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  __int64 v76; // x8
  UnityEngine_Object_o *v77; // x21
  __int64 v78; // x1
  UILabel_o *v79; // x21
  System_String_o *v80; // x22
  char v81; // w1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UILabel_o *notgetLabel; // x20
  System_String_o *noItemLabelKey; // x21
  float v86; // [xsp+10h] [xbp-E0h]
  float width; // [xsp+20h] [xbp-D0h]
  float32x2_t v88; // [xsp+20h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+50h] [xbp-A0h] BYREF
  BattleDropItemComponent_ClickDelegate_o *v91; // [xsp+78h] [xbp-78h]
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4

  v91 = callBack;
  if ( (byte_4B19435 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleViewItemlistComponent_TypeInfo, itemlist, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInParent_UIScrollView___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v17, v18);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, v19, v20);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v27, v28);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v31, v32);
    sub_1BCA7E0(&StringLiteral_2935/*"BATTLE_ITEM_DISP_COLUMN"*/, v33, v34);
    byte_4B19435 = 1;
  }
  memset(&v90, 0, sizeof(v90));
  itemObjectList = (__int64)this->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_62;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v89,
    (System_Collections_Generic_List_object__o *)itemObjectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v90 = v89;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v90,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v90.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v90,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v38 = this->fields.itemObjectList;
  if ( !v38 )
    goto LABEL_62;
  size = (unsigned int)v38->fields._size;
  v40 = v38->fields._version + 1;
  v38->fields._size = 0;
  v38->fields._version = v40;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)v38->fields._items, 0, size, 0LL);
  colmax = this->fields.colmax;
  height = this->fields.height;
  width = this->fields.width;
  if ( !setColMax )
  {
    setColMax = ConstantMaster__getValue((System_String_o *)StringLiteral_2935/*"BATTLE_ITEM_DISP_COLUMN"*/, 0LL);
    if ( setColMax <= 0 )
    {
      v43 = BattleViewItemlistComponent_TypeInfo;
      if ( !BattleViewItemlistComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleViewItemlistComponent_TypeInfo, itemlist);
        v43 = BattleViewItemlistComponent_TypeInfo;
      }
      setColMax = v43->static_fields->defaultColumnMax;
    }
  }
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, itemlist, size);
    byte_4B109C1 = 1;
  }
  if ( setColMax >= 1 )
  {
    v44 = (float)this->fields.colmax / (float)setColMax;
    height = height * v44;
    v45.n64_u64[0] = vmul_f32(
                       vsub_f32(
                         *(float32x2_t *)&this->fields.width,
                         vmul_n_f32(*(float32x2_t *)&this->fields.width, v44)),
                       (float32x2_t)0xBF0000003F000000LL).n64_u64[0];
    z = 1.0;
    v86 = v44;
    width = width * v44;
    if ( itemlist )
      goto LABEL_21;
LABEL_54:
    notgetLabel = this->fields.notgetLabel;
    noItemLabelKey = this->fields.noItemLabelKey;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, itemlist);
    itemObjectList = (__int64)LocalizationManager__Get(noItemLabelKey, 0LL);
    if ( notgetLabel )
    {
      UILabel__set_text(notgetLabel, (System_String_o *)itemObjectList, 0LL);
      itemObjectList = (__int64)this->fields.notgetLabel;
      if ( itemObjectList )
      {
        itemObjectList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemObjectList, 0LL);
        if ( itemObjectList )
        {
          v81 = 1;
          goto LABEL_60;
        }
      }
    }
LABEL_62:
    sub_1BCAA3C(itemObjectList, itemlist);
  }
  v86 = 1.0;
  setColMax = colmax;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v45.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  if ( !itemlist )
    goto LABEL_54;
LABEL_21:
  itemObjectList = (__int64)this->fields.listRoot;
  if ( !itemObjectList )
    goto LABEL_62;
  itemObjectList = (__int64)UnityEngine_Component__GetComponentInParent_object_(
                              (UnityEngine_Component_o *)itemObjectList,
                              (const MethodInfo_2F09DF0 *)Method_UnityEngine_Component_GetComponentInParent_UIScrollView___);
  v47 = *(_QWORD *)&itemlist->max_length;
  if ( (int)v47 >= 1 )
  {
    *(float *)&v48 = width;
    v49 = itemObjectList;
    v50 = 0LL;
    *((float *)&v48 + 1) = -height;
    v88.n64_u64[0] = v48;
    do
    {
      if ( v50 >= (unsigned int)v47 )
LABEL_63:
        sub_1BCAA44(itemObjectList, itemlist);
      itemObjectList = (__int64)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  this->fields.prefabResultItem,
                                  this->fields.listRoot,
                                  0LL,
                                  0LL);
      if ( !itemObjectList )
        goto LABEL_62;
      v51 = (UnityEngine_GameObject_o *)itemObjectList;
      itemObjectList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)itemObjectList, 0LL);
      if ( !itemObjectList )
        goto LABEL_62;
      v52.n64_u32[0] = (int)v50 % setColMax;
      v52.n64_u32[1] = (int)v50 / setColMax;
      v53 = vsub_f32(vmul_f32(v88, vcvt_f32_s32(v52)), v45).n64_u64[0];
      v54 = HIDWORD(v53);
      v55 = 0.0 - z;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)itemObjectList,
        *(UnityEngine_Vector3_o *)&v53,
        0LL);
      itemObjectList = (__int64)UnityEngine_GameObject__get_transform(v51, 0LL);
      v57 = (UnityEngine_Transform_o *)itemObjectList;
      if ( !byte_4B109C6 )
      {
        itemObjectList = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, itemlist, v56);
        byte_4B109C6 = 1;
      }
      if ( !v57 )
        goto LABEL_62;
      v58 = UnityEngine_Vector3_TypeInfo->static_fields;
      v92.fields.z = v86 * v58->oneVector.fields.z;
      v92.fields.y = v86 * v58->oneVector.fields.y;
      v92.fields.x = v86 * v58->oneVector.fields.x;
      UnityEngine_Transform__set_localScale(v57, v92, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v59);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v51, 0LL, 0LL) )
      {
        itemObjectList = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    v51,
                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
        if ( !itemObjectList )
          goto LABEL_62;
        *(_QWORD *)(itemObjectList + 32) = v49;
        sub_1BCA784((PartyOrganizationUtility_o *)(itemObjectList + 32), v49, v66, v67, v68, v69, v70, v71);
        itemObjectList = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    v51,
                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
        if ( v50 >= itemlist->max_length )
          goto LABEL_63;
        if ( !setAction )
          goto LABEL_62;
        v72 = (BattleDropItemComponent_o *)itemObjectList;
        itemObjectList = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, _QWORD))setAction->fields.m_target)(
                           setAction->fields.original_method_info,
                           itemObjectList,
                           itemlist->m_Items[v50],
                           v91,
                           (unsigned int)eventId,
                           *(_QWORD *)&setAction->fields.extra_arg);
        if ( !v72 )
          goto LABEL_62;
        BattleDropItemComponent__Show(v72, 0LL);
      }
      itemObjectList = (__int64)this->fields.itemObjectList;
      if ( !itemObjectList )
        goto LABEL_62;
      v73 = *(_QWORD *)(itemObjectList + 16);
      v74 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++*(_DWORD *)(itemObjectList + 28);
      if ( !v73 )
        goto LABEL_62;
      v75 = *(int *)(itemObjectList + 24);
      if ( (unsigned int)v75 >= *(_DWORD *)(v73 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)itemObjectList,
          (Il2CppObject *)v51,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
      }
      else
      {
        v76 = v73 + 8 * v75;
        *(_DWORD *)(itemObjectList + 24) = v75 + 1;
        *(_QWORD *)(v76 + 32) = v51;
        sub_1BCA784((PartyOrganizationUtility_o *)(v76 + 32), (int64_t)v51, v60, v61, v62, v63, v64, v65);
      }
      LODWORD(v47) = itemlist->max_length;
      ++v50;
    }
    while ( (__int64)v50 < (int)v47 );
  }
  v77 = (UnityEngine_Object_o *)this->fields.notgetLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, itemlist);
  if ( UnityEngine_Object__op_Inequality(v77, 0LL, 0LL) )
  {
    v79 = this->fields.notgetLabel;
    v80 = this->fields.noItemLabelKey;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v78);
    itemObjectList = (__int64)LocalizationManager__Get(v80, 0LL);
    if ( v79 )
    {
      UILabel__set_text(v79, (System_String_o *)itemObjectList, 0LL);
      itemObjectList = (__int64)this->fields.notgetLabel;
      if ( itemObjectList )
      {
        itemObjectList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemObjectList, 0LL);
        if ( itemObjectList )
        {
          v81 = itemlist->max_length == 0;
LABEL_60:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemObjectList, v81, 0LL);
          return;
        }
      }
    }
    goto LABEL_62;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleViewItemlistComponent__setListDataCustomColumn(
        BattleViewItemlistComponent_o *this,
        BattleDropItem_array *itemlist,
        BattleDropItemComponent_ClickDelegate_o *callBack,
        int32_t setColMax,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *v11; // x23
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x6

  if ( (byte_4B19433 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo, itemlist, callBack);
    sub_1BCA7E0(&Method_BattleViewItemlistComponent_SetBattleDropItemComponent__, v9, v10);
    byte_4B19433 = 1;
  }
  v11 = (BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *)sub_1BCAA2C(
                                                                            BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo,
                                                                            itemlist,
                                                                            callBack,
                                                                            *(_QWORD *)&setColMax);
  BattleViewItemlistComponent_BattleDropItemComponentSetAction___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleViewItemlistComponent_SetBattleDropItemComponent__,
    v12);
  BattleViewItemlistComponent__setListData(this, itemlist, -1, v11, callBack, setColMax, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleViewItemlistComponent__setListDataCustomColumn_44957240(
        BattleViewItemlistComponent_o *this,
        BattleDropItem_array *itemlist,
        int32_t eventId,
        BattleDropItemComponent_ClickDelegate_o *callBack,
        int32_t setColMax,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *v13; // x24
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x6

  if ( (byte_4B19434 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo, itemlist, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_BattleViewItemlistComponent_SetBattleDropItemComponentEx__, v11, v12);
    byte_4B19434 = 1;
  }
  v13 = (BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *)sub_1BCAA2C(
                                                                            BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo,
                                                                            itemlist,
                                                                            *(_QWORD *)&eventId,
                                                                            callBack);
  BattleViewItemlistComponent_BattleDropItemComponentSetAction___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BattleViewItemlistComponent_SetBattleDropItemComponentEx__,
    v14);
  BattleViewItemlistComponent__setListData(this, itemlist, eventId, v13, callBack, setColMax, v15);
}


void __fastcall BattleViewItemlistComponent__setShow(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *listRoot; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4B19439 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19439 = 1;
  }
  listRoot = (UnityEngine_Object_o *)this->fields.listRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(listRoot, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1BCAA3C(gameObject, v5);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
}


void __fastcall BattleViewItemlistComponent__set_rewardInfos(
        BattleViewItemlistComponent_o *this,
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._rewardInfos_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._rewardInfos_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x20
  int v12; // w22
  Il2CppObject *v13; // x8
  char v14; // w21
  char v15; // w0
  struct System_Reflection_MethodInfo_o *v16; // x9
  __int64 v17; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) != 0 )
  {
    if ( v12 == 4 )
    {
      v13 = (Il2CppObject *)sub_1A10AF4;
LABEL_16:
      this->fields.m_target = v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v12 == 3 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v14 = sub_1BCA898(v10);
        v15 = sub_1BCAD54(v10);
        if ( (v14 & 1) != 0 )
        {
          if ( (v15 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A10C50;
          else
            v13 = (Il2CppObject *)sub_1A10BEC;
        }
        else if ( (v15 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A10B48;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A10B10;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A10AC8;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v17, 0LL);
    }
  }
  v16 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v16;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A10A58;
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
  __int64 v15[5]; // [xsp+8h] [xbp-78h] BYREF
  int32_t v16; // [xsp+3Ch] [xbp-44h] BYREF

  v16 = eventId;
  if ( (byte_4B19442 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, battleDropItemComponent, dropItem);
    byte_4B19442 = 1;
  }
  v15[4] = 0LL;
  v15[0] = (__int64)battleDropItemComponent;
  v15[1] = (__int64)dropItem;
  v15[2] = (__int64)callback;
  v15[3] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v15, a6, object);
}


void __fastcall BattleViewItemlistComponent_BattleDropItemComponentSetAction__EndInvoke(
        BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall BattleViewItemlistComponent_BattleDropItemComponentSetAction__Invoke(
        BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *this,
        BattleDropItemComponent_o *battleDropItemComponent,
        BattleDropItem_o *dropItem,
        BattleDropItemComponent_ClickDelegate_o *callback,
        int32_t eventId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    battleDropItemComponent,
    dropItem,
    callback,
    eventId,
    *(_QWORD *)&this->fields.extra_arg);
}