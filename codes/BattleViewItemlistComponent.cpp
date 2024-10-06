void __fastcall BattleViewItemlistComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A72F57 & 1) == 0 )
  {
    sub_1B90010(&BattleViewItemlistComponent_TypeInfo, v1);
    byte_4A72F57 = 1;
  }
  BattleViewItemlistComponent_TypeInfo->static_fields->defaultColumnMax = 8;
}


void __fastcall BattleViewItemlistComponent___ctor(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A72F56 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B90010(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    sub_1B90010(&StringLiteral_2914/*"BATTLE_ITEMLIST_NOTGET"*/, v6);
    byte_4A72F56 = 1;
  }
  v7 = StringLiteral_2914/*"BATTLE_ITEMLIST_NOTGET"*/;
  this->fields.noItemLabelKey = (struct System_String_o *)StringLiteral_2914/*"BATTLE_ITEMLIST_NOTGET"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.noItemLabelKey, v7, v2, v3);
  this->fields.colmax = 5;
  *(_QWORD *)&this->fields.width = 0x42F0000042FA0000LL;
  v8 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.itemObjectList = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.itemObjectList, (int32_t)v8, v9, v10);
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
  if ( (byte_4A72F4C & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ItemMaster___, battleDropItem);
    sub_1B90010(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    this = (BattleViewItemlistComponent_o *)sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A72F4C = 1;
  }
  if ( !battleDropItem )
    goto LABEL_19;
  if ( !Gift__IsItem_37739868(battleDropItem->fields.type, 0LL) )
    return 0;
  this = (BattleViewItemlistComponent_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this )
    goto LABEL_19;
  v8 = *(_QWORD *)&this->fields.m_CachedPtr;
  this = (BattleViewItemlistComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_19;
  this = (BattleViewItemlistComponent_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_19;
  this = (BattleViewItemlistComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            battleDropItem->fields.objectId,
                                            (const MethodInfo_312C5A8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
      sub_1B9026C(this, battleDropItem);
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

  if ( (byte_4A72F53 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v3);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v4);
    byte_4A72F53 = 1;
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
                                                      (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                                                              (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                                                      (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                                                                              (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_1B9026C(TitleSpr, method);
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

  if ( (byte_4A72F50 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_1B90010(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v5);
    byte_4A72F50 = 1;
  }
  itemObjectList = this->fields.itemObjectList;
  if ( !itemObjectList )
LABEL_9:
    sub_1B9026C(itemObjectList, method);
  v7 = 0;
  while ( 1 )
  {
    size = itemObjectList->fields._size;
    if ( v7 >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)itemObjectList,
             v7,
             (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69539440((UnityEngine_Object_o *)Item, 0LL);
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

  if ( (byte_4A72F52 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v3);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v4);
    byte_4A72F52 = 1;
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
                                                      (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                                                              (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                                                      (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                                                                              (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_1B9026C(TitleSpr, method);
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

  if ( (byte_4A72F54 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_Component_GetComponent_UIGrid___, method);
    byte_4A72F54 = 1;
  }
  listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !listRoot
    || (listRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                listRoot,
                                                (const MethodInfo_2E84CC0 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
  {
    sub_1B9026C(listRoot, method);
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

  if ( (byte_4A72F55 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A72F55 = 1;
  }
  ScrollBar = (UnityEngine_Object_o *)this->fields.ScrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ScrollBar, 0LL, 0LL) )
  {
    v5 = (UIProgressBar_o *)this->fields.ScrollBar;
    if ( !v5 )
      sub_1B9026C(0LL, v4);
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
  int32_t v9; // w3

  if ( !battleDropItemComponent )
    sub_1B9026C(this, 0LL);
  BattleDropItemComponent__Set(battleDropItemComponent, dropItem, 0LL);
  battleDropItemComponent->fields.callbackFunc = callback;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&battleDropItemComponent->fields.callbackFunc,
    (int32_t)callback,
    v8,
    v9);
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
  int32_t v12; // w3

  v9 = BattleViewItemlistComponent__CalcPossessionNum(this, dropItem, (int32_t)dropItem, (const MethodInfo *)callback);
  if ( !battleDropItemComponent )
    sub_1B9026C(v9, v10);
  BattleDropItemComponent__Set_42736576(battleDropItemComponent, dropItem, v9, 0LL);
  battleDropItemComponent->fields.callbackFunc = callback;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&battleDropItemComponent->fields.callbackFunc,
    (int32_t)callback,
    v11,
    v12);
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

  if ( (byte_4A72F51 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, isShowPossessionNum);
    sub_1B90010(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    byte_4A72F51 = 1;
  }
  itemObjectList = (System_Collections_Generic_List_object__o *)this->fields.itemObjectList;
  if ( !itemObjectList )
LABEL_12:
    sub_1B9026C(itemObjectList, isShowPossessionNum);
  v8 = 0;
  while ( v8 < itemObjectList->fields._size )
  {
    itemObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    itemObjectList,
                                                                    v8,
                                                                    (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( itemObjectList )
    {
      itemObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      (UnityEngine_GameObject_o *)itemObjectList,
                                                                      (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
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
        sub_1B90274(this, userId);
      if ( !battleDropItem || (v9 = m_Items[v7]) == 0LL )
        sub_1B9026C(this, userId);
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

  if ( (byte_4A72F4D & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_UserItemMaster___, userId);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A72F4D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    sub_1B9026C(Instance, v10);
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
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._rewardInfos_k__BackingField,
    (int32_t)rewardInfos,
    (int32_t)rewardInfos,
    (int32_t)method);
  *((_DWORD *)p_rewardInfos_k__BackingField - 3) = boostEventItemManaCount;
}


void __fastcall BattleViewItemlistComponent__setHide(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *listRoot; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4A72F4E & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A72F4E = 1;
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
      sub_1B9026C(gameObject, v4);
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
  __int64 v34; // x8
  unsigned __int64 v35; // d0
  __int64 v36; // x26
  unsigned __int64 v37; // x21
  UnityEngine_GameObject_o *v38; // x27
  int32x2_t v39; // d0
  unsigned __int64 v40; // d0 OVERLAPPED
  int v41; // s1
  float v42; // s2
  UnityEngine_Transform_o *v43; // x28
  struct UnityEngine_Vector3_StaticFields *v44; // x8
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w2
  int32_t v48; // w3
  BattleDropItemComponent_o *v49; // x28
  __int64 v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  __int64 v53; // x8
  UnityEngine_Object_o *v54; // x21
  UILabel_o *v55; // x21
  System_String_o *v56; // x22
  char v57; // w1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UILabel_o *notgetLabel; // x20
  System_String_o *noItemLabelKey; // x21
  float v62; // [xsp+10h] [xbp-E0h]
  float width; // [xsp+20h] [xbp-D0h]
  float32x2_t v64; // [xsp+20h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+50h] [xbp-A0h] BYREF
  BattleDropItemComponent_ClickDelegate_o *v67; // [xsp+78h] [xbp-78h]
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4

  v67 = callBack;
  if ( (byte_4A72F4B & 1) == 0 )
  {
    sub_1B90010(&BattleViewItemlistComponent_TypeInfo, itemlist);
    sub_1B90010(&Method_UnityEngine_Component_GetComponentInParent_UIScrollView___, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v14);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, v15);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___, v16);
    sub_1B90010(&Method_System_Collections_Generic_List_GameObject__Add__, v17);
    sub_1B90010(&Method_System_Collections_Generic_List_GameObject__Clear__, v18);
    sub_1B90010(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v19);
    sub_1B90010(&LocalizationManager_TypeInfo, v20);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v21);
    sub_1B90010(&StringLiteral_2915/*"BATTLE_ITEM_DISP_COLUMN"*/, v22);
    byte_4A72F4B = 1;
  }
  memset(&v66, 0, sizeof(v66));
  itemObjectList = (__int64)this->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_62;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v65,
    (System_Collections_Generic_List_object__o *)itemObjectList,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v66 = v65;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v66.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69539440((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
    setColMax = ConstantMaster__getValue((System_String_o *)StringLiteral_2915/*"BATTLE_ITEM_DISP_COLUMN"*/, 0LL);
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
  if ( !byte_4A6A9C1 )
  {
    sub_1B90010(&UnityEngine_Vector3_TypeInfo, itemlist);
    byte_4A6A9C1 = 1;
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
    v62 = v31;
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
          v57 = 1;
          goto LABEL_60;
        }
      }
    }
