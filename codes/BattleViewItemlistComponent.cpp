void BattleViewItemlistComponent___cctor(const MethodInfo *method)
{
  if ( (byte_59742CC & 1) == 0 )
  {
    sub_2213A60(&BattleViewItemlistComponent_TypeInfo);
    byte_59742CC = 1;
  }
  BattleViewItemlistComponent_TypeInfo->static_fields->defaultColumnMax = 8;
}


void BattleViewItemlistComponent___ctor(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  System_Collections_Generic_List_GameObject__c *v10; // x0
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_59742CB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&StringLiteral_2909/*"BATTLE_ITEMLIST_NOTGET"*/);
    byte_59742CB = 1;
  }
  v9 = StringLiteral_2909/*"BATTLE_ITEMLIST_NOTGET"*/;
  this->fields.noItemLabelKey = (struct System_String_o *)StringLiteral_2909/*"BATTLE_ITEMLIST_NOTGET"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.noItemLabelKey, v9, v2, v3, v4, v5, v6, v7);
  v10 = System_Collections_Generic_List_GameObject__TypeInfo;
  this->fields.colmax = 5;
  *(_QWORD *)&this->fields.width = 0x42F0000042FA0000LL;
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v10);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.itemObjectList = (struct System_Collections_Generic_List_GameObject__o *)v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemObjectList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


int32_t BattleViewItemlistComponent__CalcPossessionNum(
        BattleViewItemlistComponent_o *this,
        BattleDropItem_o *battleDropItem,
        int32_t eventId,
        const MethodInfo *method)
{
  BattleViewItemlistComponent_o *v5; // x20
  int64_t m_CachedPtr; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x4
  int notgetLabel; // w8

  v5 = this;
  if ( (byte_59742C1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    this = (BattleViewItemlistComponent_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59742C1 = 1;
  }
  if ( !battleDropItem )
    goto LABEL_23;
  if ( !Gift__IsItem_47387928(battleDropItem->fields.type, 0) )
    return 0;
  this = (BattleViewItemlistComponent_o *)UserGameMaster__getSelfUserGame(0);
  if ( !this )
    goto LABEL_23;
  m_CachedPtr = this->fields.m_CachedPtr;
  this = (BattleViewItemlistComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_23;
  this = (BattleViewItemlistComponent_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_23;
  this = (BattleViewItemlistComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            battleDropItem->fields.objectId,
                                            (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_23;
  notgetLabel = (int)this->fields.notgetLabel;
  if ( notgetLabel <= 4 )
  {
    if ( (unsigned int)(notgetLabel - 3) < 2 )
      return BattleViewItemlistComponent__compareItemId(v5, m_CachedPtr, battleDropItem, v7);
    if ( notgetLabel == 2 )
    {
      this = (BattleViewItemlistComponent_o *)UserGameMaster__getSelfUserGame(0);
      if ( this )
        return *((_DWORD *)this + 46);
LABEL_23:
      sub_2213CDC(this, battleDropItem);
    }
    return BattleViewItemlistComponent__getUserItemNum(this, m_CachedPtr, battleDropItem, 0, v8);
  }
  if ( notgetLabel != 22 )
  {
    if ( notgetLabel == 5 )
    {
      this = (BattleViewItemlistComponent_o *)UserGameMaster__getSelfUserGame(0);
      if ( this )
        return *((_DWORD *)this + 48) - v5->fields.boostEventItemManaCount;
      goto LABEL_23;
    }
    return BattleViewItemlistComponent__getUserItemNum(this, m_CachedPtr, battleDropItem, 0, v8);
  }
  this = (BattleViewItemlistComponent_o *)UserGameMaster__getSelfUserGame(0);
  if ( !this )
    goto LABEL_23;
  return *((_DWORD *)this + 49);
}


void BattleViewItemlistComponent__ChangeLayoutScrollView(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *TitleSpr; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *ScrollViewPanel; // x20
  UnityEngine_Object_o *ScrollBar; // x20
  struct UIScrollBar_o *v7; // x8
  UIWidget_o *v8; // x20
  struct UIScrollBar_o *v9; // x8
  struct UIScrollBar_o *v10; // x8
  UIWidget_o *v11; // x20
  struct UIScrollBar_o *v12; // x8
  UnityEngine_Vector2_o v13; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59742C8 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59742C8 = 1;
  }
  TitleSpr = (UnityEngine_Component_o *)this->fields.TitleSpr;
  if ( !TitleSpr )
    goto LABEL_41;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0);
  if ( !TitleSpr )
    goto LABEL_41;
  v14.fields.x = 0.0;
  v14.fields.z = 0.0;
  v14.fields.y = 177.3;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v14, 0);
  ScrollViewPanel = (UnityEngine_Object_o *)this->fields.ScrollViewPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(ScrollViewPanel, 0, 0) )
  {
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_41;
    UIPanel__Refresh((UIPanel_o *)TitleSpr, 0);
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_41;
    TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0);
    if ( !TitleSpr )
      goto LABEL_41;
    v15.fields.x = 0.0;
    v15.fields.z = 0.0;
    v15.fields.y = -146.29;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v15, 0);
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_41;
    v13.fields.x = -9.41;
    v13.fields.y = -30.504;
    UIPanel__set_clipOffset((UIPanel_o *)TitleSpr, v13, 0);
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_41;
    v21.fields.x = 0.0;
    v21.fields.y = 0.0;
    v21.fields.z = 730.3;
    v21.fields.w = 114.9;
    UIPanel__set_baseClipRegion((UIPanel_o *)TitleSpr, v21, 0);
  }
  ScrollBar = (UnityEngine_Object_o *)this->fields.ScrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(ScrollBar, 0, 0) )
  {
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollBar;
    if ( TitleSpr )
    {
      TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0);
      if ( TitleSpr )
      {
        v16.fields.z = 0.0;
        v16.fields.x = 372.0;
        v16.fields.y = -179.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v16, 0);
        v7 = this->fields.ScrollBar;
        if ( v7 )
        {
          TitleSpr = (UnityEngine_Component_o *)v7->fields.mFG;
          if ( TitleSpr )
          {
            TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0);
            if ( TitleSpr )
            {
              TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)TitleSpr,
                                                      (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
              if ( TitleSpr )
              {
                v8 = (UIWidget_o *)TitleSpr;
                UIWidget__set_width((UIWidget_o *)TitleSpr, 28, 0);
                UIWidget__set_height(v8, 120, 0);
                v9 = this->fields.ScrollBar;
                if ( v9 )
                {
                  TitleSpr = (UnityEngine_Component_o *)v9->fields.mFG;
                  if ( TitleSpr )
                  {
                    TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0);
                    if ( TitleSpr )
                    {
                      TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              (UnityEngine_GameObject_o *)TitleSpr,
                                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                      if ( TitleSpr )
                      {
                        v17.fields.z = 0.0;
                        v17.fields.x = 28.0;
                        v17.fields.y = 120.0;
                        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)TitleSpr, v17, 0);
                        v10 = this->fields.ScrollBar;
                        if ( v10 )
                        {
                          TitleSpr = (UnityEngine_Component_o *)v10->fields.mBG;
                          if ( TitleSpr )
                          {
                            TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0);
                            if ( TitleSpr )
                            {
                              TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      (UnityEngine_GameObject_o *)TitleSpr,
                                                                      (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                              if ( TitleSpr )
                              {
                                v11 = (UIWidget_o *)TitleSpr;
                                UIWidget__set_width((UIWidget_o *)TitleSpr, 16, 0);
                                UIWidget__set_height(v11, 120, 0);
                                v12 = this->fields.ScrollBar;
                                if ( v12 )
                                {
                                  TitleSpr = (UnityEngine_Component_o *)v12->fields.mFG;
                                  if ( TitleSpr )
                                  {
                                    TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                            TitleSpr,
                                                                            0);
                                    if ( TitleSpr )
                                    {
                                      TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              (UnityEngine_GameObject_o *)TitleSpr,
                                                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                                      if ( TitleSpr )
                                      {
                                        v18.fields.z = 0.0;
                                        v18.fields.x = 16.0;
                                        v18.fields.y = 120.0;
                                        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)TitleSpr, v18, 0);
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
    sub_2213CDC(TitleSpr, method);
  }
LABEL_36:
  TitleSpr = (UnityEngine_Component_o *)this->fields.notgetLabel;
  if ( !TitleSpr )
    goto LABEL_41;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0);
  if ( !TitleSpr )
    goto LABEL_41;
  v19.fields.x = 0.0;
  v19.fields.z = 0.0;
  v19.fields.y = -134.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v19, 0);
  TitleSpr = (UnityEngine_Component_o *)this->fields.rewardSpr;
  if ( !TitleSpr )
    goto LABEL_41;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0);
  if ( !TitleSpr )
    goto LABEL_41;
  v20.fields.x = 0.0;
  v20.fields.z = 0.0;
  v20.fields.y = -91.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v20, 0);
}


void BattleViewItemlistComponent__ClearObj(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x0
  int32_t v4; // w20
  int32_t size; // w2
  __int64 v6; // x1
  Il2CppObject *Item; // x21
  int v8; // w8

  if ( (byte_59742C5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59742C5 = 1;
  }
  itemObjectList = this->fields.itemObjectList;
  if ( !itemObjectList )
LABEL_9:
    sub_2213CDC(itemObjectList, method);
  v4 = 0;
  while ( 1 )
  {
    size = itemObjectList->fields._size;
    if ( v4 >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)itemObjectList,
             v4,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)Item, 0);
    itemObjectList = this->fields.itemObjectList;
    ++v4;
    if ( !itemObjectList )
      goto LABEL_9;
  }
  v8 = itemObjectList->fields._version + 1;
  itemObjectList->fields._size = 0;
  itemObjectList->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)itemObjectList->fields._items, 0, size, 0);
}


void BattleViewItemlistComponent__DefaultLayoutScrollView(
        BattleViewItemlistComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *TitleSpr; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *ScrollViewPanel; // x20
  UnityEngine_Object_o *ScrollBar; // x20
  struct UIScrollBar_o *v7; // x8
  UIWidget_o *v8; // x20
  struct UIScrollBar_o *v9; // x8
  struct UIScrollBar_o *v10; // x8
  UIWidget_o *v11; // x20
  struct UIScrollBar_o *v12; // x8
  UnityEngine_Vector2_o v13; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59742C7 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59742C7 = 1;
  }
  TitleSpr = (UnityEngine_Component_o *)this->fields.TitleSpr;
  if ( !TitleSpr )
    goto LABEL_41;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0);
  if ( !TitleSpr )
    goto LABEL_41;
  v14.fields.x = 0.0;
  v14.fields.z = 0.0;
  v14.fields.y = 189.3;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v14, 0);
  ScrollViewPanel = (UnityEngine_Object_o *)this->fields.ScrollViewPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(ScrollViewPanel, 0, 0) )
  {
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_41;
    UIPanel__Refresh((UIPanel_o *)TitleSpr, 0);
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_41;
    TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0);
    if ( !TitleSpr )
      goto LABEL_41;
    v15.fields.x = 0.0;
    v15.fields.z = 0.0;
    v15.fields.y = -88.4;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v15, 0);
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_41;
    v13.fields.x = -9.41;
    v13.fields.y = -62.9;
    UIPanel__set_clipOffset((UIPanel_o *)TitleSpr, v13, 0);
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !TitleSpr )
      goto LABEL_41;
    v21.fields.x = 0.0;
    v21.fields.y = 0.0;
    v21.fields.z = 730.3;
    v21.fields.w = 184.9;
    UIPanel__set_baseClipRegion((UIPanel_o *)TitleSpr, v21, 0);
  }
  ScrollBar = (UnityEngine_Object_o *)this->fields.ScrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(ScrollBar, 0, 0) )
  {
    TitleSpr = (UnityEngine_Component_o *)this->fields.ScrollBar;
    if ( TitleSpr )
    {
      TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0);
      if ( TitleSpr )
      {
        v16.fields.z = 0.0;
        v16.fields.x = 372.0;
        v16.fields.y = -147.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v16, 0);
        v7 = this->fields.ScrollBar;
        if ( v7 )
        {
          TitleSpr = (UnityEngine_Component_o *)v7->fields.mFG;
          if ( TitleSpr )
          {
            TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0);
            if ( TitleSpr )
            {
              TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)TitleSpr,
                                                      (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
              if ( TitleSpr )
              {
                v8 = (UIWidget_o *)TitleSpr;
                UIWidget__set_width((UIWidget_o *)TitleSpr, 28, 0);
                UIWidget__set_height(v8, 180, 0);
                v9 = this->fields.ScrollBar;
                if ( v9 )
                {
                  TitleSpr = (UnityEngine_Component_o *)v9->fields.mFG;
                  if ( TitleSpr )
                  {
                    TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0);
                    if ( TitleSpr )
                    {
                      TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              (UnityEngine_GameObject_o *)TitleSpr,
                                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                      if ( TitleSpr )
                      {
                        v17.fields.z = 0.0;
                        v17.fields.x = 28.0;
                        v17.fields.y = 160.0;
                        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)TitleSpr, v17, 0);
                        v10 = this->fields.ScrollBar;
                        if ( v10 )
                        {
                          TitleSpr = (UnityEngine_Component_o *)v10->fields.mBG;
                          if ( TitleSpr )
                          {
                            TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TitleSpr, 0);
                            if ( TitleSpr )
                            {
                              TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      (UnityEngine_GameObject_o *)TitleSpr,
                                                                      (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                              if ( TitleSpr )
                              {
                                v11 = (UIWidget_o *)TitleSpr;
                                UIWidget__set_width((UIWidget_o *)TitleSpr, 16, 0);
                                UIWidget__set_height(v11, 180, 0);
                                v12 = this->fields.ScrollBar;
                                if ( v12 )
                                {
                                  TitleSpr = (UnityEngine_Component_o *)v12->fields.mFG;
                                  if ( TitleSpr )
                                  {
                                    TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                            TitleSpr,
                                                                            0);
                                    if ( TitleSpr )
                                    {
                                      TitleSpr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              (UnityEngine_GameObject_o *)TitleSpr,
                                                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                                      if ( TitleSpr )
                                      {
                                        v18.fields.z = 0.0;
                                        v18.fields.x = 16.0;
                                        v18.fields.y = 160.0;
                                        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)TitleSpr, v18, 0);
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
    sub_2213CDC(TitleSpr, method);
  }
LABEL_36:
  TitleSpr = (UnityEngine_Component_o *)this->fields.notgetLabel;
  if ( !TitleSpr )
    goto LABEL_41;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0);
  if ( !TitleSpr )
    goto LABEL_41;
  v19.fields.x = 0.0;
  v19.fields.z = 0.0;
  v19.fields.y = -74.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v19, 0);
  TitleSpr = (UnityEngine_Component_o *)this->fields.rewardSpr;
  if ( !TitleSpr )
    goto LABEL_41;
  TitleSpr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(TitleSpr, 0);
  if ( !TitleSpr )
    goto LABEL_41;
  v20.fields.x = 0.0;
  v20.fields.z = 0.0;
  v20.fields.y = -31.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)TitleSpr, v20, 0);
}


void BattleViewItemlistComponent__Reposition(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *listRoot; // x0

  if ( (byte_59742C9 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    byte_59742C9 = 1;
  }
  listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !listRoot
    || (listRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                listRoot,
                                                (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0 )
  {
    sub_2213CDC(listRoot, method);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))listRoot->klass[1]._1.element_class)(
    listRoot,
    listRoot->klass[1]._1.castClass);
}


void BattleViewItemlistComponent__ResetScrollBarPoisition(
        BattleViewItemlistComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *ScrollBar; // x20
  __int64 v4; // x1
  UIProgressBar_o *v5; // x0

  if ( (byte_59742CA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59742CA = 1;
  }
  ScrollBar = (UnityEngine_Object_o *)this->fields.ScrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(ScrollBar, 0, 0) )
  {
    v5 = (UIProgressBar_o *)this->fields.ScrollBar;
    if ( !v5 )
      sub_2213CDC(0, v4);
    UIProgressBar__set_value(v5, 0.0, 0);
  }
}


void BattleViewItemlistComponent__SetBattleDropItemComponent(
        BattleViewItemlistComponent_o *this,
        BattleDropItemComponent_o *battleDropItemComponent,
        BattleDropItem_o *dropItem,
        BattleDropItemComponent_ClickDelegate_o *callback,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( !battleDropItemComponent )
    sub_2213CDC(this, 0);
  BattleDropItemComponent__Set(battleDropItemComponent, dropItem, 0);
  battleDropItemComponent->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&battleDropItemComponent->fields.callbackFunc,
    (int32_t)callback,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void BattleViewItemlistComponent__SetBattleDropItemComponentEx(
        BattleViewItemlistComponent_o *this,
        BattleDropItemComponent_o *battleDropItemComponent,
        BattleDropItem_o *dropItem,
        BattleDropItemComponent_ClickDelegate_o *callback,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  v9 = BattleViewItemlistComponent__CalcPossessionNum(this, dropItem, (int32_t)dropItem, (const MethodInfo *)callback);
  if ( !battleDropItemComponent )
    sub_2213CDC(v9, v10);
  BattleDropItemComponent__Set_53120800(battleDropItemComponent, dropItem, v9, 0);
  battleDropItemComponent->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&battleDropItemComponent->fields.callbackFunc,
    (int32_t)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


// local variable allocation has failed, the output may be wrong!
void BattleViewItemlistComponent__SwitchShowNumMode(
        BattleViewItemlistComponent_o *this,
        bool isShowPossessionNum,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemObjectList; // x0
  int32_t v6; // w21

  if ( (byte_59742C6 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_59742C6 = 1;
  }
  itemObjectList = (System_Collections_Generic_List_object__o *)this->fields.itemObjectList;
  if ( !itemObjectList )
LABEL_13:
    sub_2213CDC(itemObjectList, isShowPossessionNum);
  v6 = 0;
  while ( v6 < itemObjectList->fields._size )
  {
    itemObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    itemObjectList,
                                                                    v6,
                                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !itemObjectList )
      goto LABEL_13;
    itemObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)itemObjectList,
                                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    if ( isShowPossessionNum )
    {
      if ( !itemObjectList )
        goto LABEL_13;
      BattleDropItemComponent__ShowPossessionNum((BattleDropItemComponent_o *)itemObjectList, 0);
    }
    else
    {
      if ( !itemObjectList )
        goto LABEL_13;
      BattleDropItemComponent__ShowDropNum((BattleDropItemComponent_o *)itemObjectList, 0);
    }
    itemObjectList = (System_Collections_Generic_List_object__o *)this->fields.itemObjectList;
    ++v6;
    if ( !itemObjectList )
      goto LABEL_13;
  }
}


int32_t BattleViewItemlistComponent__compareItemId(
        BattleViewItemlistComponent_o *this,
        int64_t userId,
        BattleDropItem_o *battleDropItem,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  struct QuestRewardInfo_array *rewardInfos_k__BackingField; // x9
  int max_length; // w8
  QuestRewardInfo_o **m_Items; // x9
  QuestRewardInfo_o *v8; // x10
  int32_t num; // w3

  rewardInfos_k__BackingField = this->fields._rewardInfos_k__BackingField;
  if ( rewardInfos_k__BackingField && (max_length = rewardInfos_k__BackingField->max_length, max_length >= 1) )
  {
    m_Items = rewardInfos_k__BackingField->m_Items;
    while ( 1 )
    {
      if ( !battleDropItem || (v8 = *m_Items) == 0 )
        sub_2213CDC(this, userId);
      if ( battleDropItem->fields.objectId == v8->fields.objectId )
        break;
      --max_length;
      ++m_Items;
      if ( !max_length )
        goto LABEL_8;
    }
    num = v8->fields.num;
  }
  else
  {
LABEL_8:
    num = 0;
  }
  return BattleViewItemlistComponent__getUserItemNum(this, userId, battleDropItem, num, v4);
}


int32_t BattleViewItemlistComponent__getUserItemNum(
        BattleViewItemlistComponent_o *this,
        int64_t userId,
        BattleDropItem_o *battleDropItem,
        int32_t questClearItemSubtraction,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59742C2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59742C2 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
  entity = 0;
  if ( !battleDropItem || !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)UserItemMaster__TryGetEntity(
                               (UserItemMaster_o *)Instance,
                               &entity,
                               userId,
                               battleDropItem->fields.objectId,
                               0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num - questClearItemSubtraction;
LABEL_11:
    sub_2213CDC(Instance, v9);
  }
  return 0;
}


QuestRewardInfo_array *BattleViewItemlistComponent__get_rewardInfos(
        BattleViewItemlistComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._rewardInfos_k__BackingField;
}


void BattleViewItemlistComponent__setEventResultCount(
        BattleViewItemlistComponent_o *this,
        int32_t boostEventItemManaCount,
        QuestRewardInfo_array *rewardInfos,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct QuestRewardInfo_array **p_rewardInfos_k__BackingField; // x20

  this->fields._rewardInfos_k__BackingField = rewardInfos;
  p_rewardInfos_k__BackingField = &this->fields._rewardInfos_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._rewardInfos_k__BackingField,
    (int32_t)rewardInfos,
    (System_String_o *)rewardInfos,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  *((_DWORD *)p_rewardInfos_k__BackingField - 3) = boostEventItemManaCount;
}


void BattleViewItemlistComponent__setHide(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *listRoot; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_59742C3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59742C3 = 1;
  }
  listRoot = (UnityEngine_Object_o *)this->fields.listRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(listRoot, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_2213CDC(gameObject, v4);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
}


void BattleViewItemlistComponent__setListData(
        BattleViewItemlistComponent_o *this,
        BattleDropItem_array *itemlist,
        int32_t eventId,
        BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *setAction,
        BattleDropItemComponent_ClickDelegate_o *callBack,
        int32_t setColMax,
        const MethodInfo *method)
{
  __int64 itemObjectList; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x25
  struct System_Collections_Generic_List_GameObject__o *v14; // x8
  int32_t size; // w2
  int v16; // w9
  float height; // s8
  float width; // s9
  int32_t colmax; // w23
  BattleViewItemlistComponent_c *v20; // x0
  float z; // s12
  float v22; // s2
  float32x2_t v23; // d10
  __int64 v24; // x1
  il2cpp_array_size_t max_length; // x8
  __int64 v26; // x26
  unsigned __int64 v27; // x21
  UnityEngine_GameObject_o *v28; // x27
  float32x2_t v29; // d1
  UnityEngine_Transform_o *v30; // x28
  struct UnityEngine_Vector3_StaticFields *v31; // x8
  __int64 v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  BattleDropItemComponent_o *v45; // x28
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  UnityEngine_Object_o *v50; // x21
  __int64 v51; // x1
  UILabel_o *v52; // x21
  System_String_o *v53; // x22
  char v54; // w1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UILabel_o *notgetLabel; // x20
  System_String_o *noItemLabelKey; // x21
  float v59; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+40h] [xbp-B0h] BYREF
  BattleDropItemComponent_ClickDelegate_o *v62; // [xsp+68h] [xbp-88h]
  UnityEngine_Vector3_o v63; // 0:kr00_12.12
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  v62 = callBack;
  if ( (byte_59742C0 & 1) == 0 )
  {
    sub_2213A60(&BattleViewItemlistComponent_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInParent_UIScrollView___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_2910/*"BATTLE_ITEM_DISP_COLUMN"*/);
    byte_59742C0 = 1;
  }
  itemObjectList = (__int64)this->fields.itemObjectList;
  memset(&v61, 0, sizeof(v61));
  if ( !itemObjectList )
    goto LABEL_62;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v60,
    (System_Collections_Generic_List_object__o *)itemObjectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v61 = v60;
  v60.fields._list = 0;
  *(_QWORD *)&v60.fields._index = &v61;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v61,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v61.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v61,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v14 = this->fields.itemObjectList;
  if ( !v14 )
    goto LABEL_62;
  size = v14->fields._size;
  v16 = v14->fields._version + 1;
  v14->fields._size = 0;
  v14->fields._version = v16;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v14->fields._items, 0, size, 0);
  width = this->fields.width;
  height = this->fields.height;
  colmax = this->fields.colmax;
  if ( !setColMax )
  {
    setColMax = ConstantMaster__getValue((System_String_o *)StringLiteral_2910/*"BATTLE_ITEM_DISP_COLUMN"*/, 0);
    if ( setColMax <= 0 )
    {
      v20 = BattleViewItemlistComponent_TypeInfo;
      if ( !*(&BattleViewItemlistComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleViewItemlistComponent_TypeInfo, itemlist);
        v20 = BattleViewItemlistComponent_TypeInfo;
      }
      setColMax = v20->static_fields->defaultColumnMax;
    }
  }
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( setColMax >= 1 )
  {
    z = 1.0;
    v22 = (float)this->fields.colmax / (float)setColMax;
    width = width * v22;
    height = height * v22;
    v59 = v22;
    v23.n64_u64[0] = vmul_f32(
                       vsub_f32(
                         *(float32x2_t *)&this->fields.width,
                         vmul_n_f32(*(float32x2_t *)&this->fields.width, v22)),
                       (float32x2_t)0xBF0000003F000000LL).n64_u64[0];
    if ( itemlist )
      goto LABEL_21;
LABEL_54:
    notgetLabel = this->fields.notgetLabel;
    noItemLabelKey = this->fields.noItemLabelKey;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, itemlist);
    itemObjectList = (__int64)LocalizationManager__Get(noItemLabelKey, 0);
    if ( notgetLabel )
    {
      UILabel__set_text(notgetLabel, (System_String_o *)itemObjectList, 0);
      itemObjectList = (__int64)this->fields.notgetLabel;
      if ( itemObjectList )
      {
        itemObjectList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemObjectList, 0);
        if ( itemObjectList )
        {
          v54 = 1;
          goto LABEL_60;
        }
      }
    }
