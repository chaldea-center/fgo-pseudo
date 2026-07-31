void BattleServantBreakPointComponent___ctor(BattleServantBreakPointComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593BF56 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_593BF56 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.breakPointObjList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.breakPointObjList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  int32_t v11; // w2
  __int64 v12; // x1
  Il2CppObject *Item; // x24
  int v14; // w8
  __int64 v15; // x1
  __int64 *v16; // x8
  UISprite_o *breakPointBackGroundSpr; // x23
  System_String_o *v18; // x24
  __int64 v19; // x1
  bool v20; // zf
  UISprite_o *breakPointSpr; // x22
  __int64 *v22; // x8
  System_String_o *v23; // x23
  int32_t v24; // w27
  Il2CppObject *baseObj; // x22
  __int64 v26; // x1
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v28; // x22
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  __int64 v38; // x8
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593BF55 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_18140/*"break_on_boss"*/);
    sub_21FFC50(&StringLiteral_18138/*"break_off_boss"*/);
    sub_21FFC50(&StringLiteral_18139/*"break_on"*/);
    sub_21FFC50(&StringLiteral_18137/*"break_off"*/);
    byte_593BF55 = 1;
  }
  breakPointObjList = (int *)this->fields.breakPointObjList;
  if ( !breakPointObjList )
    goto LABEL_10;
  if ( breakPointObjList[6] >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = breakPointObjList[6];
      if ( v10 >= v11 )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)breakPointObjList,
               v10,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)Item, 0);
      breakPointObjList = (int *)this->fields.breakPointObjList;
      ++v10;
      if ( !breakPointObjList )
        goto LABEL_10;
    }
    v14 = breakPointObjList[7] + 1;
    breakPointObjList[6] = 0;
    breakPointObjList[7] = v14;
    if ( v11 >= 1 )
      System_Array__Clear(*((System_Array_o **)breakPointObjList + 2), 0, v11, 0);
  }
  breakPointObjList = (int *)this->fields.baseObj;
  if ( !breakPointObjList )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)breakPointObjList, 0, 0);
  breakPointObjList = (int *)this->fields.baseObj;
  if ( !breakPointObjList )
    goto LABEL_10;
  breakPointObjList = (int *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)breakPointObjList, 0);
  if ( !breakPointObjList )
    goto LABEL_10;
  v39.fields.x = this->fields.scale;
  v39.fields.y = v39.fields.x;
  v39.fields.z = v39.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)breakPointObjList, v39, 0);
  if ( isEnemy )
    v16 = &StringLiteral_18138/*"break_off_boss"*/;
  else
    v16 = &StringLiteral_18137/*"break_off"*/;
  breakPointBackGroundSpr = this->fields.breakPointBackGroundSpr;
  v18 = (System_String_o *)*v16;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15);
  AtlasManager__SetWarBoardImage(breakPointBackGroundSpr, v18, 0);
  breakPointObjList = (int *)this->fields.breakPointSpr;
  if ( !breakPointObjList
    || (breakPointObjList = (int *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)breakPointObjList,
                                     0)) == 0 )
  {
LABEL_10:
    sub_21FFECC(breakPointObjList, *(_QWORD *)&breakPoint);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)breakPointObjList, 1, 0);
  v20 = !isEnemy;
  breakPointSpr = this->fields.breakPointSpr;
  if ( v20 )
    v22 = &StringLiteral_18139/*"break_on"*/;
  else
    v22 = &StringLiteral_18140/*"break_on_boss"*/;
  v23 = (System_String_o *)*v22;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v19);
  AtlasManager__SetWarBoardImage(breakPointSpr, v23, 0);
  if ( maxbreakPoint >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      breakPointObjList = (int *)this->fields.breakPointSpr;
      if ( !breakPointObjList )
        break;
      breakPointObjList = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)breakPointObjList, 0);
      if ( !breakPointObjList )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)breakPointObjList, v24 < breakPoint, 0);
      baseObj = (Il2CppObject *)this->fields.baseObj;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
      breakPointObjList = (int *)UnityEngine_Object__Instantiate_object__59506996(
                                   baseObj,
                                   transform,
                                   (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
      if ( !breakPointObjList )
        break;
      v28 = (UnityEngine_GameObject_o *)breakPointObjList;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)breakPointObjList, 1, 0);
      breakPointObjList = (int *)UnityEngine_GameObject__get_transform(v28, 0);
      if ( !breakPointObjList )
        break;
      v40.fields.z = 0.0;
      v40.fields.x = this->fields.basePosX + (float)(this->fields.addPosX * (float)v24);
      v40.fields.y = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)breakPointObjList, v40, 0);
      breakPointObjList = (int *)this->fields.breakPointObjList;
      if ( !breakPointObjList )
        break;
      v35 = *((_QWORD *)breakPointObjList + 2);
      v36 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++breakPointObjList[7];
      if ( !v35 )
        break;
      v37 = breakPointObjList[6];
      if ( (unsigned int)v37 >= *(_DWORD *)(v35 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)breakPointObjList,
          (Il2CppObject *)v28,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = v35 + 8 * v37;
        breakPointObjList[6] = v37 + 1;
        *(_QWORD *)(v38 + 32) = v28;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v38 + 32), (int32_t)v28, v29, v30, v31, v32, v33, v34);
      }
      if ( maxbreakPoint == ++v24 )
        return;
    }
    goto LABEL_10;
  }
}