LABEL_62:
    sub_1B9026C(itemObjectList, itemlist);
  }
  v62 = 1.0;
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
  itemObjectList = (__int64)UnityEngine_Component__GetComponentInParent_object_(
                              (UnityEngine_Component_o *)itemObjectList,
                              (const MethodInfo_2E8537C *)Method_UnityEngine_Component_GetComponentInParent_UIScrollView___);
  v34 = *(_QWORD *)&itemlist->max_length;
  if ( (int)v34 >= 1 )
  {
    *(float *)&v35 = width;
    v36 = itemObjectList;
    v37 = 0LL;
    *((float *)&v35 + 1) = -height;
    v64.n64_u64[0] = v35;
    do
    {
      if ( v37 >= (unsigned int)v34 )
LABEL_63:
        sub_1B90274(itemObjectList, itemlist);
      itemObjectList = (__int64)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  this->fields.prefabResultItem,
                                  this->fields.listRoot,
                                  0LL,
                                  0LL);
      if ( !itemObjectList )
        goto LABEL_62;
      v38 = (UnityEngine_GameObject_o *)itemObjectList;
      itemObjectList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)itemObjectList, 0LL);
      if ( !itemObjectList )
        goto LABEL_62;
      v39.n64_u32[0] = (int)v37 % setColMax;
      v39.n64_u32[1] = (int)v37 / setColMax;
      v40 = vsub_f32(vmul_f32(v64, vcvt_f32_s32(v39)), v32).n64_u64[0];
      v41 = HIDWORD(v40);
      v42 = 0.0 - z;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)itemObjectList,
        *(UnityEngine_Vector3_o *)&v40,
        0LL);
      itemObjectList = (__int64)UnityEngine_GameObject__get_transform(v38, 0LL);
      v43 = (UnityEngine_Transform_o *)itemObjectList;
      if ( !byte_4A6A9C6 )
      {
        itemObjectList = sub_1B90010(&UnityEngine_Vector3_TypeInfo, itemlist);
        byte_4A6A9C6 = 1;
      }
      if ( !v43 )
        goto LABEL_62;
      v44 = UnityEngine_Vector3_TypeInfo->static_fields;
      v68.fields.z = v62 * v44->oneVector.fields.z;
      v68.fields.y = v62 * v44->oneVector.fields.y;
      v68.fields.x = v62 * v44->oneVector.fields.x;
      UnityEngine_Transform__set_localScale(v43, v68, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v38, 0LL, 0LL) )
      {
        itemObjectList = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    v38,
                                    (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
        if ( !itemObjectList )
          goto LABEL_62;
        *(_QWORD *)(itemObjectList + 32) = v36;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(itemObjectList + 32), v36, v47, v48);
        itemObjectList = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    v38,
                                    (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
        if ( v37 >= itemlist->max_length )
          goto LABEL_63;
        if ( !setAction )
          goto LABEL_62;
        v49 = (BattleDropItemComponent_o *)itemObjectList;
        itemObjectList = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, _QWORD))setAction->fields.m_target)(
                           setAction->fields.original_method_info,
                           itemObjectList,
                           itemlist->m_Items[v37],
                           v67,
                           (unsigned int)eventId,
                           *(_QWORD *)&setAction->fields.extra_arg);
        if ( !v49 )
          goto LABEL_62;
        BattleDropItemComponent__Show(v49, 0LL);
      }
      itemObjectList = (__int64)this->fields.itemObjectList;
      if ( !itemObjectList )
        goto LABEL_62;
      v50 = *(_QWORD *)(itemObjectList + 16);
      v51 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++*(_DWORD *)(itemObjectList + 28);
      if ( !v50 )
        goto LABEL_62;
      v52 = *(int *)(itemObjectList + 24);
      if ( (unsigned int)v52 >= *(_DWORD *)(v50 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)itemObjectList,
          (Il2CppObject *)v38,
          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v53 = v50 + 8 * v52;
        *(_DWORD *)(itemObjectList + 24) = v52 + 1;
        *(_QWORD *)(v53 + 32) = v38;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v53 + 32), (int32_t)v38, v45, v46);
      }
      LODWORD(v34) = itemlist->max_length;
      ++v37;
    }
    while ( (__int64)v37 < (int)v34 );
  }
  v54 = (UnityEngine_Object_o *)this->fields.notgetLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v54, 0LL, 0LL) )
  {
    v55 = this->fields.notgetLabel;
    v56 = this->fields.noItemLabelKey;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemObjectList = (__int64)LocalizationManager__Get(v56, 0LL);
    if ( v55 )
    {
      UILabel__set_text(v55, (System_String_o *)itemObjectList, 0LL);
      itemObjectList = (__int64)this->fields.notgetLabel;
      if ( itemObjectList )
      {
        itemObjectList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemObjectList, 0LL);
        if ( itemObjectList )
        {
          v57 = itemlist->max_length == 0;
LABEL_60:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemObjectList, v57, 0LL);
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

  if ( (byte_4A72F49 & 1) == 0 )
  {
    sub_1B90010(&BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo, itemlist);
    sub_1B90010(&Method_BattleViewItemlistComponent_SetBattleDropItemComponent__, v9);
    byte_4A72F49 = 1;
  }
  v10 = (BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *)sub_1B9025C(BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo);
  BattleViewItemlistComponent_BattleDropItemComponentSetAction___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleViewItemlistComponent_SetBattleDropItemComponent__,
    v11);
  BattleViewItemlistComponent__setListData(this, itemlist, -1, v10, callBack, setColMax, v12);
}


