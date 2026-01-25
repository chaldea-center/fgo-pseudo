void BattleServantBreakPointComponent___ctor(BattleServantBreakPointComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CF1D55 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4CF1D55 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.breakPointObjList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.breakPointObjList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleServantBreakPointComponent__Initialize(
        BattleServantBreakPointComponent_o *this,
        int32_t breakPoint,
        int32_t maxbreakPoint,
        bool isEnemy,
        const MethodInfo *method)
{
  int *breakPointObjList; // x0
  int32_t v10; // w23
  Il2CppObject *Item; // x24
  int32_t v12; // w2
  int v13; // w8
  __int64 *v14; // x8
  UISprite_o *breakPointBackGroundSpr; // x23
  System_String_o *v16; // x24
  __int64 *v17; // x8
  UISprite_o *breakPointSpr; // x23
  System_String_o *v19; // x22
  int32_t v20; // w24
  Il2CppObject *baseObj; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  __int64 v33; // x8
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF1D54 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject____78879968);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17506/*"break_on_boss"*/);
    sub_1C7BAE8(&StringLiteral_17504/*"break_off_boss"*/);
    sub_1C7BAE8(&StringLiteral_17505/*"break_on"*/);
    sub_1C7BAE8(&StringLiteral_17503/*"break_off"*/);
    byte_4CF1D54 = 1;
  }
  breakPointObjList = (int *)this->fields.breakPointObjList;
  if ( !breakPointObjList )
    goto LABEL_42;
  if ( breakPointObjList[6] >= 1 )
  {
    v10 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)breakPointObjList,
               v10,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71870148((UnityEngine_Object_o *)Item, 0);
      breakPointObjList = (int *)this->fields.breakPointObjList;
      if ( !breakPointObjList )
        goto LABEL_42;
      v12 = breakPointObjList[6];
      ++v10;
    }
    while ( v10 < v12 );
    v13 = breakPointObjList[7] + 1;
    breakPointObjList[6] = 0;
    breakPointObjList[7] = v13;
    if ( v12 >= 1 )
      System_Array__Clear(*((System_Array_o **)breakPointObjList + 2), 0, v12, 0);
  }
  breakPointObjList = (int *)this->fields.baseObj;
  if ( !breakPointObjList )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)breakPointObjList, 0, 0);
  breakPointObjList = (int *)this->fields.baseObj;
  if ( !breakPointObjList )
    goto LABEL_42;
  breakPointObjList = (int *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)breakPointObjList, 0);
  if ( !breakPointObjList )
    goto LABEL_42;
  v34.fields.x = this->fields.scale;
  v34.fields.y = v34.fields.x;
  v34.fields.z = v34.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)breakPointObjList, v34, 0);
  if ( isEnemy )
    v14 = &StringLiteral_17504/*"break_off_boss"*/;
  else
    v14 = &StringLiteral_17503/*"break_off"*/;
  breakPointBackGroundSpr = this->fields.breakPointBackGroundSpr;
  v16 = (System_String_o *)*v14;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetWarBoardImage(breakPointBackGroundSpr, v16, 0);
  breakPointObjList = (int *)this->fields.breakPointSpr;
  if ( !breakPointObjList
    || (breakPointObjList = (int *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)breakPointObjList,
                                     0)) == 0 )
  {
LABEL_42:
    sub_1C7BD40(breakPointObjList, *(_QWORD *)&breakPoint);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)breakPointObjList, 1, 0);
  if ( isEnemy )
    v17 = &StringLiteral_17506/*"break_on_boss"*/;
  else
    v17 = &StringLiteral_17505/*"break_on"*/;
  breakPointSpr = this->fields.breakPointSpr;
  v19 = (System_String_o *)*v17;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetWarBoardImage(breakPointSpr, v19, 0);
  if ( maxbreakPoint >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      breakPointObjList = (int *)this->fields.breakPointSpr;
      if ( !breakPointObjList )
        break;
      breakPointObjList = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)breakPointObjList, 0);
      if ( !breakPointObjList )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)breakPointObjList, v20 < breakPoint, 0);
      baseObj = (Il2CppObject *)this->fields.baseObj;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      breakPointObjList = (int *)UnityEngine_Object__Instantiate_object__52412380(
                                   baseObj,
                                   transform,
                                   (const MethodInfo_31FBFDC *)Method_UnityEngine_Object_Instantiate_GameObject____78879968);
      if ( !breakPointObjList )
        break;
      v23 = (UnityEngine_GameObject_o *)breakPointObjList;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)breakPointObjList, 1, 0);
      breakPointObjList = (int *)UnityEngine_GameObject__get_transform(v23, 0);
      if ( !breakPointObjList )
        break;
      v35.fields.x = this->fields.basePosX + (float)(this->fields.addPosX * (float)v20);
      v35.fields.y = 0.0;
      v35.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)breakPointObjList, v35, 0);
      breakPointObjList = (int *)this->fields.breakPointObjList;
      if ( !breakPointObjList )
        break;
      v30 = *((_QWORD *)breakPointObjList + 2);
      v31 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++breakPointObjList[7];
      if ( !v30 )
        break;
      v32 = breakPointObjList[6];
      if ( (unsigned int)v32 >= *(_DWORD *)(v30 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)breakPointObjList,
          (Il2CppObject *)v23,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = v30 + 8 * v32;
        breakPointObjList[6] = v32 + 1;
        *(_QWORD *)(v33 + 32) = v23;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v33 + 32), (int32_t)v23, v24, v25, v26, v27, v28, v29);
      }
      if ( maxbreakPoint == ++v20 )
        return;
    }
    goto LABEL_42;
  }
}