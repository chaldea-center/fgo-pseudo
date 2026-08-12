void BattleServantShowBuffComponent___ctor(BattleServantShowBuffComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_GameObject__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5974269 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_5974269 = 1;
  }
  v3 = System_Collections_Generic_List_GameObject__TypeInfo;
  this->fields.maxLine = 2;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.objList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleServantShowBuffComponent__CreateBuffObj(
        BattleServantShowBuffComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Object; // x19
  const MethodInfo *v6; // x3
  Il2CppObject *Component_object; // x0
  __int64 v8; // x1
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *objList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x11
  Il2CppClass **v20; // x0

  if ( (byte_5974262 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    byte_5974262 = 1;
  }
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             this->fields.IconClone,
             this->fields.listTr,
             0,
             0);
  BattleServantShowBuffComponent__UpdatePosition(this, Object, index, v6);
  if ( !Object )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(Object, 1, 0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       Object,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
  datalist = this->fields.datalist;
  if ( !datalist )
    goto LABEL_12;
  if ( LODWORD(datalist->max_length) <= index )
    sub_2213CE4(Component_object);
  if ( !Component_object
    || (BattleServantBuffIconComponent__setIcon_54741996(
          (BattleServantBuffIconComponent_o *)Component_object,
          datalist->m_Items[index],
          0),
        (objList = (System_Collections_Generic_List_object__o *)this->fields.objList) == 0)
    || (items = objList->fields._items,
        v18 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++objList->fields._version,
        !items) )
  {
LABEL_12:
    sub_2213CDC(Component_object, v8);
  }
  size = objList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      objList,
      (Il2CppObject *)Object,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    objList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)Object;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)Object, v10, v11, v12, v13, v14, v15);
  }
}