LABEL_62:
    sub_2213CDC(itemObjectList, itemlist);
  }
  setColMax = colmax;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v59 = 1.0;
  v23.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  if ( !itemlist )
    goto LABEL_54;
LABEL_21:
  itemObjectList = (__int64)this->fields.listRoot;
  if ( !itemObjectList )
    goto LABEL_62;
  itemObjectList = (__int64)UnityEngine_Component__GetComponentInParent_object__58855988(
                              (UnityEngine_Component_o *)itemObjectList,
                              (const MethodInfo_3821234 *)Method_UnityEngine_Component_GetComponentInParent_UIScrollView___);
  max_length = itemlist->max_length;
  if ( (int)max_length >= 1 )
  {
    v26 = itemObjectList;
    v27 = 0;
    do
    {
      if ( v27 >= (unsigned int)max_length )
LABEL_63:
        sub_2213CE4(itemObjectList);
      itemObjectList = (__int64)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  this->fields.prefabResultItem,
                                  this->fields.listRoot,
                                  0,
                                  0);
      if ( !itemObjectList )
        goto LABEL_62;
      v28 = (UnityEngine_GameObject_o *)itemObjectList;
      itemObjectList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)itemObjectList, 0);
      if ( !itemObjectList )
        goto LABEL_62;
      v29.n64_f32[0] = width * (float)((int)v27 % setColMax);
      v29.n64_f32[1] = (float)-height * (float)((int)v27 / setColMax);
      *(float32x2_t *)&v63.fields.x = vsub_f32(v29, v23);
      v63.fields.z = 0.0 - z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)itemObjectList, v63, 0);
      itemObjectList = (__int64)UnityEngine_GameObject__get_transform(v28, 0);
      v30 = (UnityEngine_Transform_o *)itemObjectList;
      if ( !byte_5969AE5 )
      {
        itemObjectList = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      if ( !v30 )
        goto LABEL_62;
      v31 = UnityEngine_Vector3_TypeInfo->static_fields;
      v64.fields.z = v59 * v31->oneVector.fields.z;
      v64.fields.y = v59 * v31->oneVector.fields.y;
      v64.fields.x = v59 * v31->oneVector.fields.x;
      UnityEngine_Transform__set_localScale(v30, v64, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0, 0) )
      {
        itemObjectList = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    v28,
                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
        if ( !itemObjectList )
          goto LABEL_62;
        *(_QWORD *)(itemObjectList + 32) = v26;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(itemObjectList + 32), v26, v39, v40, v41, v42, v43, v44);
        itemObjectList = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    v28,
                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
        if ( v27 >= LODWORD(itemlist->max_length) )
          goto LABEL_63;
        if ( !setAction )
          goto LABEL_62;
        v45 = (BattleDropItemComponent_o *)itemObjectList;
        itemObjectList = ((__int64 (__fastcall *)(intptr_t, __int64, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, intptr_t))setAction->fields.invoke_impl)(
                           setAction->fields.method_code,
                           itemObjectList,
                           itemlist->m_Items[v27],
                           v62,
                           (unsigned int)eventId,
                           setAction->fields.method);
        if ( !v45 )
          goto LABEL_62;
        BattleDropItemComponent__Show(v45, 0);
      }
      itemObjectList = (__int64)this->fields.itemObjectList;
      if ( !itemObjectList )
        goto LABEL_62;
      v46 = *(_QWORD *)(itemObjectList + 16);
      v47 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++*(_DWORD *)(itemObjectList + 28);
      if ( !v46 )
        goto LABEL_62;
      v48 = *(int *)(itemObjectList + 24);
      if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)itemObjectList,
          (Il2CppObject *)v28,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v49 = v46 + 8 * v48;
        *(_DWORD *)(itemObjectList + 24) = v48 + 1;
        *(_QWORD *)(v49 + 32) = v28;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 32), (int32_t)v28, v33, v34, v35, v36, v37, v38);
      }
      LODWORD(max_length) = itemlist->max_length;
      ++v27;
    }
    while ( (__int64)v27 < (int)max_length );
  }
  v50 = (UnityEngine_Object_o *)this->fields.notgetLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  if ( UnityEngine_Object__op_Inequality(v50, 0, 0) )
  {
    v52 = this->fields.notgetLabel;
    v53 = this->fields.noItemLabelKey;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
    itemObjectList = (__int64)LocalizationManager__Get(v53, 0);
    if ( v52 )
    {
      UILabel__set_text(v52, (System_String_o *)itemObjectList, 0);
      itemObjectList = (__int64)this->fields.notgetLabel;
      if ( itemObjectList )
      {
        itemObjectList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemObjectList, 0);
        if ( itemObjectList )
        {
          v54 = LODWORD(itemlist->max_length) == 0;
LABEL_60:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemObjectList, v54, 0);
          return;
        }
      }
    }
    goto LABEL_62;
  }
}


