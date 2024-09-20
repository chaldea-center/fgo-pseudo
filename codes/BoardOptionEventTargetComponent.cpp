void __fastcall BoardOptionEventTargetComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct BoardOptionEventTargetComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A57CD7 & 1) == 0 )
  {
    sub_1B885B0(&BoardOptionEventTargetComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_15130/*"Unlit/Transparent Colored_Choco"*/);
    sub_1B885B0(&StringLiteral_4976/*"Custom/SpriteWithMask_Choco"*/);
    byte_4A57CD7 = 1;
  }
  BoardOptionEventTargetComponent_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15130/*"Unlit/Transparent Colored_Choco"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)BoardOptionEventTargetComponent_TypeInfo->static_fields,
    StringLiteral_15130/*"Unlit/Transparent Colored_Choco"*/,
    v1,
    v2);
  v3 = StringLiteral_4976/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = BoardOptionEventTargetComponent_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4976/*"Custom/SpriteWithMask_Choco"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->CHOCO_SHADER_SP, v3, v5, v6);
}


void __fastcall BoardOptionEventTargetComponent___ctor(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BoardOptionEventTargetComponent__CreateEnemyList(
        BoardOptionEventTargetComponent_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 UserId; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_List_object__o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Int32_array *v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppObject *Master_object; // x23
  Il2CppObject *v22; // x24
  System_Collections_Generic_List_object__o *v23; // x27
  unsigned int **v24; // x25
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x26
  const MethodInfo *v28; // x2
  __int64 v29; // x8
  __int64 v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w3
  __int64 v34; // x8
  __int64 v35; // x29
  __int64 v36; // x28
  unsigned __int64 v37; // x21
  unsigned int *v38; // x8
  __int64 v39; // x8
  __int64 v40; // x8
  int32_t v41; // w2
  int32_t v42; // w3
  ViewEnemyEntity_o *v43; // x26
  System_String_o *v44; // x0
  Il2CppObject *v45; // x26
  int32_t v46; // w2
  int32_t v47; // w3
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  ViewEnemyEntity_o *v52; // x27
  unsigned int *v53; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x22
  BoardOptionEventTargetComponent___c_c *v55; // x0
  System_Func_object__bool__o *_9__8_0; // x23
  Il2CppObject *v57; // x24
  struct BoardOptionEventTargetComponent___c_StaticFields *static_fields; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t v61; // w1
  struct System_String_array *v62; // x0
  struct System_String_array **p_loadedAssets; // x19
  int32_t v64; // w2
  int32_t v65; // w3
  System_Action_o *v66; // x19
  __int64 v67; // x0
  System_Collections_Generic_List_object__o *v68; // [xsp+8h] [xbp-88h]
  QuestInformationListViewItem_MissionTargetState_o missionTargetState; // [xsp+14h] [xbp-7Ch] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  ViewEnemyEntity_o *v71; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *v72; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4A57CCE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserQuestInfoMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_ViewEnemyEntity___);
    sub_1B885B0(&System_Func_ViewEnemyEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__8_0__);
    sub_1B885B0(&Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__1__);
    sub_1B885B0(&BoardOptionEventTargetComponent___c__DisplayClass8_0_TypeInfo);
    sub_1B885B0(&BoardOptionEventTargetComponent___c_TypeInfo);
    sub_1B885B0(&ViewEnemyEntity___TypeInfo);
    sub_1B885B0(&ViewEnemyEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_12656/*"Servants/Commands/"*/);
    byte_4A57CCE = 1;
  }
  v71 = 0LL;
  v72 = 0LL;
  entity = 0LL;
  missionTargetState = 0;
  v7 = sub_1B887FC(BoardOptionEventTargetComponent___c__DisplayClass8_0_TypeInfo);
  BoardOptionEventTargetComponent___c__DisplayClass8_0___ctor(
    (BoardOptionEventTargetComponent___c__DisplayClass8_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_53;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 32) = enemies;
  v12 = (__int64 *)(v7 + 32);
  *(_DWORD *)(v7 + 24) = questId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)enemies, v13, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemList, (int32_t)v15, v16, v17);
  this->fields.dispQuestId = *(_DWORD *)(v7 + 24);
  v18 = *(struct System_Int32_array **)(v7 + 32);
  this->fields.dispEnemies = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dispEnemies, (int32_t)v18, v19, v20);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v22 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v7 + 40) = 0LL;
  v24 = (unsigned int **)(v7 + 40);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), 0, v25, v26);
  v27 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v27 )
    goto LABEL_53;
  UserQuestInfoMaster__TryGetEntity((UserQuestInfoMaster_o *)v27, &entity, UserId, *(_DWORD *)(v7 + 24), 0LL);
  v29 = *(_QWORD *)(v7 + 32);
  if ( v29 )
  {
    v30 = sub_1B88658(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v29 + 24));
    *v24 = (unsigned int *)v30;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), v30, v31, v32);
    v34 = *v12;
    if ( !*v12 )
      goto LABEL_53;
    v35 = 8LL;
    v36 = 8LL;
    v68 = v23;
    while ( 1 )
    {
      v37 = v35 - 8;
      if ( v35 - 8 >= *(int *)(v34 + 24) )
        break;
      v38 = *v24;
      if ( !*v24 )
        goto LABEL_53;
      if ( v37 >= v38[6] )
        goto LABEL_67;
      *(_QWORD *)&v38[v36] = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v38[v36], 0, (int32_t)v28, v33);
      v39 = *v12;
      if ( !*v12 )
        goto LABEL_53;
      if ( v37 >= *(unsigned int *)(v39 + 24) )
        goto LABEL_67;
      v33 = *(_DWORD *)(v39 + 4 * v35);
      if ( v33 >= 1 )
      {
        if ( !Master_object )
          goto LABEL_53;
        UserId = ViewEnemyMaster__TryGetEntity((ViewEnemyMaster_o *)Master_object, &v71, *(_DWORD *)(v7 + 24), v33, 0LL);
        if ( (UserId & 1) != 0 )
        {
          UserId = (__int64)v71;
          if ( !v71 )
            goto LABEL_53;
          ViewEnemyEntity__IsMissionTarget(v71, v71->fields.questId, &missionTargetState, 0LL);
          if ( missionTargetState.fields.IsEventMission )
          {
            if ( !entity )
              goto LABEL_27;
            UserId = (__int64)entity->fields.enemyIds;
            if ( !UserId || !*(_QWORD *)(UserId + 24) )
              goto LABEL_27;
            if ( !v71 )
              goto LABEL_53;
            UserId = System_Linq_Enumerable__Contains_int_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)UserId,
                       v71->fields.enemyId,
                       (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
            if ( (UserId & 1) == 0 )
            {
LABEL_27:
              v40 = *v12;
              if ( !*v12 )
                goto LABEL_53;
              if ( v37 >= *(unsigned int *)(v40 + 24) )
                goto LABEL_67;
              *(_DWORD *)(v40 + 4 * v35) = 0;
            }
            if ( !v71 || !v22 )
              goto LABEL_53;
            UserId = DataMasterBase_object__object__int___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v22,
                       &v72,
                       v71->fields.svtId,
                       (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( (UserId & 1) != 0 )
            {
              UserId = (__int64)v72;
              if ( !v72 )
                goto LABEL_53;
              UserId = ServantEntity__get_IsOrganization((ServantEntity_o *)v72, 0LL);
              if ( (UserId & 1) == 0 )
                goto LABEL_37;
              UserId = (__int64)v71;
              if ( !v71 )
                goto LABEL_53;
              UserId = ViewEnemyEntity__IsIconIdUnique(v71, 0LL);
              if ( (UserId & 1) == 0 )
              {
                if ( !v71 )
                  goto LABEL_53;
                v44 = System_Int32__ToString((int)v71 + 36, 0LL);
                UserId = (__int64)System_String__Concat_61707032((System_String_o *)StringLiteral_12656/*"Servants/Commands/"*/, v44, 0LL);
                if ( !v23 )
                  goto LABEL_53;
                v45 = (Il2CppObject *)UserId;
                UserId = System_Collections_Generic_List_object___Contains(
                           v23,
                           (Il2CppObject *)UserId,
                           (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_string__Contains__);
                if ( (UserId & 1) == 0 )
                {
                  items = v23->fields._items;
                  v49 = Method_System_Collections_Generic_List_string__Add__;
                  ++v23->fields._version;
                  if ( !items )
                    goto LABEL_53;
                  size = v23->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v23,
                      v45,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v51 = &items->obj.klass + size;
                    v23->fields._size = size + 1;
                    v51[4] = (Il2CppClass *)v45;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v51 + 4), (int32_t)v45, v46, v47);
                  }
                }
                v52 = v71;
                v43 = (ViewEnemyEntity_o *)sub_1B887FC(ViewEnemyEntity_TypeInfo);
                ViewEnemyEntity___ctor_40282184(v43, v52, 0LL);
                v71 = v43;
                if ( !v43 )
                  goto LABEL_53;
                v43->fields.iconId = 0;
              }
              else
              {
LABEL_37:
                v43 = v71;
              }
              v53 = *v24;
              if ( !*v24 )
                goto LABEL_53;
              if ( v43 )
              {
                UserId = sub_1B886EC(v43, *(_QWORD *)(*(_QWORD *)v53 + 64LL));
                if ( !UserId )
                {
                  v67 = sub_1B88830();
                  sub_1B886D8(v67, 0LL);
                }
              }
              if ( v37 >= v53[6] )
LABEL_67:
                sub_1B88814(UserId, v9);
              *(_QWORD *)&v53[v36] = v43;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v53[v36], (int32_t)v43, v41, v42);
              v23 = v68;
            }
          }
        }
      }
      v34 = *v12;
      ++v35;
      v36 += 2LL;
      if ( !*v12 )
        goto LABEL_53;
    }
  }
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)*v24;
  if ( *v24 )
  {
    v55 = BoardOptionEventTargetComponent___c_TypeInfo;
    if ( !BoardOptionEventTargetComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent___c_TypeInfo);
      v55 = BoardOptionEventTargetComponent___c_TypeInfo;
    }
    _9__8_0 = (System_Func_object__bool__o *)v55->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v55->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v55);
        v55 = BoardOptionEventTargetComponent___c_TypeInfo;
      }
      v57 = (Il2CppObject *)v55->static_fields->__9;
      _9__8_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ViewEnemyEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__8_0,
        v57,
        Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__8_0__,
        0LL);
      static_fields = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_ViewEnemyEntity__bool__o *)_9__8_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v59, v60);
    }
    v61 = System_Linq_Enumerable__Count_object__48881560(
            v54,
            (System_Func_TSource__bool__o *)_9__8_0,
            (const MethodInfo_2E9DF98 *)Method_System_Linq_Enumerable_Count_ViewEnemyEntity___);
  }
  else
  {
    v61 = 0;
  }
  BoardOptionEventTargetComponent__DispEmptyList(this, v61, v28);
  if ( !v23 )