void BattleServantShowBuffComponent__HideBuffObject(BattleServantShowBuffComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objList; // x0
  int32_t v4; // w20
  struct System_Object_array *items; // x11
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  int max_length; // w9
  int v8; // w11
  int v9; // w12
  BattleBuffData_ShowBuffData_o *v10; // x13

  if ( (byte_5974263 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_5974263 = 1;
  }
  objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
  if ( !objList )
    goto LABEL_18;
  v4 = 0;
  while ( v4 < objList->fields._size )
  {
    objList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             objList,
                                                             v4,
                                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !objList )
      goto LABEL_18;
    objList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                             (UnityEngine_GameObject_o *)objList,
                                                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    if ( !objList )
      goto LABEL_18;
    items = objList[2].fields._items;
    if ( items )
    {
      datalist = this->fields.datalist;
      if ( !datalist )
        goto LABEL_18;
      max_length = datalist->max_length;
      if ( max_length >= 1 )
      {
        v8 = HIDWORD(items->m_Items[0]);
        v9 = 0;
        while ( 1 )
        {
          if ( max_length == v9 )
            sub_2213CE4(objList);
          v10 = datalist->m_Items[v9];
          if ( !v10 )
            break;
          if ( v8 == v10->fields.addOrder )
            goto LABEL_17;
          if ( (max_length & ~(max_length >> 31)) == ++v9 )
            goto LABEL_16;
        }
LABEL_18:
        sub_2213CDC(objList, method);
      }
LABEL_16:
      BattleServantBuffIconComponent__setIcon_54741996((BattleServantBuffIconComponent_o *)objList, 0, 0);
    }
LABEL_17:
    objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
    ++v4;
    if ( !objList )
      goto LABEL_18;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantShowBuffComponent__NewBuff(
        BattleServantShowBuffComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objList; // x0
  int32_t v6; // w21
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  Il2CppObject *Item; // x1
  const MethodInfo *v9; // x3

  if ( (byte_5974265 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_5974265 = 1;
  }
  objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
  if ( !objList )
    goto LABEL_10;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= objList->fields._size )
    {
      BattleServantShowBuffComponent__CreateBuffObj(this, index, method);
      return;
    }
    objList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             objList,
                                                             v6,
                                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !objList )
      goto LABEL_10;
    objList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                             (UnityEngine_GameObject_o *)objList,
                                                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    if ( !objList )
      goto LABEL_10;
    if ( !objList[2].fields._items )
      break;
    objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
    ++v6;
    if ( !objList )
      goto LABEL_10;
  }
  datalist = this->fields.datalist;
  if ( !datalist )
    goto LABEL_10;
  if ( LODWORD(datalist->max_length) <= index )
    sub_2213CE4(objList);
  BattleServantBuffIconComponent__setIcon_54741996(
    (BattleServantBuffIconComponent_o *)objList,
    datalist->m_Items[index],
    0);
  objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
  if ( !objList )
LABEL_10:
    sub_2213CDC(objList, *(_QWORD *)&index);
  Item = System_Collections_Generic_List_object___get_Item(
           objList,
           v6,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  BattleServantShowBuffComponent__UpdatePosition(this, (UnityEngine_GameObject_o *)Item, index, v9);
}


// local variable allocation has failed, the output may be wrong!
void BattleServantShowBuffComponent__UpdateActiveBuffList(
        BattleServantShowBuffComponent_o *this,
        bool isPlayFlashEffect,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objList; // x0
  int32_t v6; // w21

  if ( (byte_5974266 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_5974266 = 1;
  }
  objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
  if ( !objList )
LABEL_11:
    sub_2213CDC(objList, isPlayFlashEffect);
  v6 = 0;
  while ( v6 < objList->fields._size )
  {
    objList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             objList,
                                                             v6,
                                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( objList )
    {
      objList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                               (UnityEngine_GameObject_o *)objList,
                                                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
      if ( objList )
      {
        if ( objList[2].fields._items )
          BattleServantBuffIconComponent__UpdateActiveBuff(
            (BattleServantBuffIconComponent_o *)objList,
            isPlayFlashEffect,
            0);
        objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
        ++v6;
        if ( objList )
          continue;
      }
    }
    goto LABEL_11;
  }
}


// local variable allocation has failed, the output may be wrong!
bool BattleServantShowBuffComponent__UpdateBuff(
        BattleServantShowBuffComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_Generic_List_object__o *objList; // x0
  int32_t v6; // w21
  int32_t size; // w23
  struct System_Object_array *items; // x8
  struct BattleBuffData_ShowBuffData_array *datalist; // x9
  Il2CppObject *Item; // x0
  const MethodInfo *v11; // x3

  v3 = index;
  if ( (byte_5974264 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_5974264 = 1;
  }
  objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
  if ( !objList )
    goto LABEL_14;
  v6 = 0;
  while ( 1 )
  {
    size = objList->fields._size;
    if ( v6 >= size )
      return v6 < size;
    objList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             objList,
                                                             v6,
                                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !objList )
      goto LABEL_14;
    objList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                             (UnityEngine_GameObject_o *)objList,
                                                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    if ( !objList )
      goto LABEL_14;
    items = objList[2].fields._items;
    if ( items )
    {
      datalist = this->fields.datalist;
      if ( !datalist )
        goto LABEL_14;
      if ( LODWORD(datalist->max_length) <= v3 )
        sub_2213CE4(objList);
      *(_QWORD *)&index = datalist->m_Items[v3];
      if ( !*(_QWORD *)&index )
        goto LABEL_14;
      if ( *(_DWORD *)(*(_QWORD *)&index + 36LL) == HIDWORD(items->m_Items[0]) )
        break;
    }
    objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
    ++v6;
    if ( !objList )
      goto LABEL_14;
  }
  BattleServantBuffIconComponent__setIcon_54741996(
    (BattleServantBuffIconComponent_o *)objList,
    *(BattleBuffData_ShowBuffData_o **)&index,
    0);
  objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
  if ( !objList )
LABEL_14:
    sub_2213CDC(objList, *(_QWORD *)&index);
  Item = System_Collections_Generic_List_object___get_Item(
           objList,
           v6,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  BattleServantShowBuffComponent__UpdatePosition(this, (UnityEngine_GameObject_o *)Item, v3, v11);
  return v6 < size;
}


// local variable allocation has failed, the output may be wrong!
void BattleServantShowBuffComponent__UpdateConditionBuffList(
        BattleServantShowBuffComponent_o *this,
        BattleBuffData_ShowBuffData_array *conditionBuffList,
        bool isPlayFlashEffect,
        const MethodInfo *method)
{
  BattleServantShowBuffComponent_o *v5; // x21
  unsigned __int64 v6; // x26
  __int64 v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  BattleBuffData_ShowBuffData_o *v14; // x1
  __int64 v15; // x23
  System_Collections_Generic_IEnumerable_TSource__o *datalist; // x24
  System_Func_object__bool__o *v17; // x25

  v5 = this;
  if ( (byte_5974267 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_BattleBuffData_ShowBuffData___);
    sub_2213A60(&System_Func_BattleBuffData_ShowBuffData__bool__TypeInfo);
    sub_2213A60(&Method_BattleServantShowBuffComponent___c__DisplayClass14_0__UpdateConditionBuffList_b__0__);
    this = (BattleServantShowBuffComponent_o *)sub_2213A60(&BattleServantShowBuffComponent___c__DisplayClass14_0_TypeInfo);
    byte_5974267 = 1;
  }
  if ( !conditionBuffList )
    goto LABEL_13;
  if ( SLODWORD(conditionBuffList->max_length) >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = sub_2213CCC(BattleServantShowBuffComponent___c__DisplayClass14_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v7, 0);
      if ( v6 >= LODWORD(conditionBuffList->max_length) )
        sub_2213CE4(this);
      if ( !v7 )
        break;
      v14 = conditionBuffList->m_Items[v6];
      *(_QWORD *)(v7 + 16) = v14;
      v15 = v7 + 16;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)v14, v8, v9, v10, v11, v12, v13);
      datalist = (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.datalist;
      v17 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_ShowBuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v17,
        (Il2CppObject *)v7,
        Method_BattleServantShowBuffComponent___c__DisplayClass14_0__UpdateConditionBuffList_b__0__,
        0);
      this = (BattleServantShowBuffComponent_o *)System_Linq_Enumerable__FirstOrDefault_object__59254852(
                                                   datalist,
                                                   (System_Func_TSource__bool__o *)v17,
                                                   (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleBuffData_ShowBuffData___);
      if ( this )
      {
        if ( !*(_QWORD *)v15 )
          break;
        BYTE5(this->fields.m_CachedPtr) = *(_BYTE *)(*(_QWORD *)v15 + 21LL);
      }
      if ( (__int64)++v6 >= SLODWORD(conditionBuffList->max_length) )
        goto LABEL_12;
    }
LABEL_13:
    sub_2213CDC(this, conditionBuffList);
  }
LABEL_12:
  BattleServantShowBuffComponent__UpdateActiveBuffList(v5, isPlayFlashEffect, (const MethodInfo *)isPlayFlashEffect);
}


void BattleServantShowBuffComponent__UpdatePosition(
        BattleServantShowBuffComponent_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t index,
        const MethodInfo *method)
{
  int32_t maxLine; // w21
  int32_t maxCount; // w22
  BattleServantShowBuffComponent_o *v6; // x19
  int v8; // w8
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( !obj
    || (maxCount = this->fields.maxCount,
        maxLine = this->fields.maxLine,
        v6 = this,
        (this = (BattleServantShowBuffComponent_o *)UnityEngine_GameObject__get_transform(obj, 0)) == 0) )
  {
    sub_2213CDC(this, obj);
  }
  v8 = index / maxCount;
  if ( index / maxCount >= maxLine )
    v8 = maxLine;
  v9.fields.y = v6->fields.addPos.fields.y * (float)v8;
  v9.fields.x = v6->fields.addPos.fields.x * (float)(index % maxCount);
  v9.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v9, 0);
}


