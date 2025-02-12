void __fastcall BattleServantShowBuffComponent___ctor(BattleServantShowBuffComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BCAC9D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1C1ABD4(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_4BCAC9D = 1;
  }
  this->fields.maxLine = 2;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.objList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantShowBuffComponent__CreateBuffObj(
        BattleServantShowBuffComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *Object; // x19
  const MethodInfo *v7; // x3
  BattleServantBuffIconComponent_o *Component_object; // x0
  __int64 v9; // x1
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v20; // x8

  if ( (byte_4BCAC98 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, *(_QWORD *)&index);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__Add__, v5);
    byte_4BCAC98 = 1;
  }
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             this->fields.IconClone,
             this->fields.listTr,
             0LL,
             0LL);
  BattleServantShowBuffComponent__UpdatePosition(this, Object, index, v7);
  if ( !Object )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(Object, 1, 0LL);
  Component_object = (BattleServantBuffIconComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Object,
                                                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
  datalist = this->fields.datalist;
  if ( !datalist )
    goto LABEL_12;
  if ( datalist->max_length <= index )
    sub_1C1AE38(Component_object, v9);
  if ( !Component_object
    || (BattleServantBuffIconComponent__setIcon_45280392(Component_object, datalist->m_Items[index], 0LL),
        (Component_object = (BattleServantBuffIconComponent_o *)this->fields.objList) == 0LL)
    || (v17 = *(_QWORD *)&Component_object->fields.m_CachedPtr,
        v18 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(Component_object->fields.m_CancellationTokenSource),
        !v17) )
  {
LABEL_12:
    sub_1C1AE30(Component_object, v9);
  }
  m_CancellationTokenSource_low = SLODWORD(Component_object->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v17 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      (Il2CppObject *)Object,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = v17 + 8 * m_CancellationTokenSource_low;
    LODWORD(Component_object->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v20 + 32) = Object;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v20 + 32), (int64_t)Object, v11, v12, v13, v14, v15, v16);
  }
}


void __fastcall BattleServantShowBuffComponent__HideBuffObject(
        BattleServantShowBuffComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *objList; // x0
  int32_t v6; // w20
  _DWORD *monitor; // x10
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  int max_length; // w9
  int v10; // w10
  unsigned int v11; // w11
  BattleBuffData_ShowBuffData_o *v12; // x12

  if ( (byte_4BCAC99 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    byte_4BCAC99 = 1;
  }
  objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
  if ( !objList )
    goto LABEL_18;
  v6 = 0;
  while ( v6 < objList->fields._size )
  {
    objList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             objList,
                                                             v6,
                                                             (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !objList )
      goto LABEL_18;
    objList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                             (UnityEngine_GameObject_o *)objList,
                                                             (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
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
        v10 = monitor[9];
        v11 = 0;
        while ( 1 )
        {
          if ( v11 >= max_length )
            sub_1C1AE38(objList, method);
          v12 = datalist->m_Items[v11];
          if ( !v12 )
            break;
          if ( v10 == v12->fields.addOrder )
            goto LABEL_17;
          if ( (int)++v11 >= max_length )
            goto LABEL_16;
        }
LABEL_18:
        sub_1C1AE30(objList, method);
      }
LABEL_16:
      BattleServantBuffIconComponent__setIcon_45280392((BattleServantBuffIconComponent_o *)objList, 0LL, 0LL);
    }
LABEL_17:
    objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
    ++v6;
    if ( !objList )
      goto LABEL_18;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantShowBuffComponent__NewBuff(
        BattleServantShowBuffComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *objList; // x0
  int32_t v8; // w21
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  Il2CppObject *Item; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4BCAC9B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, *(_QWORD *)&index);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    byte_4BCAC9B = 1;
  }
  objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
  if ( !objList )
    goto LABEL_10;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= objList->fields._size )
    {
      BattleServantShowBuffComponent__CreateBuffObj(this, index, method);
      return;
    }
    objList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             objList,
                                                             v8,
                                                             (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !objList )
      goto LABEL_10;
    objList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                             (UnityEngine_GameObject_o *)objList,
                                                             (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    if ( !objList )
      goto LABEL_10;
    if ( !objList[2].monitor )
      break;
    objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
    ++v8;
    if ( !objList )
      goto LABEL_10;
  }
  datalist = this->fields.datalist;
  if ( !datalist )
    goto LABEL_10;
  if ( datalist->max_length <= index )
    sub_1C1AE38(objList, *(_QWORD *)&index);
  BattleServantBuffIconComponent__setIcon_45280392(
    (BattleServantBuffIconComponent_o *)objList,
    datalist->m_Items[index],
    0LL);
  objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
  if ( !objList )