LABEL_53:
    sub_1B8880C(UserId, v9);
  v62 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                        v23,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.loadedAssets = v62;
  p_loadedAssets = &this->fields.loadedAssets;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_loadedAssets, (int32_t)v62, v64, v65);
  *((_BYTE *)p_loadedAssets + 8) = 1;
  v66 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v66,
    (Il2CppObject *)v7,
    Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__1__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v66, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetComponent__CreateEnemyList_33466224(
        BoardOptionEventTargetComponent_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        ViewEnemyEntity_array *veEnts,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *v8; // x19
  __int64 v9; // x8
  unsigned __int64 v10; // x25
  int32_t v11; // w22
  ViewEnemyEntity_o *v12; // x24
  QuestInformationListViewItem_o *v13; // x0
  Il2CppObject *v14; // x23
  int32_t v15; // w1
  ViewEnemyEntity_o *v16; // x2
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v22; // x8
  const MethodInfo *v23; // x3
  int32_t dispQuestId; // w1
  System_Int32_array *dispEnemies; // x2

  v8 = this;
  if ( (byte_4A57CD0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    this = (BoardOptionEventTargetComponent_o *)sub_1B885B0(&QuestInformationListViewItem_TypeInfo);
    byte_4A57CD0 = 1;
  }
  if ( v8->fields.loading && v8->fields.dispQuestId == questId )
  {
    v8->fields.loading = 0;
    if ( enemies )
    {
      v9 = *(_QWORD *)&enemies->max_length;
      if ( (int)v9 >= 1 )
      {
        v10 = 0LL;
        v11 = 0;
        while ( 1 )
        {
          if ( v10 >= (unsigned int)v9 )
LABEL_28:
            sub_1B88814(this, *(_QWORD *)&questId);
          if ( enemies->m_Items[v10 + 1] <= 0 )
            break;
          if ( !veEnts )
            goto LABEL_27;
          if ( v10 >= veEnts->max_length )
            goto LABEL_28;
          v12 = veEnts->m_Items[v10];
          if ( v12 )
          {
            v13 = (QuestInformationListViewItem_o *)sub_1B887FC(QuestInformationListViewItem_TypeInfo);
            v14 = (Il2CppObject *)v13;
            v15 = v11;
            v16 = v12;
            goto LABEL_15;
          }
LABEL_21:
          if ( (__int64)++v10 >= (int)v9 )
            goto LABEL_22;
        }
        v13 = (QuestInformationListViewItem_o *)sub_1B887FC(QuestInformationListViewItem_TypeInfo);
        v14 = (Il2CppObject *)v13;
        v15 = v11;
        v16 = 0LL;
LABEL_15:
        QuestInformationListViewItem___ctor_34048556(v13, v15, v16, 0, 0LL);
        this = (BoardOptionEventTargetComponent_o *)v8->fields.itemList;
        if ( !this
          || (v19 = *(_QWORD *)&this->fields.m_CachedPtr,
              v20 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++HIDWORD(this->fields.m_CancellationTokenSource),
              !v19) )
        {
LABEL_27:
          sub_1B8880C(this, *(_QWORD *)&questId);
        }
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v19 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v14,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = v19 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v22 + 32) = v14;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 32), (int32_t)v14, v17, v18);
        }
        LODWORD(v9) = enemies->max_length;
        ++v11;
        goto LABEL_21;
      }
    }
