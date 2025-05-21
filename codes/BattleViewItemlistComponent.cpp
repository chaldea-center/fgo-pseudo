void __fastcall BattleViewItemlistComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B47FFC & 1) == 0 )
  {
    sub_1BDB878(&BattleViewItemlistComponent_TypeInfo, v1);
    byte_4B47FFC = 1;
  }
  BattleViewItemlistComponent_TypeInfo->static_fields->defaultColumnMax = 8;
}


void __fastcall BattleViewItemlistComponent___ctor(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B47FFB & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1BDB878(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    sub_1BDB878(&StringLiteral_2823/*"BATTLE_ITEMLIST_NOTGET"*/, v6);
    byte_4B47FFB = 1;
  }
  v7 = StringLiteral_2823/*"BATTLE_ITEMLIST_NOTGET"*/;
  this->fields.noItemLabelKey = (struct System_String_o *)StringLiteral_2823/*"BATTLE_ITEMLIST_NOTGET"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.noItemLabelKey, v7, v2, v3);
  this->fields.colmax = 5;
  *(_QWORD *)&this->fields.width = 0x42F0000042FA0000LL;
  v8 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.itemObjectList = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.itemObjectList, (int32_t)v8, v9, v10);
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
  int notgetLabel; // w8

  v5 = this;
  if ( (byte_4B47FF1 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ItemMaster___, battleDropItem);
    sub_1BDB878(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    this = (BattleViewItemlistComponent_o *)sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B47FF1 = 1;
  }
  if ( !battleDropItem )
    goto LABEL_19;
  if ( !Gift__IsItem_39448816(battleDropItem->fields.type, 0LL) )
    return 0;
  this = (BattleViewItemlistComponent_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this )
    goto LABEL_19;
  v8 = *(_QWORD *)&this->fields.m_CachedPtr;
  this = (BattleViewItemlistComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_19;
  this = (BattleViewItemlistComponent_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_19;
  this = (BattleViewItemlistComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            battleDropItem->fields.objectId,
                                            (const MethodInfo_32E1E3C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_19;
  notgetLabel = (int)this->fields.notgetLabel;
  if ( (unsigned int)(notgetLabel - 3) < 2 )
    return BattleViewItemlistComponent__compareItemId(v5, v8, battleDropItem, v9);
  if ( notgetLabel == 22 )
  {
    this = (BattleViewItemlistComponent_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !this )
      goto LABEL_19;
    return LODWORD(this[1].fields.height);
  }
  else
  {
    if ( notgetLabel == 5 )
    {
      this = (BattleViewItemlistComponent_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( this )
        return LODWORD(this[1].fields.width) - v5->fields.boostEventItemManaCount;
LABEL_19:
      sub_1BDBAD4(this, battleDropItem);
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
  UnityEngine_Object_o *ScrollBar; // x20
  struct UIScrollBar_o *v8; // x8
  UIWidget_o *v9; // x20
  struct UIScrollBar_o *v10; // x8
  struct UIScrollBar_o *v11; // x8
  UIWidget_o *v12; // x20
  struct UIScrollBar_o *v13; // x8
  UnityEngine_Vector2_o v14; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B47FF8 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v3);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v4);
    byte_4B47FF8 = 1;
  }
  TitleSpr = (UnityEngine_Component_o *)this->fields.TitleSpr;
  if ( !TitleSpr )
    goto LABEL_41;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !TitleSpr )
    goto LABEL_41;
  v15.fields.y = 177.3;
  v15.fields.x = 0.0;
  v15.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v15, 0LL);
  ScrollViewPanel = (UnityEngine_Object_o *)this->fields.ScrollViewPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v16.fields.y = -146.29;
    v16.fields.x = 0.0;
    v16.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v16, 0LL);
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_41;
    v14.fields.x = -9.41;
    v14.fields.y = -30.504;
    UIPanel__set_clipOffset((UIPanel_o *)TitleSpr, v14, 0LL);
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_41;
    v22.fields.z = 730.3;
    v22.fields.w = 114.9;
    v22.fields.x = 0.0;
    v22.fields.y = 0.0;
    UIPanel__set_baseClipRegion((UIPanel_o *)TitleSpr, v22, 0LL);
  }
  ScrollBar = (UnityEngine_Object_o *)this->fields.ScrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ScrollBar, 0LL, 0LL) )
  {
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollBar;
    if ( TitleSpr )
    {
      TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
      if ( TitleSpr )
      {
        v17.fields.z = 0.0;
        v17.fields.x = 372.0;
        v17.fields.y = -179.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v17, 0LL);
        v8 = this->fields.ScrollBar;
        if ( v8 )
        {
          TitleSpr = (UnityEngine_Component_o *)v8->fields.mFG;
          if ( TitleSpr )
          {
            TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0LL);
            if ( TitleSpr )
            {
              TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)TitleSpr,
                                                      (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
              if ( TitleSpr )
              {
                v9 = (UIWidget_o *)TitleSpr;
                UIWidget__set_width((UIWidget_o *)TitleSpr, 28, 0LL);
                UIWidget__set_height(v9, 120, 0LL);
                v10 = this->fields.ScrollBar;
                if ( v10 )
                {
                  TitleSpr = (UnityEngine_Component_o *)v10->fields.mFG;
                  if ( TitleSpr )
                  {
                    TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0LL);
                    if ( TitleSpr )
                    {
                      TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              (UnityEngine_GameObject_o *)TitleSpr,
                                                              (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                      if ( TitleSpr )
                      {
                        v18.fields.x = 28.0;
                        v18.fields.z = 0.0;
                        v18.fields.y = 120.0;
                        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)TitleSpr, v18, 0LL);
                        v11 = this->fields.ScrollBar;
                        if ( v11 )
                        {
                          TitleSpr = (UnityEngine_Component_o *)v11->fields.mBG;
                          if ( TitleSpr )
                          {
                            TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0LL);
                            if ( TitleSpr )
                            {
                              TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      (UnityEngine_GameObject_o *)TitleSpr,
                                                                      (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                              if ( TitleSpr )
                              {
                                v12 = (UIWidget_o *)TitleSpr;
                                UIWidget__set_width((UIWidget_o *)TitleSpr, 16, 0LL);
                                UIWidget__set_height(v12, 120, 0LL);
                                v13 = this->fields.ScrollBar;
                                if ( v13 )
                                {
                                  TitleSpr = (UnityEngine_Component_o *)v13->fields.mFG;
                                  if ( TitleSpr )
                                  {
                                    TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                            TitleSpr,
                                                                            0LL);
                                    if ( TitleSpr )
                                    {
                                      TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              (UnityEngine_GameObject_o *)TitleSpr,
                                                                              (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                                      if ( TitleSpr )
                                      {
                                        v19.fields.x = 16.0;
                                        v19.fields.z = 0.0;
                                        v19.fields.y = 120.0;
                                        UnityEngine_BoxCollider__set_size(
                                          (UnityEngine_BoxCollider_o *)TitleSpr,
                                          v19,
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
    sub_1BDBAD4(TitleSpr, method);
  }
LABEL_36:
  TitleSpr = (UnityEngine_Component_o *)this->fields.notgetLabel;
  if ( !TitleSpr )
    goto LABEL_41;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !TitleSpr )
    goto LABEL_41;
  v20.fields.x = 0.0;
  v20.fields.z = 0.0;
  v20.fields.y = -134.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v20, 0LL);
  TitleSpr = (UnityEngine_Component_o *)this->fields.rewardSpr;
  if ( !TitleSpr )
    goto LABEL_41;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !TitleSpr )
    goto LABEL_41;
  v21.fields.x = 0.0;
  v21.fields.z = 0.0;
  v21.fields.y = -91.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v21, 0LL);
}


void __fastcall BattleViewItemlistComponent__ClearObj(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x0
  int32_t v7; // w20
  int32_t size; // w2
  Il2CppObject *Item; // x21
  int v10; // w8

  if ( (byte_4B47FF5 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    byte_4B47FF5 = 1;
  }
  itemObjectList = this->fields.itemObjectList;
  if ( !itemObjectList )
LABEL_9:
    sub_1BDBAD4(itemObjectList, method);
  v7 = 0;
  while ( 1 )
  {
    size = itemObjectList->fields._size;
    if ( v7 >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)itemObjectList,
             v7,
             (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200((UnityEngine_Object_o *)Item, 0LL);
    itemObjectList = this->fields.itemObjectList;
    ++v7;
    if ( !itemObjectList )
      goto LABEL_9;
  }
  v10 = itemObjectList->fields._version + 1;
  itemObjectList->fields._size = 0;
  itemObjectList->fields._version = v10;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)itemObjectList->fields._items, 0, size, 0LL);
}


void __fastcall BattleViewItemlistComponent__DefaultLayoutScrollView(
        BattleViewItemlistComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *TitleSpr; // x0
  UnityEngine_Object_o *ScrollViewPanel; // x20
  UnityEngine_Object_o *ScrollBar; // x20
  struct UIScrollBar_o *v8; // x8
  UIWidget_o *v9; // x20
  struct UIScrollBar_o *v10; // x8
  struct UIScrollBar_o *v11; // x8
  UIWidget_o *v12; // x20
  struct UIScrollBar_o *v13; // x8
  UnityEngine_Vector2_o v14; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B47FF7 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v3);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v4);
    byte_4B47FF7 = 1;
  }
  TitleSpr = (UnityEngine_Component_o *)this->fields.TitleSpr;
  if ( !TitleSpr )
    goto LABEL_41;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !TitleSpr )
    goto LABEL_41;
  v15.fields.y = 189.3;
  v15.fields.x = 0.0;
  v15.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v15, 0LL);
  ScrollViewPanel = (UnityEngine_Object_o *)this->fields.ScrollViewPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v16.fields.y = -88.4;
    v16.fields.x = 0.0;
    v16.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v16, 0LL);
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_41;
    v14.fields.x = -9.41;
    v14.fields.y = -62.9;
    UIPanel__set_clipOffset((UIPanel_o *)TitleSpr, v14, 0LL);
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_41;
    v22.fields.z = 730.3;
    v22.fields.w = 184.9;
    v22.fields.x = 0.0;
    v22.fields.y = 0.0;
    UIPanel__set_baseClipRegion((UIPanel_o *)TitleSpr, v22, 0LL);
  }
  ScrollBar = (UnityEngine_Object_o *)this->fields.ScrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ScrollBar, 0LL, 0LL) )
  {
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollBar;
    if ( TitleSpr )
    {
      TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
      if ( TitleSpr )
      {
        v17.fields.z = 0.0;
        v17.fields.x = 372.0;
        v17.fields.y = -147.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v17, 0LL);
        v8 = this->fields.ScrollBar;
        if ( v8 )
        {
          TitleSpr = (UnityEngine_Component_o *)v8->fields.mFG;
          if ( TitleSpr )
          {
            TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0LL);
            if ( TitleSpr )
            {
              TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)TitleSpr,
                                                      (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
              if ( TitleSpr )
              {
                v9 = (UIWidget_o *)TitleSpr;
                UIWidget__set_width((UIWidget_o *)TitleSpr, 28, 0LL);
                UIWidget__set_height(v9, 180, 0LL);
                v10 = this->fields.ScrollBar;
                if ( v10 )
                {
                  TitleSpr = (UnityEngine_Component_o *)v10->fields.mFG;
                  if ( TitleSpr )
                  {
                    TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0LL);
                    if ( TitleSpr )
                    {
                      TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              (UnityEngine_GameObject_o *)TitleSpr,
                                                              (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                      if ( TitleSpr )
                      {
                        v18.fields.x = 28.0;
                        v18.fields.z = 0.0;
                        v18.fields.y = 160.0;
                        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)TitleSpr, v18, 0LL);
                        v11 = this->fields.ScrollBar;
                        if ( v11 )
                        {
                          TitleSpr = (UnityEngine_Component_o *)v11->fields.mBG;
                          if ( TitleSpr )
                          {
                            TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0LL);
                            if ( TitleSpr )
                            {
                              TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      (UnityEngine_GameObject_o *)TitleSpr,
                                                                      (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                              if ( TitleSpr )
                              {
                                v12 = (UIWidget_o *)TitleSpr;
                                UIWidget__set_width((UIWidget_o *)TitleSpr, 16, 0LL);
                                UIWidget__set_height(v12, 180, 0LL);
                                v13 = this->fields.ScrollBar;
                                if ( v13 )
                                {
                                  TitleSpr = (UnityEngine_Component_o *)v13->fields.mFG;
                                  if ( TitleSpr )
                                  {
                                    TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                            TitleSpr,
                                                                            0LL);
                                    if ( TitleSpr )
                                    {
                                      TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              (UnityEngine_GameObject_o *)TitleSpr,
                                                                              (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                                      if ( TitleSpr )
                                      {
                                        v19.fields.x = 16.0;
                                        v19.fields.z = 0.0;
                                        v19.fields.y = 160.0;
                                        UnityEngine_BoxCollider__set_size(
                                          (UnityEngine_BoxCollider_o *)TitleSpr,
                                          v19,
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
    sub_1BDBAD4(TitleSpr, method);
  }
LABEL_36:
  TitleSpr = (UnityEngine_Component_o *)this->fields.notgetLabel;
  if ( !TitleSpr )
    goto LABEL_41;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !TitleSpr )
    goto LABEL_41;
  v20.fields.x = 0.0;
  v20.fields.z = 0.0;
  v20.fields.y = -74.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v20, 0LL);
  TitleSpr = (UnityEngine_Component_o *)this->fields.rewardSpr;
  if ( !TitleSpr )
    goto LABEL_41;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !TitleSpr )
    goto LABEL_41;
  v21.fields.x = 0.0;
  v21.fields.y = -31.0;
  v21.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v21, 0LL);
}


void __fastcall BattleViewItemlistComponent__Reposition(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *listRoot; // x0

  if ( (byte_4B47FF9 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_UIGrid___, method);
    byte_4B47FF9 = 1;
  }
  listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !listRoot
    || (listRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                listRoot,
                                                (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
  {
    sub_1BDBAD4(listRoot, method);
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

  if ( (byte_4B47FFA & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B47FFA = 1;
  }
  ScrollBar = (UnityEngine_Object_o *)this->fields.ScrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ScrollBar, 0LL, 0LL) )
  {
    v5 = (UIProgressBar_o *)this->fields.ScrollBar;
    if ( !v5 )
      sub_1BDBAD4(0LL, v4);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( !battleDropItemComponent )
    sub_1BDBAD4(this, 0LL);
  BattleDropItemComponent__Set(battleDropItemComponent, dropItem, 0LL);
  battleDropItemComponent->fields.callbackFunc = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&battleDropItemComponent->fields.callbackFunc, (int32_t)callback, v8, v9);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  v9 = BattleViewItemlistComponent__CalcPossessionNum(this, dropItem, (int32_t)dropItem, (const MethodInfo *)callback);
  if ( !battleDropItemComponent )
    sub_1BDBAD4(v9, v10);
  BattleDropItemComponent__Set_44748372(battleDropItemComponent, dropItem, v9, 0LL);
  battleDropItemComponent->fields.callbackFunc = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&battleDropItemComponent->fields.callbackFunc, (int32_t)callback, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleViewItemlistComponent__SwitchShowNumMode(
        BattleViewItemlistComponent_o *this,
        bool isShowPossessionNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemObjectList; // x0
  int32_t v8; // w21

  if ( (byte_4B47FF6 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, isShowPossessionNum);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    byte_4B47FF6 = 1;
  }
  itemObjectList = (System_Collections_Generic_List_object__o *)this->fields.itemObjectList;
  if ( !itemObjectList )
LABEL_12:
    sub_1BDBAD4(itemObjectList, isShowPossessionNum);
  v8 = 0;
  while ( v8 < itemObjectList->fields._size )
  {
    itemObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    itemObjectList,
                                                                    v8,
                                                                    (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( itemObjectList )
    {
      itemObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      (UnityEngine_GameObject_o *)itemObjectList,
                                                                      (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( itemObjectList )
      {
        if ( isShowPossessionNum )
          BattleDropItemComponent__ShowPossessionNum((BattleDropItemComponent_o *)itemObjectList, 0LL);
        else
          BattleDropItemComponent__ShowDropNum((BattleDropItemComponent_o *)itemObjectList, 0LL);
        itemObjectList = (System_Collections_Generic_List_object__o *)this->fields.itemObjectList;
        ++v8;
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
        sub_1BDBADC(this, userId, battleDropItem);
      if ( !battleDropItem || (v9 = m_Items[v7]) == 0LL )
        sub_1BDBAD4(this, userId);
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
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B47FF2 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_UserItemMaster___, userId);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B47FF2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    sub_1BDBAD4(Instance, v10);
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
  struct QuestRewardInfo_array **p_rewardInfos_k__BackingField; // x20

  this->fields._rewardInfos_k__BackingField = rewardInfos;
  p_rewardInfos_k__BackingField = &this->fields._rewardInfos_k__BackingField;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._rewardInfos_k__BackingField,
    (int32_t)rewardInfos,
    (int32_t)rewardInfos,
    method);
  *((_DWORD *)p_rewardInfos_k__BackingField - 3) = boostEventItemManaCount;
}


void __fastcall BattleViewItemlistComponent__setHide(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *listRoot; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4B47FF3 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B47FF3 = 1;
  }
  listRoot = (UnityEngine_Object_o *)this->fields.listRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(listRoot, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1BDBAD4(gameObject, v4);
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
  __int64 itemObjectList; // x0
  Il2CppObject *current; // x25
  struct System_Collections_Generic_List_GameObject__o *v25; // x8
  int32_t size; // w2
  int v27; // w9
  int32_t colmax; // w23
  float height; // s8
  BattleViewItemlistComponent_c *v30; // x0
  float v31; // s4
  float32x2_t v32; // d9
  float z; // s10
  __int64 v34; // x2
  __int64 v35; // x8
  unsigned __int64 v36; // d0
  __int64 v37; // x26
  unsigned __int64 v38; // x21
  UnityEngine_GameObject_o *v39; // x27
  int32x2_t v40; // d0
  unsigned __int64 v41; // d0 OVERLAPPED
  int v42; // s1
  float v43; // s2
  UnityEngine_Transform_o *v44; // x28
  struct UnityEngine_Vector3_StaticFields *v45; // x8
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  BattleDropItemComponent_o *v50; // x28
  __int64 v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  __int64 v54; // x8
  UnityEngine_Object_o *v55; // x21
  UILabel_o *v56; // x21
  System_String_o *v57; // x22
  char v58; // w1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UILabel_o *notgetLabel; // x20
  System_String_o *noItemLabelKey; // x21
  float v63; // [xsp+10h] [xbp-E0h]
  float width; // [xsp+20h] [xbp-D0h]
  float32x2_t v65; // [xsp+20h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+50h] [xbp-A0h] BYREF
  BattleDropItemComponent_ClickDelegate_o *v68; // [xsp+78h] [xbp-78h]
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4

  v68 = callBack;
  if ( (byte_4B47FF0 & 1) == 0 )
  {
    sub_1BDB878(&BattleViewItemlistComponent_TypeInfo, itemlist);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentInParent_UIScrollView___, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v14);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, v15);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__Add__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__Clear__, v18);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v19);
    sub_1BDB878(&LocalizationManager_TypeInfo, v20);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v21);
    sub_1BDB878(&StringLiteral_2824/*"BATTLE_ITEM_DISP_COLUMN"*/, v22);
    byte_4B47FF0 = 1;
  }
  memset(&v67, 0, sizeof(v67));
  itemObjectList = (__int64)this->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_62;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v66,
    (System_Collections_Generic_List_object__o *)itemObjectList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v67 = v66;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v67,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v67.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v67,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v25 = this->fields.itemObjectList;
  if ( !v25 )
    goto LABEL_62;
  size = v25->fields._size;
  v27 = v25->fields._version + 1;
  v25->fields._size = 0;
  v25->fields._version = v27;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v25->fields._items, 0, size, 0LL);
  colmax = this->fields.colmax;
  height = this->fields.height;
  width = this->fields.width;
  if ( !setColMax )
  {
    setColMax = ConstantMaster__getValue((System_String_o *)StringLiteral_2824/*"BATTLE_ITEM_DISP_COLUMN"*/, 0LL);
    if ( setColMax <= 0 )
    {
      v30 = BattleViewItemlistComponent_TypeInfo;
      if ( !BattleViewItemlistComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleViewItemlistComponent_TypeInfo);
        v30 = BattleViewItemlistComponent_TypeInfo;
      }
      setColMax = v30->static_fields->defaultColumnMax;
    }
  }
  if ( !byte_4B3E911 )
  {
    sub_1BDB878(&UnityEngine_Vector3_TypeInfo, itemlist);
    byte_4B3E911 = 1;
  }
  if ( setColMax >= 1 )
  {
    v31 = (float)this->fields.colmax / (float)setColMax;
    height = height * v31;
    v32.n64_u64[0] = vmul_f32(
                       vsub_f32(
                         *(float32x2_t *)&this->fields.width,
                         vmul_n_f32(*(float32x2_t *)&this->fields.width, v31)),
                       (float32x2_t)0xBF0000003F000000LL).n64_u64[0];
    z = 1.0;
    v63 = v31;
    width = width * v31;
    if ( itemlist )
      goto LABEL_21;
LABEL_54:
    notgetLabel = this->fields.notgetLabel;
    noItemLabelKey = this->fields.noItemLabelKey;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
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
          v58 = 1;
          goto LABEL_60;
        }
      }
    }