void BattleViewItemlistComponent__setListDataCustomColumn(
        BattleViewItemlistComponent_o *this,
        BattleDropItem_array *itemlist,
        BattleDropItemComponent_ClickDelegate_o *callBack,
        int32_t setColMax,
        const MethodInfo *method)
{
  BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *v9; // x23
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x6

  if ( (byte_59742BE & 1) == 0 )
  {
    sub_2213A60(&BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo);
    sub_2213A60(&Method_BattleViewItemlistComponent_SetBattleDropItemComponent__);
    byte_59742BE = 1;
  }
  v9 = (BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *)sub_2213CCC(BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo);
  BattleViewItemlistComponent_BattleDropItemComponentSetAction___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleViewItemlistComponent_SetBattleDropItemComponent__,
    v10);
  BattleViewItemlistComponent__setListData(this, itemlist, -1, v9, callBack, setColMax, v11);
}


void BattleViewItemlistComponent__setListDataCustomColumn_54891780(
        BattleViewItemlistComponent_o *this,
        BattleDropItem_array *itemlist,
        int32_t eventId,
        BattleDropItemComponent_ClickDelegate_o *callBack,
        int32_t setColMax,
        const MethodInfo *method)
{
  BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *v11; // x24
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x6

  if ( (byte_59742BF & 1) == 0 )
  {
    sub_2213A60(&BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo);
    sub_2213A60(&Method_BattleViewItemlistComponent_SetBattleDropItemComponentEx__);
    byte_59742BF = 1;
  }
  v11 = (BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *)sub_2213CCC(BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo);
  BattleViewItemlistComponent_BattleDropItemComponentSetAction___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleViewItemlistComponent_SetBattleDropItemComponentEx__,
    v12);
  BattleViewItemlistComponent__setListData(this, itemlist, eventId, v11, callBack, setColMax, v13);
}