void BattleServantShowBuffComponent__UpdateShowConditionBuffDataReady(
        BattleServantShowBuffComponent_o *this,
        BattleBuffData_ShowBuffData_array *showConditionBuffArray,
        const MethodInfo *method)
{
  BattleServantShowBuffComponent___c_c *v5; // x0
  struct BattleServantShowBuffComponent___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__15_0; // x21
  Il2CppObject *v8; // x22
  struct BattleServantShowBuffComponent___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_Dictionary_int__object__o *Item; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *objList; // x8
  System_Collections_Generic_Dictionary_int__object__o *v19; // x20
  int32_t v20; // w21
  UnityEngine_GameObject_c *buckets; // x8
  BattleServantBuffIconComponent_o *v22; // x22
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5974268 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_ShowBuffData__TryGetValue__);
    sub_2213A60(&Method_System_Linq_Enumerable_ToDictionary_BattleBuffData_ShowBuffData__int___);
    sub_2213A60(&System_Func_BattleBuffData_ShowBuffData__int__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&Method_BattleServantShowBuffComponent___c__UpdateShowConditionBuffDataReady_b__15_0__);
    sub_2213A60(&BattleServantShowBuffComponent___c_TypeInfo);
    byte_5974268 = 1;
  }
  v5 = BattleServantShowBuffComponent___c_TypeInfo;
  value = 0;
  if ( !*(&BattleServantShowBuffComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleServantShowBuffComponent___c_TypeInfo, showConditionBuffArray);
    v5 = BattleServantShowBuffComponent___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__15_0 = (System_Func_object__int__o *)static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, showConditionBuffArray);
      static_fields = BattleServantShowBuffComponent___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__15_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleBuffData_ShowBuffData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__15_0,
      v8,
      Method_BattleServantShowBuffComponent___c__UpdateShowConditionBuffDataReady_b__15_0__,
      0);
    v9 = BattleServantShowBuffComponent___c_TypeInfo->static_fields;
    v9->__9__15_0 = (struct System_Func_BattleBuffData_ShowBuffData__int__o *)_9__15_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__15_0, (int32_t)_9__15_0, v10, v11, v12, v13, v14, v15);
  }
  Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Linq_Enumerable__ToDictionary_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)showConditionBuffArray,
                                                                   (System_Func_TSource__TKey__o *)_9__15_0,
                                                                   (const MethodInfo_389C080 *)Method_System_Linq_Enumerable_ToDictionary_BattleBuffData_ShowBuffData__int___);
  objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
  if ( !objList )