LABEL_62:
    sub_1BDBAD4(itemObjectList, itemlist);
  }
  v63 = 1.0;
  setColMax = colmax;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v32.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  if ( !itemlist )
    goto LABEL_54;
LABEL_21:
  itemObjectList = (__int64)this->fields.listRoot;
  if ( !itemObjectList )
    goto LABEL_62;
  itemObjectList = (__int64)UnityEngine_Component__GetComponentInParent_object__50505704(
                              (UnityEngine_Component_o *)itemObjectList,
                              (const MethodInfo_302A7E8 *)Method_UnityEngine_Component_GetComponentInParent_UIScrollView___);
  v35 = *(_QWORD *)&itemlist->max_length;
  if ( (int)v35 >= 1 )
  {
    *(float *)&v36 = width;
    v37 = itemObjectList;
    v38 = 0LL;
    *((float *)&v36 + 1) = -height;
    v65.n64_u64[0] = v36;
    do
    {
      if ( v38 >= (unsigned int)v35 )
LABEL_63:
        sub_1BDBADC(itemObjectList, itemlist, v34);
      itemObjectList = (__int64)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  this->fields.prefabResultItem,
                                  this->fields.listRoot,
                                  0LL,
                                  0LL);
      if ( !itemObjectList )
        goto LABEL_62;
      v39 = (UnityEngine_GameObject_o *)itemObjectList;
      itemObjectList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)itemObjectList, 0LL);
      if ( !itemObjectList )
        goto LABEL_62;
      v40.n64_u32[0] = (int)v38 % setColMax;
      v40.n64_u32[1] = (int)v38 / setColMax;
      v41 = vsub_f32(vmul_f32(v65, vcvt_f32_s32(v40)), v32).n64_u64[0];
      v42 = HIDWORD(v41);
      v43 = 0.0 - z;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)itemObjectList,
        *(UnityEngine_Vector3_o *)&v41,
        0LL);
      itemObjectList = (__int64)UnityEngine_GameObject__get_transform(v39, 0LL);
      v44 = (UnityEngine_Transform_o *)itemObjectList;
      if ( !byte_4B3E916 )
      {
        itemObjectList = sub_1BDB878(&UnityEngine_Vector3_TypeInfo, itemlist);
        byte_4B3E916 = 1;
      }
      if ( !v44 )
        goto LABEL_62;
      v45 = UnityEngine_Vector3_TypeInfo->static_fields;
      v69.fields.z = v63 * v45->oneVector.fields.z;
      v69.fields.y = v63 * v45->oneVector.fields.y;
      v69.fields.x = v63 * v45->oneVector.fields.x;
      UnityEngine_Transform__set_localScale(v44, v69, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0LL, 0LL) )
      {
        itemObjectList = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    v39,
                                    (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
        if ( !itemObjectList )
          goto LABEL_62;
        *(_QWORD *)(itemObjectList + 32) = v37;
        sub_1BDB81C((CGThumbnailListItem_o *)(itemObjectList + 32), v37, v48, v49);
        itemObjectList = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    v39,
                                    (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
        if ( v38 >= itemlist->max_length )
          goto LABEL_63;
        if ( !setAction )
          goto LABEL_62;
        v50 = (BattleDropItemComponent_o *)itemObjectList;
        itemObjectList = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, _QWORD))setAction->fields.m_target)(
                           setAction->fields.original_method_info,
                           itemObjectList,
                           itemlist->m_Items[v38],
                           v68,
                           (unsigned int)eventId,
                           *(_QWORD *)&setAction->fields.extra_arg);
        if ( !v50 )
          goto LABEL_62;
        BattleDropItemComponent__Show(v50, 0LL);
      }
      itemObjectList = (__int64)this->fields.itemObjectList;
      if ( !itemObjectList )
        goto LABEL_62;
      v51 = *(_QWORD *)(itemObjectList + 16);
      v52 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++*(_DWORD *)(itemObjectList + 28);
      if ( !v51 )
        goto LABEL_62;
      v53 = *(int *)(itemObjectList + 24);
      if ( (unsigned int)v53 >= *(_DWORD *)(v51 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)itemObjectList,
          (Il2CppObject *)v39,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = v51 + 8 * v53;
        *(_DWORD *)(itemObjectList + 24) = v53 + 1;
        *(_QWORD *)(v54 + 32) = v39;
        sub_1BDB81C((CGThumbnailListItem_o *)(v54 + 32), (int32_t)v39, v46, v47);
      }
      LODWORD(v35) = itemlist->max_length;
      ++v38;
    }
    while ( (__int64)v38 < (int)v35 );
  }
  v55 = (UnityEngine_Object_o *)this->fields.notgetLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v55, 0LL, 0LL) )
  {
    v56 = this->fields.notgetLabel;
    v57 = this->fields.noItemLabelKey;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemObjectList = (__int64)LocalizationManager__Get(v57, 0LL);
    if ( v56 )
    {
      UILabel__set_text(v56, (System_String_o *)itemObjectList, 0LL);
      itemObjectList = (__int64)this->fields.notgetLabel;
      if ( itemObjectList )
      {
        itemObjectList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemObjectList, 0LL);
        if ( itemObjectList )
        {
          v58 = itemlist->max_length == 0;
LABEL_60:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemObjectList, v58, 0LL);
          return;
        }
      }
    }
    goto LABEL_62;
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
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x6

  if ( (byte_4B47FEE & 1) == 0 )
  {
    sub_1BDB878(&BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo, itemlist);
    sub_1BDB878(&Method_BattleViewItemlistComponent_SetBattleDropItemComponent__, v9);
    byte_4B47FEE = 1;
  }
  v10 = (BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *)sub_1BDBAC4(BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo);
  BattleViewItemlistComponent_BattleDropItemComponentSetAction___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleViewItemlistComponent_SetBattleDropItemComponent__,
    v11);
  BattleViewItemlistComponent__setListData(this, itemlist, -1, v10, callBack, setColMax, v12);
}