void BattleViewItemlistComponent__setShow(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *listRoot; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_59742C4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59742C4 = 1;
  }
  listRoot = (UnityEngine_Object_o *)this->fields.listRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(listRoot, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_2213CDC(gameObject, v4);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
}


void BattleViewItemlistComponent__set_rewardInfos(
        BattleViewItemlistComponent_o *this,
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._rewardInfos_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._rewardInfos_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleViewItemlistComponent_BattleDropItemComponentSetAction___ctor(
        BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  char v14; // w21
  char v15; // w0
  Il2CppObject *m_target; // x9
  __int64 v17; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) != 0 )
  {
    if ( v12 == 4 )
    {
      v13 = sub_20139AC;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v12 == 3 )
    {
      if ( this->fields.method_is_virtual )
      {
        v14 = sub_2213B30(method);
        v15 = sub_22140B4(method);
        if ( (v14 & 1) != 0 )
        {
          if ( (v15 & 1) != 0 )
            v13 = sub_2013B04;
          else
            v13 = sub_2013AA0;
        }
        else if ( (v15 & 1) != 0 )
        {
          v13 = sub_20139FC;
        }
        else
        {
          v13 = sub_20139C8;
        }
      }
      else
      {
        v13 = sub_2013984;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_2013914;
}


System_IAsyncResult_o *BattleViewItemlistComponent_BattleDropItemComponentSetAction__BeginInvoke(
        BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *this,
        BattleDropItemComponent_o *battleDropItemComponent,
        BattleDropItem_o *dropItem,
        BattleDropItemComponent_ClickDelegate_o *callback,
        int32_t eventId,
        System_AsyncCallback_o *a6,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v12[5]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v13; // [xsp+2Ch] [xbp-24h] BYREF

  v13 = eventId;
  v12[0] = battleDropItemComponent;
  v12[1] = dropItem;
  v12[4] = 0;
  v12[2] = callback;
  v12[3] = j_il2cpp_value_box_0(qword_5984348, &v13);
  return sub_2213A14(this, v12, a6, object);
}


void BattleViewItemlistComponent_BattleDropItemComponentSetAction__EndInvoke(
        BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void BattleViewItemlistComponent_BattleDropItemComponentSetAction__Invoke(
        BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *this,
        BattleDropItemComponent_o *battleDropItemComponent,
        BattleDropItem_o *dropItem,
        BattleDropItemComponent_ClickDelegate_o *callback,
        int32_t eventId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    battleDropItemComponent,
    dropItem,
    callback,
    eventId,
    this->fields.method);
}