LABEL_22:
    BoardOptionEventTargetComponent__DispList(v8, 0, (const MethodInfo *)enemies);
  }
  else
  {
    BoardOptionEventTargetComponent__DestroyList(v8, *(const MethodInfo **)&questId);
    dispQuestId = v8->fields.dispQuestId;
    if ( dispQuestId )
    {
      dispEnemies = v8->fields.dispEnemies;
      if ( dispEnemies )
        BoardOptionEventTargetComponent__CreateEnemyList(v8, dispQuestId, dispEnemies, v23);
    }
  }
}


void __fastcall BoardOptionEventTargetComponent__DestroyList(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_loadedAssets; // x19
  System_String_array *v4; // x20
  struct System_String_array *loadedAssets; // t1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A57CD2 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A57CD2 = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
  }
  else
  {
    loadedAssets = this->fields.loadedAssets;
    p_loadedAssets = (ServantStatusBattleListViewItem_o *)&this->fields.loadedAssets;
    v4 = loadedAssets;
    if ( loadedAssets )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage_37799632(v4, 0LL);
      p_loadedAssets->klass = 0LL;
      sub_1B88554(p_loadedAssets, 0, v6, v7);
    }
  }
}


void __fastcall BoardOptionEventTargetComponent__DispEmptyList(
        BoardOptionEventTargetComponent_o *this,
        int32_t useNum,
        const MethodInfo *method)
{
  UnityEngine_Object_o *missionTargetLabel; // x21
  BoardOptionEventTargetListViewItemDraw_o *gameObject; // x0
  __int64 v7; // x1
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  struct BoardOptionEventTargetListViewItemDraw_array *v9; // x8
  int32_t max_length; // w9
  unsigned int v11; // w10
  __int64 v12; // x21
  struct BoardOptionEventTargetListViewItemDraw_array *v13; // x8

  if ( (byte_4A57CCF & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57CCF = 1;
  }
  missionTargetLabel = (UnityEngine_Object_o *)this->fields.missionTargetLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Object__op_Equality(missionTargetLabel, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    eventTargetItemDrawList = this->fields.eventTargetItemDrawList;
    if ( !eventTargetItemDrawList )
      goto LABEL_26;
    if ( !*(_QWORD *)&eventTargetItemDrawList->max_length )
      return;
    gameObject = (BoardOptionEventTargetListViewItemDraw_o *)this->fields.missionTargetLabel;
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, useNum > 0, 0LL),
          (v9 = this->fields.eventTargetItemDrawList) == 0LL) )
    {
LABEL_26:
      sub_1B8880C(gameObject, v7);
    }
    max_length = v9->max_length;
    if ( max_length < useNum )
      useNum = v9->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0;
      do
      {
        if ( v11 >= max_length )
LABEL_27:
          sub_1B88814(gameObject, v7);
        v12 = (int)v11;
        gameObject = v9->m_Items[v11];
        if ( !gameObject )
          goto LABEL_26;
        gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)gameObject,
                                                                   0LL);
        if ( !gameObject )
          goto LABEL_26;
        if ( (int)v12 >= useNum )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v13 = this->fields.eventTargetItemDrawList;
          if ( !v13 )
            goto LABEL_26;
          if ( (unsigned int)v12 >= v13->max_length )
            goto LABEL_27;
          gameObject = v13->m_Items[v12];
          if ( !gameObject )
            goto LABEL_26;
          BoardOptionEventTargetListViewItemDraw__SetItem(gameObject, 0LL, 0, 0LL);
        }
        v9 = this->fields.eventTargetItemDrawList;
        if ( !v9 )
          goto LABEL_26;
        max_length = v9->max_length;
        v11 = v12 + 1;
      }
      while ( (int)v12 + 1 < max_length );
    }
  }
}


