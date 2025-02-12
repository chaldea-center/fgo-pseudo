void __fastcall BattleServantBreakPointComponent___ctor(
        BattleServantBreakPointComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BB7810 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1C13D24(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_4BB7810 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.breakPointObjList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.breakPointObjList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantBreakPointComponent__Initialize(
        BattleServantBreakPointComponent_o *this,
        int32_t breakPoint,
        int32_t maxbreakPoint,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  int *breakPointObjList; // x0
  int32_t v20; // w23
  Il2CppObject *Item; // x24
  int32_t v22; // w2
  int v23; // w8
  __int64 *v24; // x8
  UISprite_o *breakPointBackGroundSpr; // x23
  System_String_o *v26; // x24
  __int64 *v27; // x8
  UISprite_o *breakPointSpr; // x23
  System_String_o *v29; // x22
  int32_t v30; // w24
  Il2CppObject *baseObj; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v33; // x22
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB780F & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, *(_QWORD *)&breakPoint);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Clear__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__get_Item__, v12);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject____77555680, v13);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v14);
    sub_1C13D24(&StringLiteral_17711/*"branchQuestClear"*/, v15);
    sub_1C13D24(&StringLiteral_17709/*"branchNotRouteSelect"*/, v16);
    sub_1C13D24(&StringLiteral_17710/*"branchNotRouteSelectCount"*/, v17);
    sub_1C13D24(&StringLiteral_17708/*"branchNotMaterial"*/, v18);
    byte_4BB780F = 1;
  }
  breakPointObjList = (int *)this->fields.breakPointObjList;
  if ( !breakPointObjList )
    goto LABEL_42;
  if ( breakPointObjList[6] >= 1 )
  {
    v20 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)breakPointObjList,
               v20,
               (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70721988((UnityEngine_Object_o *)Item, 0LL);
      breakPointObjList = (int *)this->fields.breakPointObjList;
      if ( !breakPointObjList )
        goto LABEL_42;
      v22 = breakPointObjList[6];
      ++v20;
    }
    while ( v20 < v22 );
    v23 = breakPointObjList[7] + 1;
    breakPointObjList[6] = 0;
    breakPointObjList[7] = v23;
    if ( v22 >= 1 )
      System_Array__Clear(*((System_Array_o **)breakPointObjList + 2), 0, v22, 0LL);
  }
  breakPointObjList = (int *)this->fields.baseObj;
  if ( !breakPointObjList )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)breakPointObjList, 0, 0LL);
  breakPointObjList = (int *)this->fields.baseObj;
  if ( !breakPointObjList )
    goto LABEL_42;
  breakPointObjList = (int *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)breakPointObjList, 0LL);
  if ( !breakPointObjList )
    goto LABEL_42;
  v44.fields.x = this->fields.scale;
  v44.fields.y = v44.fields.x;
  v44.fields.z = v44.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)breakPointObjList, v44, 0LL);
  if ( isEnemy )
    v24 = &StringLiteral_17709/*"branchNotRouteSelect"*/;
  else
    v24 = &StringLiteral_17708/*"branchNotMaterial"*/;
  breakPointBackGroundSpr = this->fields.breakPointBackGroundSpr;
  v26 = (System_String_o *)*v24;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetWarBoardImage(breakPointBackGroundSpr, v26, 0LL);
  breakPointObjList = (int *)this->fields.breakPointSpr;
  if ( !breakPointObjList
    || (breakPointObjList = (int *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)breakPointObjList,
                                     0LL)) == 0LL )
  {
LABEL_42:
    sub_1C13F80(breakPointObjList, *(_QWORD *)&breakPoint);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)breakPointObjList, 1, 0LL);
  if ( isEnemy )
    v27 = &StringLiteral_17711/*"branchQuestClear"*/;
  else
    v27 = &StringLiteral_17710/*"branchNotRouteSelectCount"*/;
  breakPointSpr = this->fields.breakPointSpr;
  v29 = (System_String_o *)*v27;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetWarBoardImage(breakPointSpr, v29, 0LL);
  if ( maxbreakPoint >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      breakPointObjList = (int *)this->fields.breakPointSpr;
      if ( !breakPointObjList )
        break;
      breakPointObjList = (int *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)breakPointObjList,
                                   0LL);
      if ( !breakPointObjList )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)breakPointObjList, v30 < breakPoint, 0LL);
      baseObj = (Il2CppObject *)this->fields.baseObj;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      breakPointObjList = (int *)UnityEngine_Object__Instantiate_object__50417328(
                                   baseObj,
                                   transform,
                                   (const MethodInfo_3014EB0 *)Method_UnityEngine_Object_Instantiate_GameObject____77555680);
      if ( !breakPointObjList )
        break;
      v33 = (UnityEngine_GameObject_o *)breakPointObjList;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)breakPointObjList, 1, 0LL);
      breakPointObjList = (int *)UnityEngine_GameObject__get_transform(v33, 0LL);
      if ( !breakPointObjList )
        break;
      v45.fields.x = this->fields.basePosX + (float)(this->fields.addPosX * (float)v30);
      v45.fields.y = 0.0;
      v45.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)breakPointObjList, v45, 0LL);
      breakPointObjList = (int *)this->fields.breakPointObjList;
      if ( !breakPointObjList )
        break;
      v40 = *((_QWORD *)breakPointObjList + 2);
      v41 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++breakPointObjList[7];
      if ( !v40 )
        break;
      v42 = breakPointObjList[6];
      if ( (unsigned int)v42 >= *(_DWORD *)(v40 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)breakPointObjList,
          (Il2CppObject *)v33,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = v40 + 8 * v42;
        breakPointObjList[6] = v42 + 1;
        *(_QWORD *)(v43 + 32) = v33;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v43 + 32), (int64_t)v33, v34, v35, v36, v37, v38, v39);
      }
      if ( maxbreakPoint == ++v30 )
        return;
    }
    goto LABEL_42;
  }
}