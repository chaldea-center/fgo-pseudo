void BattleServantShowBuffComponent___ctor(BattleServantShowBuffComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CCABD6 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4CCABD6 = 1;
  }
  this->fields.maxLine = 2;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.objList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleServantShowBuffComponent__CreateBuffObj(
        BattleServantShowBuffComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Object; // x19
  const MethodInfo *v6; // x3
  BattleServantBuffIconComponent_o *Component_object; // x0
  __int64 v8; // x1
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v17; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v19; // x8

  if ( (byte_4CCABCF & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    byte_4CCABCF = 1;
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
  Component_object = (BattleServantBuffIconComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Object,
                                                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
  datalist = this->fields.datalist;
  if ( !datalist )
    goto LABEL_12;
  if ( LODWORD(datalist->max_length) <= index )
    sub_1C71610(Component_object);
  if ( !Component_object
    || (BattleServantBuffIconComponent__setIcon_47822156(Component_object, datalist->m_Items[index], 0),
        (Component_object = (BattleServantBuffIconComponent_o *)this->fields.objList) == 0)
    || (m_CachedPtr = Component_object->fields.m_CachedPtr,
        v17 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(Component_object->fields.m_CancellationTokenSource),
        !m_CachedPtr) )
  {
LABEL_12:
    sub_1C71608(Component_object, v8);
  }
  m_CancellationTokenSource_low = SLODWORD(Component_object->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      (Il2CppObject *)Object,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(Component_object->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v19 + 32) = Object;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 32), (int32_t)Object, v10, v11, v12, v13, v14, v15);
  }
}


void BattleServantShowBuffComponent__HideBuffObject(BattleServantShowBuffComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objList; // x0
  int32_t v4; // w20
  _DWORD *monitor; // x10
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  int max_length; // w9
  int v8; // w10
  unsigned int v9; // w11
  BattleBuffData_ShowBuffData_o *v10; // x12

  if ( (byte_4CCABD0 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_4CCABD0 = 1;
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
                                                             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !objList )
      goto LABEL_18;
    objList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                             (UnityEngine_GameObject_o *)objList,
                                                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    if ( !objList )
      goto LABEL_18;
    monitor = objList[2].monitor;
    if ( monitor )
    {
      datalist = this->fields.datalist;
      if ( !datalist )
        goto LABEL_18;
      max_length = datalist->max_length;
      if ( max_length >= 1 )
      {
        v8 = monitor[9];
        v9 = 0;
        while ( 1 )
        {
          if ( v9 >= max_length )
            sub_1C71610(objList);
          v10 = datalist->m_Items[v9];
          if ( !v10 )
            break;
          if ( v8 == v10->fields.addOrder )
            goto LABEL_17;
          if ( (int)++v9 >= max_length )
            goto LABEL_16;
        }
LABEL_18:
        sub_1C71608(objList, method);
      }
LABEL_16:
      BattleServantBuffIconComponent__setIcon_47822156((BattleServantBuffIconComponent_o *)objList, 0, 0);
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

  if ( (byte_4CCABD2 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_4CCABD2 = 1;
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
                                                             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !objList )
      goto LABEL_10;
    objList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                             (UnityEngine_GameObject_o *)objList,
                                                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    if ( !objList )
      goto LABEL_10;
    if ( !objList[2].monitor )
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
    sub_1C71610(objList);
  BattleServantBuffIconComponent__setIcon_47822156(
    (BattleServantBuffIconComponent_o *)objList,
    datalist->m_Items[index],
    0);
  objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
  if ( !objList )
LABEL_10:
    sub_1C71608(objList, *(_QWORD *)&index);
  Item = System_Collections_Generic_List_object___get_Item(
           objList,
           v6,
           (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  BattleServantShowBuffComponent__UpdatePosition(this, (UnityEngine_GameObject_o *)Item, index, v9);
}


// local variable allocation has failed, the output may be wrong!
void BattleServantShowBuffComponent__UpdateActiveBuffList(
        BattleServantShowBuffComponent_o *this,
        bool isPlayFlashEffect,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objList; // x0
  int32_t v6; // w20
  bool v7; // w21

  if ( (byte_4CCABD3 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_4CCABD3 = 1;
  }
  objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
  if ( !objList )
LABEL_11:
    sub_1C71608(objList, isPlayFlashEffect);
  v6 = 0;
  v7 = isPlayFlashEffect;
  while ( v6 < objList->fields._size )
  {
    objList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             objList,
                                                             v6,
                                                             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( objList )
    {
      objList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                               (UnityEngine_GameObject_o *)objList,
                                                               (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
      if ( objList )
      {
        if ( objList[2].monitor )
          BattleServantBuffIconComponent__UpdateActiveBuff((BattleServantBuffIconComponent_o *)objList, v7, 0);
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
  _DWORD *monitor; // x8
  struct BattleBuffData_ShowBuffData_array *datalist; // x9
  Il2CppObject *Item; // x0
  const MethodInfo *v11; // x3

  v3 = index;
  if ( (byte_4CCABD1 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_4CCABD1 = 1;
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
                                                             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !objList )
      goto LABEL_14;
    objList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                             (UnityEngine_GameObject_o *)objList,
                                                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    if ( !objList )
      goto LABEL_14;
    monitor = objList[2].monitor;
    if ( monitor )
    {
      datalist = this->fields.datalist;
      if ( !datalist )
        goto LABEL_14;
      if ( LODWORD(datalist->max_length) <= v3 )
        sub_1C71610(objList);
      *(_QWORD *)&index = datalist->m_Items[v3];
      if ( !*(_QWORD *)&index )
        goto LABEL_14;
      if ( *(_DWORD *)(*(_QWORD *)&index + 36LL) == monitor[9] )
        break;
    }
    objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
    ++v6;
    if ( !objList )
      goto LABEL_14;
  }
  BattleServantBuffIconComponent__setIcon_47822156(
    (BattleServantBuffIconComponent_o *)objList,
    *(BattleBuffData_ShowBuffData_o **)&index,
    0);
  objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
  if ( !objList )
LABEL_14:
    sub_1C71608(objList, *(_QWORD *)&index);
  Item = System_Collections_Generic_List_object___get_Item(
           objList,
           v6,
           (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  BattleBuffData_ShowBuffData_o *v14; // x1
  __int64 v15; // x23
  System_Collections_Generic_IEnumerable_TSource__o *datalist; // x24
  System_Func_object__bool__o *v17; // x25

  v5 = this;
  if ( (byte_4CCABD4 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_BattleBuffData_ShowBuffData___);
    sub_1C713B0(&System_Func_BattleBuffData_ShowBuffData__bool__TypeInfo);
    sub_1C713B0(&Method_BattleServantShowBuffComponent___c__DisplayClass14_0__UpdateConditionBuffList_b__0__);
    this = (BattleServantShowBuffComponent_o *)sub_1C713B0(&BattleServantShowBuffComponent___c__DisplayClass14_0_TypeInfo);
    byte_4CCABD4 = 1;
  }
  if ( !conditionBuffList )
    goto LABEL_13;
  if ( SLODWORD(conditionBuffList->max_length) >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = sub_1C715FC(BattleServantShowBuffComponent___c__DisplayClass14_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v7, 0);
      if ( v6 >= LODWORD(conditionBuffList->max_length) )
        sub_1C71610(this);
      if ( !v7 )
        break;
      v14 = conditionBuffList->m_Items[v6];
      *(_QWORD *)(v7 + 16) = v14;
      v15 = v7 + 16;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)v14, v8, v9, v10, v11, v12, v13);
      datalist = (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.datalist;
      v17 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleBuffData_ShowBuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v17,
        (Il2CppObject *)v7,
        Method_BattleServantShowBuffComponent___c__DisplayClass14_0__UpdateConditionBuffList_b__0__,
        0);
      this = (BattleServantShowBuffComponent_o *)System_Linq_Enumerable__FirstOrDefault_object__51858576(
                                                   datalist,
                                                   (System_Func_TSource__bool__o *)v17,
                                                   (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleBuffData_ShowBuffData___);
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
    sub_1C71608(this, conditionBuffList);
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
  int32_t maxCount; // w21
  int32_t maxLine; // w22
  BattleServantShowBuffComponent_o *v6; // x20
  int v8; // w8
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( !obj
    || (maxCount = this->fields.maxCount,
        maxLine = this->fields.maxLine,
        v6 = this,
        (this = (BattleServantShowBuffComponent_o *)UnityEngine_GameObject__get_transform(obj, 0)) == 0) )
  {
    sub_1C71608(this, obj);
  }
  v8 = index / maxCount;
  if ( index / maxCount > maxLine )
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
  System_Func_object__int__o *_9__15_0; // x21
  Il2CppObject *v7; // x22
  struct BattleServantShowBuffComponent___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_Dictionary_int__object__o *Item; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *objList; // x8
  System_Collections_Generic_Dictionary_int__object__o *v18; // x20
  int32_t v19; // w21
  intptr_t monitor; // x8
  BattleServantBuffIconComponent_o *v21; // x22
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CCABD5 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_ShowBuffData__TryGetValue__);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToDictionary_BattleBuffData_ShowBuffData__int___);
    sub_1C713B0(&System_Func_BattleBuffData_ShowBuffData__int__TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C713B0(&Method_BattleServantShowBuffComponent___c__UpdateShowConditionBuffDataReady_b__15_0__);
    sub_1C713B0(&BattleServantShowBuffComponent___c_TypeInfo);
    byte_4CCABD5 = 1;
  }
  v5 = BattleServantShowBuffComponent___c_TypeInfo;
  value = 0;
  if ( !BattleServantShowBuffComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantShowBuffComponent___c_TypeInfo);
    v5 = BattleServantShowBuffComponent___c_TypeInfo;
  }
  _9__15_0 = (System_Func_object__int__o *)v5->static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BattleServantShowBuffComponent___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__15_0 = (System_Func_object__int__o *)sub_1C715FC(System_Func_BattleBuffData_ShowBuffData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__15_0,
      v7,
      Method_BattleServantShowBuffComponent___c__UpdateShowConditionBuffDataReady_b__15_0__,
      0);
    static_fields = BattleServantShowBuffComponent___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Func_BattleBuffData_ShowBuffData__int__o *)_9__15_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__15_0,
      (int32_t)_9__15_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Linq_Enumerable__ToDictionary_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)showConditionBuffArray,
                                                                   (System_Func_TSource__TKey__o *)_9__15_0,
                                                                   (const MethodInfo_318B4B8 *)Method_System_Linq_Enumerable_ToDictionary_BattleBuffData_ShowBuffData__int___);
  objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
  if ( !objList )
LABEL_19:
    sub_1C71608(Item, v16);
  v18 = Item;
  v19 = 0;
  while ( v19 < objList->fields._size )
  {
    Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     objList,
                                                                     v19,
                                                                     (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( Item )
    {
      Item = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)Item,
                                                                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
      if ( Item )
      {
        monitor = (intptr_t)Item[1].monitor;
        v21 = (BattleServantBuffIconComponent_o *)Item;
        if ( monitor )
        {
          if ( !v18 )
            goto LABEL_19;
          Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                           v18,
                                                                           *(_DWORD *)(monitor + 36),
                                                                           &value,
                                                                           (const MethodInfo_3463A20 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_ShowBuffData__TryGetValue__);
          if ( ((unsigned __int8)Item & 1) != 0 )
            BattleServantBuffIconComponent__UpdateShowBuffDataReady(v21, (BattleBuffData_ShowBuffData_o *)value, 0);
        }
        objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
        ++v19;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct BattleBuffData_ShowBuffData_array **p_datalist; // x20
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_object__o *updated; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  int32_t v16; // w21
  il2cpp_array_size_t max_length; // x8
  struct System_Collections_Generic_List_GameObject__o *objList; // x9
  int32_t size; // w9
  int v20; // w10
  int v21; // w23
  int32_t v22; // w22
  _DWORD *monitor; // x8
  struct BattleBuffData_ShowBuffData_array *v24; // x9
  BattleBuffData_ShowBuffData_o *v25; // x9

  if ( (byte_4CCABCE & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_4CCABCE = 1;
  }
  this->fields.datalist = buffList;
  p_datalist = &this->fields.datalist;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.datalist,
    (int32_t)buffList,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattleServantShowBuffComponent__HideBuffObject(this, v11);
  datalist = this->fields.datalist;
  if ( !datalist )
    goto LABEL_13;
  v16 = 0;
  while ( 1 )
  {
    max_length = datalist->max_length;
    if ( v16 >= (int)max_length )
      return;
    objList = this->fields.objList;
    if ( !objList )
      goto LABEL_13;
    size = objList->fields._size;
    v20 = this->fields.maxLine * this->fields.maxCount;
    if ( v20 <= v16 )
      break;
    if ( size <= v16 )
    {
      BattleServantShowBuffComponent__CreateBuffObj(this, v16, v14);
    }
    else
    {
      updated = (System_Collections_Generic_List_object__o *)BattleServantShowBuffComponent__UpdateBuff(this, v16, v14);
      if ( ((unsigned __int8)updated & 1) == 0 )
        BattleServantShowBuffComponent__NewBuff(this, v16, v14);
    }
    datalist = *p_datalist;
    ++v16;
    if ( !*p_datalist )
      goto LABEL_13;
  }
  v21 = size - v20;
  if ( size - v20 >= 1 && v16 < (int)max_length )
  {
    while ( 1 )
    {
      updated = (System_Collections_Generic_List_object__o *)this->fields.objList;
      if ( !updated )
        break;
      v22 = 0;
      while ( v22 < updated->fields._size )
      {
        updated = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 updated,
                                                                 v22,
                                                                 (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !updated )
          goto LABEL_13;
        updated = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 (UnityEngine_GameObject_o *)updated,
                                                                 (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
        if ( !updated )
          goto LABEL_13;
        monitor = updated[2].monitor;
        if ( monitor )
        {
          v24 = *p_datalist;
          if ( !*p_datalist )
            goto LABEL_13;
          if ( (unsigned int)v16 >= LODWORD(v24->max_length) )
            sub_1C71610(updated);
          v25 = v24->m_Items[v16];
          if ( !v25 )
            goto LABEL_13;
          if ( monitor[9] == v25->fields.addOrder )
          {
            BattleServantBuffIconComponent__setIcon_47822156((BattleServantBuffIconComponent_o *)updated, 0, 0);
            --v21;
            break;
          }
        }
        updated = (System_Collections_Generic_List_object__o *)this->fields.objList;
        ++v22;
        if ( !updated )
          goto LABEL_13;
      }
      if ( !*p_datalist )
        break;
      if ( v21 >= 1 && ++v16 < SLODWORD((*p_datalist)->max_length) )
        continue;
      return;
    }
LABEL_13:
    sub_1C71608(updated, v13);
  }
}


void BattleServantShowBuffComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CCABD7 & 1) == 0 )
  {
    sub_1C713B0(&BattleServantShowBuffComponent___c_TypeInfo);
    byte_4CCABD7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(BattleServantShowBuffComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleServantShowBuffComponent___c_TypeInfo->static_fields->__9 = (struct BattleServantShowBuffComponent___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)BattleServantShowBuffComponent___c_TypeInfo->static_fields,
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
    sub_1C71608(this, 0);
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
    sub_1C71608(this, x);
  return x->fields.addOrder == condBuff->fields.addOrder;
}