void __fastcall BoardOptionEventTargetComponent__DispList(
        BoardOptionEventTargetComponent_o *this,
        int32_t offset,
        const MethodInfo *method)
{
  UnityEngine_Object_o *missionTargetLabel; // x21
  BoardOptionEventTargetListViewItemDraw_o *gameObject; // x0
  QuestInformationListViewItem_o *v7; // x1
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v10; // x9
  struct BoardOptionEventTargetListViewItemDraw_array *v11; // x8
  int v12; // w21
  unsigned int v13; // w23
  __int64 v14; // x9
  __int64 methodPtr_low; // x10
  struct BoardOptionEventTargetListViewItemDraw_array *v16; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v17; // x8

  if ( (byte_4A57CD1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestInformationListViewItem_TypeInfo);
    byte_4A57CD1 = 1;
  }
  missionTargetLabel = (UnityEngine_Object_o *)this->fields.missionTargetLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Object__op_Equality(missionTargetLabel, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    eventTargetItemDrawList = this->fields.eventTargetItemDrawList;
    if ( !eventTargetItemDrawList )
      goto LABEL_32;
    if ( !*(_QWORD *)&eventTargetItemDrawList->max_length )
      return;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_32;
    gameObject = (BoardOptionEventTargetListViewItemDraw_o *)this->fields.missionTargetLabel;
    if ( !gameObject )
      goto LABEL_32;
    if ( itemList->fields._size <= 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      return;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v10 = this->fields.itemList;
    this->fields.nowOffset = offset;
    if ( !v10 )
      goto LABEL_32;
    v11 = this->fields.eventTargetItemDrawList;
    if ( !v11 )
      goto LABEL_32;
    v12 = 0;
    v13 = (v10->fields._size - offset) & ~((v10->fields._size - offset) >> 31);
    while ( 1 )
    {
      v14 = *(_QWORD *)&v11->max_length;
      if ( v12 >= (int)v14 )
        break;
      if ( v12 >= (unsigned int)v14 )
        goto LABEL_38;
      gameObject = v11->m_Items[v12];
      if ( !gameObject )
        goto LABEL_32;
      gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)gameObject,
                                                                 0LL);
      if ( !gameObject )
        goto LABEL_32;
      if ( v12 >= v13 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (BoardOptionEventTargetListViewItemDraw_o *)this->fields.itemList;
        if ( !gameObject )
          goto LABEL_32;
        gameObject = (BoardOptionEventTargetListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                                   (System_Collections_Generic_List_object__o *)gameObject,
                                                                   offset + v12,
                                                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( gameObject
          && (methodPtr_low = LOBYTE(QuestInformationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(gameObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
        {
          v7 = (QuestInformationListViewItem_c *)gameObject->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestInformationListViewItem_TypeInfo
             ? (QuestInformationListViewItem_o *)gameObject
             : 0LL;
        }
        else
        {
          v7 = 0LL;
        }
        v16 = this->fields.eventTargetItemDrawList;
        if ( !v16 )
          goto LABEL_32;
        if ( v12 >= v16->max_length )
LABEL_38:
          sub_1B88814(gameObject, v7);
        gameObject = v16->m_Items[v12];
        if ( !gameObject )
          goto LABEL_32;
        BoardOptionEventTargetListViewItemDraw__SetItem(gameObject, v7, 2, 0LL);
      }
      v11 = this->fields.eventTargetItemDrawList;
      ++v12;
      if ( !v11 )
        goto LABEL_32;
    }
    v17 = this->fields.itemList;
    if ( !v17 )
LABEL_32:
      sub_1B8880C(gameObject, v7);
    if ( v17->fields._size <= (int)v14 )
      BoardOptionEventTargetComponent__SetAlpha(this, 1.0, (const MethodInfo *)v7);
  }
}


bool __fastcall BoardOptionEventTargetComponent__IsNeedAnim(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x9

  v2 = this;
  if ( (byte_4A57CD5 & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4A57CD5 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
    return 0;
  eventTargetItemDrawList = v2->fields.eventTargetItemDrawList;
  if ( !eventTargetItemDrawList )
    sub_1B8880C(this, method);
  return itemList->fields._size > (signed int)eventTargetItemDrawList->max_length;
}


UnityEngine_Material_o *__fastcall BoardOptionEventTargetComponent__NewChocoMaterialForSprite(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_mChocoMaterialSp; // x20
  UnityEngine_Object_o *mChocoMaterialSp; // x21
  ServantStatusBattleListViewItem_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v6; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  Il2CppObject *object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  BoardOptionEventTargetComponent_c *v11; // x0
  UnityEngine_Shader_o *v12; // x21
  UnityEngine_Material_o *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1

  if ( (byte_4A57CD4 & 1) == 0 )
  {
    sub_1B885B0(&BoardOptionEventTargetComponent_TypeInfo);
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1B885B0(&StringLiteral_16160/*"_ChocoTex"*/);
    sub_1B885B0(&StringLiteral_12735/*"Shaders/ChocoMap"*/);
    byte_4A57CD4 = 1;
  }
  p_mChocoMaterialSp = (ServantStatusBattleListViewItem_o *)&this->fields.mChocoMaterialSp;
  mChocoMaterialSp = (UnityEngine_Object_o *)this->fields.mChocoMaterialSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialSp, 0LL, 0LL) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (ServantStatusBattleListViewItem_o *)&this->fields.mChocoTex;
    v6 = (UnityEngine_Object_o *)mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v6, 0LL, 0LL) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12735/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (ServantStatusBattleListViewItem_c *)object;
      sub_1B88554(p_mChocoTex, (int32_t)object, v9, v10);
    }
    v11 = BoardOptionEventTargetComponent_TypeInfo;
    if ( !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v11 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v12 = UnityEngine_Shader__Find(v11->static_fields->CHOCO_SHADER_SP, 0LL);
    v13 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v13, v12, 0LL);
    p_mChocoMaterialSp->klass = (ServantStatusBattleListViewItem_c *)v13;
    sub_1B88554(p_mChocoMaterialSp, (int32_t)v13, v14, v15);
    if ( !p_mChocoMaterialSp->klass )
      sub_1B8880C(0LL, v16);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16160/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialSp->klass;
}


UnityEngine_Material_o *__fastcall BoardOptionEventTargetComponent__NewChocoMaterialForTexture(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_mChocoMaterialTx; // x20
  UnityEngine_Object_o *mChocoMaterialTx; // x21
  ServantStatusBattleListViewItem_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v6; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  Il2CppObject *object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  BoardOptionEventTargetComponent_c *v11; // x0
  UnityEngine_Shader_o *v12; // x21
  UnityEngine_Material_o *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1

  if ( (byte_4A57CD3 & 1) == 0 )
  {
    sub_1B885B0(&BoardOptionEventTargetComponent_TypeInfo);
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1B885B0(&StringLiteral_16160/*"_ChocoTex"*/);
    sub_1B885B0(&StringLiteral_12735/*"Shaders/ChocoMap"*/);
    byte_4A57CD3 = 1;
  }
  p_mChocoMaterialTx = (ServantStatusBattleListViewItem_o *)&this->fields.mChocoMaterialTx;
  mChocoMaterialTx = (UnityEngine_Object_o *)this->fields.mChocoMaterialTx;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialTx, 0LL, 0LL) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (ServantStatusBattleListViewItem_o *)&this->fields.mChocoTex;
    v6 = (UnityEngine_Object_o *)mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v6, 0LL, 0LL) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12735/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (ServantStatusBattleListViewItem_c *)object;
      sub_1B88554(p_mChocoTex, (int32_t)object, v9, v10);
    }
    v11 = BoardOptionEventTargetComponent_TypeInfo;
    if ( !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v11 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v12 = UnityEngine_Shader__Find(v11->static_fields->CHOCO_SHADER_TX, 0LL);
    v13 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v13, v12, 0LL);
    p_mChocoMaterialTx->klass = (ServantStatusBattleListViewItem_c *)v13;
    sub_1B88554(p_mChocoMaterialTx, (int32_t)v13, v14, v15);
    if ( !p_mChocoMaterialTx->klass )
      sub_1B8880C(0LL, v16);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_16160/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialTx->klass;
}


