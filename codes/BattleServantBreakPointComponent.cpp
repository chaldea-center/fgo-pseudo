void __fastcall BattleServantBreakPointComponent___ctor(
        BattleServantBreakPointComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A01AA1 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B64A00(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_4A01AA1 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.breakPointObjList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.breakPointObjList, (int32_t)v4, v5, v6);
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
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  __int64 v39; // x8
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A01AA0 & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, *(_QWORD *)&breakPoint);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__Clear__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__get_Item__, v12);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject____75801880, v13);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v14);
    sub_1B64A00(&StringLiteral_17382/*"break_on_boss"*/, v15);
    sub_1B64A00(&StringLiteral_17380/*"break_off_boss"*/, v16);
    sub_1B64A00(&StringLiteral_17381/*"break_on"*/, v17);
    sub_1B64A00(&StringLiteral_17379/*"break_off"*/, v18);
    byte_4A01AA0 = 1;
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
               (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69137476((UnityEngine_Object_o *)Item, 0LL);
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
  v40.fields.x = this->fields.scale;
  v40.fields.y = v40.fields.x;
  v40.fields.z = v40.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)breakPointObjList, v40, 0LL);
  if ( isEnemy )
    v24 = &StringLiteral_17380/*"break_off_boss"*/;
  else
    v24 = &StringLiteral_17379/*"break_off"*/;
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
    sub_1B64C5C(breakPointObjList, *(_QWORD *)&breakPoint);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)breakPointObjList, 1, 0LL);
  if ( isEnemy )
    v27 = &StringLiteral_17382/*"break_on_boss"*/;
  else
    v27 = &StringLiteral_17381/*"break_on"*/;
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
      breakPointObjList = (int *)UnityEngine_Object__Instantiate_object__49014464(
                                   baseObj,
                                   transform,
                                   (const MethodInfo_2EBE6C0 *)Method_UnityEngine_Object_Instantiate_GameObject____75801880);
      if ( !breakPointObjList )
        break;
      v33 = (UnityEngine_GameObject_o *)breakPointObjList;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)breakPointObjList, 1, 0LL);
      breakPointObjList = (int *)UnityEngine_GameObject__get_transform(v33, 0LL);
      if ( !breakPointObjList )
        break;
      v41.fields.x = this->fields.basePosX + (float)(this->fields.addPosX * (float)v30);
      v41.fields.y = 0.0;
      v41.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)breakPointObjList, v41, 0LL);
      breakPointObjList = (int *)this->fields.breakPointObjList;
      if ( !breakPointObjList )
        break;
      v36 = *((_QWORD *)breakPointObjList + 2);
      v37 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++breakPointObjList[7];
      if ( !v36 )
        break;
      v38 = breakPointObjList[6];
      if ( (unsigned int)v38 >= *(_DWORD *)(v36 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)breakPointObjList,
          (Il2CppObject *)v33,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = v36 + 8 * v38;
        breakPointObjList[6] = v38 + 1;
        *(_QWORD *)(v39 + 32) = v33;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v39 + 32), (int32_t)v33, v34, v35);
      }
      if ( maxbreakPoint == ++v30 )
        return;
    }
    goto LABEL_42;
  }
}