LABEL_19:
    sub_2213CDC(Item, v17);
  v19 = Item;
  v20 = 0;
  while ( v20 < objList->fields._size )
  {
    Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     objList,
                                                                     v20,
                                                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( Item )
    {
      Item = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)Item,
                                                                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
      if ( Item )
      {
        buckets = (UnityEngine_GameObject_c *)Item[1].fields._buckets;
        v22 = (BattleServantBuffIconComponent_o *)Item;
        if ( buckets )
        {
          if ( !v19 )
            goto LABEL_19;
          Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                           v19,
                                                                           HIDWORD(buckets->_1.byval_arg.data),
                                                                           &value,
                                                                           (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_ShowBuffData__TryGetValue__);
          if ( ((unsigned __int8)Item & 1) != 0 )
            BattleServantBuffIconComponent__UpdateShowBuffDataReady(v22, (BattleBuffData_ShowBuffData_o *)value, 0);
        }
        objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
        ++v20;
        if ( objList )
          continue;
      }
    }
    goto LABEL_19;
  }
}


void BattleServantShowBuffComponent__setBuffList(
        BattleServantShowBuffComponent_o *this,
        BattleBuffData_ShowBuffData_array *buffList,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BattleBuffData_ShowBuffData_array **p_datalist; // x20
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_object__o *updated; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  int32_t v16; // w21
  int v17; // w9
  struct System_Collections_Generic_List_GameObject__o *objList; // x10
  int v19; // w25
  int32_t v20; // w22
  struct System_Object_array *items; // x8
  struct BattleBuffData_ShowBuffData_array *v22; // x9
  BattleBuffData_ShowBuffData_o *v23; // x9

  if ( (byte_5974261 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_5974261 = 1;
  }
  this->fields.datalist = buffList;
  p_datalist = &this->fields.datalist;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.datalist,
    (int32_t)buffList,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattleServantShowBuffComponent__HideBuffObject(this, v11);
  datalist = this->fields.datalist;
  if ( !datalist )
    goto LABEL_32;
  v16 = 0;
  while ( 1 )
  {
    if ( v16 >= SLODWORD(datalist->max_length) )
      return;
    v17 = this->fields.maxLine * this->fields.maxCount;
    objList = this->fields.objList;
    if ( v17 <= v16 )
      break;
    if ( objList )
    {
      if ( objList->fields._size <= v16 )
      {
        BattleServantShowBuffComponent__CreateBuffObj(this, v16, v14);
      }
      else
      {
        updated = (System_Collections_Generic_List_object__o *)BattleServantShowBuffComponent__UpdateBuff(
                                                                 this,
                                                                 v16,
                                                                 v14);
        if ( ((unsigned __int8)updated & 1) == 0 )
          BattleServantShowBuffComponent__NewBuff(this, v16, v14);
      }
      datalist = *p_datalist;
      ++v16;
      if ( *p_datalist )
        continue;
    }
    goto LABEL_32;
  }
  if ( !objList )
LABEL_32:
    sub_2213CDC(updated, v13);
  v19 = objList->fields._size - v17;
  while ( v16 < SLODWORD(datalist->max_length) && v19 >= 1 )
  {
    updated = (System_Collections_Generic_List_object__o *)this->fields.objList;
    if ( updated )
    {
      v20 = 0;
      while ( v20 < updated->fields._size )
      {
        updated = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 updated,
                                                                 v20,
                                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !updated )
          goto LABEL_32;
        updated = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 (UnityEngine_GameObject_o *)updated,
                                                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
        if ( !updated )
          goto LABEL_32;
        items = updated[2].fields._items;
        if ( items )
        {
          v22 = *p_datalist;
          if ( !*p_datalist )
            goto LABEL_32;
          if ( (unsigned int)v16 >= LODWORD(v22->max_length) )
            sub_2213CE4(updated);
          v23 = v22->m_Items[v16];
          if ( !v23 )
            goto LABEL_32;
          if ( HIDWORD(items->m_Items[0]) == v23->fields.addOrder )
          {
            BattleServantBuffIconComponent__setIcon_54741996((BattleServantBuffIconComponent_o *)updated, 0, 0);
            --v19;
            break;
          }
        }
        updated = (System_Collections_Generic_List_object__o *)this->fields.objList;
        ++v20;
        if ( !updated )
          goto LABEL_32;
      }
      datalist = *p_datalist;
      ++v16;
      if ( *p_datalist )
        continue;
    }
    goto LABEL_32;
  }
}


void BattleServantShowBuffComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597426A & 1) == 0 )
  {
    sub_2213A60(&BattleServantShowBuffComponent___c_TypeInfo);
    byte_597426A = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleServantShowBuffComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleServantShowBuffComponent___c_TypeInfo->static_fields->__9 = (struct BattleServantShowBuffComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleServantShowBuffComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleServantShowBuffComponent___c___ctor(BattleServantShowBuffComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleServantShowBuffComponent___c___UpdateShowConditionBuffDataReady_b__15_0(
        BattleServantShowBuffComponent___c_o *this,
        BattleBuffData_ShowBuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.addOrder;
}


void BattleServantShowBuffComponent___c__DisplayClass14_0___ctor(
        BattleServantShowBuffComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleServantShowBuffComponent___c__DisplayClass14_0___UpdateConditionBuffList_b__0(
        BattleServantShowBuffComponent___c__DisplayClass14_0_o *this,
        BattleBuffData_ShowBuffData_o *x,
        const MethodInfo *method)
{
  struct BattleBuffData_ShowBuffData_o *condBuff; // x8

  if ( !x || (condBuff = this->fields.condBuff) == 0 )
    sub_2213CDC(this, x);
  return x->fields.addOrder == condBuff->fields.addOrder;
}