void __fastcall BattleViewItemlistComponent__setListDataCustomColumn_44135720(
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

  if ( (byte_4A72F4A & 1) == 0 )
  {
    sub_1B90010(&BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo, itemlist);
    sub_1B90010(&Method_BattleViewItemlistComponent_SetBattleDropItemComponentEx__, v11);
    byte_4A72F4A = 1;
  }
  v12 = (BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *)sub_1B9025C(BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo);
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

  if ( (byte_4A72F4F & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A72F4F = 1;
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
      sub_1B9026C(gameObject, v4);
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

  this->fields._rewardInfos_k__BackingField = value;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._rewardInfos_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B900D0(v6) & 1) != 0 )
  {
    if ( v8 == 4 )
    {
      v9 = (Il2CppObject *)sub_19D96F8;
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
        v10 = sub_1B900C8(v6);
        v11 = sub_1B90584(v6);
        if ( (v10 & 1) != 0 )
        {
          if ( (v11 & 1) != 0 )
            v9 = (Il2CppObject *)sub_19D9854;
          else
            v9 = (Il2CppObject *)sub_19D97F0;
        }
        else if ( (v11 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_19D974C;
        }
        else
        {
          v9 = (Il2CppObject *)sub_19D9714;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_19D96CC;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B90288(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B90138(v13, 0LL);
    }
  }
  v12 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v12;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D965C;
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
  if ( (byte_4A72F58 & 1) == 0 )
  {
    sub_1B90010(&int_TypeInfo, battleDropItemComponent);
    byte_4A72F58 = 1;
  }
  v15[4] = 0LL;
  v15[0] = (__int64)battleDropItemComponent;
  v15[1] = (__int64)dropItem;
  v15[2] = (__int64)callback;
  v15[3] = j_il2cpp_value_box_0(int_TypeInfo, &v16, dropItem, callback, *(_QWORD *)&eventId);
  return (System_IAsyncResult_o *)sub_1B8FFC4(this, v15, a6, object);
}


void __fastcall BattleViewItemlistComponent_BattleDropItemComponentSetAction__EndInvoke(
        BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B8FFC8(result, 0LL, method);
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