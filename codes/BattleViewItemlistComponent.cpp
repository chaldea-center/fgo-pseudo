void __fastcall BattleViewItemlistComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F901A & 1) == 0 )
  {
    sub_B16FFC(&BattleViewItemlistComponent_TypeInfo, v1);
    byte_40F901A = 1;
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
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_40F9019 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v9);
    sub_B16FFC(&StringLiteral_2439, v10);
    byte_40F9019 = 1;
  }
  v11 = (System_Int32_array **)StringLiteral_2439;
  this->fields.noItemLabelKey = (struct System_String_o *)StringLiteral_2439;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.noItemLabelKey, v11, v2, v3, v4, v5, v6, v7);
  this->fields.colmax = 5;
  *(_QWORD *)&this->fields.width = 0x42F0000042FA0000LL;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v12,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.itemObjectList = (struct System_Collections_Generic_List_GameObject__o *)v16;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemObjectList,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall BattleViewItemlistComponent__CalcPossessionNum(
        BattleViewItemlistComponent_o *this,
        BattleDropItem_o *battleDropItem,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  UserGameEntity_o *SelfUserGame; // x0
  int64_t userId; // x21
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x4
  int32_t bannerId; // w8
  UserGameEntity_o *v16; // x0
  UserGameEntity_o *v18; // x0

  if ( (byte_40F900F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, battleDropItem);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F900F = 1;
  }
  if ( !battleDropItem )
    goto LABEL_19;
  if ( !Gift__IsItem_28854684(battleDropItem->fields.type, 0LL) )
    return 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_19;
  userId = SelfUserGame->fields.userId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_19;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             battleDropItem->fields.objectId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_19;
  bannerId = Entity->fields.bannerId;
  if ( (unsigned int)(bannerId - 3) < 2 )
    return BattleViewItemlistComponent__compareItemId(this, userId, battleDropItem, v13);
  if ( bannerId == 22 )
  {
    v18 = UserGameMaster__getSelfUserGame(0LL);
    if ( !v18 )
      goto LABEL_19;
    return v18->fields.rarePri;
  }
  else
  {
    if ( bannerId == 5 )
    {
      v16 = UserGameMaster__getSelfUserGame(0LL);
      if ( v16 )
        return v16->fields.mana - this->fields.boostEventItemManaCount;
LABEL_19:
      sub_B170D4();
    }
    return BattleViewItemlistComponent__getUserItemNum(
             (BattleViewItemlistComponent_o *)Entity,
             userId,
             battleDropItem,
             0,
             v14);
  }
}