LABEL_10:
    sub_1C1AE30(objList, *(_QWORD *)&index);
  Item = System_Collections_Generic_List_object___get_Item(
           objList,
           v8,
           (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  BattleServantShowBuffComponent__UpdatePosition(this, (UnityEngine_GameObject_o *)Item, index, v11);
}


void __fastcall BattleServantShowBuffComponent__UpdateActiveBuffList(
        BattleServantShowBuffComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *objList; // x0
  int32_t v6; // w20

  if ( (byte_4BCAC9C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    byte_4BCAC9C = 1;
  }
  objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
  if ( !objList )
LABEL_11:
    sub_1C1AE30(objList, method);
  v6 = 0;
  while ( v6 < objList->fields._size )
  {
    objList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             objList,
                                                             v6,
                                                             (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( objList )
    {
      objList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                               (UnityEngine_GameObject_o *)objList,
                                                               (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
      if ( objList )
      {
        if ( objList[2].monitor )
          BattleServantBuffIconComponent__UpdateActiveBuff((BattleServantBuffIconComponent_o *)objList, 0LL);
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
bool __fastcall BattleServantShowBuffComponent__UpdateBuff(
        BattleServantShowBuffComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *objList; // x0
  int32_t v8; // w21
  int32_t size; // w23
  _DWORD *monitor; // x8
  struct BattleBuffData_ShowBuffData_array *datalist; // x9
  Il2CppObject *Item; // x0
  const MethodInfo *v13; // x3

  v3 = index;
  if ( (byte_4BCAC9A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, *(_QWORD *)&index);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    byte_4BCAC9A = 1;
  }
  objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
  if ( !objList )
    goto LABEL_14;
  v8 = 0;
  while ( 1 )
  {
    size = objList->fields._size;
    if ( v8 >= size )
      return v8 < size;
    objList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             objList,
                                                             v8,
                                                             (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !objList )
      goto LABEL_14;
    objList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                             (UnityEngine_GameObject_o *)objList,
                                                             (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    if ( !objList )
      goto LABEL_14;
    monitor = objList[2].monitor;
    if ( monitor )
    {
      datalist = this->fields.datalist;
      if ( !datalist )
        goto LABEL_14;
      if ( datalist->max_length <= v3 )
        sub_1C1AE38(objList, *(_QWORD *)&index);
      *(_QWORD *)&index = datalist->m_Items[v3];
      if ( !*(_QWORD *)&index )
        goto LABEL_14;
      if ( *(_DWORD *)(*(_QWORD *)&index + 36LL) == monitor[9] )
        break;
    }
    objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
    ++v8;
    if ( !objList )
      goto LABEL_14;
  }
  BattleServantBuffIconComponent__setIcon_45280392(
    (BattleServantBuffIconComponent_o *)objList,
    *(BattleBuffData_ShowBuffData_o **)&index,
    0LL);
  objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
  if ( !objList )
LABEL_14:
    sub_1C1AE30(objList, *(_QWORD *)&index);
  Item = System_Collections_Generic_List_object___get_Item(
           objList,
           v8,
           (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  BattleServantShowBuffComponent__UpdatePosition(this, (UnityEngine_GameObject_o *)Item, v3, v13);
  return v8 < size;
}


void __fastcall BattleServantShowBuffComponent__UpdatePosition(
        BattleServantShowBuffComponent_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t index,
        const MethodInfo *method)
{
  int32_t maxCount; // w21
  int maxLine; // w22
  BattleServantShowBuffComponent_o *v6; // x20
  int v8; // w8
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( !obj
    || (maxCount = this->fields.maxCount,
        maxLine = this->fields.maxLine,
        v6 = this,
        (this = (BattleServantShowBuffComponent_o *)UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL) )
  {
    sub_1C1AE30(this, obj);
  }
  v8 = index / maxCount;
  if ( index / maxCount > maxLine )
    v8 = maxLine;
  v9.fields.y = v6->fields.addPos.fields.y * (float)v8;
  v9.fields.x = v6->fields.addPos.fields.x * (float)(index % maxCount);
  v9.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v9, 0LL);
}


void __fastcall BattleServantShowBuffComponent__setBuffList(
        BattleServantShowBuffComponent_o *this,
        BattleBuffData_ShowBuffData_array *buffList,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  struct BattleBuffData_ShowBuffData_array **p_datalist; // x20
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_object__o *updated; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  int32_t v18; // w21
  __int64 v19; // x8
  struct System_Collections_Generic_List_GameObject__o *objList; // x9
  int32_t size; // w9
  int v22; // w10
  int v23; // w23
  int32_t v24; // w22
  _DWORD *monitor; // x8
  struct BattleBuffData_ShowBuffData_array *v26; // x9
  BattleBuffData_ShowBuffData_o *v27; // x9

  if ( (byte_4BCAC97 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, buffList);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11);
    byte_4BCAC97 = 1;
  }
  this->fields.datalist = buffList;
  p_datalist = &this->fields.datalist;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.datalist,
    (int64_t)buffList,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattleServantShowBuffComponent__HideBuffObject(this, v13);
  datalist = this->fields.datalist;
  if ( !datalist )
    goto LABEL_13;
  v18 = 0;
  while ( 1 )
  {
    v19 = *(_QWORD *)&datalist->max_length;
    if ( v18 >= (int)v19 )
      return;
    objList = this->fields.objList;
    if ( !objList )
      goto LABEL_13;
    size = objList->fields._size;
    v22 = this->fields.maxLine * this->fields.maxCount;
    if ( v22 <= v18 )
      break;
    if ( size <= v18 )
    {
      BattleServantShowBuffComponent__CreateBuffObj(this, v18, v16);
    }
    else
    {
      updated = (System_Collections_Generic_List_object__o *)BattleServantShowBuffComponent__UpdateBuff(this, v18, v16);
      if ( ((unsigned __int8)updated & 1) == 0 )
        BattleServantShowBuffComponent__NewBuff(this, v18, v16);
    }
    datalist = *p_datalist;
    ++v18;
    if ( !*p_datalist )
      goto LABEL_13;
  }
  v23 = size - v22;
  if ( size - v22 >= 1 && v18 < (int)v19 )
  {
    while ( 1 )
    {
      updated = (System_Collections_Generic_List_object__o *)this->fields.objList;
      if ( !updated )
        break;
      v24 = 0;
      while ( v24 < updated->fields._size )
      {
        updated = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 updated,
                                                                 v24,
                                                                 (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !updated )
          goto LABEL_13;
        updated = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 (UnityEngine_GameObject_o *)updated,
                                                                 (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
        if ( !updated )
          goto LABEL_13;
        monitor = updated[2].monitor;
        if ( monitor )
        {
          v26 = *p_datalist;
          if ( !*p_datalist )
            goto LABEL_13;
          if ( v18 >= v26->max_length )
            sub_1C1AE38(updated, v15);
          v27 = v26->m_Items[v18];
          if ( !v27 )
            goto LABEL_13;
          if ( monitor[9] == v27->fields.addOrder )
          {
            BattleServantBuffIconComponent__setIcon_45280392((BattleServantBuffIconComponent_o *)updated, 0LL, 0LL);
            --v23;
            break;
          }
        }
        updated = (System_Collections_Generic_List_object__o *)this->fields.objList;
        ++v24;
        if ( !updated )
          goto LABEL_13;
      }
      if ( !*p_datalist )
        break;
      if ( v23 >= 1 && ++v18 < (signed int)(*p_datalist)->max_length )
        continue;
      return;
    }
LABEL_13:
    sub_1C1AE30(updated, v15);
  }
}