void __fastcall BattleViewItemlistComponent__setListDataCustomColumn_46350696(
        BattleViewItemlistComponent_o *this,
        BattleDropItem_array *itemlist,
        int32_t eventId,
        BattleDropItemComponent_ClickDelegate_o *callBack,
        int32_t setColMax,
        const MethodInfo *method)
{
  __int64 v11; // x1
  BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *v12; // x24
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x6

  if ( (byte_4B47FEF & 1) == 0 )
  {
    sub_1BDB878(&BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo, itemlist);
    sub_1BDB878(&Method_BattleViewItemlistComponent_SetBattleDropItemComponentEx__, v11);
    byte_4B47FEF = 1;
  }
  v12 = (BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *)sub_1BDBAC4(BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo);
  BattleViewItemlistComponent_BattleDropItemComponentSetAction___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleViewItemlistComponent_SetBattleDropItemComponentEx__,
    v13);
  BattleViewItemlistComponent__setListData(this, itemlist, eventId, v12, callBack, setColMax, v14);
}


void __fastcall BattleViewItemlistComponent__setShow(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *listRoot; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4B47FF4 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B47FF4 = 1;
  }
  listRoot = (UnityEngine_Object_o *)this->fields.listRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(listRoot, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1BDBAD4(gameObject, v4);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
}