void __fastcall BattleViewItemlistComponent__ChangeLayoutScrollView(
        BattleViewItemlistComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *TitleSpr; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *ScrollViewPanel; // x20
  UIPanel_o *v8; // x0
  UnityEngine_Component_o *v9; // x0
  UnityEngine_Transform_o *v10; // x0
  UIPanel_o *v11; // x0
  UIPanel_o *v12; // x20
  float v13; // s4
  float v14; // s5
  float v15; // s6
  float v16; // s7
  UnityEngine_Object_o *ScrollBar; // x20
  UnityEngine_Component_o *v18; // x0
  UnityEngine_Transform_o *v19; // x0
  struct UIScrollBar_o *v20; // x8
  UnityEngine_Component_o *mFG; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_srcLineSprite; // x0
  UIWidget_o *v24; // x20
  struct UIScrollBar_o *v25; // x8
  UnityEngine_Component_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_BoxCollider_o *v28; // x0
  struct UIScrollBar_o *v29; // x8
  UnityEngine_Component_o *mBG; // x0
  UnityEngine_GameObject_o *v31; // x0
  UIWidget_o *v32; // x0
  UIWidget_o *v33; // x20
  struct UIScrollBar_o *v34; // x8
  UnityEngine_Component_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_BoxCollider_o *v37; // x0
  UnityEngine_Component_o *notgetLabel; // x0
  UnityEngine_Transform_o *v39; // x0
  UnityEngine_Component_o *rewardSpr; // x0
  UnityEngine_Transform_o *v41; // x0
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Vector2_o v43; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F9016 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F9016 = 1;
  }
  TitleSpr = (UnityEngine_Component_o *)this->fields.TitleSpr;
  if ( !TitleSpr )
    goto LABEL_43;
  transform = UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !transform )
    goto LABEL_43;
  v44.fields.y = 177.3;
  v44.fields.x = 0.0;
  v44.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(transform, v44, 0LL);
  ScrollViewPanel = (UnityEngine_Object_o *)this->fields.ScrollViewPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ScrollViewPanel, 0LL, 0LL) )
  {
    v8 = this->fields.ScrollViewPanel;
    if ( !v8 )
      goto LABEL_43;
    UIPanel__Refresh(v8, 0LL);
    v9 = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !v9 )
      goto LABEL_43;
    v10 = UnityEngine_Component__get_transform(v9, 0LL);
    if ( !v10 )
      goto LABEL_43;
    v45.fields.y = -146.29;
    v45.fields.x = 0.0;
    v45.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(v10, v45, 0LL);
    v11 = this->fields.ScrollViewPanel;
    if ( !v11 )
      goto LABEL_43;
    v43.fields.x = -9.41;
    v43.fields.y = -30.504;
    UIPanel__set_clipOffset(v11, v43, 0LL);
    v51.fields.z = 730.3;
    v51.fields.w = 114.9;
    v12 = this->fields.ScrollViewPanel;
    v51.fields.x = 0.0;
    v51.fields.y = 0.0;
    var40.methodPointer = 0LL;
    var40.invoker_method = 0LL;
    UnityEngine_Vector4___ctor(v51, v13, v14, v15, v16, &var40);
    if ( !v12 )
      goto LABEL_43;
    *(_QWORD *)&v52.fields.x = var40.methodPointer;
    *(_QWORD *)&v52.fields.z = var40.invoker_method;
    UIPanel__set_baseClipRegion(v12, v52, 0LL);
  }
  ScrollBar = (UnityEngine_Object_o *)this->fields.ScrollBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ScrollBar, 0LL, 0LL) )
  {
    v18 = (UnityEngine_Component_o *)this->fields.ScrollBar;
    if ( v18 )
    {
      v19 = UnityEngine_Component__get_transform(v18, 0LL);
      if ( v19 )
      {
        v46.fields.x = 372.0;
        v46.fields.y = -179.0;
        v46.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(v19, v46, 0LL);
        v20 = this->fields.ScrollBar;
        if ( v20 )
        {
          mFG = (UnityEngine_Component_o *)v20->fields.mFG;
          if ( mFG )
          {
            gameObject = UnityEngine_Component__get_gameObject(mFG, 0LL);
            if ( gameObject )
            {
              Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        gameObject,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
              if ( Component_srcLineSprite )
              {
                v24 = Component_srcLineSprite;
                UIWidget__set_width(Component_srcLineSprite, 28, 0LL);
                UIWidget__set_height(v24, 120, 0LL);
                v25 = this->fields.ScrollBar;
                if ( v25 )
                {
                  v26 = (UnityEngine_Component_o *)v25->fields.mFG;
                  if ( v26 )
                  {
                    v27 = UnityEngine_Component__get_gameObject(v26, 0LL);
                    if ( v27 )
                    {
                      v28 = (UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v27,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                      if ( v28 )
                      {
                        v47.fields.x = 28.0;
                        v47.fields.z = 0.0;
                        v47.fields.y = 120.0;
                        UnityEngine_BoxCollider__set_size(v28, v47, 0LL);
                        v29 = this->fields.ScrollBar;
                        if ( v29 )
                        {
                          mBG = (UnityEngine_Component_o *)v29->fields.mBG;
                          if ( mBG )
                          {
                            v31 = UnityEngine_Component__get_gameObject(mBG, 0LL);
                            if ( v31 )
                            {
                              v32 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    v31,
                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                              if ( v32 )
                              {
                                v33 = v32;
                                UIWidget__set_width(v32, 16, 0LL);
                                UIWidget__set_height(v33, 120, 0LL);
                                v34 = this->fields.ScrollBar;
                                if ( v34 )
                                {
                                  v35 = (UnityEngine_Component_o *)v34->fields.mFG;
                                  if ( v35 )
                                  {
                                    v36 = UnityEngine_Component__get_gameObject(v35, 0LL);
                                    if ( v36 )
                                    {
                                      v37 = (UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                           v36,
                                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                                      if ( v37 )
                                      {
                                        v48.fields.x = 16.0;
                                        v48.fields.z = 0.0;
                                        v48.fields.y = 120.0;
                                        UnityEngine_BoxCollider__set_size(v37, v48, 0LL);
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
    sub_B170D4();
  }
LABEL_38:
  notgetLabel = (UnityEngine_Component_o *)this->fields.notgetLabel;
  if ( !notgetLabel )
    goto LABEL_43;
  v39 = UnityEngine_Component__get_transform(notgetLabel, 0LL);
  if ( !v39 )
    goto LABEL_43;
  v49.fields.y = -134.0;
  v49.fields.x = 0.0;
  v49.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v39, v49, 0LL);
  rewardSpr = (UnityEngine_Component_o *)this->fields.rewardSpr;
  if ( !rewardSpr )
    goto LABEL_43;
  v41 = UnityEngine_Component__get_transform(rewardSpr, 0LL);
  if ( !v41 )
    goto LABEL_43;
  v50.fields.y = -91.0;
  v50.fields.x = 0.0;
  v50.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v41, v50, 0LL);
}


void __fastcall BattleViewItemlistComponent__ClearObj(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *itemObjectList; // x20
  unsigned __int64 v7; // x21
  UnityEngine_Object_o *v8; // x20

  if ( (byte_40F9013 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F9013 = 1;
  }
  itemObjectList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.itemObjectList;
  if ( !itemObjectList )
LABEL_12:
    sub_B170D4();
  v7 = 0LL;
  while ( (__int64)v7 < itemObjectList->fields._size )
  {
    if ( v7 >= (unsigned int)itemObjectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v8 = (UnityEngine_Object_o *)itemObjectList->fields._items->m_Items[v7];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v8, 0LL);
    itemObjectList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.itemObjectList;
    ++v7;
    if ( !itemObjectList )
      goto LABEL_12;
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    itemObjectList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
}


void __fastcall BattleViewItemlistComponent__DefaultLayoutScrollView(
        BattleViewItemlistComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *TitleSpr; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *ScrollViewPanel; // x20
  UIPanel_o *v8; // x0
  UnityEngine_Component_o *v9; // x0
  UnityEngine_Transform_o *v10; // x0
  UIPanel_o *v11; // x0
  UIPanel_o *v12; // x20
  float v13; // s4
  float v14; // s5
  float v15; // s6
  float v16; // s7
  UnityEngine_Object_o *ScrollBar; // x20
  UnityEngine_Component_o *v18; // x0
  UnityEngine_Transform_o *v19; // x0
  struct UIScrollBar_o *v20; // x8
  UnityEngine_Component_o *mFG; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_srcLineSprite; // x0
  UIWidget_o *v24; // x20
  struct UIScrollBar_o *v25; // x8
  UnityEngine_Component_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_BoxCollider_o *v28; // x0
  struct UIScrollBar_o *v29; // x8
  UnityEngine_Component_o *mBG; // x0
  UnityEngine_GameObject_o *v31; // x0
  UIWidget_o *v32; // x0
  UIWidget_o *v33; // x20
  struct UIScrollBar_o *v34; // x8
  UnityEngine_Component_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_BoxCollider_o *v37; // x0
  UnityEngine_Component_o *notgetLabel; // x0
  UnityEngine_Transform_o *v39; // x0
  UnityEngine_Component_o *rewardSpr; // x0
  UnityEngine_Transform_o *v41; // x0
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Vector2_o v43; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F9015 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F9015 = 1;
  }
  TitleSpr = (UnityEngine_Component_o *)this->fields.TitleSpr;
  if ( !TitleSpr )
    goto LABEL_43;
  transform = UnityEngine_Component__get_transform(TitleSpr, 0LL);
  if ( !transform )
    goto LABEL_43;
  v44.fields.y = 189.3;
  v44.fields.x = 0.0;
  v44.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(transform, v44, 0LL);
  ScrollViewPanel = (UnityEngine_Object_o *)this->fields.ScrollViewPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ScrollViewPanel, 0LL, 0LL) )
  {
    v8 = this->fields.ScrollViewPanel;
    if ( !v8 )
      goto LABEL_43;
    UIPanel__Refresh(v8, 0LL);
    v9 = (UnityEngine_Component_o *)this->fields.ScrollViewPanel;
    if ( !v9 )
      goto LABEL_43;
    v10 = UnityEngine_Component__get_transform(v9, 0LL);
    if ( !v10 )
      goto LABEL_43;
    v45.fields.y = -88.4;
    v45.fields.x = 0.0;
    v45.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(v10, v45, 0LL);
    v11 = this->fields.ScrollViewPanel;
    if ( !v11 )
      goto LABEL_43;
    v43.fields.x = -9.41;
    v43.fields.y = -62.9;
    UIPanel__set_clipOffset(v11, v43, 0LL);
    v51.fields.z = 730.3;
    v51.fields.w = 184.9;
    v12 = this->fields.ScrollViewPanel;
    v51.fields.x = 0.0;
    v51.fields.y = 0.0;
    var40.methodPointer = 0LL;
    var40.invoker_method = 0LL;
    UnityEngine_Vector4___ctor(v51, v13, v14, v15, v16, &var40);
    if ( !v12 )
      goto LABEL_43;
    *(_QWORD *)&v52.fields.x = var40.methodPointer;
    *(_QWORD *)&v52.fields.z = var40.invoker_method;
    UIPanel__set_baseClipRegion(v12, v52, 0LL);
  }
  ScrollBar = (UnityEngine_Object_o *)this->fields.ScrollBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ScrollBar, 0LL, 0LL) )
  {
    v18 = (UnityEngine_Component_o *)this->fields.ScrollBar;
    if ( v18 )
    {
      v19 = UnityEngine_Component__get_transform(v18, 0LL);
      if ( v19 )
      {
        v46.fields.x = 372.0;
        v46.fields.y = -147.0;
        v46.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(v19, v46, 0LL);
        v20 = this->fields.ScrollBar;
        if ( v20 )
        {
          mFG = (UnityEngine_Component_o *)v20->fields.mFG;
          if ( mFG )
          {
            gameObject = UnityEngine_Component__get_gameObject(mFG, 0LL);
            if ( gameObject )
            {
              Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        gameObject,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
              if ( Component_srcLineSprite )
              {
                v24 = Component_srcLineSprite;
                UIWidget__set_width(Component_srcLineSprite, 28, 0LL);
                UIWidget__set_height(v24, 180, 0LL);
                v25 = this->fields.ScrollBar;
                if ( v25 )
                {
                  v26 = (UnityEngine_Component_o *)v25->fields.mFG;
                  if ( v26 )
                  {
                    v27 = UnityEngine_Component__get_gameObject(v26, 0LL);
                    if ( v27 )
                    {
                      v28 = (UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v27,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                      if ( v28 )
                      {
                        v47.fields.x = 28.0;
                        v47.fields.z = 0.0;
                        v47.fields.y = 160.0;
                        UnityEngine_BoxCollider__set_size(v28, v47, 0LL);
                        v29 = this->fields.ScrollBar;
                        if ( v29 )
                        {
                          mBG = (UnityEngine_Component_o *)v29->fields.mBG;
                          if ( mBG )
                          {
                            v31 = UnityEngine_Component__get_gameObject(mBG, 0LL);
                            if ( v31 )
                            {
                              v32 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    v31,
                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                              if ( v32 )
                              {
                                v33 = v32;
                                UIWidget__set_width(v32, 16, 0LL);
                                UIWidget__set_height(v33, 180, 0LL);
                                v34 = this->fields.ScrollBar;
                                if ( v34 )
                                {
                                  v35 = (UnityEngine_Component_o *)v34->fields.mFG;
                                  if ( v35 )
                                  {
                                    v36 = UnityEngine_Component__get_gameObject(v35, 0LL);
                                    if ( v36 )
                                    {
                                      v37 = (UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                           v36,
                                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                                      if ( v37 )
                                      {
                                        v48.fields.x = 16.0;
                                        v48.fields.z = 0.0;
                                        v48.fields.y = 160.0;
                                        UnityEngine_BoxCollider__set_size(v37, v48, 0LL);
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
    sub_B170D4();
  }
LABEL_38:
  notgetLabel = (UnityEngine_Component_o *)this->fields.notgetLabel;
  if ( !notgetLabel )
    goto LABEL_43;
  v39 = UnityEngine_Component__get_transform(notgetLabel, 0LL);
  if ( !v39 )
    goto LABEL_43;
  v49.fields.y = -74.0;
  v49.fields.x = 0.0;
  v49.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v39, v49, 0LL);
  rewardSpr = (UnityEngine_Component_o *)this->fields.rewardSpr;
  if ( !rewardSpr )
    goto LABEL_43;
  v41 = UnityEngine_Component__get_transform(rewardSpr, 0LL);
  if ( !v41 )
    goto LABEL_43;
  v50.fields.y = -31.0;
  v50.fields.x = 0.0;
  v50.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v41, v50, 0LL);
}


void __fastcall BattleViewItemlistComponent__Reposition(BattleViewItemlistComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *listRoot; // x0
  WebViewObject_o *Component_WebViewObject; // x0

  if ( (byte_40F9017 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIGrid___, method);
    byte_40F9017 = 1;
  }
  listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !listRoot
    || (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    listRoot,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
  {
    sub_B170D4();
  }
  (*(void (__fastcall **)(WebViewObject_o *, Il2CppClass *))&Component_WebViewObject->klass[1]._1.this_arg.bits)(
    Component_WebViewObject,
    Component_WebViewObject->klass[1]._1.element_class);
}


void __fastcall BattleViewItemlistComponent__ResetScrollBarPoisition(
        BattleViewItemlistComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *ScrollBar; // x20
  UIProgressBar_o *v4; // x0

  if ( (byte_40F9018 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9018 = 1;
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
      sub_B170D4();
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
    sub_B170D4();
  BattleDropItemComponent__Set(battleDropItemComponent, dropItem, 0LL);
  battleDropItemComponent->fields.callbackFunc = callback;
  sub_B16F98(
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
  int32_t v9; // w0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  v9 = BattleViewItemlistComponent__CalcPossessionNum(this, dropItem, (int32_t)dropItem, (const MethodInfo *)callback);
  if ( !battleDropItemComponent )
    sub_B170D4();
  BattleDropItemComponent__Set_23019784(battleDropItemComponent, dropItem, v9, 0LL);
  battleDropItemComponent->fields.callbackFunc = callback;
  sub_B16F98(
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x23
  __int64 v8; // x21
  int size; // w8
  UnityEngine_GameObject_o *v10; // x0
  BattleDropItemComponent_o *Component_srcLineSprite; // x0

  if ( (byte_40F9014 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, isShowPossessionNum);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    byte_40F9014 = 1;
  }
  itemObjectList = this->fields.itemObjectList;
  if ( !itemObjectList )
LABEL_14:
    sub_B170D4();
  v8 = 0LL;
  while ( 1 )
  {
    size = itemObjectList->fields._size;
    if ( (int)v8 >= size )
      break;
    if ( size <= (unsigned int)v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v10 = itemObjectList->fields._items->m_Items[v8];
    if ( v10 )
    {
      Component_srcLineSprite = (BattleDropItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               v10,
                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( Component_srcLineSprite )
      {
        if ( isShowPossessionNum )
          BattleDropItemComponent__ShowPossessionNum(Component_srcLineSprite, 0LL);
        else
          BattleDropItemComponent__ShowDropNum(Component_srcLineSprite, 0LL);
        itemObjectList = this->fields.itemObjectList;
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

  rewardInfos_k__BackingField = this->fields._rewardInfos_k__BackingField;
  if ( rewardInfos_k__BackingField && (max_length = rewardInfos_k__BackingField->max_length, max_length >= 1) )
  {
    v7 = 0LL;
    m_Items = rewardInfos_k__BackingField->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v7 >= max_length )
      {
        sub_B17100(this, userId, battleDropItem);
        sub_B170A0();
      }
      if ( !battleDropItem || (v9 = m_Items[v7]) == 0LL )
        sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F9010 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, userId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F9010 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  entity = 0LL;
  if ( !battleDropItem || !MasterData_WarQuestSelectionMaster )
    goto LABEL_11;
  if ( UserItemMaster__TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         userId,
         battleDropItem->fields.objectId,
         0LL) )
  {
    if ( entity )
      return entity->fields.num - questClearItemSubtraction;
LABEL_11:
    sub_B170D4();
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
  sub_B16F98(
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
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F9011 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9011 = 1;
  }
  listRoot = (UnityEngine_Object_o *)this->fields.listRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(listRoot, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !v4 || (gameObject = UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x0
  Il2CppObject *current; // x25
  struct System_Collections_Generic_List_GameObject__o *v24; // x0
  int32_t colmax; // w21
  float width; // s11
  float height; // s12
  BattleViewItemlistComponent_c *v28; // x0
  float v29; // s0
  float v30; // s1
  float v31; // s2
  float v32; // s10
  float v33; // s13
  float v34; // s8
  float v35; // s9
  UnityEngine_Component_o *listRoot; // x0
  BattleDropItemComponent_o *ComponentInParent_UIScrollView; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x8
  System_Int32_array **v41; // x25
  unsigned __int64 v42; // x21
  float v43; // s10
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v45; // x26
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v47; // x27
  float v48; // s0
  float v49; // s1
  float v50; // s2
  srcLineSprite_o *Component_srcLineSprite; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  BattleDropItemComponent_o *v58; // x27
  struct System_Collections_Generic_List_GameObject__o *v59; // x0
  UnityEngine_Object_o *v60; // x21
  UILabel_o *v61; // x21
  System_String_o *v62; // x22
  System_String_o *v63; // x0
  UnityEngine_Component_o *v64; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  char v66; // w1
  UILabel_o *notgetLabel; // x20
  System_String_o *noItemLabelKey; // x21
  System_String_o *v69; // x0
  UnityEngine_Component_o *v70; // x0
  System_Collections_Generic_List_Enumerator_T__o v74; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v75; // [xsp+40h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F900E & 1) == 0 )
  {
    sub_B16FFC(&BattleViewItemlistComponent_TypeInfo, itemlist);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInParent_UIScrollView___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v13);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, v14);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v18);
    sub_B16FFC(&LocalizationManager_TypeInfo, v19);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v20);
    sub_B16FFC(&StringLiteral_2440, v21);
    byte_40F900E = 1;
  }
  memset(&v75, 0, sizeof(v75));
  itemObjectList = this->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_58;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v74,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemObjectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v75 = v74;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v75,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v75.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v75,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v24 = this->fields.itemObjectList;
  if ( !v24 )
    goto LABEL_58;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v24,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  colmax = this->fields.colmax;
  width = this->fields.width;
  height = this->fields.height;
  if ( !setColMax )
  {
    setColMax = ConstantMaster__getValue((System_String_o *)StringLiteral_2440, 0LL);
    if ( setColMax <= 0 )
    {
      v28 = BattleViewItemlistComponent_TypeInfo;
      if ( (BYTE3(BattleViewItemlistComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleViewItemlistComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleViewItemlistComponent_TypeInfo);
        v28 = BattleViewItemlistComponent_TypeInfo;
      }
      setColMax = v28->static_fields->defaultColumnMax;
    }
  }
  *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_zero(0LL);
  if ( setColMax >= 1 )
  {
    v32 = 1.0;
    v33 = (float)this->fields.colmax / (float)setColMax;
    v34 = (float)(this->fields.width - (float)(this->fields.width * v33)) * 0.5;
    width = width * v33;
    height = height * v33;
    v35 = (float)(this->fields.height - (float)(this->fields.height * v33)) * -0.5;
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
    v69 = LocalizationManager__Get(noItemLabelKey, 0LL);
    if ( notgetLabel )
    {
      UILabel__set_text(notgetLabel, v69, 0LL);
      v70 = (UnityEngine_Component_o *)this->fields.notgetLabel;
      if ( v70 )
      {
        gameObject = UnityEngine_Component__get_gameObject(v70, 0LL);
        if ( gameObject )
        {
          v66 = 1;
          goto LABEL_56;
        }
      }
    }
LABEL_58:
    sub_B170D4();
  }
  v34 = v29;
  v35 = v30;
  v32 = v31;
  v33 = 1.0;
  setColMax = colmax;
  if ( !itemlist )
    goto LABEL_49;
LABEL_19:
  listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !listRoot )
    goto LABEL_58;
  ComponentInParent_UIScrollView = (BattleDropItemComponent_o *)UnityEngine_Component__GetComponentInParent_UIScrollView_(
                                                                  listRoot,
                                                                  (const MethodInfo_18BD688 *)Method_UnityEngine_Component_GetComponentInParent_UIScrollView___);
  v40 = *(_QWORD *)&itemlist->max_length;
  if ( (int)v40 >= 1 )
  {
    v41 = (System_Int32_array **)ComponentInParent_UIScrollView;
    v42 = 0LL;
    v43 = 0.0 - v32;
    do
    {
      if ( v42 >= (unsigned int)v40 )
      {
LABEL_59:
        sub_B17100(ComponentInParent_UIScrollView, v38, v39);
        sub_B170A0();
      }
      Object = BaseMonoBehaviour__createObject(
                 (BaseMonoBehaviour_o *)this,
                 this->fields.prefabResultItem,
                 this->fields.listRoot,
                 0LL,
                 0LL);
      if ( !Object )
        goto LABEL_58;
      v45 = Object;
      transform = UnityEngine_GameObject__get_transform(Object, 0LL);
      if ( !transform )
        goto LABEL_58;
      v76.fields.x = (float)(width * (float)((int)v42 + -setColMax * ((int)v42 / setColMax))) - v34;
      v76.fields.y = (float)-(float)(height * (float)((int)v42 / setColMax)) - v35;
      v76.fields.z = v43;
      UnityEngine_Transform__set_localPosition(transform, v76, 0LL);
      v47 = UnityEngine_GameObject__get_transform(v45, 0LL);
      *(UnityEngine_Vector3_o *)&v48 = UnityEngine_Vector3__get_one(0LL);
      if ( !v47 )
        goto LABEL_58;
      v77.fields.x = v33 * v48;
      v77.fields.y = v33 * v49;
      v77.fields.z = v33 * v50;
      UnityEngine_Transform__set_localScale(v47, v77, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v45, 0LL, 0LL) )
      {
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v45,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
        if ( !Component_srcLineSprite )
          goto LABEL_58;
        Component_srcLineSprite->fields.mFSM = (struct CStateManager_srcLineSprite__o *)v41;
        sub_B16F98(
          (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mFSM,
          v41,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57);
        ComponentInParent_UIScrollView = (BattleDropItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        v45,
                                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
        if ( v42 >= itemlist->max_length )
          goto LABEL_59;
        v58 = ComponentInParent_UIScrollView;
        if ( !setAction )
          goto LABEL_58;
        BattleViewItemlistComponent_BattleDropItemComponentSetAction__Invoke(
          setAction,
          ComponentInParent_UIScrollView,
          itemlist->m_Items[v42],
          callBack,
          eventId,
          0LL);
        if ( !v58 )
          goto LABEL_58;
        BattleDropItemComponent__Show(v58, 0LL);
      }
      v59 = this->fields.itemObjectList;
      if ( !v59 )
        goto LABEL_58;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v59,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
      LODWORD(v40) = itemlist->max_length;
      ++v42;
    }
    while ( (__int64)v42 < (int)v40 );
  }
  v60 = (UnityEngine_Object_o *)this->fields.notgetLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v60, 0LL, 0LL) )
  {
    v61 = this->fields.notgetLabel;
    v62 = this->fields.noItemLabelKey;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v63 = LocalizationManager__Get(v62, 0LL);
    if ( v61 )
    {
      UILabel__set_text(v61, v63, 0LL);
      v64 = (UnityEngine_Component_o *)this->fields.notgetLabel;
      if ( v64 )
      {
        gameObject = UnityEngine_Component__get_gameObject(v64, 0LL);
        if ( gameObject )
        {
          v66 = itemlist->max_length == 0;
LABEL_56:
          UnityEngine_GameObject__SetActive(gameObject, v66, 0LL);
          return;
        }
      }
    }
    goto LABEL_58;
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
  BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *v10; // x23
  const MethodInfo *v11; // x6

  if ( (byte_40F900C & 1) == 0 )
  {
    sub_B16FFC(&BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo, itemlist);
    sub_B16FFC(&Method_BattleViewItemlistComponent_SetBattleDropItemComponent__, v9);
    byte_40F900C = 1;
  }
  v10 = (BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *)sub_B170CC(
                                                                            BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo,
                                                                            itemlist,
                                                                            callBack,
                                                                            *(_QWORD *)&setColMax,
                                                                            method);
  BattleViewItemlistComponent_BattleDropItemComponentSetAction___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleViewItemlistComponent_SetBattleDropItemComponent__,
    0LL);
  BattleViewItemlistComponent__setListData(this, itemlist, -1, v10, callBack, setColMax, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleViewItemlistComponent__setListDataCustomColumn_23378520(
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

  if ( (byte_40F900D & 1) == 0 )
  {
    sub_B16FFC(&BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo, itemlist);
    sub_B16FFC(&Method_BattleViewItemlistComponent_SetBattleDropItemComponentEx__, v11);
    byte_40F900D = 1;
  }
  v12 = (BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *)sub_B170CC(
                                                                            BattleViewItemlistComponent_BattleDropItemComponentSetAction_TypeInfo,
                                                                            itemlist,
                                                                            *(_QWORD *)&eventId,
                                                                            callBack,
                                                                            *(_QWORD *)&setColMax);
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
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F9012 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9012 = 1;
  }
  listRoot = (UnityEngine_Object_o *)this->fields.listRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(listRoot, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !v4 || (gameObject = UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
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
  sub_B16F98(
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
  sub_B16F98(p_method, object);
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
  if ( (byte_40F71D3 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, battleDropItemComponent);
    byte_40F71D3 = 1;
  }
  v15[4] = 0LL;
  v15[0] = (__int64)battleDropItemComponent;
  v15[1] = (__int64)dropItem;
  v15[2] = (__int64)callback;
  v15[3] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v15, a6, object);
}


void __fastcall BattleViewItemlistComponent_BattleDropItemComponentSetAction__EndInvoke(
        BattleViewItemlistComponent_BattleDropItemComponentSetAction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v32->fields.extra_arg, battleDropItemComponent, dropItem);
      v36 = sub_B1702C(v33);
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
            v45 = sub_B17024(v33);
            v46 = sub_B17428(v33);
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
                  v28 = sub_AAFEF8(battleDropItemComponent, v48, v49);
                }
                v20 = *(_QWORD *)(v28 + 8);
              }
              else
              {
                v20 = *((_QWORD *)&battleDropItemComponent->klass->vtable._1_Finalize.methodPtr
                      + 2 * *(unsigned __int16 *)(v33 + 72));
              }
              v29 = (void (__fastcall **)(BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, _QWORD))sub_B170AC(v20, v33);
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
                  v19 = sub_AAFEF8(battleDropItemComponent, class_0, v14);
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
          v38 = sub_B17024(v33);
          v39 = sub_B17428(v33);
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
                v30 = sub_AAFEF8(v34, v41, v42);
              }
              v27 = *(_QWORD *)(v30 + 8);
            }
            else
            {
              v27 = *(_QWORD *)(*v34 + 16LL * *(unsigned __int16 *)(v33 + 72) + 320);
            }
            v31 = (void (__fastcall **)(__int64 *, BattleDropItemComponent_o *, BattleDropItem_o *, BattleDropItemComponent_ClickDelegate_o *, _QWORD, _QWORD))sub_B170AC(v27, v33);
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
                v26 = sub_AAFEF8(v34, v22, v21);
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