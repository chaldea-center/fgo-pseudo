void __fastcall BattleServantBreakPointComponent___ctor(
        BattleServantBreakPointComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B1926D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v5, v6);
    byte_4B1926D = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_GameObject__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.breakPointObjList = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.breakPointObjList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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
  __int64 v10; // x2
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
  int *breakPointObjList; // x0
  int32_t v30; // w23
  __int64 v31; // x1
  Il2CppObject *Item; // x24
  int32_t v33; // w2
  int v34; // w8
  __int64 v35; // x1
  __int64 *v36; // x8
  UISprite_o *breakPointBackGroundSpr; // x23
  System_String_o *v38; // x24
  __int64 v39; // x1
  __int64 *v40; // x8
  UISprite_o *breakPointSpr; // x23
  System_String_o *v42; // x22
  int32_t v43; // w24
  Il2CppObject *baseObj; // x22
  __int64 v45; // x1
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v47; // x22
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  __int64 v57; // x8
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1926C & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&breakPoint, *(_QWORD *)&maxbreakPoint);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_17622/*"break_on_boss"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_17620/*"break_off_boss"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_17621/*"break_on"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_17619/*"break_off"*/, v27, v28);
    byte_4B1926C = 1;
  }
  breakPointObjList = (int *)this->fields.breakPointObjList;
  if ( !breakPointObjList )
    goto LABEL_42;
  if ( breakPointObjList[6] >= 1 )
  {
    v30 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)breakPointObjList,
               v30,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
      UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)Item, 0LL);
      breakPointObjList = (int *)this->fields.breakPointObjList;
      if ( !breakPointObjList )
        goto LABEL_42;
      v33 = breakPointObjList[6];
      ++v30;
    }
    while ( v30 < v33 );
    v34 = breakPointObjList[7] + 1;
    breakPointObjList[6] = 0;
    breakPointObjList[7] = v34;
    if ( v33 >= 1 )
      System_Array__Clear(*((System_Array_o **)breakPointObjList + 2), 0, v33, 0LL);
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
  v58.fields.x = this->fields.scale;
  v58.fields.y = v58.fields.x;
  v58.fields.z = v58.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)breakPointObjList, v58, 0LL);
  if ( isEnemy )
    v36 = &StringLiteral_17620/*"break_off_boss"*/;
  else
    v36 = &StringLiteral_17619/*"break_off"*/;
  breakPointBackGroundSpr = this->fields.breakPointBackGroundSpr;
  v38 = (System_String_o *)*v36;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v35);
  AtlasManager__SetWarBoardImage(breakPointBackGroundSpr, v38, 0LL);
  breakPointObjList = (int *)this->fields.breakPointSpr;
  if ( !breakPointObjList
    || (breakPointObjList = (int *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)breakPointObjList,
                                     0LL)) == 0LL )
  {
LABEL_42:
    sub_1BCAA3C(breakPointObjList, *(_QWORD *)&breakPoint);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)breakPointObjList, 1, 0LL);
  if ( isEnemy )
    v40 = &StringLiteral_17622/*"break_on_boss"*/;
  else
    v40 = &StringLiteral_17621/*"break_on"*/;
  breakPointSpr = this->fields.breakPointSpr;
  v42 = (System_String_o *)*v40;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v39);
  AtlasManager__SetWarBoardImage(breakPointSpr, v42, 0LL);
  if ( maxbreakPoint >= 1 )
  {
    v43 = 0;
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)breakPointObjList, v43 < breakPoint, 0LL);
      baseObj = (Il2CppObject *)this->fields.baseObj;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
      breakPointObjList = (int *)UnityEngine_Object__Instantiate_object__49903816(
                                   baseObj,
                                   transform,
                                   (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
      if ( !breakPointObjList )
        break;
      v47 = (UnityEngine_GameObject_o *)breakPointObjList;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)breakPointObjList, 1, 0LL);
      breakPointObjList = (int *)UnityEngine_GameObject__get_transform(v47, 0LL);
      if ( !breakPointObjList )
        break;
      v59.fields.x = this->fields.basePosX + (float)(this->fields.addPosX * (float)v43);
      v59.fields.y = 0.0;
      v59.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)breakPointObjList, v59, 0LL);
      breakPointObjList = (int *)this->fields.breakPointObjList;
      if ( !breakPointObjList )
        break;
      v54 = *((_QWORD *)breakPointObjList + 2);
      v55 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++breakPointObjList[7];
      if ( !v54 )
        break;
      v56 = breakPointObjList[6];
      if ( (unsigned int)v56 >= *(_DWORD *)(v54 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)breakPointObjList,
          (Il2CppObject *)v47,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = v54 + 8 * v56;
        breakPointObjList[6] = v56 + 1;
        *(_QWORD *)(v57 + 32) = v47;
        sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 32), (int64_t)v47, v48, v49, v50, v51, v52, v53);
      }
      if ( maxbreakPoint == ++v43 )
        return;
    }
    goto LABEL_42;
  }
}