void __fastcall BattleViewItemlistComponent__set_rewardInfos(
        BattleViewItemlistComponent_o *this,
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._rewardInfos_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._rewardInfos_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleViewItemlistComponent_BattleDropItemComponentSetAction___ctor(
        BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x20
  int v8; // w22
  Il2CppObject *v9; // x8
  char v10; // w21
  char v11; // w0
  struct System_Reflection_MethodInfo_o *v12; // x9
  __int64 v13; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) != 0 )
  {
    if ( v8 == 4 )
    {
      v9 = (Il2CppObject *)sub_1A28E74;
LABEL_16:
      this->fields.m_target = v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v8 == 3 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v10 = sub_1BDB930(v6);
        v11 = sub_1BDBDEC(v6);
        if ( (v10 & 1) != 0 )
        {
          if ( (v11 & 1) != 0 )
            v9 = (Il2CppObject *)sub_1A28FD0;
          else
            v9 = (Il2CppObject *)sub_1A28F6C;
        }
        else if ( (v11 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_1A28EC8;
        }
        else
        {
          v9 = (Il2CppObject *)sub_1A28E90;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_1A28E48;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v13, 0LL);
    }
  }
  v12 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v12;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A28DD8;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B47FFD & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, battleDropItemComponent);
    byte_4B47FFD = 1;
  }
  v15[4] = 0LL;
  v15[0] = (__int64)battleDropItemComponent;
  v15[1] = (__int64)dropItem;
  v15[2] = (__int64)callback;
  v15[3] = j_il2cpp_value_box_0(int_TypeInfo, &v16, dropItem, callback, *(_QWORD *)&eventId);
  return (System_IAsyncResult_o *)sub_1BDB82C(this, v15, a6, object);
}


void __fastcall BattleViewItemlistComponent_BattleDropItemComponentSetAction__EndInvoke(
        BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
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