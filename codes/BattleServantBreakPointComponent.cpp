void BattleServantBreakPointComponent___ctor(BattleServantBreakPointComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C465F6 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C465F6 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.breakPointObjList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.breakPointObjList, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


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
  const MethodInfo *v25; // x3
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  __int64 v29; // x8
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C465F5 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78192880);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_17419/*"break_on_boss"*/);
    sub_1C37058(&StringLiteral_17417/*"break_off_boss"*/);
    sub_1C37058(&StringLiteral_17418/*"break_on"*/);
    sub_1C37058(&StringLiteral_17416/*"break_off"*/);
    byte_4C465F5 = 1;
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
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752((UnityEngine_Object_o *)Item, 0);
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
  v30.fields.x = this->fields.scale;
  v30.fields.y = v30.fields.x;
  v30.fields.z = v30.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)breakPointObjList, v30, 0);
  if ( isEnemy )
    v14 = &StringLiteral_17417/*"break_off_boss"*/;
  else
    v14 = &StringLiteral_17416/*"break_off"*/;
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
    sub_1C372B4(breakPointObjList);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)breakPointObjList, 1, 0);
  if ( isEnemy )
    v17 = &StringLiteral_17419/*"break_on_boss"*/;
  else
    v17 = &StringLiteral_17418/*"break_on"*/;
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
      breakPointObjList = (int *)UnityEngine_Object__Instantiate_object__51855596(
                                   baseObj,
                                   transform,
                                   (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
      if ( !breakPointObjList )
        break;
      v23 = (UnityEngine_GameObject_o *)breakPointObjList;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)breakPointObjList, 1, 0);
      breakPointObjList = (int *)UnityEngine_GameObject__get_transform(v23, 0);
      if ( !breakPointObjList )
        break;
      v31.fields.x = this->fields.basePosX + (float)(this->fields.addPosX * (float)v20);
      v31.fields.y = 0.0;
      v31.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)breakPointObjList, v31, 0);
      breakPointObjList = (int *)this->fields.breakPointObjList;
      if ( !breakPointObjList )
        break;
      v26 = *((_QWORD *)breakPointObjList + 2);
      v27 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++breakPointObjList[7];
      if ( !v26 )
        break;
      v28 = breakPointObjList[6];
      if ( (unsigned int)v28 >= *(_DWORD *)(v26 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)breakPointObjList,
          (Il2CppObject *)v23,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = v26 + 8 * v28;
        breakPointObjList[6] = v28 + 1;
        *(_QWORD *)(v29 + 32) = v23;
        sub_1C36FFC((CGThumbnailListItem_o *)(v29 + 32), (int32_t)v23, v24, v25);
      }
      if ( maxbreakPoint == ++v20 )
        return;
    }
    goto LABEL_42;
  }
}