void __fastcall BoardOptionEventTargetComponent__ReCreateEnemyList(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t dispQuestId; // w1
  System_Int32_array *dispEnemies; // x2

  dispQuestId = this->fields.dispQuestId;
  if ( dispQuestId )
  {
    dispEnemies = this->fields.dispEnemies;
    if ( dispEnemies )
      BoardOptionEventTargetComponent__CreateEnemyList(this, dispQuestId, dispEnemies, v2);
  }
}


void __fastcall BoardOptionEventTargetComponent__SetAlpha(
        BoardOptionEventTargetComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  BoardOptionEventTargetComponent_o *v4; // x19
  __int64 v6; // x20
  int max_length; // w9

  eventTargetItemDrawList = this->fields.eventTargetItemDrawList;
  if ( !eventTargetItemDrawList )
LABEL_7:
    sub_1B8880C(this, method);
  v4 = this;
  v6 = 0LL;
  while ( 1 )
  {
    max_length = eventTargetItemDrawList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1B88814(this, method);
    this = (BoardOptionEventTargetComponent_o *)eventTargetItemDrawList->m_Items[v6];
    if ( this )
    {
      BoardOptionEventTargetListViewItemDraw__SetAlpha((BoardOptionEventTargetListViewItemDraw_o *)this, alpha, 0LL);
      eventTargetItemDrawList = v4->fields.eventTargetItemDrawList;
      ++v6;
      if ( eventTargetItemDrawList )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall BoardOptionEventTargetComponent__SetNextTarget(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BoardOptionEventTargetComponent_o *v3; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x9
  int32_t size; // w8
  signed int max_length; // w9
  int32_t v8; // w9
  int32_t v9; // w1

  v3 = this;
  if ( (byte_4A57CD6 & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4A57CD6 = 1;
  }
  itemList = v3->fields.itemList;
  if ( itemList )
  {
    eventTargetItemDrawList = v3->fields.eventTargetItemDrawList;
    if ( !eventTargetItemDrawList )
      sub_1B8880C(this, method);
    size = itemList->fields._size;
    max_length = eventTargetItemDrawList->max_length;
    if ( size > max_length )
    {
      v8 = v3->fields.nowOffset + max_length;
      if ( v8 <= size )
        v9 = v8;
      else
        v9 = 0;
      BoardOptionEventTargetComponent__DispList(v3, v9, v2);
    }
  }
}


void __fastcall BoardOptionEventTargetComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A57CE3 & 1) == 0 )
  {
    sub_1B885B0(&BoardOptionEventTargetComponent___c_TypeInfo);
    byte_4A57CE3 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BoardOptionEventTargetComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BoardOptionEventTargetComponent___c_TypeInfo->static_fields->__9 = (struct BoardOptionEventTargetComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)BoardOptionEventTargetComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall BoardOptionEventTargetComponent___c___ctor(
        BoardOptionEventTargetComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BoardOptionEventTargetComponent___c___CreateEnemyList_b__8_0(
        BoardOptionEventTargetComponent___c_o *this,
        ViewEnemyEntity_o *n,
        const MethodInfo *method)
{
  return n != 0LL;
}


void __fastcall BoardOptionEventTargetComponent___c__DisplayClass8_0___ctor(
        BoardOptionEventTargetComponent___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BoardOptionEventTargetComponent___c__DisplayClass8_0___CreateEnemyList_b__1(
        BoardOptionEventTargetComponent___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent___c__DisplayClass8_0_o *v2; // x19
  struct BoardOptionEventTargetComponent_o *_4__this; // x8
  System_String_array *loadedAssets; // x20
  System_Action_o *_9__2; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  v2 = this;
  if ( (byte_4A57CE4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AssetManager_TypeInfo);
    this = (BoardOptionEventTargetComponent___c__DisplayClass8_0_o *)sub_1B885B0(&Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__2__);
    byte_4A57CE4 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_37797288(loadedAssets, _9__2, 1, 0LL);
}


void __fastcall BoardOptionEventTargetComponent___c__DisplayClass8_0___CreateEnemyList_b__2(
        BoardOptionEventTargetComponent___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  BoardOptionEventTargetComponent__CreateEnemyList_33466224(
    _4__this,
    this->fields.questId,
    this->fields.enemies,
    this->fields.veEnts,
    0LL);
}